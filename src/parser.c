#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 201
#define SYMBOL_COUNT 117
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
  sym_verbatim_env_name = 8,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 9,
  anon_sym_begin = 10,
  anon_sym_end = 11,
  anon_sym_documentclass = 12,
  anon_sym_usepackage = 13,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 14,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 15,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 16,
  anon_sym_EQ = 17,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 18,
  anon_sym_emph = 19,
  anon_sym_makeatletter = 20,
  anon_sym_makeatother = 21,
  sym__escape = 22,
  sym_begin_group = 23,
  sym_end_group = 24,
  sym_math_shift = 25,
  sym_alignment_tab = 26,
  sym__end_of_line = 27,
  sym_parameter_char = 28,
  sym_superscript = 29,
  sym_subscript = 30,
  sym__name = 31,
  sym__at_name = 32,
  sym_active_char = 33,
  sym_comment_char = 34,
  sym_text = 35,
  sym_number = 36,
  sym__verbatim_token = 37,
  sym_magic_text = 38,
  sym_comment_text = 39,
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
  sym_verbatim_env_group = 73,
  sym_escaped = 74,
  sym_command = 75,
  sym_at_command = 76,
  sym_begin = 77,
  sym_begin_token = 78,
  sym_end = 79,
  sym_end_token = 80,
  sym_documentclass = 81,
  sym_documentclass_token = 82,
  sym_usepackage = 83,
  sym_usepackage_token = 84,
  sym_include = 85,
  sym_include_token = 86,
  sym_section = 87,
  sym_section_token = 88,
  sym_storage = 89,
  sym_storage_token = 90,
  sym_catcode = 91,
  sym_catcode_token = 92,
  sym_emph = 93,
  sym_emph_token = 94,
  sym_makeatletter = 95,
  sym_makeatletter_token = 96,
  sym_makeatother = 97,
  sym_makeatother_token = 98,
  sym_text_group = 99,
  sym_at_text_group = 100,
  sym_simple_text_group = 101,
  sym_opt_text_group = 102,
  sym_opt_at_text_group = 103,
  sym_math_group = 104,
  sym_opt_math_group = 105,
  sym_math_text_group = 106,
  sym_token = 107,
  sym_at_token = 108,
  sym_comment = 109,
  sym_verbatim_text = 110,
  sym_begin_opt = 111,
  sym_end_opt = 112,
  aux_sym_text_mode_repeat1 = 113,
  aux_sym_at_group_repeat1 = 114,
  aux_sym_math_mode_repeat1 = 115,
  aux_sym_verbatim_text_repeat1 = 116,
  anon_alias_sym_class_name = 117,
  anon_alias_sym_env_name = 118,
  anon_alias_sym_package_name = 119,
  anon_alias_sym_text = 120,
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
  [sym_magic_text] = "magic_text",
  [sym_comment_text] = "comment_text",
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
  [sym_magic_text] = {
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
        ADVANCE(6);
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      if (lookahead == '@')
        ADVANCE(10);
      if (lookahead == 'V')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == ']')
        ADVANCE(24);
      if (lookahead == '^')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(27);
      if (lookahead == 'b')
        ADVANCE(46);
      if (lookahead == 'c')
        ADVANCE(51);
      if (lookahead == 'd')
        ADVANCE(64);
      if (lookahead == 'e')
        ADVANCE(105);
      if (lookahead == 'f')
        ADVANCE(119);
      if (lookahead == 'g')
        ADVANCE(124);
      if (lookahead == 'i')
        ADVANCE(129);
      if (lookahead == 'k')
        ADVANCE(138);
      if (lookahead == 'l')
        ADVANCE(140);
      if (lookahead == 'm')
        ADVANCE(150);
      if (lookahead == 'p')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(189);
      if (lookahead == 't')
        ADVANCE(206);
      if (lookahead == 'u')
        ADVANCE(209);
      if (lookahead == 'v')
        ADVANCE(219);
      if (lookahead == 'x')
        ADVANCE(226);
      if (lookahead == '{')
        ADVANCE(227);
      if (lookahead == '}')
        ADVANCE(228);
      if (lookahead == '~')
        ADVANCE(229);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(234);
      ADVANCE(235);
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
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__at_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'm')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(20);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(28);
      if (lookahead == 'l')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(30);
      if (lookahead == 'p')
        ADVANCE(34);
      if (lookahead == 's')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(43);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_display_math_env_name);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(43);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_begin);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(52);
      if (lookahead == 'h')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == '`')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(65);
      if (lookahead == 'e')
        ADVANCE(69);
      if (lookahead == 'g')
        ADVANCE(71);
      if (lookahead == 'i')
        ADVANCE(75);
      if (lookahead == 'm')
        ADVANCE(85);
      if (lookahead == 'o')
        ADVANCE(88);
      if (lookahead == 's')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'y')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'f')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'y')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'm')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'm')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(106);
      if (lookahead == 'm')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 'q')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_emph);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(113);
      if (lookahead == 'u')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(125);
      if (lookahead == 'd')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(131);
      if (lookahead == 'p')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(151);
      if (lookahead == 'i')
        ADVANCE(169);
      if (lookahead == 'u')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'k')
        ADVANCE(152);
      if (lookahead == 't')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(156);
      if (lookahead == 'o')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(171);
      if (lookahead == 't')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(184);
      if (lookahead == 't')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == 'p')
        ADVANCE(195);
      if (lookahead == 'u')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(199);
      if (lookahead == 's')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(190);
      if (lookahead == 'u')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'k')
        ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'm')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'V')
        ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 236:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(227);
      if (lookahead == '~')
        ADVANCE(229);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 238:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == ']')
        ADVANCE(24);
      if (lookahead == '^')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(227);
      if (lookahead == '~')
        ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 239:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(285);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'k')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(301);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead == 'u')
        ADVANCE(339);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(243);
      if (lookahead == 'p')
        ADVANCE(248);
      if (lookahead == 's')
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(259);
      if (lookahead == 'h')
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(271);
      if (lookahead == 'o')
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'm')
        ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(292);
      if (lookahead == 'p')
        ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'i')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(319);
      if (lookahead == 't')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead == 'u')
        ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(332);
      if (lookahead == 's')
        ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(325);
      if (lookahead == 'u')
        ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 351:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == '^')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(227);
      if (lookahead == '}')
        ADVANCE(228);
      if (lookahead == '~')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(237);
      END_STATE();
    case 352:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      END_STATE();
    case 353:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(23);
      if (lookahead == ']')
        ADVANCE(24);
      if (lookahead == '^')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(227);
      if (lookahead == '}')
        ADVANCE(228);
      if (lookahead == '~')
        ADVANCE(229);
      ADVANCE(237);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(355);
      if (lookahead == '!')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(368);
      END_STATE();
    case 355:
      if (lookahead == '!')
        ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(355);
      END_STATE();
    case 356:
      if (lookahead == 'T')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(358);
      END_STATE();
    case 358:
      if (lookahead == 'X')
        ADVANCE(359);
      END_STATE();
    case 359:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(361);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(368);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead == '\n')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(355);
      if (lookahead == '!')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(368);
      END_STATE();
    case 370:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 371:
      if (lookahead == '\n')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__verbatim_token);
      END_STATE();
    case 373:
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(285);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'k')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(374);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead == 't')
        ADVANCE(375);
      if (lookahead == 'u')
        ADVANCE(339);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 378:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 379:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'k')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(301);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead == 'u')
        ADVANCE(339);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(286);
      if (lookahead == 'm')
        ADVANCE(287);
      if (lookahead == 'n')
        ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 383:
      if (lookahead == 'V')
        ADVANCE(384);
      if (lookahead == 'a')
        ADVANCE(393);
      if (lookahead == 'd')
        ADVANCE(401);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'f')
        ADVANCE(435);
      if (lookahead == 'g')
        ADVANCE(440);
      if (lookahead == 'l')
        ADVANCE(445);
      if (lookahead == 'm')
        ADVANCE(454);
      if (lookahead == 's')
        ADVANCE(469);
      if (lookahead == 'v')
        ADVANCE(472);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead == 'a')
        ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(402);
      if (lookahead == 'g')
        ADVANCE(406);
      if (lookahead == 'i')
        ADVANCE(410);
      if (lookahead == 'm')
        ADVANCE(419);
      if (lookahead == 's')
        ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
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
        ADVANCE(237);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
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
        ADVANCE(237);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(429);
      if (lookahead == 'u')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
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
        ADVANCE(237);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(455);
      if (lookahead == 'i')
        ADVANCE(458);
      if (lookahead == 'u')
        ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(237);
      END_STATE();
    case 480:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(227);
      END_STATE();
    case 481:
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 482:
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 483:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(484);
      if (lookahead == 'b')
        ADVANCE(496);
      if (lookahead == 'c')
        ADVANCE(501);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == 'e')
        ADVANCE(528);
      if (lookahead == 'i')
        ADVANCE(533);
      if (lookahead == 'k')
        ADVANCE(542);
      if (lookahead == 'm')
        ADVANCE(544);
      if (lookahead == 'p')
        ADVANCE(558);
      if (lookahead == 's')
        ADVANCE(566);
      if (lookahead == 'u')
        ADVANCE(581);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(591);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(485);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(487);
      if (lookahead == 'p')
        ADVANCE(491);
      if (lookahead == 's')
        ADVANCE(494);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(488);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(489);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(492);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(493);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(495);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(497);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(498);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(499);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(500);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(502);
      if (lookahead == 'h')
        ADVANCE(508);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(503);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(504);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(505);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(506);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(507);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(58);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(509);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(511);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(512);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(514);
      if (lookahead == 'o')
        ADVANCE(516);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(515);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(517);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(518);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(519);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(520);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(521);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(522);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(523);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(524);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(525);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(526);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(527);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(529);
      if (lookahead == 'm')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(514);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(531);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(532);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_emph);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(534);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(535);
      if (lookahead == 'p')
        ADVANCE(540);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(536);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(537);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(538);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(539);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(541);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(539);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(543);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(502);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(545);
      if (lookahead == 'i')
        ADVANCE(555);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(546);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(547);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(548);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(549);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(550);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(551);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(552);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(553);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(554);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(556);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(557);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(494);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(559);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(560);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(561);
      if (lookahead == 't')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(562);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(563);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(564);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(565);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(567);
      if (lookahead == 'u')
        ADVANCE(572);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(568);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(569);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(570);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(571);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(573);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(574);
      if (lookahead == 's')
        ADVANCE(577);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(575);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(576);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(561);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(567);
      if (lookahead == 'u')
        ADVANCE(578);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(579);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(580);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(567);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(582);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(583);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(584);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(586);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(587);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(588);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(589);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(590);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(529);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 592:
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(380);
      if (lookahead == 'i')
        ADVANCE(290);
      if (lookahead == 'k')
        ADVANCE(299);
      if (lookahead == 'm')
        ADVANCE(374);
      if (lookahead == 'p')
        ADVANCE(316);
      if (lookahead == 's')
        ADVANCE(324);
      if (lookahead == 't')
        ADVANCE(375);
      if (lookahead == 'u')
        ADVANCE(339);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 593:
      if (lookahead == ')')
        ADVANCE(8);
      END_STATE();
    case 594:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(484);
      if (lookahead == 'b')
        ADVANCE(496);
      if (lookahead == 'c')
        ADVANCE(501);
      if (lookahead == 'd')
        ADVANCE(513);
      if (lookahead == 'e')
        ADVANCE(528);
      if (lookahead == 'i')
        ADVANCE(533);
      if (lookahead == 'k')
        ADVANCE(542);
      if (lookahead == 'm')
        ADVANCE(595);
      if (lookahead == 'p')
        ADVANCE(558);
      if (lookahead == 's')
        ADVANCE(566);
      if (lookahead == 'u')
        ADVANCE(581);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(591);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(235);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(555);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 236},
  [2] = {.lex_state = 238},
  [3] = {.lex_state = 239},
  [4] = {.lex_state = 351},
  [5] = {.lex_state = 236},
  [6] = {.lex_state = 352},
  [7] = {.lex_state = 353},
  [8] = {.lex_state = 354},
  [9] = {.lex_state = 370},
  [10] = {.lex_state = 370},
  [11] = {.lex_state = 236},
  [12] = {.lex_state = 236},
  [13] = {.lex_state = 236},
  [14] = {.lex_state = 236},
  [15] = {.lex_state = 371},
  [16] = {.lex_state = 236},
  [17] = {.lex_state = 236},
  [18] = {.lex_state = 353},
  [19] = {.lex_state = 236},
  [20] = {.lex_state = 236},
  [21] = {.lex_state = 236},
  [22] = {.lex_state = 236},
  [23] = {.lex_state = 353},
  [24] = {.lex_state = 236},
  [25] = {.lex_state = 236},
  [26] = {.lex_state = 236},
  [27] = {.lex_state = 236},
  [28] = {.lex_state = 238},
  [29] = {.lex_state = 236},
  [30] = {.lex_state = 236},
  [31] = {.lex_state = 236},
  [32] = {.lex_state = 353},
  [33] = {.lex_state = 236},
  [34] = {.lex_state = 236},
  [35] = {.lex_state = 236},
  [36] = {.lex_state = 236},
  [37] = {.lex_state = 236},
  [38] = {.lex_state = 353},
  [39] = {.lex_state = 236},
  [40] = {.lex_state = 236},
  [41] = {.lex_state = 236},
  [42] = {.lex_state = 353},
  [43] = {.lex_state = 353},
  [44] = {.lex_state = 351},
  [45] = {.lex_state = 373},
  [46] = {.lex_state = 351},
  [47] = {.lex_state = 236},
  [48] = {.lex_state = 236},
  [49] = {.lex_state = 236},
  [50] = {.lex_state = 236},
  [51] = {.lex_state = 236},
  [52] = {.lex_state = 238},
  [53] = {.lex_state = 236},
  [54] = {.lex_state = 353},
  [55] = {.lex_state = 353},
  [56] = {.lex_state = 236},
  [57] = {.lex_state = 236},
  [58] = {.lex_state = 236},
  [59] = {.lex_state = 236},
  [60] = {.lex_state = 236},
  [61] = {.lex_state = 378},
  [62] = {.lex_state = 378},
  [63] = {.lex_state = 379},
  [64] = {.lex_state = 353},
  [65] = {.lex_state = 236},
  [66] = {.lex_state = 236},
  [67] = {.lex_state = 383},
  [68] = {.lex_state = 480},
  [69] = {.lex_state = 236},
  [70] = {.lex_state = 480},
  [71] = {.lex_state = 236},
  [72] = {.lex_state = 236},
  [73] = {.lex_state = 353},
  [74] = {.lex_state = 236},
  [75] = {.lex_state = 353},
  [76] = {.lex_state = 236},
  [77] = {.lex_state = 353},
  [78] = {.lex_state = 353},
  [79] = {.lex_state = 236},
  [80] = {.lex_state = 481},
  [81] = {.lex_state = 482},
  [82] = {.lex_state = 353},
  [83] = {.lex_state = 483},
  [84] = {.lex_state = 351},
  [85] = {.lex_state = 353},
  [86] = {.lex_state = 353},
  [87] = {.lex_state = 353},
  [88] = {.lex_state = 353},
  [89] = {.lex_state = 238},
  [90] = {.lex_state = 236},
  [91] = {.lex_state = 353},
  [92] = {.lex_state = 353},
  [93] = {.lex_state = 238},
  [94] = {.lex_state = 236},
  [95] = {.lex_state = 353},
  [96] = {.lex_state = 351},
  [97] = {.lex_state = 236},
  [98] = {.lex_state = 353},
  [99] = {.lex_state = 351},
  [100] = {.lex_state = 236},
  [101] = {.lex_state = 353},
  [102] = {.lex_state = 351},
  [103] = {.lex_state = 353},
  [104] = {.lex_state = 592},
  [105] = {.lex_state = 353},
  [106] = {.lex_state = 236},
  [107] = {.lex_state = 353},
  [108] = {.lex_state = 238},
  [109] = {.lex_state = 236},
  [110] = {.lex_state = 238},
  [111] = {.lex_state = 353},
  [112] = {.lex_state = 236},
  [113] = {.lex_state = 593},
  [114] = {.lex_state = 353},
  [115] = {.lex_state = 379},
  [116] = {.lex_state = 353},
  [117] = {.lex_state = 236},
  [118] = {.lex_state = 353},
  [119] = {.lex_state = 236},
  [120] = {.lex_state = 236},
  [121] = {.lex_state = 353},
  [122] = {.lex_state = 378},
  [123] = {.lex_state = 236},
  [124] = {.lex_state = 353},
  [125] = {.lex_state = 353},
  [126] = {.lex_state = 236},
  [127] = {.lex_state = 351},
  [128] = {.lex_state = 351},
  [129] = {.lex_state = 351},
  [130] = {.lex_state = 351},
  [131] = {.lex_state = 351},
  [132] = {.lex_state = 236},
  [133] = {.lex_state = 378},
  [134] = {.lex_state = 480},
  [135] = {.lex_state = 238},
  [136] = {.lex_state = 371},
  [137] = {.lex_state = 378},
  [138] = {.lex_state = 480},
  [139] = {.lex_state = 353},
  [140] = {.lex_state = 353},
  [141] = {.lex_state = 353},
  [142] = {.lex_state = 482},
  [143] = {.lex_state = 352},
  [144] = {.lex_state = 353},
  [145] = {.lex_state = 353},
  [146] = {.lex_state = 594},
  [147] = {.lex_state = 353},
  [148] = {.lex_state = 351},
  [149] = {.lex_state = 353},
  [150] = {.lex_state = 238},
  [151] = {.lex_state = 353},
  [152] = {.lex_state = 236},
  [153] = {.lex_state = 353},
  [154] = {.lex_state = 238},
  [155] = {.lex_state = 353},
  [156] = {.lex_state = 351},
  [157] = {.lex_state = 236},
  [158] = {.lex_state = 353},
  [159] = {.lex_state = 351},
  [160] = {.lex_state = 351},
  [161] = {.lex_state = 353},
  [162] = {.lex_state = 353},
  [163] = {.lex_state = 238},
  [164] = {.lex_state = 353},
  [165] = {.lex_state = 353},
  [166] = {.lex_state = 383},
  [167] = {.lex_state = 353},
  [168] = {.lex_state = 383},
  [169] = {.lex_state = 353},
  [170] = {.lex_state = 236},
  [171] = {.lex_state = 480},
  [172] = {.lex_state = 353},
  [173] = {.lex_state = 480},
  [174] = {.lex_state = 353},
  [175] = {.lex_state = 378},
  [176] = {.lex_state = 351},
  [177] = {.lex_state = 236},
  [178] = {.lex_state = 378},
  [179] = {.lex_state = 480},
  [180] = {.lex_state = 480},
  [181] = {.lex_state = 238},
  [182] = {.lex_state = 371},
  [183] = {.lex_state = 378},
  [184] = {.lex_state = 353},
  [185] = {.lex_state = 353},
  [186] = {.lex_state = 351},
  [187] = {.lex_state = 353},
  [188] = {.lex_state = 238},
  [189] = {.lex_state = 353},
  [190] = {.lex_state = 353},
  [191] = {.lex_state = 351},
  [192] = {.lex_state = 383},
  [193] = {.lex_state = 353},
  [194] = {.lex_state = 378},
  [195] = {.lex_state = 236},
  [196] = {.lex_state = 480},
  [197] = {.lex_state = 371},
  [198] = {.lex_state = 353},
  [199] = {.lex_state = 351},
  [200] = {.lex_state = 353},
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
    [anon_sym_tag] = ACTIONS(3),
    [sym_verbatim_env_name] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_documentclass] = ACTIONS(3),
    [anon_sym_usepackage] = ACTIONS(3),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(3),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(1),
    [anon_sym_emph] = ACTIONS(3),
    [anon_sym_makeatletter] = ACTIONS(3),
    [anon_sym_makeatother] = ACTIONS(3),
    [sym__escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym__end_of_line] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym__name] = ACTIONS(3),
    [sym__at_name] = ACTIONS(3),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(1),
    [sym_number] = ACTIONS(3),
    [sym__verbatim_token] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(9),
    [sym__text_mode] = STATE(29),
    [sym_text_mode] = STATE(10),
    [sym_at_group] = STATE(29),
    [sym_parameter] = STATE(29),
    [sym_text_env] = STATE(29),
    [sym__display_math] = STATE(29),
    [sym_tex_display_math] = STATE(29),
    [sym_latex_display_math] = STATE(29),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(29),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(29),
    [sym_tex_inline_math] = STATE(29),
    [sym_latex_inline_math] = STATE(29),
    [sym_inline_math_env] = STATE(29),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(29),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(29),
    [sym_command] = STATE(29),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(29),
    [sym_opt_text_group] = STATE(29),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(29),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(29),
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
    [sym_text] = ACTIONS(15),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym__escape] = ACTIONS(23),
    [sym_begin_group] = ACTIONS(23),
    [sym_math_shift] = ACTIONS(23),
    [sym_alignment_tab] = ACTIONS(23),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(23),
    [sym_comment_char] = ACTIONS(23),
    [sym_text] = ACTIONS(23),
  },
  [3] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_makeatletter] = ACTIONS(47),
    [sym__name] = ACTIONS(49),
  },
  [4] = {
    [sym__text_mode] = STATE(44),
    [sym_at_group] = STATE(44),
    [sym_parameter] = STATE(44),
    [sym_text_env] = STATE(44),
    [sym__display_math] = STATE(44),
    [sym_tex_display_math] = STATE(44),
    [sym_latex_display_math] = STATE(44),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(44),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(44),
    [sym_tex_inline_math] = STATE(44),
    [sym_latex_inline_math] = STATE(44),
    [sym_inline_math_env] = STATE(44),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(44),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(44),
    [sym_command] = STATE(44),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(44),
    [sym_opt_text_group] = STATE(44),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(44),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(53),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(53),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(53),
  },
  [5] = {
    [sym__math_mode] = STATE(53),
    [sym_math_mode] = STATE(48),
    [sym_parameter] = STATE(53),
    [sym_math_environment] = STATE(53),
    [sym_tag] = STATE(53),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(53),
    [sym_command] = STATE(53),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(53),
    [sym_opt_math_group] = STATE(53),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(53),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(53),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(61),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(61),
    [sym_active_char] = ACTIONS(61),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [6] = {
    [sym_number] = ACTIONS(63),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [sym__escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(65),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(65),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(65),
    [sym_text] = ACTIONS(65),
  },
  [8] = {
    [sym_magic_text] = ACTIONS(67),
    [sym_comment_text] = ACTIONS(69),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [11] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(57),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(75),
  },
  [12] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(58),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(57),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(75),
  },
  [13] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(59),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(57),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(75),
  },
  [14] = {
    [sym__math_mode] = STATE(57),
    [sym_math_mode] = STATE(60),
    [sym_parameter] = STATE(57),
    [sym_math_environment] = STATE(57),
    [sym_tag] = STATE(57),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(57),
    [sym_command] = STATE(57),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(57),
    [sym_opt_math_group] = STATE(57),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(57),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(57),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(75),
  },
  [15] = {
    [sym_verbatim_text] = STATE(61),
    [aux_sym_verbatim_text_repeat1] = STATE(62),
    [sym__verbatim_token] = ACTIONS(77),
  },
  [16] = {
    [sym__text_mode] = STATE(66),
    [sym_at_group] = STATE(66),
    [sym_parameter] = STATE(66),
    [sym_text_env] = STATE(66),
    [sym__display_math] = STATE(66),
    [sym_tex_display_math] = STATE(66),
    [sym_latex_display_math] = STATE(66),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(66),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(66),
    [sym_tex_inline_math] = STATE(66),
    [sym_latex_inline_math] = STATE(66),
    [sym_inline_math_env] = STATE(66),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(66),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(66),
    [sym_command] = STATE(66),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(64),
    [sym_end_token] = STATE(65),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(66),
    [sym_opt_text_group] = STATE(66),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(66),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(66),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(81),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(81),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(81),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(81),
  },
  [17] = {
    [sym_display_math_env_group] = STATE(68),
    [sym_inline_math_env_group] = STATE(69),
    [sym_verbatim_env_group] = STATE(70),
    [sym_simple_text_group] = STATE(71),
    [sym_begin_group] = ACTIONS(83),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym__escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(85),
    [sym_end_group] = ACTIONS(85),
    [sym_math_shift] = ACTIONS(85),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(85),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_comment_char] = ACTIONS(85),
    [sym_text] = ACTIONS(85),
  },
  [19] = {
    [sym_simple_text_group] = STATE(73),
    [sym_opt_text_group] = STATE(74),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(87),
  },
  [20] = {
    [sym_simple_text_group] = STATE(75),
    [sym_opt_text_group] = STATE(76),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(87),
  },
  [21] = {
    [sym_text_group] = STATE(77),
    [sym_begin_group] = ACTIONS(11),
  },
  [22] = {
    [sym_text_group] = STATE(78),
    [sym_opt_text_group] = STATE(79),
    [sym_begin_opt] = STATE(28),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(89),
    [sym_end_group] = ACTIONS(89),
    [sym_math_shift] = ACTIONS(89),
    [sym_alignment_tab] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(89),
    [sym_superscript] = ACTIONS(89),
    [sym_subscript] = ACTIONS(89),
    [sym_active_char] = ACTIONS(89),
    [sym_comment_char] = ACTIONS(89),
    [sym_text] = ACTIONS(89),
  },
  [24] = {
    [sym_escaped] = STATE(81),
    [sym__escape] = ACTIONS(91),
  },
  [25] = {
    [sym_text_group] = STATE(82),
    [sym_begin_group] = ACTIONS(11),
  },
  [26] = {
    [sym__at_text_mode] = STATE(90),
    [sym_parameter] = STATE(90),
    [sym_text_env] = STATE(90),
    [sym__display_math] = STATE(90),
    [sym_tex_display_math] = STATE(90),
    [sym_latex_display_math] = STATE(90),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(90),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(90),
    [sym_tex_inline_math] = STATE(90),
    [sym_latex_inline_math] = STATE(90),
    [sym_inline_math_env] = STATE(90),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(90),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(90),
    [sym_at_command] = STATE(90),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_makeatother] = STATE(87),
    [sym_makeatother_token] = STATE(88),
    [sym_at_text_group] = STATE(90),
    [sym_opt_at_text_group] = STATE(90),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(90),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(95),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(97),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(97),
  },
  [27] = {
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(101),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_comment_char] = ACTIONS(101),
    [sym_text] = ACTIONS(101),
  },
  [28] = {
    [sym__text_mode] = STATE(93),
    [sym_at_group] = STATE(93),
    [sym_parameter] = STATE(93),
    [sym_text_env] = STATE(93),
    [sym__display_math] = STATE(93),
    [sym_tex_display_math] = STATE(93),
    [sym_latex_display_math] = STATE(93),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(93),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(93),
    [sym_tex_inline_math] = STATE(93),
    [sym_latex_inline_math] = STATE(93),
    [sym_inline_math_env] = STATE(93),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(93),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(93),
    [sym_command] = STATE(93),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(93),
    [sym_opt_text_group] = STATE(93),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(93),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(92),
    [aux_sym_text_mode_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(105),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(105),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(105),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(105),
  },
  [29] = {
    [sym__text_mode] = STATE(94),
    [sym_at_group] = STATE(94),
    [sym_parameter] = STATE(94),
    [sym_text_env] = STATE(94),
    [sym__display_math] = STATE(94),
    [sym_tex_display_math] = STATE(94),
    [sym_latex_display_math] = STATE(94),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(94),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(94),
    [sym_tex_inline_math] = STATE(94),
    [sym_latex_inline_math] = STATE(94),
    [sym_inline_math_env] = STATE(94),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(94),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(94),
    [sym_command] = STATE(94),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(94),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(94),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(109),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(109),
  },
  [30] = {
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(111),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(111),
    [sym_subscript] = ACTIONS(111),
    [sym_active_char] = ACTIONS(111),
    [sym_comment_char] = ACTIONS(111),
    [sym_text] = ACTIONS(111),
  },
  [31] = {
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym__escape] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(113),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(113),
    [sym_superscript] = ACTIONS(113),
    [sym_subscript] = ACTIONS(113),
    [sym_active_char] = ACTIONS(113),
    [sym_comment_char] = ACTIONS(113),
    [sym_text] = ACTIONS(113),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym__escape] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(115),
    [sym_end_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(115),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(115),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_comment_char] = ACTIONS(115),
    [sym_text] = ACTIONS(115),
  },
  [33] = {
    [sym_begin_group] = ACTIONS(117),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
  },
  [35] = {
    [anon_sym_LBRACK] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
  },
  [36] = {
    [sym_begin_group] = ACTIONS(123),
  },
  [37] = {
    [anon_sym_LBRACK] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(125),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_comment_char] = ACTIONS(127),
    [sym_text] = ACTIONS(127),
  },
  [39] = {
    [sym__escape] = ACTIONS(129),
  },
  [40] = {
    [sym_begin_group] = ACTIONS(131),
  },
  [41] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_comment_char] = ACTIONS(133),
    [sym_text] = ACTIONS(133),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym__escape] = ACTIONS(135),
    [sym_begin_group] = ACTIONS(135),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(135),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(135),
    [sym_active_char] = ACTIONS(135),
    [sym_comment_char] = ACTIONS(135),
    [sym_text] = ACTIONS(135),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_end_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(137),
    [sym_text] = ACTIONS(137),
  },
  [44] = {
    [sym__text_mode] = STATE(96),
    [sym_at_group] = STATE(96),
    [sym_parameter] = STATE(96),
    [sym_text_env] = STATE(96),
    [sym__display_math] = STATE(96),
    [sym_tex_display_math] = STATE(96),
    [sym_latex_display_math] = STATE(96),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(96),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(96),
    [sym_tex_inline_math] = STATE(96),
    [sym_latex_inline_math] = STATE(96),
    [sym_inline_math_env] = STATE(96),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(96),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(96),
    [sym_command] = STATE(96),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(96),
    [sym_opt_text_group] = STATE(96),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(96),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(139),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(141),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(141),
  },
  [45] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [sym__name] = ACTIONS(49),
  },
  [46] = {
    [sym__math_mode] = STATE(99),
    [sym_parameter] = STATE(99),
    [sym_math_environment] = STATE(99),
    [sym_tag] = STATE(99),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(99),
    [sym_command] = STATE(99),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(99),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(145),
    [sym_alignment_tab] = ACTIONS(147),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(147),
    [sym_subscript] = ACTIONS(147),
    [sym_active_char] = ACTIONS(147),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(147),
  },
  [47] = {
    [sym__math_mode] = STATE(53),
    [sym_math_mode] = STATE(100),
    [sym_parameter] = STATE(53),
    [sym_math_environment] = STATE(53),
    [sym_tag] = STATE(53),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(53),
    [sym_command] = STATE(53),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(53),
    [sym_opt_math_group] = STATE(53),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(53),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(53),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(61),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(61),
    [sym_active_char] = ACTIONS(61),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(61),
  },
  [48] = {
    [sym_math_shift] = ACTIONS(149),
  },
  [49] = {
    [sym_math_text_group] = STATE(103),
    [sym_begin_group] = ACTIONS(151),
  },
  [50] = {
    [sym__math_mode] = STATE(106),
    [sym_parameter] = STATE(106),
    [sym_math_environment] = STATE(106),
    [sym_tag] = STATE(106),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(106),
    [sym_command] = STATE(106),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_end] = STATE(105),
    [sym_end_token] = STATE(65),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(106),
    [sym_opt_math_group] = STATE(106),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(106),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(155),
  },
  [51] = {
    [sym_simple_text_group] = STATE(71),
    [sym_begin_group] = ACTIONS(87),
  },
  [52] = {
    [sym__math_mode] = STATE(108),
    [sym_parameter] = STATE(108),
    [sym_math_environment] = STATE(108),
    [sym_tag] = STATE(108),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(108),
    [sym_command] = STATE(108),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(108),
    [sym_opt_math_group] = STATE(108),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(108),
    [sym_begin_opt] = STATE(52),
    [sym_end_opt] = STATE(107),
    [aux_sym_math_mode_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(157),
  },
  [53] = {
    [sym__math_mode] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_math_environment] = STATE(109),
    [sym_tag] = STATE(109),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(109),
    [sym_opt_math_group] = STATE(109),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(109),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(161),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_RBRACK] = ACTIONS(163),
    [sym__escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
    [sym_end_group] = ACTIONS(163),
    [sym_math_shift] = ACTIONS(163),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(163),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(163),
    [sym_active_char] = ACTIONS(163),
    [sym_comment_char] = ACTIONS(163),
    [sym_text] = ACTIONS(163),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym__escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(165),
    [sym_end_group] = ACTIONS(165),
    [sym_math_shift] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(165),
    [sym_text] = ACTIONS(165),
  },
  [56] = {
    [sym_end_display_math] = STATE(111),
    [sym__escape] = ACTIONS(167),
  },
  [57] = {
    [sym__math_mode] = STATE(112),
    [sym_parameter] = STATE(112),
    [sym_math_environment] = STATE(112),
    [sym_tag] = STATE(112),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(112),
    [sym_command] = STATE(112),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(112),
    [sym_opt_math_group] = STATE(112),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(112),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(169),
  },
  [58] = {
    [sym_end_inline_math] = STATE(114),
    [sym__escape] = ACTIONS(171),
  },
  [59] = {
    [sym_display_math_end] = STATE(116),
    [sym_end_token] = STATE(117),
    [sym__escape] = ACTIONS(173),
  },
  [60] = {
    [sym_inline_math_end] = STATE(118),
    [sym_end_token] = STATE(119),
    [sym__escape] = ACTIONS(173),
  },
  [61] = {
    [sym_verbatim_end] = STATE(121),
    [sym__end_of_line] = ACTIONS(175),
  },
  [62] = {
    [aux_sym_verbatim_text_repeat1] = STATE(122),
    [sym__end_of_line] = ACTIONS(177),
    [sym__verbatim_token] = ACTIONS(179),
  },
  [63] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(181),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_makeatletter] = ACTIONS(47),
    [sym__name] = ACTIONS(49),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym__escape] = ACTIONS(183),
    [sym_begin_group] = ACTIONS(183),
    [sym_end_group] = ACTIONS(183),
    [sym_math_shift] = ACTIONS(183),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(183),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(183),
    [sym_text] = ACTIONS(183),
  },
  [65] = {
    [sym_simple_text_group] = STATE(124),
    [sym_begin_group] = ACTIONS(87),
  },
  [66] = {
    [sym__text_mode] = STATE(126),
    [sym_at_group] = STATE(126),
    [sym_parameter] = STATE(126),
    [sym_text_env] = STATE(126),
    [sym__display_math] = STATE(126),
    [sym_tex_display_math] = STATE(126),
    [sym_latex_display_math] = STATE(126),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(126),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(126),
    [sym_tex_inline_math] = STATE(126),
    [sym_latex_inline_math] = STATE(126),
    [sym_inline_math_env] = STATE(126),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(126),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(126),
    [sym_command] = STATE(126),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(125),
    [sym_end_token] = STATE(65),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(126),
    [sym_opt_text_group] = STATE(126),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(126),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(185),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(185),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(185),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(185),
  },
  [67] = {
    [sym_display_math_env_name] = ACTIONS(187),
    [sym_inline_math_env_name] = ACTIONS(189),
    [sym_verbatim_env_name] = ACTIONS(191),
    [sym_text] = ACTIONS(193),
  },
  [68] = {
    [sym_text_group] = STATE(133),
    [sym_opt_text_group] = STATE(134),
    [sym_begin_opt] = STATE(135),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(195),
    [sym__end_of_line] = ACTIONS(197),
  },
  [69] = {
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(199),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_comment_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [70] = {
    [sym_text_group] = STATE(137),
    [sym_opt_text_group] = STATE(138),
    [sym_begin_opt] = STATE(135),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(195),
    [sym__end_of_line] = ACTIONS(201),
  },
  [71] = {
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym__escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_math_shift] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_comment_char] = ACTIONS(203),
    [sym_text] = ACTIONS(203),
  },
  [72] = {
    [sym_text] = ACTIONS(205),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym__escape] = ACTIONS(207),
    [sym_begin_group] = ACTIONS(207),
    [sym_end_group] = ACTIONS(207),
    [sym_math_shift] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(207),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_comment_char] = ACTIONS(207),
    [sym_text] = ACTIONS(207),
  },
  [74] = {
    [sym_simple_text_group] = STATE(139),
    [sym_begin_group] = ACTIONS(87),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(209),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(209),
    [sym_end_group] = ACTIONS(209),
    [sym_math_shift] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(209),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_comment_char] = ACTIONS(209),
    [sym_text] = ACTIONS(209),
  },
  [76] = {
    [sym_simple_text_group] = STATE(140),
    [sym_begin_group] = ACTIONS(87),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [sym__escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(211),
    [sym_end_group] = ACTIONS(211),
    [sym_math_shift] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(211),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(211),
    [sym_active_char] = ACTIONS(211),
    [sym_comment_char] = ACTIONS(211),
    [sym_text] = ACTIONS(211),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [sym__escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_end_group] = ACTIONS(213),
    [sym_math_shift] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_comment_char] = ACTIONS(213),
    [sym_text] = ACTIONS(213),
  },
  [79] = {
    [sym_text_group] = STATE(141),
    [sym_begin_group] = ACTIONS(11),
  },
  [80] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(215),
  },
  [81] = {
    [anon_sym_EQ] = ACTIONS(217),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(219),
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
    [sym_text] = ACTIONS(219),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [anon_sym_makeatother] = ACTIONS(221),
    [sym__at_name] = ACTIONS(223),
  },
  [84] = {
    [sym__at_text_mode] = STATE(148),
    [sym_parameter] = STATE(148),
    [sym_text_env] = STATE(148),
    [sym__display_math] = STATE(148),
    [sym_tex_display_math] = STATE(148),
    [sym_latex_display_math] = STATE(148),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(148),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(148),
    [sym_tex_inline_math] = STATE(148),
    [sym_latex_inline_math] = STATE(148),
    [sym_inline_math_env] = STATE(148),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(148),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(148),
    [sym_at_command] = STATE(148),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(148),
    [sym_opt_at_text_group] = STATE(148),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(148),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(95),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(229),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(229),
  },
  [85] = {
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_RBRACK] = ACTIONS(231),
    [sym__escape] = ACTIONS(231),
    [sym_begin_group] = ACTIONS(231),
    [sym_end_group] = ACTIONS(231),
    [sym_math_shift] = ACTIONS(231),
    [sym_alignment_tab] = ACTIONS(231),
    [sym_parameter_char] = ACTIONS(231),
    [sym_superscript] = ACTIONS(231),
    [sym_subscript] = ACTIONS(231),
    [sym_active_char] = ACTIONS(231),
    [sym_comment_char] = ACTIONS(231),
    [sym_text] = ACTIONS(231),
  },
  [86] = {
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym__escape] = ACTIONS(233),
    [sym_begin_group] = ACTIONS(233),
    [sym_end_group] = ACTIONS(233),
    [sym_math_shift] = ACTIONS(233),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [sym_active_char] = ACTIONS(233),
    [sym_comment_char] = ACTIONS(233),
    [sym_text] = ACTIONS(233),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym__escape] = ACTIONS(235),
    [sym_begin_group] = ACTIONS(235),
    [sym_end_group] = ACTIONS(235),
    [sym_math_shift] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(235),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_comment_char] = ACTIONS(235),
    [sym_text] = ACTIONS(235),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(237),
    [sym_end_group] = ACTIONS(237),
    [sym_math_shift] = ACTIONS(237),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_comment_char] = ACTIONS(237),
    [sym_text] = ACTIONS(237),
  },
  [89] = {
    [sym__at_text_mode] = STATE(150),
    [sym_parameter] = STATE(150),
    [sym_text_env] = STATE(150),
    [sym__display_math] = STATE(150),
    [sym_tex_display_math] = STATE(150),
    [sym_latex_display_math] = STATE(150),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(150),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(150),
    [sym_tex_inline_math] = STATE(150),
    [sym_latex_inline_math] = STATE(150),
    [sym_inline_math_env] = STATE(150),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(150),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(150),
    [sym_at_command] = STATE(150),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(150),
    [sym_opt_at_text_group] = STATE(150),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(150),
    [sym_begin_opt] = STATE(89),
    [sym_end_opt] = STATE(149),
    [aux_sym_at_group_repeat1] = STATE(150),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(95),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(239),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(239),
  },
  [90] = {
    [sym__at_text_mode] = STATE(152),
    [sym_parameter] = STATE(152),
    [sym_text_env] = STATE(152),
    [sym__display_math] = STATE(152),
    [sym_tex_display_math] = STATE(152),
    [sym_latex_display_math] = STATE(152),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(152),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(152),
    [sym_tex_inline_math] = STATE(152),
    [sym_latex_inline_math] = STATE(152),
    [sym_inline_math_env] = STATE(152),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(152),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(152),
    [sym_at_command] = STATE(152),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_makeatother] = STATE(151),
    [sym_makeatother_token] = STATE(88),
    [sym_at_text_group] = STATE(152),
    [sym_opt_at_text_group] = STATE(152),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(152),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(95),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(241),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(243),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym__escape] = ACTIONS(243),
    [sym_begin_group] = ACTIONS(243),
    [sym_end_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(243),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(243),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_comment_char] = ACTIONS(243),
    [sym_text] = ACTIONS(243),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
    [sym__escape] = ACTIONS(245),
    [sym_begin_group] = ACTIONS(245),
    [sym_end_group] = ACTIONS(245),
    [sym_math_shift] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(245),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_comment_char] = ACTIONS(245),
    [sym_text] = ACTIONS(245),
  },
  [93] = {
    [sym__text_mode] = STATE(154),
    [sym_at_group] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_text_env] = STATE(154),
    [sym__display_math] = STATE(154),
    [sym_tex_display_math] = STATE(154),
    [sym_latex_display_math] = STATE(154),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(154),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(154),
    [sym_tex_inline_math] = STATE(154),
    [sym_latex_inline_math] = STATE(154),
    [sym_inline_math_env] = STATE(154),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(154),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(154),
    [sym_command] = STATE(154),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(154),
    [sym_opt_text_group] = STATE(154),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(154),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(153),
    [aux_sym_text_mode_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(247),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(247),
  },
  [94] = {
    [sym__text_mode] = STATE(94),
    [sym_at_group] = STATE(94),
    [sym_parameter] = STATE(94),
    [sym_text_env] = STATE(94),
    [sym__display_math] = STATE(94),
    [sym_tex_display_math] = STATE(94),
    [sym_latex_display_math] = STATE(94),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(94),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(94),
    [sym_tex_inline_math] = STATE(94),
    [sym_latex_inline_math] = STATE(94),
    [sym_inline_math_env] = STATE(94),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(94),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(94),
    [sym_command] = STATE(94),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(94),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(94),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(94),
    [ts_builtin_sym_end] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym__escape] = ACTIONS(254),
    [sym_begin_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(260),
    [sym_alignment_tab] = ACTIONS(263),
    [sym_parameter_char] = ACTIONS(266),
    [sym_superscript] = ACTIONS(263),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(263),
    [sym_comment_char] = ACTIONS(272),
    [sym_text] = ACTIONS(263),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(275),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym__escape] = ACTIONS(275),
    [sym_begin_group] = ACTIONS(275),
    [sym_end_group] = ACTIONS(275),
    [sym_math_shift] = ACTIONS(275),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(275),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_comment_char] = ACTIONS(275),
    [sym_text] = ACTIONS(275),
  },
  [96] = {
    [sym__text_mode] = STATE(96),
    [sym_at_group] = STATE(96),
    [sym_parameter] = STATE(96),
    [sym_text_env] = STATE(96),
    [sym__display_math] = STATE(96),
    [sym_tex_display_math] = STATE(96),
    [sym_latex_display_math] = STATE(96),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(96),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(96),
    [sym_tex_inline_math] = STATE(96),
    [sym_latex_inline_math] = STATE(96),
    [sym_inline_math_env] = STATE(96),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(96),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(96),
    [sym_command] = STATE(96),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(96),
    [sym_opt_text_group] = STATE(96),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(96),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym__escape] = ACTIONS(254),
    [sym_begin_group] = ACTIONS(257),
    [sym_end_group] = ACTIONS(249),
    [sym_math_shift] = ACTIONS(260),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(266),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(277),
    [sym_comment_char] = ACTIONS(272),
    [sym_text] = ACTIONS(277),
  },
  [97] = {
    [sym_begin_group] = ACTIONS(280),
  },
  [98] = {
    [anon_sym_LBRACK] = ACTIONS(282),
    [anon_sym_RBRACK] = ACTIONS(282),
    [sym__escape] = ACTIONS(282),
    [sym_begin_group] = ACTIONS(282),
    [sym_end_group] = ACTIONS(282),
    [sym_math_shift] = ACTIONS(282),
    [sym_alignment_tab] = ACTIONS(282),
    [sym_parameter_char] = ACTIONS(282),
    [sym_superscript] = ACTIONS(282),
    [sym_subscript] = ACTIONS(282),
    [sym_active_char] = ACTIONS(282),
    [sym_comment_char] = ACTIONS(282),
    [sym_text] = ACTIONS(282),
  },
  [99] = {
    [sym__math_mode] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_math_environment] = STATE(156),
    [sym_tag] = STATE(156),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(156),
    [sym_command] = STATE(156),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(156),
    [sym_opt_math_group] = STATE(156),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(156),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(156),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(286),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(286),
    [sym_subscript] = ACTIONS(286),
    [sym_active_char] = ACTIONS(286),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(286),
  },
  [100] = {
    [sym_math_shift] = ACTIONS(288),
  },
  [101] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [anon_sym_LBRACK] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [sym__escape] = ACTIONS(290),
    [sym_begin_group] = ACTIONS(290),
    [sym_end_group] = ACTIONS(290),
    [sym_math_shift] = ACTIONS(290),
    [sym_alignment_tab] = ACTIONS(290),
    [sym_parameter_char] = ACTIONS(290),
    [sym_superscript] = ACTIONS(290),
    [sym_subscript] = ACTIONS(290),
    [sym_active_char] = ACTIONS(290),
    [sym_comment_char] = ACTIONS(290),
    [sym_text] = ACTIONS(290),
  },
  [102] = {
    [sym__text_mode] = STATE(160),
    [sym_text_mode] = STATE(159),
    [sym_at_group] = STATE(160),
    [sym_parameter] = STATE(160),
    [sym_text_env] = STATE(160),
    [sym__display_math] = STATE(160),
    [sym_tex_display_math] = STATE(160),
    [sym_latex_display_math] = STATE(160),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(160),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(160),
    [sym_tex_inline_math] = STATE(160),
    [sym_latex_inline_math] = STATE(160),
    [sym_inline_math_env] = STATE(160),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(160),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(160),
    [sym_command] = STATE(160),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(160),
    [sym_opt_text_group] = STATE(160),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(160),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(160),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(292),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(294),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(294),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(294),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(294),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [sym__escape] = ACTIONS(296),
    [sym_begin_group] = ACTIONS(296),
    [sym_end_group] = ACTIONS(296),
    [sym_math_shift] = ACTIONS(296),
    [sym_alignment_tab] = ACTIONS(296),
    [sym_parameter_char] = ACTIONS(296),
    [sym_superscript] = ACTIONS(296),
    [sym_subscript] = ACTIONS(296),
    [sym_active_char] = ACTIONS(296),
    [sym_comment_char] = ACTIONS(296),
    [sym_text] = ACTIONS(296),
  },
  [104] = {
    [anon_sym_tag] = ACTIONS(143),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(181),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [sym__name] = ACTIONS(49),
  },
  [105] = {
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [sym__escape] = ACTIONS(298),
    [sym_begin_group] = ACTIONS(298),
    [sym_end_group] = ACTIONS(298),
    [sym_math_shift] = ACTIONS(298),
    [sym_alignment_tab] = ACTIONS(298),
    [sym_parameter_char] = ACTIONS(298),
    [sym_superscript] = ACTIONS(298),
    [sym_subscript] = ACTIONS(298),
    [sym_active_char] = ACTIONS(298),
    [sym_comment_char] = ACTIONS(298),
    [sym_text] = ACTIONS(298),
  },
  [106] = {
    [sym__math_mode] = STATE(112),
    [sym_parameter] = STATE(112),
    [sym_math_environment] = STATE(112),
    [sym_tag] = STATE(112),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(112),
    [sym_command] = STATE(112),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_end] = STATE(161),
    [sym_end_token] = STATE(65),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(112),
    [sym_opt_math_group] = STATE(112),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(112),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(169),
  },
  [107] = {
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
    [sym__escape] = ACTIONS(300),
    [sym_begin_group] = ACTIONS(300),
    [sym_end_group] = ACTIONS(300),
    [sym_math_shift] = ACTIONS(300),
    [sym_alignment_tab] = ACTIONS(300),
    [sym_parameter_char] = ACTIONS(300),
    [sym_superscript] = ACTIONS(300),
    [sym_subscript] = ACTIONS(300),
    [sym_active_char] = ACTIONS(300),
    [sym_comment_char] = ACTIONS(300),
    [sym_text] = ACTIONS(300),
  },
  [108] = {
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_environment] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(163),
    [sym_begin_opt] = STATE(52),
    [sym_end_opt] = STATE(162),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(302),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(302),
    [sym_subscript] = ACTIONS(302),
    [sym_active_char] = ACTIONS(302),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(302),
  },
  [109] = {
    [sym__math_mode] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_math_environment] = STATE(109),
    [sym_tag] = STATE(109),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(109),
    [sym_opt_math_group] = STATE(109),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(109),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(310),
    [sym_math_shift] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(318),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [sym_comment_char] = ACTIONS(321),
    [sym_text] = ACTIONS(315),
  },
  [110] = {
    [anon_sym_RBRACK] = ACTIONS(324),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(326),
    [anon_sym_RBRACK] = ACTIONS(326),
    [sym__escape] = ACTIONS(326),
    [sym_begin_group] = ACTIONS(326),
    [sym_end_group] = ACTIONS(326),
    [sym_math_shift] = ACTIONS(326),
    [sym_alignment_tab] = ACTIONS(326),
    [sym_parameter_char] = ACTIONS(326),
    [sym_superscript] = ACTIONS(326),
    [sym_subscript] = ACTIONS(326),
    [sym_active_char] = ACTIONS(326),
    [sym_comment_char] = ACTIONS(326),
    [sym_text] = ACTIONS(326),
  },
  [112] = {
    [sym__math_mode] = STATE(112),
    [sym_parameter] = STATE(112),
    [sym_math_environment] = STATE(112),
    [sym_tag] = STATE(112),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(112),
    [sym_command] = STATE(112),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(112),
    [sym_opt_math_group] = STATE(112),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(112),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(310),
    [sym_alignment_tab] = ACTIONS(328),
    [sym_parameter_char] = ACTIONS(318),
    [sym_superscript] = ACTIONS(328),
    [sym_subscript] = ACTIONS(328),
    [sym_active_char] = ACTIONS(328),
    [sym_comment_char] = ACTIONS(321),
    [sym_text] = ACTIONS(328),
  },
  [113] = {
    [anon_sym_RPAREN] = ACTIONS(331),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym__escape] = ACTIONS(333),
    [sym_begin_group] = ACTIONS(333),
    [sym_end_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(333),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(333),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_comment_char] = ACTIONS(333),
    [sym_text] = ACTIONS(333),
  },
  [115] = {
    [anon_sym_end] = ACTIONS(335),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(337),
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
    [sym_text] = ACTIONS(337),
  },
  [117] = {
    [sym_display_math_env_group] = STATE(167),
    [sym_begin_group] = ACTIONS(339),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(341),
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
    [sym_text] = ACTIONS(341),
  },
  [119] = {
    [sym_inline_math_env_group] = STATE(169),
    [sym_begin_group] = ACTIONS(343),
  },
  [120] = {
    [sym_end_token] = STATE(170),
    [sym__escape] = ACTIONS(173),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym__escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(345),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(345),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(345),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(345),
    [sym_active_char] = ACTIONS(345),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(345),
  },
  [122] = {
    [aux_sym_verbatim_text_repeat1] = STATE(122),
    [sym__end_of_line] = ACTIONS(347),
    [sym__verbatim_token] = ACTIONS(349),
  },
  [123] = {
    [sym_begin_group] = ACTIONS(352),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(354),
    [anon_sym_RBRACK] = ACTIONS(354),
    [sym__escape] = ACTIONS(354),
    [sym_begin_group] = ACTIONS(354),
    [sym_end_group] = ACTIONS(354),
    [sym_math_shift] = ACTIONS(354),
    [sym_alignment_tab] = ACTIONS(354),
    [sym_parameter_char] = ACTIONS(354),
    [sym_superscript] = ACTIONS(354),
    [sym_subscript] = ACTIONS(354),
    [sym_active_char] = ACTIONS(354),
    [sym_comment_char] = ACTIONS(354),
    [sym_text] = ACTIONS(354),
  },
  [125] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [anon_sym_RBRACK] = ACTIONS(356),
    [sym__escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(356),
    [sym_end_group] = ACTIONS(356),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(356),
    [sym_parameter_char] = ACTIONS(356),
    [sym_superscript] = ACTIONS(356),
    [sym_subscript] = ACTIONS(356),
    [sym_active_char] = ACTIONS(356),
    [sym_comment_char] = ACTIONS(356),
    [sym_text] = ACTIONS(356),
  },
  [126] = {
    [sym__text_mode] = STATE(126),
    [sym_at_group] = STATE(126),
    [sym_parameter] = STATE(126),
    [sym_text_env] = STATE(126),
    [sym__display_math] = STATE(126),
    [sym_tex_display_math] = STATE(126),
    [sym_latex_display_math] = STATE(126),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(126),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(126),
    [sym_tex_inline_math] = STATE(126),
    [sym_latex_inline_math] = STATE(126),
    [sym_inline_math_env] = STATE(126),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(126),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(126),
    [sym_command] = STATE(126),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(126),
    [sym_opt_text_group] = STATE(126),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(126),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(251),
    [sym__escape] = ACTIONS(254),
    [sym_begin_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(260),
    [sym_alignment_tab] = ACTIONS(358),
    [sym_parameter_char] = ACTIONS(266),
    [sym_superscript] = ACTIONS(358),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(358),
    [sym_comment_char] = ACTIONS(272),
    [sym_text] = ACTIONS(358),
  },
  [127] = {
    [sym_end_group] = ACTIONS(361),
  },
  [128] = {
    [sym_end_group] = ACTIONS(363),
  },
  [129] = {
    [sym_end_group] = ACTIONS(365),
  },
  [130] = {
    [sym_end_group] = ACTIONS(367),
  },
  [131] = {
    [sym__text_mode] = STATE(176),
    [sym_at_group] = STATE(176),
    [sym_parameter] = STATE(176),
    [sym_text_env] = STATE(176),
    [sym__display_math] = STATE(176),
    [sym_tex_display_math] = STATE(176),
    [sym_latex_display_math] = STATE(176),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(176),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(176),
    [sym_tex_inline_math] = STATE(176),
    [sym_latex_inline_math] = STATE(176),
    [sym_inline_math_env] = STATE(176),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(176),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(176),
    [sym_command] = STATE(176),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(176),
    [sym_opt_text_group] = STATE(176),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(176),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(176),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(369),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(371),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(371),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(371),
  },
  [132] = {
    [anon_sym_LBRACK] = ACTIONS(373),
    [sym__escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(373),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(373),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_comment_char] = ACTIONS(373),
    [sym_text] = ACTIONS(373),
  },
  [133] = {
    [sym__end_of_line] = ACTIONS(375),
  },
  [134] = {
    [sym_text_group] = STATE(178),
    [sym_begin_group] = ACTIONS(195),
    [sym__end_of_line] = ACTIONS(375),
  },
  [135] = {
    [sym__text_mode] = STATE(181),
    [sym_at_group] = STATE(181),
    [sym_parameter] = STATE(181),
    [sym_text_env] = STATE(181),
    [sym__display_math] = STATE(181),
    [sym_tex_display_math] = STATE(181),
    [sym_latex_display_math] = STATE(181),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(181),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(181),
    [sym_tex_inline_math] = STATE(181),
    [sym_latex_inline_math] = STATE(181),
    [sym_inline_math_env] = STATE(181),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(181),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(181),
    [sym_command] = STATE(181),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(181),
    [sym_opt_text_group] = STATE(181),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(181),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(180),
    [aux_sym_text_mode_repeat1] = STATE(181),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(379),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(379),
  },
  [136] = {
    [sym__verbatim_token] = ACTIONS(381),
  },
  [137] = {
    [sym__end_of_line] = ACTIONS(383),
  },
  [138] = {
    [sym_text_group] = STATE(183),
    [sym_begin_group] = ACTIONS(195),
    [sym__end_of_line] = ACTIONS(383),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(385),
    [sym__escape] = ACTIONS(385),
    [sym_begin_group] = ACTIONS(385),
    [sym_end_group] = ACTIONS(385),
    [sym_math_shift] = ACTIONS(385),
    [sym_alignment_tab] = ACTIONS(385),
    [sym_parameter_char] = ACTIONS(385),
    [sym_superscript] = ACTIONS(385),
    [sym_subscript] = ACTIONS(385),
    [sym_active_char] = ACTIONS(385),
    [sym_comment_char] = ACTIONS(385),
    [sym_text] = ACTIONS(385),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_end_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_comment_char] = ACTIONS(387),
    [sym_text] = ACTIONS(387),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(389),
    [sym_end_group] = ACTIONS(389),
    [sym_math_shift] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(389),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(389),
    [sym_active_char] = ACTIONS(389),
    [sym_comment_char] = ACTIONS(389),
    [sym_text] = ACTIONS(389),
  },
  [142] = {
    [anon_sym_EQ] = ACTIONS(115),
  },
  [143] = {
    [sym_number] = ACTIONS(391),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym__escape] = ACTIONS(393),
    [sym_begin_group] = ACTIONS(393),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(393),
    [sym_alignment_tab] = ACTIONS(393),
    [sym_parameter_char] = ACTIONS(393),
    [sym_superscript] = ACTIONS(393),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(393),
    [sym_comment_char] = ACTIONS(393),
    [sym_text] = ACTIONS(393),
  },
  [145] = {
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [sym__escape] = ACTIONS(395),
    [sym_begin_group] = ACTIONS(395),
    [sym_end_group] = ACTIONS(395),
    [sym_math_shift] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(395),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(395),
    [sym_active_char] = ACTIONS(395),
    [sym_comment_char] = ACTIONS(395),
    [sym_text] = ACTIONS(395),
  },
  [146] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_emph] = ACTIONS(45),
    [sym__at_name] = ACTIONS(223),
  },
  [147] = {
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_end_group] = ACTIONS(397),
    [sym_math_shift] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_active_char] = ACTIONS(397),
    [sym_comment_char] = ACTIONS(397),
    [sym_text] = ACTIONS(397),
  },
  [148] = {
    [sym__at_text_mode] = STATE(186),
    [sym_parameter] = STATE(186),
    [sym_text_env] = STATE(186),
    [sym__display_math] = STATE(186),
    [sym_tex_display_math] = STATE(186),
    [sym_latex_display_math] = STATE(186),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(186),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(186),
    [sym_tex_inline_math] = STATE(186),
    [sym_latex_inline_math] = STATE(186),
    [sym_inline_math_env] = STATE(186),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(186),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(186),
    [sym_at_command] = STATE(186),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(186),
    [sym_opt_at_text_group] = STATE(186),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(186),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(186),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(95),
    [sym_end_group] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(401),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(401),
  },
  [149] = {
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(403),
    [sym__escape] = ACTIONS(403),
    [sym_begin_group] = ACTIONS(403),
    [sym_end_group] = ACTIONS(403),
    [sym_math_shift] = ACTIONS(403),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(403),
    [sym_superscript] = ACTIONS(403),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [sym_comment_char] = ACTIONS(403),
    [sym_text] = ACTIONS(403),
  },
  [150] = {
    [sym__at_text_mode] = STATE(188),
    [sym_parameter] = STATE(188),
    [sym_text_env] = STATE(188),
    [sym__display_math] = STATE(188),
    [sym_tex_display_math] = STATE(188),
    [sym_latex_display_math] = STATE(188),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(188),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(188),
    [sym_tex_inline_math] = STATE(188),
    [sym_latex_inline_math] = STATE(188),
    [sym_inline_math_env] = STATE(188),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(188),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(188),
    [sym_at_command] = STATE(188),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(188),
    [sym_opt_at_text_group] = STATE(188),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(188),
    [sym_begin_opt] = STATE(89),
    [sym_end_opt] = STATE(187),
    [aux_sym_at_group_repeat1] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(95),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(405),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(405),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_RBRACK] = ACTIONS(407),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(407),
    [sym_end_group] = ACTIONS(407),
    [sym_math_shift] = ACTIONS(407),
    [sym_alignment_tab] = ACTIONS(407),
    [sym_parameter_char] = ACTIONS(407),
    [sym_superscript] = ACTIONS(407),
    [sym_subscript] = ACTIONS(407),
    [sym_active_char] = ACTIONS(407),
    [sym_comment_char] = ACTIONS(407),
    [sym_text] = ACTIONS(407),
  },
  [152] = {
    [sym__at_text_mode] = STATE(152),
    [sym_parameter] = STATE(152),
    [sym_text_env] = STATE(152),
    [sym__display_math] = STATE(152),
    [sym_tex_display_math] = STATE(152),
    [sym_latex_display_math] = STATE(152),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(152),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(152),
    [sym_tex_inline_math] = STATE(152),
    [sym_latex_inline_math] = STATE(152),
    [sym_inline_math_env] = STATE(152),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(152),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(152),
    [sym_at_command] = STATE(152),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(152),
    [sym_opt_at_text_group] = STATE(152),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(152),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym__escape] = ACTIONS(412),
    [sym_begin_group] = ACTIONS(415),
    [sym_math_shift] = ACTIONS(418),
    [sym_alignment_tab] = ACTIONS(421),
    [sym_parameter_char] = ACTIONS(424),
    [sym_superscript] = ACTIONS(421),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(421),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(421),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(433),
    [anon_sym_LBRACK] = ACTIONS(433),
    [anon_sym_RBRACK] = ACTIONS(433),
    [sym__escape] = ACTIONS(433),
    [sym_begin_group] = ACTIONS(433),
    [sym_end_group] = ACTIONS(433),
    [sym_math_shift] = ACTIONS(433),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(433),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(433),
    [sym_active_char] = ACTIONS(433),
    [sym_comment_char] = ACTIONS(433),
    [sym_text] = ACTIONS(433),
  },
  [154] = {
    [sym__text_mode] = STATE(154),
    [sym_at_group] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_text_env] = STATE(154),
    [sym__display_math] = STATE(154),
    [sym_tex_display_math] = STATE(154),
    [sym_latex_display_math] = STATE(154),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(154),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(154),
    [sym_tex_inline_math] = STATE(154),
    [sym_latex_inline_math] = STATE(154),
    [sym_inline_math_env] = STATE(154),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(154),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(154),
    [sym_command] = STATE(154),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(154),
    [sym_opt_text_group] = STATE(154),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(154),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(249),
    [sym__escape] = ACTIONS(254),
    [sym_begin_group] = ACTIONS(257),
    [sym_math_shift] = ACTIONS(260),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(266),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(435),
    [sym_comment_char] = ACTIONS(272),
    [sym_text] = ACTIONS(435),
  },
  [155] = {
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
    [sym_text] = ACTIONS(438),
  },
  [156] = {
    [sym__math_mode] = STATE(156),
    [sym_parameter] = STATE(156),
    [sym_math_environment] = STATE(156),
    [sym_tag] = STATE(156),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(156),
    [sym_command] = STATE(156),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(156),
    [sym_opt_math_group] = STATE(156),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(156),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(156),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(310),
    [sym_end_group] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(440),
    [sym_parameter_char] = ACTIONS(318),
    [sym_superscript] = ACTIONS(440),
    [sym_subscript] = ACTIONS(440),
    [sym_active_char] = ACTIONS(440),
    [sym_comment_char] = ACTIONS(321),
    [sym_text] = ACTIONS(440),
  },
  [157] = {
    [sym_math_shift] = ACTIONS(443),
  },
  [158] = {
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(445),
    [sym_end_group] = ACTIONS(445),
    [sym_math_shift] = ACTIONS(445),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(445),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [sym_comment_char] = ACTIONS(445),
    [sym_text] = ACTIONS(445),
  },
  [159] = {
    [sym_end_group] = ACTIONS(447),
  },
  [160] = {
    [sym__text_mode] = STATE(96),
    [sym_at_group] = STATE(96),
    [sym_parameter] = STATE(96),
    [sym_text_env] = STATE(96),
    [sym__display_math] = STATE(96),
    [sym_tex_display_math] = STATE(96),
    [sym_latex_display_math] = STATE(96),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(96),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(96),
    [sym_tex_inline_math] = STATE(96),
    [sym_latex_inline_math] = STATE(96),
    [sym_inline_math_env] = STATE(96),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(96),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(96),
    [sym_command] = STATE(96),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(96),
    [sym_opt_text_group] = STATE(96),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(96),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(141),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(141),
  },
  [161] = {
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym__escape] = ACTIONS(449),
    [sym_begin_group] = ACTIONS(449),
    [sym_end_group] = ACTIONS(449),
    [sym_math_shift] = ACTIONS(449),
    [sym_alignment_tab] = ACTIONS(449),
    [sym_parameter_char] = ACTIONS(449),
    [sym_superscript] = ACTIONS(449),
    [sym_subscript] = ACTIONS(449),
    [sym_active_char] = ACTIONS(449),
    [sym_comment_char] = ACTIONS(449),
    [sym_text] = ACTIONS(449),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(451),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(451),
    [sym_end_group] = ACTIONS(451),
    [sym_math_shift] = ACTIONS(451),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(451),
    [sym_superscript] = ACTIONS(451),
    [sym_subscript] = ACTIONS(451),
    [sym_active_char] = ACTIONS(451),
    [sym_comment_char] = ACTIONS(451),
    [sym_text] = ACTIONS(451),
  },
  [163] = {
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_environment] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(49),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(50),
    [sym_begin_token] = STATE(51),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(163),
    [sym_begin_opt] = STATE(52),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(304),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym__escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(310),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(318),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(453),
    [sym_comment_char] = ACTIONS(321),
    [sym_text] = ACTIONS(453),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(456),
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(456),
    [sym_end_group] = ACTIONS(456),
    [sym_math_shift] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(456),
    [sym_parameter_char] = ACTIONS(456),
    [sym_superscript] = ACTIONS(456),
    [sym_subscript] = ACTIONS(456),
    [sym_active_char] = ACTIONS(456),
    [sym_comment_char] = ACTIONS(456),
    [sym_text] = ACTIONS(456),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_RBRACK] = ACTIONS(458),
    [sym__escape] = ACTIONS(458),
    [sym_begin_group] = ACTIONS(458),
    [sym_end_group] = ACTIONS(458),
    [sym_math_shift] = ACTIONS(458),
    [sym_alignment_tab] = ACTIONS(458),
    [sym_parameter_char] = ACTIONS(458),
    [sym_superscript] = ACTIONS(458),
    [sym_subscript] = ACTIONS(458),
    [sym_active_char] = ACTIONS(458),
    [sym_comment_char] = ACTIONS(458),
    [sym_text] = ACTIONS(458),
  },
  [166] = {
    [sym_display_math_env_name] = ACTIONS(460),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [anon_sym_LBRACK] = ACTIONS(462),
    [anon_sym_RBRACK] = ACTIONS(462),
    [sym__escape] = ACTIONS(462),
    [sym_begin_group] = ACTIONS(462),
    [sym_end_group] = ACTIONS(462),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(462),
    [sym_parameter_char] = ACTIONS(462),
    [sym_superscript] = ACTIONS(462),
    [sym_subscript] = ACTIONS(462),
    [sym_active_char] = ACTIONS(462),
    [sym_comment_char] = ACTIONS(462),
    [sym_text] = ACTIONS(462),
  },
  [168] = {
    [sym_inline_math_env_name] = ACTIONS(464),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(466),
    [anon_sym_LBRACK] = ACTIONS(466),
    [anon_sym_RBRACK] = ACTIONS(466),
    [sym__escape] = ACTIONS(466),
    [sym_begin_group] = ACTIONS(466),
    [sym_end_group] = ACTIONS(466),
    [sym_math_shift] = ACTIONS(466),
    [sym_alignment_tab] = ACTIONS(466),
    [sym_parameter_char] = ACTIONS(466),
    [sym_superscript] = ACTIONS(466),
    [sym_subscript] = ACTIONS(466),
    [sym_active_char] = ACTIONS(466),
    [sym_comment_char] = ACTIONS(466),
    [sym_text] = ACTIONS(466),
  },
  [170] = {
    [sym_verbatim_env_group] = STATE(193),
    [sym_begin_group] = ACTIONS(468),
  },
  [171] = {
    [anon_sym_LBRACK] = ACTIONS(470),
    [sym_begin_group] = ACTIONS(470),
    [sym__end_of_line] = ACTIONS(470),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(472),
    [anon_sym_LBRACK] = ACTIONS(472),
    [anon_sym_RBRACK] = ACTIONS(472),
    [sym__escape] = ACTIONS(472),
    [sym_begin_group] = ACTIONS(472),
    [sym_end_group] = ACTIONS(472),
    [sym_math_shift] = ACTIONS(472),
    [sym_alignment_tab] = ACTIONS(472),
    [sym_parameter_char] = ACTIONS(472),
    [sym_superscript] = ACTIONS(472),
    [sym_subscript] = ACTIONS(472),
    [sym_active_char] = ACTIONS(472),
    [sym_comment_char] = ACTIONS(472),
    [sym_text] = ACTIONS(472),
  },
  [173] = {
    [anon_sym_LBRACK] = ACTIONS(474),
    [sym_begin_group] = ACTIONS(474),
    [sym__end_of_line] = ACTIONS(474),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(476),
    [anon_sym_LBRACK] = ACTIONS(476),
    [anon_sym_RBRACK] = ACTIONS(476),
    [sym__escape] = ACTIONS(476),
    [sym_begin_group] = ACTIONS(476),
    [sym_end_group] = ACTIONS(476),
    [sym_math_shift] = ACTIONS(476),
    [sym_alignment_tab] = ACTIONS(476),
    [sym_parameter_char] = ACTIONS(476),
    [sym_superscript] = ACTIONS(476),
    [sym_subscript] = ACTIONS(476),
    [sym_active_char] = ACTIONS(476),
    [sym_comment_char] = ACTIONS(476),
    [sym_text] = ACTIONS(476),
  },
  [175] = {
    [sym__end_of_line] = ACTIONS(137),
  },
  [176] = {
    [sym__text_mode] = STATE(96),
    [sym_at_group] = STATE(96),
    [sym_parameter] = STATE(96),
    [sym_text_env] = STATE(96),
    [sym__display_math] = STATE(96),
    [sym_tex_display_math] = STATE(96),
    [sym_latex_display_math] = STATE(96),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(96),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(96),
    [sym_tex_inline_math] = STATE(96),
    [sym_latex_inline_math] = STATE(96),
    [sym_inline_math_env] = STATE(96),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(96),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(96),
    [sym_command] = STATE(96),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(96),
    [sym_opt_text_group] = STATE(96),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(96),
    [sym_begin_opt] = STATE(28),
    [aux_sym_text_mode_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(478),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(141),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(141),
  },
  [177] = {
    [anon_sym_LBRACK] = ACTIONS(480),
    [sym__escape] = ACTIONS(480),
    [sym_begin_group] = ACTIONS(480),
    [sym_alignment_tab] = ACTIONS(480),
    [sym_parameter_char] = ACTIONS(480),
    [sym_superscript] = ACTIONS(480),
    [sym_subscript] = ACTIONS(480),
    [sym_active_char] = ACTIONS(480),
    [sym_comment_char] = ACTIONS(480),
    [sym_text] = ACTIONS(480),
  },
  [178] = {
    [sym__end_of_line] = ACTIONS(482),
  },
  [179] = {
    [sym_begin_group] = ACTIONS(243),
    [sym__end_of_line] = ACTIONS(243),
  },
  [180] = {
    [sym_begin_group] = ACTIONS(245),
    [sym__end_of_line] = ACTIONS(245),
  },
  [181] = {
    [sym__text_mode] = STATE(154),
    [sym_at_group] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_text_env] = STATE(154),
    [sym__display_math] = STATE(154),
    [sym_tex_display_math] = STATE(154),
    [sym_latex_display_math] = STATE(154),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(154),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(154),
    [sym_tex_inline_math] = STATE(154),
    [sym_latex_inline_math] = STATE(154),
    [sym_inline_math_env] = STATE(154),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(154),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(154),
    [sym_command] = STATE(154),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(18),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(18),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(18),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(18),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(18),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(18),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(18),
    [sym_emph_token] = STATE(25),
    [sym_makeatletter] = STATE(26),
    [sym_makeatletter_token] = STATE(27),
    [sym_text_group] = STATE(154),
    [sym_opt_text_group] = STATE(154),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(154),
    [sym_begin_opt] = STATE(28),
    [sym_end_opt] = STATE(196),
    [aux_sym_text_mode_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(247),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(247),
  },
  [182] = {
    [sym__verbatim_token] = ACTIONS(484),
  },
  [183] = {
    [sym__end_of_line] = ACTIONS(486),
  },
  [184] = {
    [ts_builtin_sym_end] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(488),
    [sym_end_group] = ACTIONS(488),
    [sym_math_shift] = ACTIONS(488),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(488),
    [sym_superscript] = ACTIONS(488),
    [sym_subscript] = ACTIONS(488),
    [sym_active_char] = ACTIONS(488),
    [sym_comment_char] = ACTIONS(488),
    [sym_text] = ACTIONS(488),
  },
  [185] = {
    [anon_sym_LBRACK] = ACTIONS(490),
    [anon_sym_RBRACK] = ACTIONS(490),
    [sym__escape] = ACTIONS(490),
    [sym_begin_group] = ACTIONS(490),
    [sym_end_group] = ACTIONS(490),
    [sym_math_shift] = ACTIONS(490),
    [sym_alignment_tab] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(490),
    [sym_superscript] = ACTIONS(490),
    [sym_subscript] = ACTIONS(490),
    [sym_active_char] = ACTIONS(490),
    [sym_comment_char] = ACTIONS(490),
    [sym_text] = ACTIONS(490),
  },
  [186] = {
    [sym__at_text_mode] = STATE(186),
    [sym_parameter] = STATE(186),
    [sym_text_env] = STATE(186),
    [sym__display_math] = STATE(186),
    [sym_tex_display_math] = STATE(186),
    [sym_latex_display_math] = STATE(186),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(186),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(186),
    [sym_tex_inline_math] = STATE(186),
    [sym_latex_inline_math] = STATE(186),
    [sym_inline_math_env] = STATE(186),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(186),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(186),
    [sym_at_command] = STATE(186),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(186),
    [sym_opt_at_text_group] = STATE(186),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(186),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(186),
    [anon_sym_LBRACK] = ACTIONS(409),
    [sym__escape] = ACTIONS(412),
    [sym_begin_group] = ACTIONS(415),
    [sym_end_group] = ACTIONS(492),
    [sym_math_shift] = ACTIONS(418),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(424),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(494),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(494),
  },
  [187] = {
    [anon_sym_LBRACK] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [sym__escape] = ACTIONS(497),
    [sym_begin_group] = ACTIONS(497),
    [sym_end_group] = ACTIONS(497),
    [sym_math_shift] = ACTIONS(497),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(497),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_comment_char] = ACTIONS(497),
    [sym_text] = ACTIONS(497),
  },
  [188] = {
    [sym__at_text_mode] = STATE(188),
    [sym_parameter] = STATE(188),
    [sym_text_env] = STATE(188),
    [sym__display_math] = STATE(188),
    [sym_tex_display_math] = STATE(188),
    [sym_latex_display_math] = STATE(188),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(188),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(188),
    [sym_tex_inline_math] = STATE(188),
    [sym_latex_inline_math] = STATE(188),
    [sym_inline_math_env] = STATE(188),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(188),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(188),
    [sym_at_command] = STATE(188),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(86),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(86),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(86),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(86),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(86),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(86),
    [sym_catcode_token] = STATE(24),
    [sym_emph] = STATE(86),
    [sym_emph_token] = STATE(25),
    [sym_at_text_group] = STATE(188),
    [sym_opt_at_text_group] = STATE(188),
    [sym_at_token] = STATE(86),
    [sym_comment] = STATE(188),
    [sym_begin_opt] = STATE(89),
    [aux_sym_at_group_repeat1] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(492),
    [sym__escape] = ACTIONS(412),
    [sym_begin_group] = ACTIONS(415),
    [sym_math_shift] = ACTIONS(418),
    [sym_alignment_tab] = ACTIONS(499),
    [sym_parameter_char] = ACTIONS(424),
    [sym_superscript] = ACTIONS(499),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(499),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(499),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(502),
    [anon_sym_LBRACK] = ACTIONS(502),
    [anon_sym_RBRACK] = ACTIONS(502),
    [sym__escape] = ACTIONS(502),
    [sym_begin_group] = ACTIONS(502),
    [sym_end_group] = ACTIONS(502),
    [sym_math_shift] = ACTIONS(502),
    [sym_alignment_tab] = ACTIONS(502),
    [sym_parameter_char] = ACTIONS(502),
    [sym_superscript] = ACTIONS(502),
    [sym_subscript] = ACTIONS(502),
    [sym_active_char] = ACTIONS(502),
    [sym_comment_char] = ACTIONS(502),
    [sym_text] = ACTIONS(502),
  },
  [190] = {
    [anon_sym_LBRACK] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [sym__escape] = ACTIONS(504),
    [sym_begin_group] = ACTIONS(504),
    [sym_end_group] = ACTIONS(504),
    [sym_math_shift] = ACTIONS(504),
    [sym_alignment_tab] = ACTIONS(504),
    [sym_parameter_char] = ACTIONS(504),
    [sym_superscript] = ACTIONS(504),
    [sym_subscript] = ACTIONS(504),
    [sym_active_char] = ACTIONS(504),
    [sym_comment_char] = ACTIONS(504),
    [sym_text] = ACTIONS(504),
  },
  [191] = {
    [sym_end_group] = ACTIONS(506),
  },
  [192] = {
    [sym_verbatim_env_name] = ACTIONS(508),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(510),
    [anon_sym_LBRACK] = ACTIONS(510),
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym__escape] = ACTIONS(510),
    [sym_begin_group] = ACTIONS(510),
    [sym_end_group] = ACTIONS(510),
    [sym_math_shift] = ACTIONS(510),
    [sym_alignment_tab] = ACTIONS(510),
    [sym_parameter_char] = ACTIONS(510),
    [sym_superscript] = ACTIONS(510),
    [sym_subscript] = ACTIONS(510),
    [sym_active_char] = ACTIONS(510),
    [sym_comment_char] = ACTIONS(510),
    [sym_text] = ACTIONS(510),
  },
  [194] = {
    [sym__end_of_line] = ACTIONS(275),
  },
  [195] = {
    [anon_sym_LBRACK] = ACTIONS(512),
    [sym__escape] = ACTIONS(512),
    [sym_begin_group] = ACTIONS(512),
    [sym_alignment_tab] = ACTIONS(512),
    [sym_parameter_char] = ACTIONS(512),
    [sym_superscript] = ACTIONS(512),
    [sym_subscript] = ACTIONS(512),
    [sym_active_char] = ACTIONS(512),
    [sym_comment_char] = ACTIONS(512),
    [sym_text] = ACTIONS(512),
  },
  [196] = {
    [sym_begin_group] = ACTIONS(433),
    [sym__end_of_line] = ACTIONS(433),
  },
  [197] = {
    [sym__verbatim_token] = ACTIONS(514),
  },
  [198] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(470),
    [anon_sym_RBRACK] = ACTIONS(470),
    [sym__escape] = ACTIONS(470),
    [sym_begin_group] = ACTIONS(470),
    [sym_end_group] = ACTIONS(470),
    [sym_math_shift] = ACTIONS(470),
    [sym_alignment_tab] = ACTIONS(470),
    [sym_parameter_char] = ACTIONS(470),
    [sym_superscript] = ACTIONS(470),
    [sym_subscript] = ACTIONS(470),
    [sym_active_char] = ACTIONS(470),
    [sym_comment_char] = ACTIONS(470),
    [sym_text] = ACTIONS(470),
  },
  [199] = {
    [sym_end_group] = ACTIONS(516),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_LBRACK] = ACTIONS(474),
    [anon_sym_RBRACK] = ACTIONS(474),
    [sym__escape] = ACTIONS(474),
    [sym_begin_group] = ACTIONS(474),
    [sym_end_group] = ACTIONS(474),
    [sym_math_shift] = ACTIONS(474),
    [sym_alignment_tab] = ACTIONS(474),
    [sym_parameter_char] = ACTIONS(474),
    [sym_superscript] = ACTIONS(474),
    [sym_subscript] = ACTIONS(474),
    [sym_active_char] = ACTIONS(474),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(474),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(2),
  [9] = {.count = 1, .reusable = true}, SHIFT(3),
  [11] = {.count = 1, .reusable = true}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(29),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(30),
  [27] = {.count = 1, .reusable = true}, SHIFT(31),
  [29] = {.count = 1, .reusable = false}, SHIFT(32),
  [31] = {.count = 1, .reusable = false}, SHIFT(33),
  [33] = {.count = 1, .reusable = false}, SHIFT(34),
  [35] = {.count = 1, .reusable = false}, SHIFT(35),
  [37] = {.count = 1, .reusable = false}, SHIFT(36),
  [39] = {.count = 1, .reusable = false}, SHIFT(37),
  [41] = {.count = 1, .reusable = false}, SHIFT(38),
  [43] = {.count = 1, .reusable = true}, SHIFT(39),
  [45] = {.count = 1, .reusable = false}, SHIFT(40),
  [47] = {.count = 1, .reusable = false}, SHIFT(41),
  [49] = {.count = 1, .reusable = false}, SHIFT(42),
  [51] = {.count = 1, .reusable = true}, SHIFT(43),
  [53] = {.count = 1, .reusable = true}, SHIFT(44),
  [55] = {.count = 1, .reusable = true}, SHIFT(45),
  [57] = {.count = 1, .reusable = true}, SHIFT(46),
  [59] = {.count = 1, .reusable = true}, SHIFT(47),
  [61] = {.count = 1, .reusable = true}, SHIFT(53),
  [63] = {.count = 1, .reusable = true}, SHIFT(54),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(55),
  [69] = {.count = 1, .reusable = false}, SHIFT(55),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(57),
  [77] = {.count = 1, .reusable = true}, SHIFT(62),
  [79] = {.count = 1, .reusable = true}, SHIFT(63),
  [81] = {.count = 1, .reusable = true}, SHIFT(66),
  [83] = {.count = 1, .reusable = true}, SHIFT(67),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [87] = {.count = 1, .reusable = true}, SHIFT(72),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(80),
  [93] = {.count = 1, .reusable = true}, SHIFT(83),
  [95] = {.count = 1, .reusable = true}, SHIFT(84),
  [97] = {.count = 1, .reusable = true}, SHIFT(90),
  [99] = {.count = 1, .reusable = true}, SHIFT(85),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(91),
  [105] = {.count = 1, .reusable = true}, SHIFT(93),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(94),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(95),
  [141] = {.count = 1, .reusable = true}, SHIFT(96),
  [143] = {.count = 1, .reusable = false}, SHIFT(97),
  [145] = {.count = 1, .reusable = true}, SHIFT(98),
  [147] = {.count = 1, .reusable = true}, SHIFT(99),
  [149] = {.count = 1, .reusable = true}, SHIFT(101),
  [151] = {.count = 1, .reusable = true}, SHIFT(102),
  [153] = {.count = 1, .reusable = true}, SHIFT(104),
  [155] = {.count = 1, .reusable = true}, SHIFT(106),
  [157] = {.count = 1, .reusable = true}, SHIFT(108),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [161] = {.count = 1, .reusable = true}, SHIFT(109),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [167] = {.count = 1, .reusable = true}, SHIFT(110),
  [169] = {.count = 1, .reusable = true}, SHIFT(112),
  [171] = {.count = 1, .reusable = true}, SHIFT(113),
  [173] = {.count = 1, .reusable = true}, SHIFT(115),
  [175] = {.count = 1, .reusable = true}, SHIFT(120),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [179] = {.count = 1, .reusable = false}, SHIFT(122),
  [181] = {.count = 1, .reusable = false}, SHIFT(123),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [185] = {.count = 1, .reusable = true}, SHIFT(126),
  [187] = {.count = 1, .reusable = false}, SHIFT(127),
  [189] = {.count = 1, .reusable = false}, SHIFT(128),
  [191] = {.count = 1, .reusable = false}, SHIFT(129),
  [193] = {.count = 1, .reusable = false}, SHIFT(130),
  [195] = {.count = 1, .reusable = true}, SHIFT(131),
  [197] = {.count = 1, .reusable = true}, SHIFT(132),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(136),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(130),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2, .alias_sequence_id = 3),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2, .alias_sequence_id = 4),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [215] = {.count = 1, .reusable = true}, SHIFT(142),
  [217] = {.count = 1, .reusable = true}, SHIFT(143),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [221] = {.count = 1, .reusable = false}, SHIFT(144),
  [223] = {.count = 1, .reusable = false}, SHIFT(145),
  [225] = {.count = 1, .reusable = true}, SHIFT(146),
  [227] = {.count = 1, .reusable = true}, SHIFT(147),
  [229] = {.count = 1, .reusable = true}, SHIFT(148),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [239] = {.count = 1, .reusable = true}, SHIFT(150),
  [241] = {.count = 1, .reusable = true}, SHIFT(152),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [247] = {.count = 1, .reusable = true}, SHIFT(154),
  [249] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(94),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(8),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [277] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(96),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(155),
  [286] = {.count = 1, .reusable = true}, SHIFT(156),
  [288] = {.count = 1, .reusable = true}, SHIFT(157),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [292] = {.count = 1, .reusable = true}, SHIFT(158),
  [294] = {.count = 1, .reusable = true}, SHIFT(160),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [302] = {.count = 1, .reusable = true}, SHIFT(163),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(45),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(46),
  [313] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(109),
  [318] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [321] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(8),
  [324] = {.count = 1, .reusable = true}, SHIFT(164),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [328] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(112),
  [331] = {.count = 1, .reusable = true}, SHIFT(165),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [335] = {.count = 1, .reusable = true}, SHIFT(123),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [339] = {.count = 1, .reusable = true}, SHIFT(166),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [343] = {.count = 1, .reusable = true}, SHIFT(168),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [347] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [349] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(122),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [358] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(126),
  [361] = {.count = 1, .reusable = true}, SHIFT(171),
  [363] = {.count = 1, .reusable = true}, SHIFT(172),
  [365] = {.count = 1, .reusable = true}, SHIFT(173),
  [367] = {.count = 1, .reusable = true}, SHIFT(174),
  [369] = {.count = 1, .reusable = true}, SHIFT(175),
  [371] = {.count = 1, .reusable = true}, SHIFT(176),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [375] = {.count = 1, .reusable = true}, SHIFT(177),
  [377] = {.count = 1, .reusable = true}, SHIFT(179),
  [379] = {.count = 1, .reusable = true}, SHIFT(181),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [383] = {.count = 1, .reusable = true}, SHIFT(182),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3, .alias_sequence_id = 5),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3, .alias_sequence_id = 6),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [391] = {.count = 1, .reusable = true}, SHIFT(184),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [399] = {.count = 1, .reusable = true}, SHIFT(185),
  [401] = {.count = 1, .reusable = true}, SHIFT(186),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [405] = {.count = 1, .reusable = true}, SHIFT(188),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(146),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(84),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(152),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [427] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(85),
  [430] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(8),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [435] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(154),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(156),
  [443] = {.count = 1, .reusable = true}, SHIFT(189),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [447] = {.count = 1, .reusable = true}, SHIFT(190),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [453] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(163),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [460] = {.count = 1, .reusable = true}, SHIFT(191),
  [462] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [464] = {.count = 1, .reusable = true}, SHIFT(128),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [468] = {.count = 1, .reusable = true}, SHIFT(192),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [472] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [478] = {.count = 1, .reusable = true}, SHIFT(194),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [482] = {.count = 1, .reusable = true}, SHIFT(195),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [486] = {.count = 1, .reusable = true}, SHIFT(197),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [492] = {.count = 1, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2),
  [494] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(186),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [499] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(188),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [506] = {.count = 1, .reusable = true}, SHIFT(198),
  [508] = {.count = 1, .reusable = true}, SHIFT(199),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 3),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [516] = {.count = 1, .reusable = true}, SHIFT(200),
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
