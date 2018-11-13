#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 198
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 2
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

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
  anon_sym_makeatletter = 19,
  anon_sym_makeatother = 20,
  sym__escape = 21,
  sym_begin_group = 22,
  sym_end_group = 23,
  sym_math_shift = 24,
  sym_alignment_tab = 25,
  sym__end_of_line = 26,
  sym_parameter_char = 27,
  sym_superscript = 28,
  sym_subscript = 29,
  sym__name = 30,
  sym__at_name = 31,
  sym_active_char = 32,
  sym_comment_char = 33,
  sym_text = 34,
  sym_number = 35,
  sym__verbatim_token = 36,
  sym_magic_text = 37,
  sym_comment_text = 38,
  sym_document = 39,
  sym__text_mode = 40,
  sym_text_mode = 41,
  sym__at_text_mode = 42,
  sym_at_group = 43,
  sym__math_mode = 44,
  sym_math_mode = 45,
  sym_parameter = 46,
  sym_text_env = 47,
  sym_math_environment = 48,
  sym__display_math = 49,
  sym_tex_display_math = 50,
  sym_latex_display_math = 51,
  sym_begin_display_math = 52,
  sym_end_display_math = 53,
  sym_begin_inline_math = 54,
  sym_end_inline_math = 55,
  sym_display_math_env = 56,
  sym_display_math_begin = 57,
  sym_display_math_end = 58,
  sym_display_math_env_group = 59,
  sym__inline_math = 60,
  sym_tex_inline_math = 61,
  sym_latex_inline_math = 62,
  sym_inline_math_env = 63,
  sym_inline_math_begin = 64,
  sym_inline_math_end = 65,
  sym_inline_math_env_group = 66,
  sym_tag = 67,
  sym_tag_token = 68,
  sym_verbatim_env = 69,
  sym_verbatim_begin = 70,
  sym_verbatim_end = 71,
  sym_verbatim_env_group = 72,
  sym_escaped = 73,
  sym_command = 74,
  sym_at_command = 75,
  sym_begin = 76,
  sym_begin_token = 77,
  sym_end = 78,
  sym_end_token = 79,
  sym_documentclass = 80,
  sym_documentclass_token = 81,
  sym_usepackage = 82,
  sym_usepackage_token = 83,
  sym_include = 84,
  sym_include_token = 85,
  sym_section = 86,
  sym_section_token = 87,
  sym_storage = 88,
  sym_storage_token = 89,
  sym_catcode = 90,
  sym_catcode_token = 91,
  sym_makeatletter = 92,
  sym_makeatletter_token = 93,
  sym_makeatother = 94,
  sym_makeatother_token = 95,
  sym_text_group = 96,
  sym_at_text_group = 97,
  sym_simple_text_group = 98,
  sym_opt_text_group = 99,
  sym_opt_at_text_group = 100,
  sym_math_group = 101,
  sym_opt_math_group = 102,
  sym_math_text_group = 103,
  sym_token = 104,
  sym_at_token = 105,
  sym_comment = 106,
  sym_verbatim_text = 107,
  sym_begin_opt = 108,
  sym_end_opt = 109,
  aux_sym_text_mode_repeat1 = 110,
  aux_sym_at_group_repeat1 = 111,
  aux_sym_math_mode_repeat1 = 112,
  aux_sym_verbatim_text_repeat1 = 113,
  anon_alias_sym_env_name = 114,
  anon_alias_sym_text = 115,
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
        ADVANCE(116);
      if (lookahead == 'g')
        ADVANCE(121);
      if (lookahead == 'i')
        ADVANCE(126);
      if (lookahead == 'k')
        ADVANCE(135);
      if (lookahead == 'l')
        ADVANCE(137);
      if (lookahead == 'm')
        ADVANCE(147);
      if (lookahead == 'p')
        ADVANCE(178);
      if (lookahead == 's')
        ADVANCE(186);
      if (lookahead == 't')
        ADVANCE(203);
      if (lookahead == 'u')
        ADVANCE(206);
      if (lookahead == 'v')
        ADVANCE(216);
      if (lookahead == 'x')
        ADVANCE(223);
      if (lookahead == '{')
        ADVANCE(224);
      if (lookahead == '}')
        ADVANCE(225);
      if (lookahead == '~')
        ADVANCE(226);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(231);
      ADVANCE(232);
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
      if (lookahead == 'n')
        ADVANCE(107);
      if (lookahead == 'q')
        ADVANCE(109);
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
      if (lookahead == 'd')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 'u')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(122);
      if (lookahead == 'd')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(128);
      if (lookahead == 'p')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'u')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
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
      if (lookahead == 'n')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(148);
      if (lookahead == 'i')
        ADVANCE(166);
      if (lookahead == 'u')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'k')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(153);
      if (lookahead == 'o')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 't')
        ADVANCE(156);
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
      if (lookahead == 'r')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(168);
      if (lookahead == 't')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(174);
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
      if (lookahead == 'i')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'h')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(187);
      if (lookahead == 'p')
        ADVANCE(192);
      if (lookahead == 'u')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'o')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'n')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'l')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(196);
      if (lookahead == 's')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(187);
      if (lookahead == 'u')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'g')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 's')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'p')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'c')
        ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'k')
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
      if (lookahead == 'g')
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'r')
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'a')
        ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 't')
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'i')
        ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'm')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'd')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'V')
        ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(11);
      if (lookahead == 'e')
        ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == '@')
        ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(21);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 233:
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
        ADVANCE(224);
      if (lookahead == '~')
        ADVANCE(226);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 235:
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
        ADVANCE(224);
      if (lookahead == '~')
        ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 236:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'b')
        ADVANCE(250);
      if (lookahead == 'c')
        ADVANCE(255);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'k')
        ADVANCE(291);
      if (lookahead == 'm')
        ADVANCE(293);
      if (lookahead == 'p')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(316);
      if (lookahead == 'u')
        ADVANCE(331);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(240);
      if (lookahead == 'p')
        ADVANCE(245);
      if (lookahead == 's')
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(256);
      if (lookahead == 'h')
        ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(284);
      if (lookahead == 'p')
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(294);
      if (lookahead == 'i')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(311);
      if (lookahead == 't')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(317);
      if (lookahead == 'u')
        ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(317);
      if (lookahead == 'u')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 344:
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
        ADVANCE(224);
      if (lookahead == '}')
        ADVANCE(225);
      if (lookahead == '~')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(234);
      END_STATE();
    case 345:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(230);
      END_STATE();
    case 346:
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
        ADVANCE(224);
      if (lookahead == '}')
        ADVANCE(225);
      if (lookahead == '~')
        ADVANCE(226);
      ADVANCE(234);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(348);
      if (lookahead == '!')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(361);
      END_STATE();
    case 348:
      if (lookahead == '!')
        ADVANCE(349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(348);
      END_STATE();
    case 349:
      if (lookahead == 'T')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'X')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(353);
      if (lookahead != 0)
        ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(361);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(361);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(361);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead == '\n')
        ADVANCE(353);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_magic_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(348);
      if (lookahead == '!')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(361);
      END_STATE();
    case 363:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 364:
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__verbatim_token);
      END_STATE();
    case 366:
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'b')
        ADVANCE(250);
      if (lookahead == 'c')
        ADVANCE(255);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'k')
        ADVANCE(291);
      if (lookahead == 'm')
        ADVANCE(367);
      if (lookahead == 'p')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(316);
      if (lookahead == 't')
        ADVANCE(368);
      if (lookahead == 'u')
        ADVANCE(331);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 371:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(365);
      END_STATE();
    case 372:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'b')
        ADVANCE(250);
      if (lookahead == 'c')
        ADVANCE(255);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'k')
        ADVANCE(291);
      if (lookahead == 'm')
        ADVANCE(293);
      if (lookahead == 'p')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(316);
      if (lookahead == 'u')
        ADVANCE(331);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(342);
      if (lookahead == 'n')
        ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(375);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(244);
      END_STATE();
    case 376:
      if (lookahead == 'V')
        ADVANCE(377);
      if (lookahead == 'a')
        ADVANCE(386);
      if (lookahead == 'd')
        ADVANCE(394);
      if (lookahead == 'e')
        ADVANCE(420);
      if (lookahead == 'f')
        ADVANCE(428);
      if (lookahead == 'g')
        ADVANCE(433);
      if (lookahead == 'l')
        ADVANCE(438);
      if (lookahead == 'm')
        ADVANCE(447);
      if (lookahead == 's')
        ADVANCE(462);
      if (lookahead == 'v')
        ADVANCE(465);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(378);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(379);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(389);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(391);
      if (lookahead == 'a')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(395);
      if (lookahead == 'g')
        ADVANCE(399);
      if (lookahead == 'i')
        ADVANCE(403);
      if (lookahead == 'm')
        ADVANCE(412);
      if (lookahead == 's')
        ADVANCE(415);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(422);
      if (lookahead == 'u')
        ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
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
        ADVANCE(234);
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
        ADVANCE(234);
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
        ADVANCE(234);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(448);
      if (lookahead == 'i')
        ADVANCE(451);
      if (lookahead == 'u')
        ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
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
        ADVANCE(234);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(377);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(234);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == '{')
        ADVANCE(224);
      END_STATE();
    case 474:
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 475:
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 476:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(477);
      if (lookahead == 'b')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(494);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(521);
      if (lookahead == 'k')
        ADVANCE(530);
      if (lookahead == 'm')
        ADVANCE(532);
      if (lookahead == 'p')
        ADVANCE(546);
      if (lookahead == 's')
        ADVANCE(554);
      if (lookahead == 'u')
        ADVANCE(569);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(579);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(478);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(479);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(480);
      if (lookahead == 'p')
        ADVANCE(484);
      if (lookahead == 's')
        ADVANCE(487);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(481);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(482);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(485);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(488);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(491);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(492);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(493);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(495);
      if (lookahead == 'h')
        ADVANCE(501);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(496);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(497);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(498);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(499);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(500);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(58);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(502);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(503);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(504);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(505);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(507);
      if (lookahead == 'o')
        ADVANCE(509);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(508);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(511);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(512);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(513);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(514);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(515);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(516);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(517);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(518);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(519);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(520);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(522);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(523);
      if (lookahead == 'p')
        ADVANCE(528);
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
      if (lookahead == 'u')
        ADVANCE(525);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(526);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(527);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(529);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(527);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(531);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(495);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(533);
      if (lookahead == 'i')
        ADVANCE(543);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(534);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(535);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(536);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(537);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(538);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(539);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(540);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(541);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(542);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(544);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(545);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(487);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(547);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(548);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(549);
      if (lookahead == 't')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(550);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(551);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(552);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(553);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(555);
      if (lookahead == 'u')
        ADVANCE(560);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(556);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(557);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(558);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(559);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(483);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(561);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(562);
      if (lookahead == 's')
        ADVANCE(565);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(563);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(564);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(549);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(555);
      if (lookahead == 'u')
        ADVANCE(566);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(567);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(568);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(555);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(570);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(571);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(572);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(573);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(574);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(575);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(576);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(577);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(578);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(580);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(507);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 581:
      if (lookahead == 'a')
        ADVANCE(237);
      if (lookahead == 'b')
        ADVANCE(250);
      if (lookahead == 'c')
        ADVANCE(255);
      if (lookahead == 'd')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead == 'k')
        ADVANCE(291);
      if (lookahead == 'm')
        ADVANCE(367);
      if (lookahead == 'p')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(316);
      if (lookahead == 't')
        ADVANCE(368);
      if (lookahead == 'u')
        ADVANCE(331);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 582:
      if (lookahead == ')')
        ADVANCE(8);
      END_STATE();
    case 583:
      if (lookahead == '(')
        ADVANCE(7);
      if (lookahead == '[')
        ADVANCE(22);
      if (lookahead == 'a')
        ADVANCE(477);
      if (lookahead == 'b')
        ADVANCE(489);
      if (lookahead == 'c')
        ADVANCE(494);
      if (lookahead == 'd')
        ADVANCE(506);
      if (lookahead == 'i')
        ADVANCE(521);
      if (lookahead == 'k')
        ADVANCE(530);
      if (lookahead == 'm')
        ADVANCE(584);
      if (lookahead == 'p')
        ADVANCE(546);
      if (lookahead == 's')
        ADVANCE(554);
      if (lookahead == 'u')
        ADVANCE(569);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(579);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(232);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(543);
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
  [1] = {.lex_state = 233},
  [2] = {.lex_state = 235},
  [3] = {.lex_state = 236},
  [4] = {.lex_state = 344},
  [5] = {.lex_state = 233},
  [6] = {.lex_state = 345},
  [7] = {.lex_state = 346},
  [8] = {.lex_state = 347},
  [9] = {.lex_state = 363},
  [10] = {.lex_state = 363},
  [11] = {.lex_state = 233},
  [12] = {.lex_state = 233},
  [13] = {.lex_state = 233},
  [14] = {.lex_state = 233},
  [15] = {.lex_state = 364},
  [16] = {.lex_state = 233},
  [17] = {.lex_state = 233},
  [18] = {.lex_state = 346},
  [19] = {.lex_state = 233},
  [20] = {.lex_state = 233},
  [21] = {.lex_state = 233},
  [22] = {.lex_state = 233},
  [23] = {.lex_state = 346},
  [24] = {.lex_state = 233},
  [25] = {.lex_state = 233},
  [26] = {.lex_state = 233},
  [27] = {.lex_state = 235},
  [28] = {.lex_state = 233},
  [29] = {.lex_state = 233},
  [30] = {.lex_state = 233},
  [31] = {.lex_state = 346},
  [32] = {.lex_state = 233},
  [33] = {.lex_state = 233},
  [34] = {.lex_state = 233},
  [35] = {.lex_state = 233},
  [36] = {.lex_state = 233},
  [37] = {.lex_state = 346},
  [38] = {.lex_state = 233},
  [39] = {.lex_state = 233},
  [40] = {.lex_state = 346},
  [41] = {.lex_state = 346},
  [42] = {.lex_state = 344},
  [43] = {.lex_state = 366},
  [44] = {.lex_state = 344},
  [45] = {.lex_state = 233},
  [46] = {.lex_state = 233},
  [47] = {.lex_state = 233},
  [48] = {.lex_state = 233},
  [49] = {.lex_state = 233},
  [50] = {.lex_state = 235},
  [51] = {.lex_state = 233},
  [52] = {.lex_state = 346},
  [53] = {.lex_state = 346},
  [54] = {.lex_state = 233},
  [55] = {.lex_state = 233},
  [56] = {.lex_state = 233},
  [57] = {.lex_state = 233},
  [58] = {.lex_state = 233},
  [59] = {.lex_state = 371},
  [60] = {.lex_state = 371},
  [61] = {.lex_state = 372},
  [62] = {.lex_state = 346},
  [63] = {.lex_state = 233},
  [64] = {.lex_state = 233},
  [65] = {.lex_state = 376},
  [66] = {.lex_state = 473},
  [67] = {.lex_state = 233},
  [68] = {.lex_state = 473},
  [69] = {.lex_state = 233},
  [70] = {.lex_state = 233},
  [71] = {.lex_state = 346},
  [72] = {.lex_state = 233},
  [73] = {.lex_state = 346},
  [74] = {.lex_state = 233},
  [75] = {.lex_state = 346},
  [76] = {.lex_state = 346},
  [77] = {.lex_state = 233},
  [78] = {.lex_state = 474},
  [79] = {.lex_state = 475},
  [80] = {.lex_state = 476},
  [81] = {.lex_state = 344},
  [82] = {.lex_state = 346},
  [83] = {.lex_state = 346},
  [84] = {.lex_state = 346},
  [85] = {.lex_state = 346},
  [86] = {.lex_state = 235},
  [87] = {.lex_state = 233},
  [88] = {.lex_state = 346},
  [89] = {.lex_state = 346},
  [90] = {.lex_state = 235},
  [91] = {.lex_state = 233},
  [92] = {.lex_state = 346},
  [93] = {.lex_state = 344},
  [94] = {.lex_state = 233},
  [95] = {.lex_state = 346},
  [96] = {.lex_state = 344},
  [97] = {.lex_state = 233},
  [98] = {.lex_state = 346},
  [99] = {.lex_state = 344},
  [100] = {.lex_state = 346},
  [101] = {.lex_state = 581},
  [102] = {.lex_state = 346},
  [103] = {.lex_state = 233},
  [104] = {.lex_state = 346},
  [105] = {.lex_state = 235},
  [106] = {.lex_state = 233},
  [107] = {.lex_state = 235},
  [108] = {.lex_state = 346},
  [109] = {.lex_state = 233},
  [110] = {.lex_state = 582},
  [111] = {.lex_state = 346},
  [112] = {.lex_state = 372},
  [113] = {.lex_state = 346},
  [114] = {.lex_state = 233},
  [115] = {.lex_state = 346},
  [116] = {.lex_state = 233},
  [117] = {.lex_state = 233},
  [118] = {.lex_state = 346},
  [119] = {.lex_state = 371},
  [120] = {.lex_state = 233},
  [121] = {.lex_state = 346},
  [122] = {.lex_state = 346},
  [123] = {.lex_state = 233},
  [124] = {.lex_state = 344},
  [125] = {.lex_state = 344},
  [126] = {.lex_state = 344},
  [127] = {.lex_state = 344},
  [128] = {.lex_state = 344},
  [129] = {.lex_state = 233},
  [130] = {.lex_state = 371},
  [131] = {.lex_state = 473},
  [132] = {.lex_state = 235},
  [133] = {.lex_state = 364},
  [134] = {.lex_state = 371},
  [135] = {.lex_state = 473},
  [136] = {.lex_state = 346},
  [137] = {.lex_state = 346},
  [138] = {.lex_state = 346},
  [139] = {.lex_state = 475},
  [140] = {.lex_state = 345},
  [141] = {.lex_state = 346},
  [142] = {.lex_state = 346},
  [143] = {.lex_state = 583},
  [144] = {.lex_state = 346},
  [145] = {.lex_state = 344},
  [146] = {.lex_state = 346},
  [147] = {.lex_state = 235},
  [148] = {.lex_state = 346},
  [149] = {.lex_state = 233},
  [150] = {.lex_state = 346},
  [151] = {.lex_state = 235},
  [152] = {.lex_state = 346},
  [153] = {.lex_state = 344},
  [154] = {.lex_state = 233},
  [155] = {.lex_state = 346},
  [156] = {.lex_state = 344},
  [157] = {.lex_state = 344},
  [158] = {.lex_state = 346},
  [159] = {.lex_state = 346},
  [160] = {.lex_state = 235},
  [161] = {.lex_state = 346},
  [162] = {.lex_state = 346},
  [163] = {.lex_state = 376},
  [164] = {.lex_state = 346},
  [165] = {.lex_state = 376},
  [166] = {.lex_state = 346},
  [167] = {.lex_state = 233},
  [168] = {.lex_state = 473},
  [169] = {.lex_state = 346},
  [170] = {.lex_state = 473},
  [171] = {.lex_state = 346},
  [172] = {.lex_state = 371},
  [173] = {.lex_state = 344},
  [174] = {.lex_state = 233},
  [175] = {.lex_state = 371},
  [176] = {.lex_state = 473},
  [177] = {.lex_state = 473},
  [178] = {.lex_state = 235},
  [179] = {.lex_state = 364},
  [180] = {.lex_state = 371},
  [181] = {.lex_state = 346},
  [182] = {.lex_state = 346},
  [183] = {.lex_state = 344},
  [184] = {.lex_state = 346},
  [185] = {.lex_state = 235},
  [186] = {.lex_state = 346},
  [187] = {.lex_state = 346},
  [188] = {.lex_state = 344},
  [189] = {.lex_state = 376},
  [190] = {.lex_state = 346},
  [191] = {.lex_state = 371},
  [192] = {.lex_state = 233},
  [193] = {.lex_state = 473},
  [194] = {.lex_state = 364},
  [195] = {.lex_state = 346},
  [196] = {.lex_state = 344},
  [197] = {.lex_state = 346},
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
    [sym__text_mode] = STATE(28),
    [sym_text_mode] = STATE(10),
    [sym_at_group] = STATE(28),
    [sym_parameter] = STATE(28),
    [sym_text_env] = STATE(28),
    [sym__display_math] = STATE(28),
    [sym_tex_display_math] = STATE(28),
    [sym_latex_display_math] = STATE(28),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(28),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(28),
    [sym_tex_inline_math] = STATE(28),
    [sym_latex_inline_math] = STATE(28),
    [sym_inline_math_env] = STATE(28),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(28),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(28),
    [sym_command] = STATE(28),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(28),
    [sym_opt_text_group] = STATE(28),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(28),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(28),
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
    [anon_sym_makeatletter] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [4] = {
    [sym__text_mode] = STATE(42),
    [sym_at_group] = STATE(42),
    [sym_parameter] = STATE(42),
    [sym_text_env] = STATE(42),
    [sym__display_math] = STATE(42),
    [sym_tex_display_math] = STATE(42),
    [sym_latex_display_math] = STATE(42),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(42),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(42),
    [sym_tex_inline_math] = STATE(42),
    [sym_latex_inline_math] = STATE(42),
    [sym_inline_math_env] = STATE(42),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(42),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(42),
    [sym_command] = STATE(42),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(42),
    [sym_opt_text_group] = STATE(42),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(42),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(42),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(49),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(51),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(51),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(51),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(51),
  },
  [5] = {
    [sym__math_mode] = STATE(51),
    [sym_math_mode] = STATE(46),
    [sym_parameter] = STATE(51),
    [sym_math_environment] = STATE(51),
    [sym_tag] = STATE(51),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(51),
    [sym_command] = STATE(51),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(51),
    [sym_opt_math_group] = STATE(51),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(51),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(59),
  },
  [6] = {
    [sym_number] = ACTIONS(61),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym__escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(63),
    [sym_end_group] = ACTIONS(63),
    [sym_math_shift] = ACTIONS(63),
    [sym_alignment_tab] = ACTIONS(63),
    [sym_parameter_char] = ACTIONS(63),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(63),
    [sym_active_char] = ACTIONS(63),
    [sym_comment_char] = ACTIONS(63),
    [sym_text] = ACTIONS(63),
  },
  [8] = {
    [sym_magic_text] = ACTIONS(65),
    [sym_comment_text] = ACTIONS(67),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [11] = {
    [sym__math_mode] = STATE(55),
    [sym_math_mode] = STATE(54),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_tag] = STATE(55),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(73),
  },
  [12] = {
    [sym__math_mode] = STATE(55),
    [sym_math_mode] = STATE(56),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_tag] = STATE(55),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(73),
  },
  [13] = {
    [sym__math_mode] = STATE(55),
    [sym_math_mode] = STATE(57),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_tag] = STATE(55),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(73),
  },
  [14] = {
    [sym__math_mode] = STATE(55),
    [sym_math_mode] = STATE(58),
    [sym_parameter] = STATE(55),
    [sym_math_environment] = STATE(55),
    [sym_tag] = STATE(55),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(55),
    [sym_command] = STATE(55),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(55),
    [sym_opt_math_group] = STATE(55),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(55),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(55),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(73),
  },
  [15] = {
    [sym_verbatim_text] = STATE(59),
    [aux_sym_verbatim_text_repeat1] = STATE(60),
    [sym__verbatim_token] = ACTIONS(75),
  },
  [16] = {
    [sym__text_mode] = STATE(64),
    [sym_at_group] = STATE(64),
    [sym_parameter] = STATE(64),
    [sym_text_env] = STATE(64),
    [sym__display_math] = STATE(64),
    [sym_tex_display_math] = STATE(64),
    [sym_latex_display_math] = STATE(64),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(64),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(64),
    [sym_tex_inline_math] = STATE(64),
    [sym_latex_inline_math] = STATE(64),
    [sym_inline_math_env] = STATE(64),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(64),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(62),
    [sym_end_token] = STATE(63),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(64),
    [sym_opt_text_group] = STATE(64),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(64),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(77),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(79),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(79),
  },
  [17] = {
    [sym_display_math_env_group] = STATE(66),
    [sym_inline_math_env_group] = STATE(67),
    [sym_verbatim_env_group] = STATE(68),
    [sym_simple_text_group] = STATE(69),
    [sym_begin_group] = ACTIONS(81),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym__escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(83),
    [sym_end_group] = ACTIONS(83),
    [sym_math_shift] = ACTIONS(83),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(83),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(83),
    [sym_text] = ACTIONS(83),
  },
  [19] = {
    [sym_simple_text_group] = STATE(71),
    [sym_opt_text_group] = STATE(72),
    [sym_begin_opt] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(85),
  },
  [20] = {
    [sym_simple_text_group] = STATE(73),
    [sym_opt_text_group] = STATE(74),
    [sym_begin_opt] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(85),
  },
  [21] = {
    [sym_text_group] = STATE(75),
    [sym_begin_group] = ACTIONS(11),
  },
  [22] = {
    [sym_text_group] = STATE(76),
    [sym_opt_text_group] = STATE(77),
    [sym_begin_opt] = STATE(27),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym__escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(87),
    [sym_math_shift] = ACTIONS(87),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [sym_comment_char] = ACTIONS(87),
    [sym_text] = ACTIONS(87),
  },
  [24] = {
    [sym_escaped] = STATE(79),
    [sym__escape] = ACTIONS(89),
  },
  [25] = {
    [sym__at_text_mode] = STATE(87),
    [sym_parameter] = STATE(87),
    [sym_text_env] = STATE(87),
    [sym__display_math] = STATE(87),
    [sym_tex_display_math] = STATE(87),
    [sym_latex_display_math] = STATE(87),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(87),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(87),
    [sym_tex_inline_math] = STATE(87),
    [sym_latex_inline_math] = STATE(87),
    [sym_inline_math_env] = STATE(87),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(87),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(87),
    [sym_at_command] = STATE(87),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_makeatother] = STATE(84),
    [sym_makeatother_token] = STATE(85),
    [sym_at_text_group] = STATE(87),
    [sym_opt_at_text_group] = STATE(87),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(95),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(95),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(95),
  },
  [26] = {
    [anon_sym_LBRACK] = ACTIONS(99),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_comment_char] = ACTIONS(99),
    [sym_text] = ACTIONS(99),
  },
  [27] = {
    [sym__text_mode] = STATE(90),
    [sym_at_group] = STATE(90),
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
    [sym_command] = STATE(90),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(90),
    [sym_opt_text_group] = STATE(90),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(90),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(89),
    [aux_sym_text_mode_repeat1] = STATE(90),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(103),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(103),
  },
  [28] = {
    [sym__text_mode] = STATE(91),
    [sym_at_group] = STATE(91),
    [sym_parameter] = STATE(91),
    [sym_text_env] = STATE(91),
    [sym__display_math] = STATE(91),
    [sym_tex_display_math] = STATE(91),
    [sym_latex_display_math] = STATE(91),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(91),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(91),
    [sym_tex_inline_math] = STATE(91),
    [sym_latex_inline_math] = STATE(91),
    [sym_inline_math_env] = STATE(91),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(91),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(91),
    [sym_command] = STATE(91),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(91),
    [sym_opt_text_group] = STATE(91),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(91),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(107),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(107),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(109),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_comment_char] = ACTIONS(109),
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
    [ts_builtin_sym_end] = ACTIONS(113),
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
    [sym_text] = ACTIONS(113),
  },
  [32] = {
    [sym_begin_group] = ACTIONS(115),
  },
  [33] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
  },
  [35] = {
    [sym_begin_group] = ACTIONS(121),
  },
  [36] = {
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(125),
    [sym_end_group] = ACTIONS(125),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(125),
    [sym_parameter_char] = ACTIONS(125),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(125),
    [sym_active_char] = ACTIONS(125),
    [sym_comment_char] = ACTIONS(125),
    [sym_text] = ACTIONS(125),
  },
  [38] = {
    [sym__escape] = ACTIONS(127),
  },
  [39] = {
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(129),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_comment_char] = ACTIONS(129),
    [sym_text] = ACTIONS(129),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym__escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(131),
    [sym_text] = ACTIONS(131),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_end_group] = ACTIONS(133),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(93),
    [sym_opt_text_group] = STATE(93),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(93),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(137),
  },
  [43] = {
    [anon_sym_tag] = ACTIONS(139),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym__name] = ACTIONS(47),
  },
  [44] = {
    [sym__math_mode] = STATE(96),
    [sym_parameter] = STATE(96),
    [sym_math_environment] = STATE(96),
    [sym_tag] = STATE(96),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(96),
    [sym_command] = STATE(96),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(96),
    [sym_opt_math_group] = STATE(96),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(96),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(143),
  },
  [45] = {
    [sym__math_mode] = STATE(51),
    [sym_math_mode] = STATE(97),
    [sym_parameter] = STATE(51),
    [sym_math_environment] = STATE(51),
    [sym_tag] = STATE(51),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(51),
    [sym_command] = STATE(51),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(51),
    [sym_opt_math_group] = STATE(51),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(51),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(51),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(59),
  },
  [46] = {
    [sym_math_shift] = ACTIONS(145),
  },
  [47] = {
    [sym_math_text_group] = STATE(100),
    [sym_begin_group] = ACTIONS(147),
  },
  [48] = {
    [sym__math_mode] = STATE(103),
    [sym_parameter] = STATE(103),
    [sym_math_environment] = STATE(103),
    [sym_tag] = STATE(103),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(103),
    [sym_command] = STATE(103),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_end] = STATE(102),
    [sym_end_token] = STATE(63),
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
    [sym_math_group] = STATE(103),
    [sym_opt_math_group] = STATE(103),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(103),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(151),
  },
  [49] = {
    [sym_simple_text_group] = STATE(69),
    [sym_begin_group] = ACTIONS(85),
  },
  [50] = {
    [sym__math_mode] = STATE(105),
    [sym_parameter] = STATE(105),
    [sym_math_environment] = STATE(105),
    [sym_tag] = STATE(105),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(105),
    [sym_command] = STATE(105),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(105),
    [sym_opt_math_group] = STATE(105),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(105),
    [sym_begin_opt] = STATE(50),
    [sym_end_opt] = STATE(104),
    [aux_sym_math_mode_repeat1] = STATE(105),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(153),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(153),
    [sym_subscript] = ACTIONS(153),
    [sym_active_char] = ACTIONS(153),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(153),
  },
  [51] = {
    [sym__math_mode] = STATE(106),
    [sym_parameter] = STATE(106),
    [sym_math_environment] = STATE(106),
    [sym_tag] = STATE(106),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(106),
    [sym_command] = STATE(106),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(106),
    [sym_opt_math_group] = STATE(106),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(106),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_math_shift] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(157),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_comment_char] = ACTIONS(159),
    [sym_text] = ACTIONS(159),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym__escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_comment_char] = ACTIONS(161),
    [sym_text] = ACTIONS(161),
  },
  [54] = {
    [sym_end_display_math] = STATE(108),
    [sym__escape] = ACTIONS(163),
  },
  [55] = {
    [sym__math_mode] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_math_environment] = STATE(109),
    [sym_tag] = STATE(109),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(109),
    [sym_opt_math_group] = STATE(109),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(109),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(165),
  },
  [56] = {
    [sym_end_inline_math] = STATE(111),
    [sym__escape] = ACTIONS(167),
  },
  [57] = {
    [sym_display_math_end] = STATE(113),
    [sym_end_token] = STATE(114),
    [sym__escape] = ACTIONS(169),
  },
  [58] = {
    [sym_inline_math_end] = STATE(115),
    [sym_end_token] = STATE(116),
    [sym__escape] = ACTIONS(169),
  },
  [59] = {
    [sym_verbatim_end] = STATE(118),
    [sym__end_of_line] = ACTIONS(171),
  },
  [60] = {
    [aux_sym_verbatim_text_repeat1] = STATE(119),
    [sym__end_of_line] = ACTIONS(173),
    [sym__verbatim_token] = ACTIONS(175),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(177),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [anon_sym_makeatletter] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_comment_char] = ACTIONS(179),
    [sym_text] = ACTIONS(179),
  },
  [63] = {
    [sym_simple_text_group] = STATE(121),
    [sym_begin_group] = ACTIONS(85),
  },
  [64] = {
    [sym__text_mode] = STATE(123),
    [sym_at_group] = STATE(123),
    [sym_parameter] = STATE(123),
    [sym_text_env] = STATE(123),
    [sym__display_math] = STATE(123),
    [sym_tex_display_math] = STATE(123),
    [sym_latex_display_math] = STATE(123),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(123),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(123),
    [sym_tex_inline_math] = STATE(123),
    [sym_latex_inline_math] = STATE(123),
    [sym_inline_math_env] = STATE(123),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(123),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(123),
    [sym_command] = STATE(123),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(122),
    [sym_end_token] = STATE(63),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(123),
    [sym_opt_text_group] = STATE(123),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(123),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(77),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(181),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(181),
  },
  [65] = {
    [sym_display_math_env_name] = ACTIONS(183),
    [sym_inline_math_env_name] = ACTIONS(185),
    [sym_verbatim_env_name] = ACTIONS(187),
    [sym_text] = ACTIONS(189),
  },
  [66] = {
    [sym_text_group] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(191),
    [sym__end_of_line] = ACTIONS(193),
  },
  [67] = {
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym__escape] = ACTIONS(195),
    [sym_begin_group] = ACTIONS(195),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(195),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_comment_char] = ACTIONS(195),
    [sym_text] = ACTIONS(195),
  },
  [68] = {
    [sym_text_group] = STATE(134),
    [sym_opt_text_group] = STATE(135),
    [sym_begin_opt] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(191),
    [sym__end_of_line] = ACTIONS(197),
  },
  [69] = {
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(199),
    [sym_math_shift] = ACTIONS(199),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_comment_char] = ACTIONS(199),
    [sym_text] = ACTIONS(199),
  },
  [70] = {
    [sym_text] = ACTIONS(201),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym__escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_end_group] = ACTIONS(203),
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
    [sym_simple_text_group] = STATE(136),
    [sym_begin_group] = ACTIONS(85),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym__escape] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_end_group] = ACTIONS(205),
    [sym_math_shift] = ACTIONS(205),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_active_char] = ACTIONS(205),
    [sym_comment_char] = ACTIONS(205),
    [sym_text] = ACTIONS(205),
  },
  [74] = {
    [sym_simple_text_group] = STATE(137),
    [sym_begin_group] = ACTIONS(85),
  },
  [75] = {
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
  [76] = {
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
  [77] = {
    [sym_text_group] = STATE(138),
    [sym_begin_group] = ACTIONS(11),
  },
  [78] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(211),
  },
  [79] = {
    [anon_sym_EQ] = ACTIONS(213),
  },
  [80] = {
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
    [anon_sym_makeatother] = ACTIONS(215),
    [sym__at_name] = ACTIONS(217),
  },
  [81] = {
    [sym__at_text_mode] = STATE(145),
    [sym_parameter] = STATE(145),
    [sym_text_env] = STATE(145),
    [sym__display_math] = STATE(145),
    [sym_tex_display_math] = STATE(145),
    [sym_latex_display_math] = STATE(145),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(145),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(145),
    [sym_tex_inline_math] = STATE(145),
    [sym_latex_inline_math] = STATE(145),
    [sym_inline_math_env] = STATE(145),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(145),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(145),
    [sym_at_command] = STATE(145),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(145),
    [sym_opt_at_text_group] = STATE(145),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(145),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(145),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(221),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(223),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(223),
  },
  [82] = {
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym__escape] = ACTIONS(225),
    [sym_begin_group] = ACTIONS(225),
    [sym_end_group] = ACTIONS(225),
    [sym_math_shift] = ACTIONS(225),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(225),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_comment_char] = ACTIONS(225),
    [sym_text] = ACTIONS(225),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(227),
    [sym_text] = ACTIONS(227),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym__escape] = ACTIONS(229),
    [sym_begin_group] = ACTIONS(229),
    [sym_end_group] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(229),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(229),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_comment_char] = ACTIONS(229),
    [sym_text] = ACTIONS(229),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(231),
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
    [sym__at_text_mode] = STATE(147),
    [sym_parameter] = STATE(147),
    [sym_text_env] = STATE(147),
    [sym__display_math] = STATE(147),
    [sym_tex_display_math] = STATE(147),
    [sym_latex_display_math] = STATE(147),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(147),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(147),
    [sym_tex_inline_math] = STATE(147),
    [sym_latex_inline_math] = STATE(147),
    [sym_inline_math_env] = STATE(147),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(147),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(147),
    [sym_at_command] = STATE(147),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(147),
    [sym_opt_at_text_group] = STATE(147),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(147),
    [sym_begin_opt] = STATE(86),
    [sym_end_opt] = STATE(146),
    [aux_sym_at_group_repeat1] = STATE(147),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(233),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(233),
  },
  [87] = {
    [sym__at_text_mode] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
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
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(149),
    [sym_at_command] = STATE(149),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_makeatother] = STATE(148),
    [sym_makeatother_token] = STATE(85),
    [sym_at_text_group] = STATE(149),
    [sym_opt_at_text_group] = STATE(149),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(149),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(235),
    [sym_comment_char] = ACTIONS(21),
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
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [sym__escape] = ACTIONS(239),
    [sym_begin_group] = ACTIONS(239),
    [sym_end_group] = ACTIONS(239),
    [sym_math_shift] = ACTIONS(239),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(239),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(239),
    [sym_active_char] = ACTIONS(239),
    [sym_comment_char] = ACTIONS(239),
    [sym_text] = ACTIONS(239),
  },
  [90] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_env] = STATE(151),
    [sym__display_math] = STATE(151),
    [sym_tex_display_math] = STATE(151),
    [sym_latex_display_math] = STATE(151),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(151),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(151),
    [sym_tex_inline_math] = STATE(151),
    [sym_latex_inline_math] = STATE(151),
    [sym_inline_math_env] = STATE(151),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(151),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(150),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(241),
  },
  [91] = {
    [sym__text_mode] = STATE(91),
    [sym_at_group] = STATE(91),
    [sym_parameter] = STATE(91),
    [sym_text_env] = STATE(91),
    [sym__display_math] = STATE(91),
    [sym_tex_display_math] = STATE(91),
    [sym_latex_display_math] = STATE(91),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(91),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(91),
    [sym_tex_inline_math] = STATE(91),
    [sym_latex_inline_math] = STATE(91),
    [sym_inline_math_env] = STATE(91),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(91),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(91),
    [sym_command] = STATE(91),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(91),
    [sym_opt_text_group] = STATE(91),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(91),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(91),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym__escape] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(251),
    [sym_math_shift] = ACTIONS(254),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(260),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(257),
    [sym_comment_char] = ACTIONS(266),
    [sym_text] = ACTIONS(257),
  },
  [92] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [anon_sym_LBRACK] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [sym__escape] = ACTIONS(269),
    [sym_begin_group] = ACTIONS(269),
    [sym_end_group] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(269),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(269),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_comment_char] = ACTIONS(269),
    [sym_text] = ACTIONS(269),
  },
  [93] = {
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(93),
    [sym_opt_text_group] = STATE(93),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(93),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym__escape] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(251),
    [sym_end_group] = ACTIONS(243),
    [sym_math_shift] = ACTIONS(254),
    [sym_alignment_tab] = ACTIONS(271),
    [sym_parameter_char] = ACTIONS(260),
    [sym_superscript] = ACTIONS(271),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(271),
    [sym_comment_char] = ACTIONS(266),
    [sym_text] = ACTIONS(271),
  },
  [94] = {
    [sym_begin_group] = ACTIONS(274),
  },
  [95] = {
    [anon_sym_LBRACK] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(276),
    [sym__escape] = ACTIONS(276),
    [sym_begin_group] = ACTIONS(276),
    [sym_end_group] = ACTIONS(276),
    [sym_math_shift] = ACTIONS(276),
    [sym_alignment_tab] = ACTIONS(276),
    [sym_parameter_char] = ACTIONS(276),
    [sym_superscript] = ACTIONS(276),
    [sym_subscript] = ACTIONS(276),
    [sym_active_char] = ACTIONS(276),
    [sym_comment_char] = ACTIONS(276),
    [sym_text] = ACTIONS(276),
  },
  [96] = {
    [sym__math_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_math_environment] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(153),
    [sym_command] = STATE(153),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(153),
    [sym_opt_math_group] = STATE(153),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_end_group] = ACTIONS(278),
    [sym_alignment_tab] = ACTIONS(280),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(280),
    [sym_subscript] = ACTIONS(280),
    [sym_active_char] = ACTIONS(280),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(280),
  },
  [97] = {
    [sym_math_shift] = ACTIONS(282),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(284),
    [anon_sym_LBRACK] = ACTIONS(284),
    [anon_sym_RBRACK] = ACTIONS(284),
    [sym__escape] = ACTIONS(284),
    [sym_begin_group] = ACTIONS(284),
    [sym_end_group] = ACTIONS(284),
    [sym_math_shift] = ACTIONS(284),
    [sym_alignment_tab] = ACTIONS(284),
    [sym_parameter_char] = ACTIONS(284),
    [sym_superscript] = ACTIONS(284),
    [sym_subscript] = ACTIONS(284),
    [sym_active_char] = ACTIONS(284),
    [sym_comment_char] = ACTIONS(284),
    [sym_text] = ACTIONS(284),
  },
  [99] = {
    [sym__text_mode] = STATE(157),
    [sym_text_mode] = STATE(156),
    [sym_at_group] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_text_env] = STATE(157),
    [sym__display_math] = STATE(157),
    [sym_tex_display_math] = STATE(157),
    [sym_latex_display_math] = STATE(157),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(157),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(157),
    [sym_tex_inline_math] = STATE(157),
    [sym_latex_inline_math] = STATE(157),
    [sym_inline_math_env] = STATE(157),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(157),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(157),
    [sym_opt_text_group] = STATE(157),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(286),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(288),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(288),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(288),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(288),
  },
  [100] = {
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
  [101] = {
    [anon_sym_tag] = ACTIONS(139),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(177),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym__name] = ACTIONS(47),
  },
  [102] = {
    [anon_sym_LBRACK] = ACTIONS(292),
    [anon_sym_RBRACK] = ACTIONS(292),
    [sym__escape] = ACTIONS(292),
    [sym_begin_group] = ACTIONS(292),
    [sym_end_group] = ACTIONS(292),
    [sym_math_shift] = ACTIONS(292),
    [sym_alignment_tab] = ACTIONS(292),
    [sym_parameter_char] = ACTIONS(292),
    [sym_superscript] = ACTIONS(292),
    [sym_subscript] = ACTIONS(292),
    [sym_active_char] = ACTIONS(292),
    [sym_comment_char] = ACTIONS(292),
    [sym_text] = ACTIONS(292),
  },
  [103] = {
    [sym__math_mode] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_math_environment] = STATE(109),
    [sym_tag] = STATE(109),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_end] = STATE(158),
    [sym_end_token] = STATE(63),
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
    [sym_math_group] = STATE(109),
    [sym_opt_math_group] = STATE(109),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(109),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(165),
  },
  [104] = {
    [anon_sym_LBRACK] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [sym__escape] = ACTIONS(294),
    [sym_begin_group] = ACTIONS(294),
    [sym_end_group] = ACTIONS(294),
    [sym_math_shift] = ACTIONS(294),
    [sym_alignment_tab] = ACTIONS(294),
    [sym_parameter_char] = ACTIONS(294),
    [sym_superscript] = ACTIONS(294),
    [sym_subscript] = ACTIONS(294),
    [sym_active_char] = ACTIONS(294),
    [sym_comment_char] = ACTIONS(294),
    [sym_text] = ACTIONS(294),
  },
  [105] = {
    [sym__math_mode] = STATE(160),
    [sym_parameter] = STATE(160),
    [sym_math_environment] = STATE(160),
    [sym_tag] = STATE(160),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(160),
    [sym_command] = STATE(160),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(160),
    [sym_opt_math_group] = STATE(160),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(160),
    [sym_begin_opt] = STATE(50),
    [sym_end_opt] = STATE(159),
    [aux_sym_math_mode_repeat1] = STATE(160),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(296),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(296),
    [sym_subscript] = ACTIONS(296),
    [sym_active_char] = ACTIONS(296),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(296),
  },
  [106] = {
    [sym__math_mode] = STATE(106),
    [sym_parameter] = STATE(106),
    [sym_math_environment] = STATE(106),
    [sym_tag] = STATE(106),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(106),
    [sym_command] = STATE(106),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(106),
    [sym_opt_math_group] = STATE(106),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(106),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(304),
    [sym_math_shift] = ACTIONS(307),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(309),
  },
  [107] = {
    [anon_sym_RBRACK] = ACTIONS(318),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
    [sym__escape] = ACTIONS(320),
    [sym_begin_group] = ACTIONS(320),
    [sym_end_group] = ACTIONS(320),
    [sym_math_shift] = ACTIONS(320),
    [sym_alignment_tab] = ACTIONS(320),
    [sym_parameter_char] = ACTIONS(320),
    [sym_superscript] = ACTIONS(320),
    [sym_subscript] = ACTIONS(320),
    [sym_active_char] = ACTIONS(320),
    [sym_comment_char] = ACTIONS(320),
    [sym_text] = ACTIONS(320),
  },
  [109] = {
    [sym__math_mode] = STATE(109),
    [sym_parameter] = STATE(109),
    [sym_math_environment] = STATE(109),
    [sym_tag] = STATE(109),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(109),
    [sym_command] = STATE(109),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(109),
    [sym_opt_math_group] = STATE(109),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(109),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(109),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(304),
    [sym_alignment_tab] = ACTIONS(322),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(322),
    [sym_subscript] = ACTIONS(322),
    [sym_active_char] = ACTIONS(322),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(322),
  },
  [110] = {
    [anon_sym_RPAREN] = ACTIONS(325),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [sym__escape] = ACTIONS(327),
    [sym_begin_group] = ACTIONS(327),
    [sym_end_group] = ACTIONS(327),
    [sym_math_shift] = ACTIONS(327),
    [sym_alignment_tab] = ACTIONS(327),
    [sym_parameter_char] = ACTIONS(327),
    [sym_superscript] = ACTIONS(327),
    [sym_subscript] = ACTIONS(327),
    [sym_active_char] = ACTIONS(327),
    [sym_comment_char] = ACTIONS(327),
    [sym_text] = ACTIONS(327),
  },
  [112] = {
    [anon_sym_end] = ACTIONS(329),
  },
  [113] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym__escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(331),
  },
  [114] = {
    [sym_display_math_env_group] = STATE(164),
    [sym_begin_group] = ACTIONS(333),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(335),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym__escape] = ACTIONS(335),
    [sym_begin_group] = ACTIONS(335),
    [sym_end_group] = ACTIONS(335),
    [sym_math_shift] = ACTIONS(335),
    [sym_alignment_tab] = ACTIONS(335),
    [sym_parameter_char] = ACTIONS(335),
    [sym_superscript] = ACTIONS(335),
    [sym_subscript] = ACTIONS(335),
    [sym_active_char] = ACTIONS(335),
    [sym_comment_char] = ACTIONS(335),
    [sym_text] = ACTIONS(335),
  },
  [116] = {
    [sym_inline_math_env_group] = STATE(166),
    [sym_begin_group] = ACTIONS(337),
  },
  [117] = {
    [sym_end_token] = STATE(167),
    [sym__escape] = ACTIONS(169),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
    [sym__escape] = ACTIONS(339),
    [sym_begin_group] = ACTIONS(339),
    [sym_end_group] = ACTIONS(339),
    [sym_math_shift] = ACTIONS(339),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(339),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_comment_char] = ACTIONS(339),
    [sym_text] = ACTIONS(339),
  },
  [119] = {
    [aux_sym_verbatim_text_repeat1] = STATE(119),
    [sym__end_of_line] = ACTIONS(341),
    [sym__verbatim_token] = ACTIONS(343),
  },
  [120] = {
    [sym_begin_group] = ACTIONS(346),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [anon_sym_RBRACK] = ACTIONS(348),
    [sym__escape] = ACTIONS(348),
    [sym_begin_group] = ACTIONS(348),
    [sym_end_group] = ACTIONS(348),
    [sym_math_shift] = ACTIONS(348),
    [sym_alignment_tab] = ACTIONS(348),
    [sym_parameter_char] = ACTIONS(348),
    [sym_superscript] = ACTIONS(348),
    [sym_subscript] = ACTIONS(348),
    [sym_active_char] = ACTIONS(348),
    [sym_comment_char] = ACTIONS(348),
    [sym_text] = ACTIONS(348),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [anon_sym_LBRACK] = ACTIONS(350),
    [anon_sym_RBRACK] = ACTIONS(350),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(350),
    [sym_end_group] = ACTIONS(350),
    [sym_math_shift] = ACTIONS(350),
    [sym_alignment_tab] = ACTIONS(350),
    [sym_parameter_char] = ACTIONS(350),
    [sym_superscript] = ACTIONS(350),
    [sym_subscript] = ACTIONS(350),
    [sym_active_char] = ACTIONS(350),
    [sym_comment_char] = ACTIONS(350),
    [sym_text] = ACTIONS(350),
  },
  [123] = {
    [sym__text_mode] = STATE(123),
    [sym_at_group] = STATE(123),
    [sym_parameter] = STATE(123),
    [sym_text_env] = STATE(123),
    [sym__display_math] = STATE(123),
    [sym_tex_display_math] = STATE(123),
    [sym_latex_display_math] = STATE(123),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(123),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(123),
    [sym_tex_inline_math] = STATE(123),
    [sym_latex_inline_math] = STATE(123),
    [sym_inline_math_env] = STATE(123),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(123),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(123),
    [sym_command] = STATE(123),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(123),
    [sym_opt_text_group] = STATE(123),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(123),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym__escape] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(251),
    [sym_math_shift] = ACTIONS(254),
    [sym_alignment_tab] = ACTIONS(352),
    [sym_parameter_char] = ACTIONS(260),
    [sym_superscript] = ACTIONS(352),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(352),
    [sym_comment_char] = ACTIONS(266),
    [sym_text] = ACTIONS(352),
  },
  [124] = {
    [sym_end_group] = ACTIONS(355),
  },
  [125] = {
    [sym_end_group] = ACTIONS(357),
  },
  [126] = {
    [sym_end_group] = ACTIONS(359),
  },
  [127] = {
    [sym_end_group] = ACTIONS(361),
  },
  [128] = {
    [sym__text_mode] = STATE(173),
    [sym_at_group] = STATE(173),
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
    [sym_command] = STATE(173),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(365),
  },
  [129] = {
    [anon_sym_LBRACK] = ACTIONS(367),
    [sym__escape] = ACTIONS(367),
    [sym_begin_group] = ACTIONS(367),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_comment_char] = ACTIONS(367),
    [sym_text] = ACTIONS(367),
  },
  [130] = {
    [sym__end_of_line] = ACTIONS(369),
  },
  [131] = {
    [sym_text_group] = STATE(175),
    [sym_begin_group] = ACTIONS(191),
    [sym__end_of_line] = ACTIONS(369),
  },
  [132] = {
    [sym__text_mode] = STATE(178),
    [sym_at_group] = STATE(178),
    [sym_parameter] = STATE(178),
    [sym_text_env] = STATE(178),
    [sym__display_math] = STATE(178),
    [sym_tex_display_math] = STATE(178),
    [sym_latex_display_math] = STATE(178),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(178),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(178),
    [sym_tex_inline_math] = STATE(178),
    [sym_latex_inline_math] = STATE(178),
    [sym_inline_math_env] = STATE(178),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(178),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(178),
    [sym_command] = STATE(178),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(178),
    [sym_opt_text_group] = STATE(178),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(178),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(177),
    [aux_sym_text_mode_repeat1] = STATE(178),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(373),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(373),
  },
  [133] = {
    [sym__verbatim_token] = ACTIONS(375),
  },
  [134] = {
    [sym__end_of_line] = ACTIONS(377),
  },
  [135] = {
    [sym_text_group] = STATE(180),
    [sym_begin_group] = ACTIONS(191),
    [sym__end_of_line] = ACTIONS(377),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_end_group] = ACTIONS(379),
    [sym_math_shift] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_comment_char] = ACTIONS(379),
    [sym_text] = ACTIONS(379),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_comment_char] = ACTIONS(381),
    [sym_text] = ACTIONS(381),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym_RBRACK] = ACTIONS(383),
    [sym__escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(383),
    [sym_end_group] = ACTIONS(383),
    [sym_math_shift] = ACTIONS(383),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(383),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_comment_char] = ACTIONS(383),
    [sym_text] = ACTIONS(383),
  },
  [139] = {
    [anon_sym_EQ] = ACTIONS(113),
  },
  [140] = {
    [sym_number] = ACTIONS(385),
  },
  [141] = {
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
  [142] = {
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
  [143] = {
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
    [sym__at_name] = ACTIONS(217),
  },
  [144] = {
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym__escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(391),
    [sym_math_shift] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(391),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_comment_char] = ACTIONS(391),
    [sym_text] = ACTIONS(391),
  },
  [145] = {
    [sym__at_text_mode] = STATE(183),
    [sym_parameter] = STATE(183),
    [sym_text_env] = STATE(183),
    [sym__display_math] = STATE(183),
    [sym_tex_display_math] = STATE(183),
    [sym_latex_display_math] = STATE(183),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(183),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(183),
    [sym_tex_inline_math] = STATE(183),
    [sym_latex_inline_math] = STATE(183),
    [sym_inline_math_env] = STATE(183),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(183),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(183),
    [sym_at_command] = STATE(183),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(183),
    [sym_opt_at_text_group] = STATE(183),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(183),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(395),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(395),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(395),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(395),
  },
  [146] = {
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
  [147] = {
    [sym__at_text_mode] = STATE(185),
    [sym_parameter] = STATE(185),
    [sym_text_env] = STATE(185),
    [sym__display_math] = STATE(185),
    [sym_tex_display_math] = STATE(185),
    [sym_latex_display_math] = STATE(185),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(185),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(185),
    [sym_tex_inline_math] = STATE(185),
    [sym_latex_inline_math] = STATE(185),
    [sym_inline_math_env] = STATE(185),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(185),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(185),
    [sym_at_command] = STATE(185),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(185),
    [sym_opt_at_text_group] = STATE(185),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(185),
    [sym_begin_opt] = STATE(86),
    [sym_end_opt] = STATE(184),
    [aux_sym_at_group_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym__escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(399),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(399),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_comment_char] = ACTIONS(401),
    [sym_text] = ACTIONS(401),
  },
  [149] = {
    [sym__at_text_mode] = STATE(149),
    [sym_parameter] = STATE(149),
    [sym_text_env] = STATE(149),
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
    [sym_verbatim_env] = STATE(149),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(149),
    [sym_at_command] = STATE(149),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(149),
    [sym_opt_at_text_group] = STATE(149),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(149),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(403),
    [sym__escape] = ACTIONS(406),
    [sym_begin_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(412),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(418),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(415),
    [sym_comment_char] = ACTIONS(424),
    [sym_text] = ACTIONS(415),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(427),
    [anon_sym_RBRACK] = ACTIONS(427),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_comment_char] = ACTIONS(427),
    [sym_text] = ACTIONS(427),
  },
  [151] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_env] = STATE(151),
    [sym__display_math] = STATE(151),
    [sym_tex_display_math] = STATE(151),
    [sym_latex_display_math] = STATE(151),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(151),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(151),
    [sym_tex_inline_math] = STATE(151),
    [sym_latex_inline_math] = STATE(151),
    [sym_inline_math_env] = STATE(151),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(151),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym__escape] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(251),
    [sym_math_shift] = ACTIONS(254),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(260),
    [sym_superscript] = ACTIONS(429),
    [sym_subscript] = ACTIONS(263),
    [sym_active_char] = ACTIONS(429),
    [sym_comment_char] = ACTIONS(266),
    [sym_text] = ACTIONS(429),
  },
  [152] = {
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_RBRACK] = ACTIONS(432),
    [sym__escape] = ACTIONS(432),
    [sym_begin_group] = ACTIONS(432),
    [sym_end_group] = ACTIONS(432),
    [sym_math_shift] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(432),
    [sym_parameter_char] = ACTIONS(432),
    [sym_superscript] = ACTIONS(432),
    [sym_subscript] = ACTIONS(432),
    [sym_active_char] = ACTIONS(432),
    [sym_comment_char] = ACTIONS(432),
    [sym_text] = ACTIONS(432),
  },
  [153] = {
    [sym__math_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_math_environment] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(153),
    [sym_command] = STATE(153),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(153),
    [sym_opt_math_group] = STATE(153),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(298),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(304),
    [sym_end_group] = ACTIONS(307),
    [sym_alignment_tab] = ACTIONS(434),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(434),
    [sym_subscript] = ACTIONS(434),
    [sym_active_char] = ACTIONS(434),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(434),
  },
  [154] = {
    [sym_math_shift] = ACTIONS(437),
  },
  [155] = {
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_RBRACK] = ACTIONS(439),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(439),
    [sym_end_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(439),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(439),
    [sym_active_char] = ACTIONS(439),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(439),
  },
  [156] = {
    [sym_end_group] = ACTIONS(441),
  },
  [157] = {
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(93),
    [sym_opt_text_group] = STATE(93),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(93),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(105),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(137),
  },
  [158] = {
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_end_group] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_comment_char] = ACTIONS(443),
    [sym_text] = ACTIONS(443),
  },
  [159] = {
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
  [160] = {
    [sym__math_mode] = STATE(160),
    [sym_parameter] = STATE(160),
    [sym_math_environment] = STATE(160),
    [sym_tag] = STATE(160),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(160),
    [sym_command] = STATE(160),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
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
    [sym_math_group] = STATE(160),
    [sym_opt_math_group] = STATE(160),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(160),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(160),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(304),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(312),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(447),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(447),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(450),
    [sym_end_group] = ACTIONS(450),
    [sym_math_shift] = ACTIONS(450),
    [sym_alignment_tab] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_comment_char] = ACTIONS(450),
    [sym_text] = ACTIONS(450),
  },
  [162] = {
    [ts_builtin_sym_end] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [sym__escape] = ACTIONS(452),
    [sym_begin_group] = ACTIONS(452),
    [sym_end_group] = ACTIONS(452),
    [sym_math_shift] = ACTIONS(452),
    [sym_alignment_tab] = ACTIONS(452),
    [sym_parameter_char] = ACTIONS(452),
    [sym_superscript] = ACTIONS(452),
    [sym_subscript] = ACTIONS(452),
    [sym_active_char] = ACTIONS(452),
    [sym_comment_char] = ACTIONS(452),
    [sym_text] = ACTIONS(452),
  },
  [163] = {
    [sym_display_math_env_name] = ACTIONS(454),
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
    [sym_inline_math_env_name] = ACTIONS(458),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(460),
    [anon_sym_LBRACK] = ACTIONS(460),
    [anon_sym_RBRACK] = ACTIONS(460),
    [sym__escape] = ACTIONS(460),
    [sym_begin_group] = ACTIONS(460),
    [sym_end_group] = ACTIONS(460),
    [sym_math_shift] = ACTIONS(460),
    [sym_alignment_tab] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(460),
    [sym_superscript] = ACTIONS(460),
    [sym_subscript] = ACTIONS(460),
    [sym_active_char] = ACTIONS(460),
    [sym_comment_char] = ACTIONS(460),
    [sym_text] = ACTIONS(460),
  },
  [167] = {
    [sym_verbatim_env_group] = STATE(190),
    [sym_begin_group] = ACTIONS(462),
  },
  [168] = {
    [anon_sym_LBRACK] = ACTIONS(464),
    [sym_begin_group] = ACTIONS(464),
    [sym__end_of_line] = ACTIONS(464),
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
    [anon_sym_LBRACK] = ACTIONS(468),
    [sym_begin_group] = ACTIONS(468),
    [sym__end_of_line] = ACTIONS(468),
  },
  [171] = {
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
  [172] = {
    [sym__end_of_line] = ACTIONS(133),
  },
  [173] = {
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(93),
    [sym_opt_text_group] = STATE(93),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(93),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(472),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(137),
  },
  [174] = {
    [anon_sym_LBRACK] = ACTIONS(474),
    [sym__escape] = ACTIONS(474),
    [sym_begin_group] = ACTIONS(474),
    [sym_alignment_tab] = ACTIONS(474),
    [sym_parameter_char] = ACTIONS(474),
    [sym_superscript] = ACTIONS(474),
    [sym_subscript] = ACTIONS(474),
    [sym_active_char] = ACTIONS(474),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(474),
  },
  [175] = {
    [sym__end_of_line] = ACTIONS(476),
  },
  [176] = {
    [sym_begin_group] = ACTIONS(237),
    [sym__end_of_line] = ACTIONS(237),
  },
  [177] = {
    [sym_begin_group] = ACTIONS(239),
    [sym__end_of_line] = ACTIONS(239),
  },
  [178] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_env] = STATE(151),
    [sym__display_math] = STATE(151),
    [sym_tex_display_math] = STATE(151),
    [sym_latex_display_math] = STATE(151),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(151),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(151),
    [sym_tex_inline_math] = STATE(151),
    [sym_latex_inline_math] = STATE(151),
    [sym_inline_math_env] = STATE(151),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(151),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(193),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(371),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(241),
  },
  [179] = {
    [sym__verbatim_token] = ACTIONS(478),
  },
  [180] = {
    [sym__end_of_line] = ACTIONS(480),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym__escape] = ACTIONS(482),
    [sym_begin_group] = ACTIONS(482),
    [sym_end_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(482),
    [sym_alignment_tab] = ACTIONS(482),
    [sym_parameter_char] = ACTIONS(482),
    [sym_superscript] = ACTIONS(482),
    [sym_subscript] = ACTIONS(482),
    [sym_active_char] = ACTIONS(482),
    [sym_comment_char] = ACTIONS(482),
    [sym_text] = ACTIONS(482),
  },
  [182] = {
    [anon_sym_LBRACK] = ACTIONS(484),
    [anon_sym_RBRACK] = ACTIONS(484),
    [sym__escape] = ACTIONS(484),
    [sym_begin_group] = ACTIONS(484),
    [sym_end_group] = ACTIONS(484),
    [sym_math_shift] = ACTIONS(484),
    [sym_alignment_tab] = ACTIONS(484),
    [sym_parameter_char] = ACTIONS(484),
    [sym_superscript] = ACTIONS(484),
    [sym_subscript] = ACTIONS(484),
    [sym_active_char] = ACTIONS(484),
    [sym_comment_char] = ACTIONS(484),
    [sym_text] = ACTIONS(484),
  },
  [183] = {
    [sym__at_text_mode] = STATE(183),
    [sym_parameter] = STATE(183),
    [sym_text_env] = STATE(183),
    [sym__display_math] = STATE(183),
    [sym_tex_display_math] = STATE(183),
    [sym_latex_display_math] = STATE(183),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(183),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(183),
    [sym_tex_inline_math] = STATE(183),
    [sym_latex_inline_math] = STATE(183),
    [sym_inline_math_env] = STATE(183),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(183),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(183),
    [sym_at_command] = STATE(183),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(183),
    [sym_opt_at_text_group] = STATE(183),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(183),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(403),
    [sym__escape] = ACTIONS(406),
    [sym_begin_group] = ACTIONS(409),
    [sym_end_group] = ACTIONS(486),
    [sym_math_shift] = ACTIONS(412),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(418),
    [sym_superscript] = ACTIONS(488),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(488),
    [sym_comment_char] = ACTIONS(424),
    [sym_text] = ACTIONS(488),
  },
  [184] = {
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_RBRACK] = ACTIONS(491),
    [sym__escape] = ACTIONS(491),
    [sym_begin_group] = ACTIONS(491),
    [sym_end_group] = ACTIONS(491),
    [sym_math_shift] = ACTIONS(491),
    [sym_alignment_tab] = ACTIONS(491),
    [sym_parameter_char] = ACTIONS(491),
    [sym_superscript] = ACTIONS(491),
    [sym_subscript] = ACTIONS(491),
    [sym_active_char] = ACTIONS(491),
    [sym_comment_char] = ACTIONS(491),
    [sym_text] = ACTIONS(491),
  },
  [185] = {
    [sym__at_text_mode] = STATE(185),
    [sym_parameter] = STATE(185),
    [sym_text_env] = STATE(185),
    [sym__display_math] = STATE(185),
    [sym_tex_display_math] = STATE(185),
    [sym_latex_display_math] = STATE(185),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(185),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(185),
    [sym_tex_inline_math] = STATE(185),
    [sym_latex_inline_math] = STATE(185),
    [sym_inline_math_env] = STATE(185),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(185),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(185),
    [sym_at_command] = STATE(185),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(83),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(83),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(83),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(83),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(83),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(83),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(185),
    [sym_opt_at_text_group] = STATE(185),
    [sym_at_token] = STATE(83),
    [sym_comment] = STATE(185),
    [sym_begin_opt] = STATE(86),
    [aux_sym_at_group_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym_RBRACK] = ACTIONS(486),
    [sym__escape] = ACTIONS(406),
    [sym_begin_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(412),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(418),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(421),
    [sym_active_char] = ACTIONS(493),
    [sym_comment_char] = ACTIONS(424),
    [sym_text] = ACTIONS(493),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(496),
    [anon_sym_RBRACK] = ACTIONS(496),
    [sym__escape] = ACTIONS(496),
    [sym_begin_group] = ACTIONS(496),
    [sym_end_group] = ACTIONS(496),
    [sym_math_shift] = ACTIONS(496),
    [sym_alignment_tab] = ACTIONS(496),
    [sym_parameter_char] = ACTIONS(496),
    [sym_superscript] = ACTIONS(496),
    [sym_subscript] = ACTIONS(496),
    [sym_active_char] = ACTIONS(496),
    [sym_comment_char] = ACTIONS(496),
    [sym_text] = ACTIONS(496),
  },
  [187] = {
    [anon_sym_LBRACK] = ACTIONS(498),
    [anon_sym_RBRACK] = ACTIONS(498),
    [sym__escape] = ACTIONS(498),
    [sym_begin_group] = ACTIONS(498),
    [sym_end_group] = ACTIONS(498),
    [sym_math_shift] = ACTIONS(498),
    [sym_alignment_tab] = ACTIONS(498),
    [sym_parameter_char] = ACTIONS(498),
    [sym_superscript] = ACTIONS(498),
    [sym_subscript] = ACTIONS(498),
    [sym_active_char] = ACTIONS(498),
    [sym_comment_char] = ACTIONS(498),
    [sym_text] = ACTIONS(498),
  },
  [188] = {
    [sym_end_group] = ACTIONS(500),
  },
  [189] = {
    [sym_verbatim_env_name] = ACTIONS(502),
  },
  [190] = {
    [ts_builtin_sym_end] = ACTIONS(504),
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
    [sym__end_of_line] = ACTIONS(269),
  },
  [192] = {
    [anon_sym_LBRACK] = ACTIONS(506),
    [sym__escape] = ACTIONS(506),
    [sym_begin_group] = ACTIONS(506),
    [sym_alignment_tab] = ACTIONS(506),
    [sym_parameter_char] = ACTIONS(506),
    [sym_superscript] = ACTIONS(506),
    [sym_subscript] = ACTIONS(506),
    [sym_active_char] = ACTIONS(506),
    [sym_comment_char] = ACTIONS(506),
    [sym_text] = ACTIONS(506),
  },
  [193] = {
    [sym_begin_group] = ACTIONS(427),
    [sym__end_of_line] = ACTIONS(427),
  },
  [194] = {
    [sym__verbatim_token] = ACTIONS(508),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(464),
    [anon_sym_LBRACK] = ACTIONS(464),
    [anon_sym_RBRACK] = ACTIONS(464),
    [sym__escape] = ACTIONS(464),
    [sym_begin_group] = ACTIONS(464),
    [sym_end_group] = ACTIONS(464),
    [sym_math_shift] = ACTIONS(464),
    [sym_alignment_tab] = ACTIONS(464),
    [sym_parameter_char] = ACTIONS(464),
    [sym_superscript] = ACTIONS(464),
    [sym_subscript] = ACTIONS(464),
    [sym_active_char] = ACTIONS(464),
    [sym_comment_char] = ACTIONS(464),
    [sym_text] = ACTIONS(464),
  },
  [196] = {
    [sym_end_group] = ACTIONS(510),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(468),
    [anon_sym_LBRACK] = ACTIONS(468),
    [anon_sym_RBRACK] = ACTIONS(468),
    [sym__escape] = ACTIONS(468),
    [sym_begin_group] = ACTIONS(468),
    [sym_end_group] = ACTIONS(468),
    [sym_math_shift] = ACTIONS(468),
    [sym_alignment_tab] = ACTIONS(468),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(468),
    [sym_subscript] = ACTIONS(468),
    [sym_active_char] = ACTIONS(468),
    [sym_comment_char] = ACTIONS(468),
    [sym_text] = ACTIONS(468),
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
  [15] = {.count = 1, .reusable = true}, SHIFT(28),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = true}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [25] = {.count = 1, .reusable = true}, SHIFT(29),
  [27] = {.count = 1, .reusable = true}, SHIFT(30),
  [29] = {.count = 1, .reusable = false}, SHIFT(31),
  [31] = {.count = 1, .reusable = false}, SHIFT(32),
  [33] = {.count = 1, .reusable = false}, SHIFT(33),
  [35] = {.count = 1, .reusable = false}, SHIFT(34),
  [37] = {.count = 1, .reusable = false}, SHIFT(35),
  [39] = {.count = 1, .reusable = false}, SHIFT(36),
  [41] = {.count = 1, .reusable = false}, SHIFT(37),
  [43] = {.count = 1, .reusable = true}, SHIFT(38),
  [45] = {.count = 1, .reusable = false}, SHIFT(39),
  [47] = {.count = 1, .reusable = false}, SHIFT(40),
  [49] = {.count = 1, .reusable = true}, SHIFT(41),
  [51] = {.count = 1, .reusable = true}, SHIFT(42),
  [53] = {.count = 1, .reusable = true}, SHIFT(43),
  [55] = {.count = 1, .reusable = true}, SHIFT(44),
  [57] = {.count = 1, .reusable = true}, SHIFT(45),
  [59] = {.count = 1, .reusable = true}, SHIFT(51),
  [61] = {.count = 1, .reusable = true}, SHIFT(52),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(53),
  [67] = {.count = 1, .reusable = false}, SHIFT(53),
  [69] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [73] = {.count = 1, .reusable = true}, SHIFT(55),
  [75] = {.count = 1, .reusable = true}, SHIFT(60),
  [77] = {.count = 1, .reusable = true}, SHIFT(61),
  [79] = {.count = 1, .reusable = true}, SHIFT(64),
  [81] = {.count = 1, .reusable = true}, SHIFT(65),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [85] = {.count = 1, .reusable = true}, SHIFT(70),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [89] = {.count = 1, .reusable = true}, SHIFT(78),
  [91] = {.count = 1, .reusable = true}, SHIFT(80),
  [93] = {.count = 1, .reusable = true}, SHIFT(81),
  [95] = {.count = 1, .reusable = true}, SHIFT(87),
  [97] = {.count = 1, .reusable = true}, SHIFT(82),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(88),
  [103] = {.count = 1, .reusable = true}, SHIFT(90),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(91),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [135] = {.count = 1, .reusable = true}, SHIFT(92),
  [137] = {.count = 1, .reusable = true}, SHIFT(93),
  [139] = {.count = 1, .reusable = false}, SHIFT(94),
  [141] = {.count = 1, .reusable = true}, SHIFT(95),
  [143] = {.count = 1, .reusable = true}, SHIFT(96),
  [145] = {.count = 1, .reusable = true}, SHIFT(98),
  [147] = {.count = 1, .reusable = true}, SHIFT(99),
  [149] = {.count = 1, .reusable = true}, SHIFT(101),
  [151] = {.count = 1, .reusable = true}, SHIFT(103),
  [153] = {.count = 1, .reusable = true}, SHIFT(105),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [157] = {.count = 1, .reusable = true}, SHIFT(106),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(107),
  [165] = {.count = 1, .reusable = true}, SHIFT(109),
  [167] = {.count = 1, .reusable = true}, SHIFT(110),
  [169] = {.count = 1, .reusable = true}, SHIFT(112),
  [171] = {.count = 1, .reusable = true}, SHIFT(117),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [175] = {.count = 1, .reusable = false}, SHIFT(119),
  [177] = {.count = 1, .reusable = false}, SHIFT(120),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [181] = {.count = 1, .reusable = true}, SHIFT(123),
  [183] = {.count = 1, .reusable = false}, SHIFT(124),
  [185] = {.count = 1, .reusable = false}, SHIFT(125),
  [187] = {.count = 1, .reusable = false}, SHIFT(126),
  [189] = {.count = 1, .reusable = false}, SHIFT(127),
  [191] = {.count = 1, .reusable = true}, SHIFT(128),
  [193] = {.count = 1, .reusable = true}, SHIFT(129),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [197] = {.count = 1, .reusable = true}, SHIFT(133),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [201] = {.count = 1, .reusable = true}, SHIFT(127),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(139),
  [213] = {.count = 1, .reusable = true}, SHIFT(140),
  [215] = {.count = 1, .reusable = false}, SHIFT(141),
  [217] = {.count = 1, .reusable = false}, SHIFT(142),
  [219] = {.count = 1, .reusable = true}, SHIFT(143),
  [221] = {.count = 1, .reusable = true}, SHIFT(144),
  [223] = {.count = 1, .reusable = true}, SHIFT(145),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [233] = {.count = 1, .reusable = true}, SHIFT(147),
  [235] = {.count = 1, .reusable = true}, SHIFT(149),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [241] = {.count = 1, .reusable = true}, SHIFT(151),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [251] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(91),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(8),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(93),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [278] = {.count = 1, .reusable = true}, SHIFT(152),
  [280] = {.count = 1, .reusable = true}, SHIFT(153),
  [282] = {.count = 1, .reusable = true}, SHIFT(154),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [286] = {.count = 1, .reusable = true}, SHIFT(155),
  [288] = {.count = 1, .reusable = true}, SHIFT(157),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [296] = {.count = 1, .reusable = true}, SHIFT(160),
  [298] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(43),
  [304] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(44),
  [307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(106),
  [312] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [315] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(8),
  [318] = {.count = 1, .reusable = true}, SHIFT(161),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(109),
  [325] = {.count = 1, .reusable = true}, SHIFT(162),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [329] = {.count = 1, .reusable = true}, SHIFT(120),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [333] = {.count = 1, .reusable = true}, SHIFT(163),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [337] = {.count = 1, .reusable = true}, SHIFT(165),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [343] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(119),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(123),
  [355] = {.count = 1, .reusable = true}, SHIFT(168),
  [357] = {.count = 1, .reusable = true}, SHIFT(169),
  [359] = {.count = 1, .reusable = true}, SHIFT(170),
  [361] = {.count = 1, .reusable = true}, SHIFT(171),
  [363] = {.count = 1, .reusable = true}, SHIFT(172),
  [365] = {.count = 1, .reusable = true}, SHIFT(173),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [369] = {.count = 1, .reusable = true}, SHIFT(174),
  [371] = {.count = 1, .reusable = true}, SHIFT(176),
  [373] = {.count = 1, .reusable = true}, SHIFT(178),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [377] = {.count = 1, .reusable = true}, SHIFT(179),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [385] = {.count = 1, .reusable = true}, SHIFT(181),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [393] = {.count = 1, .reusable = true}, SHIFT(182),
  [395] = {.count = 1, .reusable = true}, SHIFT(183),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [399] = {.count = 1, .reusable = true}, SHIFT(185),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [403] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [406] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(143),
  [409] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(81),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(149),
  [418] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [421] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(82),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(8),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [429] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(151),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(153),
  [437] = {.count = 1, .reusable = true}, SHIFT(186),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [441] = {.count = 1, .reusable = true}, SHIFT(187),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [447] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(160),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [454] = {.count = 1, .reusable = true}, SHIFT(188),
  [456] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [458] = {.count = 1, .reusable = true}, SHIFT(125),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [462] = {.count = 1, .reusable = true}, SHIFT(189),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [468] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [472] = {.count = 1, .reusable = true}, SHIFT(191),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [476] = {.count = 1, .reusable = true}, SHIFT(192),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [480] = {.count = 1, .reusable = true}, SHIFT(194),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [486] = {.count = 1, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2),
  [488] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(183),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(185),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [500] = {.count = 1, .reusable = true}, SHIFT(195),
  [502] = {.count = 1, .reusable = true}, SHIFT(196),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 3),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [510] = {.count = 1, .reusable = true}, SHIFT(197),
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
