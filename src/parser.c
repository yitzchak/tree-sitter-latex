#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 203
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
  sym_magic = 37,
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
      if (lookahead == 'V')
        ADVANCE(16);
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
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'b')
        ADVANCE(50);
      if (lookahead == 'c')
        ADVANCE(55);
      if (lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'g')
        ADVANCE(125);
      if (lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'k')
        ADVANCE(139);
      if (lookahead == 'l')
        ADVANCE(141);
      if (lookahead == 'm')
        ADVANCE(151);
      if (lookahead == 'p')
        ADVANCE(182);
      if (lookahead == 's')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(207);
      if (lookahead == 'u')
        ADVANCE(210);
      if (lookahead == 'v')
        ADVANCE(220);
      if (lookahead == 'x')
        ADVANCE(227);
      if (lookahead == '{')
        ADVANCE(228);
      if (lookahead == '}')
        ADVANCE(229);
      if (lookahead == '~')
        ADVANCE(230);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
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
      if (lookahead == 'e')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(32);
      if (lookahead == 'l')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(34);
      if (lookahead == 'p')
        ADVANCE(38);
      if (lookahead == 's')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(47);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_display_math_env_name);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(47);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_begin);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(56);
      if (lookahead == 'h')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == '`')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(69);
      if (lookahead == 'e')
        ADVANCE(73);
      if (lookahead == 'g')
        ADVANCE(75);
      if (lookahead == 'i')
        ADVANCE(79);
      if (lookahead == 'm')
        ADVANCE(89);
      if (lookahead == 'o')
        ADVANCE(92);
      if (lookahead == 's')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'f')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(110);
      if (lookahead == 'n')
        ADVANCE(111);
      if (lookahead == 'q')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(114);
      if (lookahead == 'u')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(126);
      if (lookahead == 'd')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(132);
      if (lookahead == 'p')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(152);
      if (lookahead == 'i')
        ADVANCE(170);
      if (lookahead == 'u')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(153);
      if (lookahead == 't')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(157);
      if (lookahead == 'o')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(172);
      if (lookahead == 't')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(185);
      if (lookahead == 't')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead == 'p')
        ADVANCE(196);
      if (lookahead == 'u')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(200);
      if (lookahead == 's')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead == 'u')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'V')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 232:
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
      if (lookahead == 'V')
        ADVANCE(16);
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
      if (lookahead == 'a')
        ADVANCE(31);
      if (lookahead == 'b')
        ADVANCE(50);
      if (lookahead == 'c')
        ADVANCE(55);
      if (lookahead == 'd')
        ADVANCE(68);
      if (lookahead == 'e')
        ADVANCE(109);
      if (lookahead == 'f')
        ADVANCE(120);
      if (lookahead == 'g')
        ADVANCE(125);
      if (lookahead == 'i')
        ADVANCE(130);
      if (lookahead == 'k')
        ADVANCE(139);
      if (lookahead == 'l')
        ADVANCE(141);
      if (lookahead == 'm')
        ADVANCE(151);
      if (lookahead == 'p')
        ADVANCE(182);
      if (lookahead == 's')
        ADVANCE(190);
      if (lookahead == 't')
        ADVANCE(207);
      if (lookahead == 'u')
        ADVANCE(210);
      if (lookahead == 'v')
        ADVANCE(220);
      if (lookahead == 'x')
        ADVANCE(227);
      if (lookahead == '{')
        ADVANCE(228);
      if (lookahead == '}')
        ADVANCE(229);
      if (lookahead == '~')
        ADVANCE(230);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(231);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(25);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      END_STATE();
    case 234:
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
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(228);
      if (lookahead == '~')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(235);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 237:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
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
        ADVANCE(228);
      if (lookahead == '~')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 239:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(285);
      if (lookahead == 'k')
        ADVANCE(294);
      if (lookahead == 'm')
        ADVANCE(296);
      if (lookahead == 'p')
        ADVANCE(311);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 'u')
        ADVANCE(334);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(346);
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
        ADVANCE(62);
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
      if (lookahead == 'n')
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(287);
      if (lookahead == 'p')
        ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(297);
      if (lookahead == 'i')
        ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(314);
      if (lookahead == 't')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(320);
      if (lookahead == 'u')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(327);
      if (lookahead == 's')
        ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(320);
      if (lookahead == 'u')
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 348:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == '^')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(30);
      if (lookahead == '{')
        ADVANCE(228);
      if (lookahead == '}')
        ADVANCE(229);
      if (lookahead == '~')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(236);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 350:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(350);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(233);
      END_STATE();
    case 351:
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
        ADVANCE(228);
      if (lookahead == '}')
        ADVANCE(229);
      if (lookahead == '~')
        ADVANCE(230);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(352);
      ADVANCE(236);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '!')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(361);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '!')
        ADVANCE(355);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead != 0)
        ADVANCE(361);
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
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(361);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(360);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_magic);
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
        ADVANCE(354);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      END_STATE();
    case 364:
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__verbatim_token);
      END_STATE();
    case 366:
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '\\')
        ADVANCE(27);
      if (lookahead == ']')
        ADVANCE(28);
      if (lookahead == '{')
        ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(366);
      END_STATE();
    case 367:
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'i')
        ADVANCE(285);
      if (lookahead == 'k')
        ADVANCE(294);
      if (lookahead == 'm')
        ADVANCE(368);
      if (lookahead == 'p')
        ADVANCE(311);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'u')
        ADVANCE(334);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(346);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 372:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__end_of_line);
      END_STATE();
    case 374:
      if (lookahead == '\n')
        ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(365);
      END_STATE();
    case 375:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(285);
      if (lookahead == 'k')
        ADVANCE(294);
      if (lookahead == 'm')
        ADVANCE(296);
      if (lookahead == 'p')
        ADVANCE(311);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 'u')
        ADVANCE(334);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(346);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(345);
      if (lookahead == 'n')
        ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(247);
      END_STATE();
    case 379:
      if (lookahead == 'V')
        ADVANCE(380);
      if (lookahead == 'a')
        ADVANCE(389);
      if (lookahead == 'd')
        ADVANCE(397);
      if (lookahead == 'e')
        ADVANCE(423);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'g')
        ADVANCE(436);
      if (lookahead == 'l')
        ADVANCE(441);
      if (lookahead == 'm')
        ADVANCE(450);
      if (lookahead == 's')
        ADVANCE(465);
      if (lookahead == 'v')
        ADVANCE(468);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(381);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(382);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(383);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(384);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(385);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(386);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(387);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(390);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(391);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(392);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(393);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(394);
      if (lookahead == 'a')
        ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(398);
      if (lookahead == 'g')
        ADVANCE(402);
      if (lookahead == 'i')
        ADVANCE(406);
      if (lookahead == 'm')
        ADVANCE(415);
      if (lookahead == 's')
        ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(405);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(394);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(424);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(425);
      if (lookahead == 'u')
        ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(429);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
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
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(449);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(451);
      if (lookahead == 'i')
        ADVANCE(454);
      if (lookahead == 'u')
        ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
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
        ADVANCE(236);
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
        ADVANCE(236);
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
        ADVANCE(236);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(395);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(474);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(388);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(380);
      if (lookahead == 'a')
        ADVANCE(389);
      if (lookahead == 'd')
        ADVANCE(397);
      if (lookahead == 'e')
        ADVANCE(423);
      if (lookahead == 'f')
        ADVANCE(431);
      if (lookahead == 'g')
        ADVANCE(436);
      if (lookahead == 'l')
        ADVANCE(441);
      if (lookahead == 'm')
        ADVANCE(450);
      if (lookahead == 's')
        ADVANCE(465);
      if (lookahead == 'v')
        ADVANCE(468);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(475);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(236);
      END_STATE();
    case 477:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(346);
      END_STATE();
    case 478:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(478);
      END_STATE();
    case 479:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(480);
      if (lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'c')
        ADVANCE(497);
      if (lookahead == 'd')
        ADVANCE(509);
      if (lookahead == 'i')
        ADVANCE(524);
      if (lookahead == 'k')
        ADVANCE(533);
      if (lookahead == 'm')
        ADVANCE(535);
      if (lookahead == 'p')
        ADVANCE(549);
      if (lookahead == 's')
        ADVANCE(557);
      if (lookahead == 'u')
        ADVANCE(572);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(346);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(481);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(482);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(483);
      if (lookahead == 'p')
        ADVANCE(487);
      if (lookahead == 's')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(484);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(485);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(488);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(489);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(491);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(493);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(494);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(495);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(496);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(498);
      if (lookahead == 'h')
        ADVANCE(504);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(499);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(500);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(501);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(502);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(503);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(62);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(505);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(506);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(507);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(508);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(510);
      if (lookahead == 'o')
        ADVANCE(512);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(511);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(513);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(514);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(515);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(516);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(517);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(518);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(519);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(520);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(521);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(522);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(523);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(525);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(526);
      if (lookahead == 'p')
        ADVANCE(531);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(527);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(528);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(529);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(532);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(534);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(498);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(536);
      if (lookahead == 'i')
        ADVANCE(546);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(537);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(538);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(539);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(540);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(541);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(542);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(543);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(544);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(545);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(547);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(548);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(490);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(550);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(551);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(552);
      if (lookahead == 't')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(553);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(554);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(555);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(556);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(558);
      if (lookahead == 'u')
        ADVANCE(563);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(559);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(560);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(561);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(562);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(486);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(564);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(565);
      if (lookahead == 's')
        ADVANCE(568);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(566);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(567);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(552);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(558);
      if (lookahead == 'u')
        ADVANCE(569);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(570);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(571);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(558);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
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
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(575);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(576);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(577);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(578);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(579);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(580);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(581);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(583);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 585:
      if (lookahead == 'a')
        ADVANCE(240);
      if (lookahead == 'b')
        ADVANCE(253);
      if (lookahead == 'c')
        ADVANCE(258);
      if (lookahead == 'd')
        ADVANCE(270);
      if (lookahead == 'e')
        ADVANCE(376);
      if (lookahead == 'i')
        ADVANCE(285);
      if (lookahead == 'k')
        ADVANCE(294);
      if (lookahead == 'm')
        ADVANCE(368);
      if (lookahead == 'p')
        ADVANCE(311);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 't')
        ADVANCE(369);
      if (lookahead == 'u')
        ADVANCE(334);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(346);
      END_STATE();
    case 586:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(586);
      END_STATE();
    case 587:
      if (lookahead == 'e')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(587);
      END_STATE();
    case 588:
      if (lookahead == 'n')
        ADVANCE(589);
      END_STATE();
    case 589:
      if (lookahead == 'd')
        ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 591:
      if (lookahead == '}')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(591);
      END_STATE();
    case 592:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(26);
      if (lookahead == 'a')
        ADVANCE(480);
      if (lookahead == 'b')
        ADVANCE(492);
      if (lookahead == 'c')
        ADVANCE(497);
      if (lookahead == 'd')
        ADVANCE(509);
      if (lookahead == 'i')
        ADVANCE(524);
      if (lookahead == 'k')
        ADVANCE(533);
      if (lookahead == 'm')
        ADVANCE(593);
      if (lookahead == 'p')
        ADVANCE(549);
      if (lookahead == 's')
        ADVANCE(557);
      if (lookahead == 'u')
        ADVANCE(572);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(582);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(346);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(346);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(546);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 594:
      if (lookahead == 'V')
        ADVANCE(595);
      if (lookahead == 'a')
        ADVANCE(603);
      if (lookahead == 'd')
        ADVANCE(610);
      if (lookahead == 'e')
        ADVANCE(636);
      if (lookahead == 'f')
        ADVANCE(644);
      if (lookahead == 'g')
        ADVANCE(649);
      if (lookahead == 'l')
        ADVANCE(654);
      if (lookahead == 'm')
        ADVANCE(663);
      if (lookahead == 's')
        ADVANCE(678);
      if (lookahead == 'v')
        ADVANCE(681);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(688);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(594);
      END_STATE();
    case 595:
      if (lookahead == 'e')
        ADVANCE(596);
      END_STATE();
    case 596:
      if (lookahead == 'r')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == 'b')
        ADVANCE(598);
      END_STATE();
    case 598:
      if (lookahead == 'a')
        ADVANCE(599);
      END_STATE();
    case 599:
      if (lookahead == 't')
        ADVANCE(600);
      END_STATE();
    case 600:
      if (lookahead == 'i')
        ADVANCE(601);
      END_STATE();
    case 601:
      if (lookahead == 'm')
        ADVANCE(602);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(24);
      END_STATE();
    case 603:
      if (lookahead == 'l')
        ADVANCE(604);
      END_STATE();
    case 604:
      if (lookahead == 'i')
        ADVANCE(605);
      END_STATE();
    case 605:
      if (lookahead == 'g')
        ADVANCE(606);
      END_STATE();
    case 606:
      if (lookahead == 'n')
        ADVANCE(607);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(47);
      if (lookahead == 'a')
        ADVANCE(608);
      END_STATE();
    case 608:
      if (lookahead == 't')
        ADVANCE(609);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(47);
      END_STATE();
    case 610:
      if (lookahead == 'a')
        ADVANCE(611);
      if (lookahead == 'g')
        ADVANCE(615);
      if (lookahead == 'i')
        ADVANCE(619);
      if (lookahead == 'm')
        ADVANCE(628);
      if (lookahead == 's')
        ADVANCE(631);
      END_STATE();
    case 611:
      if (lookahead == 'r')
        ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'r')
        ADVANCE(613);
      END_STATE();
    case 613:
      if (lookahead == 'a')
        ADVANCE(614);
      END_STATE();
    case 614:
      if (lookahead == 'y')
        ADVANCE(609);
      END_STATE();
    case 615:
      if (lookahead == 'r')
        ADVANCE(616);
      END_STATE();
    case 616:
      if (lookahead == 'o')
        ADVANCE(617);
      END_STATE();
    case 617:
      if (lookahead == 'u')
        ADVANCE(618);
      END_STATE();
    case 618:
      if (lookahead == 'p')
        ADVANCE(609);
      END_STATE();
    case 619:
      if (lookahead == 's')
        ADVANCE(620);
      END_STATE();
    case 620:
      if (lookahead == 'p')
        ADVANCE(621);
      END_STATE();
    case 621:
      if (lookahead == 'l')
        ADVANCE(622);
      END_STATE();
    case 622:
      if (lookahead == 'a')
        ADVANCE(623);
      END_STATE();
    case 623:
      if (lookahead == 'y')
        ADVANCE(624);
      END_STATE();
    case 624:
      if (lookahead == 'm')
        ADVANCE(625);
      END_STATE();
    case 625:
      if (lookahead == 'a')
        ADVANCE(626);
      END_STATE();
    case 626:
      if (lookahead == 't')
        ADVANCE(627);
      END_STATE();
    case 627:
      if (lookahead == 'h')
        ADVANCE(47);
      END_STATE();
    case 628:
      if (lookahead == 'a')
        ADVANCE(629);
      END_STATE();
    case 629:
      if (lookahead == 't')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 'h')
        ADVANCE(609);
      END_STATE();
    case 631:
      if (lookahead == 'e')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'r')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'i')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'e')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 's')
        ADVANCE(609);
      END_STATE();
    case 636:
      if (lookahead == 'q')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'n')
        ADVANCE(638);
      if (lookahead == 'u')
        ADVANCE(639);
      END_STATE();
    case 638:
      if (lookahead == 'a')
        ADVANCE(611);
      END_STATE();
    case 639:
      if (lookahead == 'a')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 't')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'i')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'o')
        ADVANCE(643);
      END_STATE();
    case 643:
      if (lookahead == 'n')
        ADVANCE(609);
      END_STATE();
    case 644:
      if (lookahead == 'l')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'a')
        ADVANCE(646);
      END_STATE();
    case 646:
      if (lookahead == 'l')
        ADVANCE(647);
      END_STATE();
    case 647:
      if (lookahead == 'i')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'g')
        ADVANCE(643);
      END_STATE();
    case 649:
      if (lookahead == 'a')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 't')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'h')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'e')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'r')
        ADVANCE(609);
      END_STATE();
    case 654:
      if (lookahead == 's')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 't')
        ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == 'l')
        ADVANCE(657);
      END_STATE();
    case 657:
      if (lookahead == 'i')
        ADVANCE(658);
      END_STATE();
    case 658:
      if (lookahead == 's')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 't')
        ADVANCE(660);
      END_STATE();
    case 660:
      if (lookahead == 'i')
        ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == 'n')
        ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == 'g')
        ADVANCE(24);
      END_STATE();
    case 663:
      if (lookahead == 'a')
        ADVANCE(664);
      if (lookahead == 'i')
        ADVANCE(667);
      if (lookahead == 'u')
        ADVANCE(671);
      END_STATE();
    case 664:
      if (lookahead == 't')
        ADVANCE(665);
      END_STATE();
    case 665:
      if (lookahead == 'h')
        ADVANCE(666);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      END_STATE();
    case 667:
      if (lookahead == 'n')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 't')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 'e')
        ADVANCE(670);
      END_STATE();
    case 670:
      if (lookahead == 'd')
        ADVANCE(24);
      END_STATE();
    case 671:
      if (lookahead == 'l')
        ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == 't')
        ADVANCE(673);
      END_STATE();
    case 673:
      if (lookahead == 'i')
        ADVANCE(674);
      END_STATE();
    case 674:
      if (lookahead == 'l')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 'i')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 'n')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'e')
        ADVANCE(609);
      END_STATE();
    case 678:
      if (lookahead == 'p')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 'l')
        ADVANCE(680);
      END_STATE();
    case 680:
      if (lookahead == 'i')
        ADVANCE(608);
      END_STATE();
    case 681:
      if (lookahead == 'e')
        ADVANCE(682);
      END_STATE();
    case 682:
      if (lookahead == 'r')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'b')
        ADVANCE(684);
      END_STATE();
    case 684:
      if (lookahead == 'a')
        ADVANCE(685);
      END_STATE();
    case 685:
      if (lookahead == 't')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 'i')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'm')
        ADVANCE(24);
      END_STATE();
    case 688:
      if (lookahead == 'V')
        ADVANCE(595);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 234},
  [2] = {.lex_state = 237},
  [3] = {.lex_state = 239},
  [4] = {.lex_state = 348},
  [5] = {.lex_state = 234},
  [6] = {.lex_state = 350},
  [7] = {.lex_state = 351},
  [8] = {.lex_state = 353},
  [9] = {.lex_state = 363},
  [10] = {.lex_state = 363},
  [11] = {.lex_state = 234},
  [12] = {.lex_state = 234},
  [13] = {.lex_state = 234},
  [14] = {.lex_state = 234},
  [15] = {.lex_state = 364},
  [16] = {.lex_state = 234},
  [17] = {.lex_state = 366},
  [18] = {.lex_state = 351},
  [19] = {.lex_state = 366},
  [20] = {.lex_state = 366},
  [21] = {.lex_state = 366},
  [22] = {.lex_state = 366},
  [23] = {.lex_state = 351},
  [24] = {.lex_state = 366},
  [25] = {.lex_state = 234},
  [26] = {.lex_state = 234},
  [27] = {.lex_state = 237},
  [28] = {.lex_state = 234},
  [29] = {.lex_state = 234},
  [30] = {.lex_state = 234},
  [31] = {.lex_state = 351},
  [32] = {.lex_state = 366},
  [33] = {.lex_state = 366},
  [34] = {.lex_state = 366},
  [35] = {.lex_state = 366},
  [36] = {.lex_state = 366},
  [37] = {.lex_state = 351},
  [38] = {.lex_state = 366},
  [39] = {.lex_state = 234},
  [40] = {.lex_state = 351},
  [41] = {.lex_state = 351},
  [42] = {.lex_state = 348},
  [43] = {.lex_state = 367},
  [44] = {.lex_state = 348},
  [45] = {.lex_state = 234},
  [46] = {.lex_state = 366},
  [47] = {.lex_state = 366},
  [48] = {.lex_state = 234},
  [49] = {.lex_state = 366},
  [50] = {.lex_state = 237},
  [51] = {.lex_state = 234},
  [52] = {.lex_state = 351},
  [53] = {.lex_state = 351},
  [54] = {.lex_state = 366},
  [55] = {.lex_state = 234},
  [56] = {.lex_state = 366},
  [57] = {.lex_state = 366},
  [58] = {.lex_state = 366},
  [59] = {.lex_state = 372},
  [60] = {.lex_state = 374},
  [61] = {.lex_state = 375},
  [62] = {.lex_state = 351},
  [63] = {.lex_state = 366},
  [64] = {.lex_state = 234},
  [65] = {.lex_state = 379},
  [66] = {.lex_state = 372},
  [67] = {.lex_state = 234},
  [68] = {.lex_state = 372},
  [69] = {.lex_state = 234},
  [70] = {.lex_state = 234},
  [71] = {.lex_state = 351},
  [72] = {.lex_state = 366},
  [73] = {.lex_state = 237},
  [74] = {.lex_state = 351},
  [75] = {.lex_state = 366},
  [76] = {.lex_state = 351},
  [77] = {.lex_state = 351},
  [78] = {.lex_state = 366},
  [79] = {.lex_state = 477},
  [80] = {.lex_state = 478},
  [81] = {.lex_state = 479},
  [82] = {.lex_state = 348},
  [83] = {.lex_state = 351},
  [84] = {.lex_state = 351},
  [85] = {.lex_state = 351},
  [86] = {.lex_state = 351},
  [87] = {.lex_state = 237},
  [88] = {.lex_state = 234},
  [89] = {.lex_state = 351},
  [90] = {.lex_state = 351},
  [91] = {.lex_state = 237},
  [92] = {.lex_state = 234},
  [93] = {.lex_state = 351},
  [94] = {.lex_state = 348},
  [95] = {.lex_state = 366},
  [96] = {.lex_state = 351},
  [97] = {.lex_state = 348},
  [98] = {.lex_state = 366},
  [99] = {.lex_state = 351},
  [100] = {.lex_state = 348},
  [101] = {.lex_state = 351},
  [102] = {.lex_state = 585},
  [103] = {.lex_state = 351},
  [104] = {.lex_state = 234},
  [105] = {.lex_state = 351},
  [106] = {.lex_state = 237},
  [107] = {.lex_state = 234},
  [108] = {.lex_state = 366},
  [109] = {.lex_state = 351},
  [110] = {.lex_state = 234},
  [111] = {.lex_state = 586},
  [112] = {.lex_state = 351},
  [113] = {.lex_state = 587},
  [114] = {.lex_state = 351},
  [115] = {.lex_state = 366},
  [116] = {.lex_state = 351},
  [117] = {.lex_state = 366},
  [118] = {.lex_state = 366},
  [119] = {.lex_state = 351},
  [120] = {.lex_state = 374},
  [121] = {.lex_state = 366},
  [122] = {.lex_state = 351},
  [123] = {.lex_state = 351},
  [124] = {.lex_state = 234},
  [125] = {.lex_state = 591},
  [126] = {.lex_state = 591},
  [127] = {.lex_state = 591},
  [128] = {.lex_state = 591},
  [129] = {.lex_state = 348},
  [130] = {.lex_state = 234},
  [131] = {.lex_state = 372},
  [132] = {.lex_state = 372},
  [133] = {.lex_state = 237},
  [134] = {.lex_state = 364},
  [135] = {.lex_state = 372},
  [136] = {.lex_state = 372},
  [137] = {.lex_state = 351},
  [138] = {.lex_state = 366},
  [139] = {.lex_state = 366},
  [140] = {.lex_state = 237},
  [141] = {.lex_state = 351},
  [142] = {.lex_state = 351},
  [143] = {.lex_state = 478},
  [144] = {.lex_state = 350},
  [145] = {.lex_state = 351},
  [146] = {.lex_state = 351},
  [147] = {.lex_state = 592},
  [148] = {.lex_state = 351},
  [149] = {.lex_state = 348},
  [150] = {.lex_state = 351},
  [151] = {.lex_state = 237},
  [152] = {.lex_state = 351},
  [153] = {.lex_state = 234},
  [154] = {.lex_state = 351},
  [155] = {.lex_state = 237},
  [156] = {.lex_state = 351},
  [157] = {.lex_state = 348},
  [158] = {.lex_state = 366},
  [159] = {.lex_state = 351},
  [160] = {.lex_state = 591},
  [161] = {.lex_state = 348},
  [162] = {.lex_state = 351},
  [163] = {.lex_state = 351},
  [164] = {.lex_state = 237},
  [165] = {.lex_state = 351},
  [166] = {.lex_state = 351},
  [167] = {.lex_state = 594},
  [168] = {.lex_state = 351},
  [169] = {.lex_state = 594},
  [170] = {.lex_state = 351},
  [171] = {.lex_state = 366},
  [172] = {.lex_state = 372},
  [173] = {.lex_state = 351},
  [174] = {.lex_state = 372},
  [175] = {.lex_state = 351},
  [176] = {.lex_state = 372},
  [177] = {.lex_state = 348},
  [178] = {.lex_state = 234},
  [179] = {.lex_state = 372},
  [180] = {.lex_state = 372},
  [181] = {.lex_state = 372},
  [182] = {.lex_state = 237},
  [183] = {.lex_state = 364},
  [184] = {.lex_state = 372},
  [185] = {.lex_state = 366},
  [186] = {.lex_state = 351},
  [187] = {.lex_state = 351},
  [188] = {.lex_state = 348},
  [189] = {.lex_state = 351},
  [190] = {.lex_state = 237},
  [191] = {.lex_state = 351},
  [192] = {.lex_state = 351},
  [193] = {.lex_state = 591},
  [194] = {.lex_state = 594},
  [195] = {.lex_state = 351},
  [196] = {.lex_state = 372},
  [197] = {.lex_state = 234},
  [198] = {.lex_state = 372},
  [199] = {.lex_state = 364},
  [200] = {.lex_state = 351},
  [201] = {.lex_state = 591},
  [202] = {.lex_state = 351},
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
    [sym_verbatim_text] = STATE(59),
    [aux_sym_verbatim_text_repeat1] = STATE(60),
    [sym__verbatim_token] = ACTIONS(87),
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
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(91),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(91),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(91),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(93),
  },
  [17] = {
    [sym_display_math_env_group] = STATE(66),
    [sym_inline_math_env_group] = STATE(67),
    [sym_verbatim_env_group] = STATE(68),
    [sym_simple_text_group] = STATE(69),
    [sym_begin_group] = ACTIONS(95),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(99),
    [sym_end_group] = ACTIONS(99),
    [sym_math_shift] = ACTIONS(99),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(99),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_comment_char] = ACTIONS(99),
    [sym_text] = ACTIONS(97),
  },
  [19] = {
    [sym_simple_text_group] = STATE(71),
    [sym_opt_text_group] = STATE(72),
    [sym_begin_opt] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(103),
  },
  [20] = {
    [sym_simple_text_group] = STATE(74),
    [sym_opt_text_group] = STATE(75),
    [sym_begin_opt] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(103),
  },
  [21] = {
    [sym_text_group] = STATE(76),
    [sym_begin_group] = ACTIONS(105),
  },
  [22] = {
    [sym_text_group] = STATE(77),
    [sym_opt_text_group] = STATE(78),
    [sym_begin_opt] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(105),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_end_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_comment_char] = ACTIONS(109),
    [sym_text] = ACTIONS(107),
  },
  [24] = {
    [sym_escaped] = STATE(80),
    [sym__escape] = ACTIONS(111),
  },
  [25] = {
    [sym__at_text_mode] = STATE(88),
    [sym_parameter] = STATE(88),
    [sym_text_env] = STATE(88),
    [sym__display_math] = STATE(88),
    [sym_tex_display_math] = STATE(88),
    [sym_latex_display_math] = STATE(88),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(88),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(88),
    [sym_tex_inline_math] = STATE(88),
    [sym_latex_inline_math] = STATE(88),
    [sym_inline_math_env] = STATE(88),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(88),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(88),
    [sym_at_command] = STATE(88),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_makeatother] = STATE(85),
    [sym_makeatother_token] = STATE(86),
    [sym_at_text_group] = STATE(88),
    [sym_opt_at_text_group] = STATE(88),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(88),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(88),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(117),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(121),
  },
  [26] = {
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym__escape] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(123),
    [sym_alignment_tab] = ACTIONS(123),
    [sym_parameter_char] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(123),
    [sym_comment_char] = ACTIONS(123),
    [sym_text] = ACTIONS(125),
  },
  [27] = {
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
    [sym_end_opt] = STATE(90),
    [aux_sym_text_mode_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(129),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(131),
  },
  [28] = {
    [sym__text_mode] = STATE(92),
    [sym_at_group] = STATE(92),
    [sym_parameter] = STATE(92),
    [sym_text_env] = STATE(92),
    [sym__display_math] = STATE(92),
    [sym_tex_display_math] = STATE(92),
    [sym_latex_display_math] = STATE(92),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(92),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(92),
    [sym_tex_inline_math] = STATE(92),
    [sym_latex_inline_math] = STATE(92),
    [sym_inline_math_env] = STATE(92),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(92),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(92),
    [sym_command] = STATE(92),
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
    [sym_text_group] = STATE(92),
    [sym_opt_text_group] = STATE(92),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(92),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(135),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(137),
  },
  [29] = {
    [anon_sym_LBRACK] = ACTIONS(139),
    [sym__escape] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(139),
    [sym_text] = ACTIONS(141),
  },
  [30] = {
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym__escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_active_char] = ACTIONS(149),
    [sym_comment_char] = ACTIONS(149),
    [sym_text] = ACTIONS(147),
  },
  [32] = {
    [sym_begin_group] = ACTIONS(151),
  },
  [33] = {
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_begin_group] = ACTIONS(153),
  },
  [34] = {
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
  },
  [35] = {
    [sym_begin_group] = ACTIONS(157),
  },
  [36] = {
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(161),
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
    [sym_text] = ACTIONS(161),
  },
  [38] = {
    [sym__escape] = ACTIONS(165),
  },
  [39] = {
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym__escape] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(167),
    [sym_math_shift] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_parameter_char] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [sym_subscript] = ACTIONS(167),
    [sym_active_char] = ACTIONS(167),
    [sym_comment_char] = ACTIONS(167),
    [sym_text] = ACTIONS(169),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [sym__escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(173),
    [sym_math_shift] = ACTIONS(173),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_comment_char] = ACTIONS(173),
    [sym_text] = ACTIONS(171),
  },
  [41] = {
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
  [42] = {
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(94),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(94),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(181),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(183),
  },
  [43] = {
    [anon_sym_tag] = ACTIONS(185),
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
  [44] = {
    [sym__math_mode] = STATE(97),
    [sym_parameter] = STATE(97),
    [sym_math_environment] = STATE(97),
    [sym_tag] = STATE(97),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(97),
    [sym_command] = STATE(97),
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
    [sym_math_group] = STATE(97),
    [sym_opt_math_group] = STATE(97),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(97),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(187),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(189),
    [sym_active_char] = ACTIONS(189),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(191),
  },
  [45] = {
    [sym__math_mode] = STATE(51),
    [sym_math_mode] = STATE(98),
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
  [46] = {
    [sym_math_shift] = ACTIONS(193),
  },
  [47] = {
    [sym_math_text_group] = STATE(101),
    [sym_begin_group] = ACTIONS(195),
  },
  [48] = {
    [sym__math_mode] = STATE(104),
    [sym_parameter] = STATE(104),
    [sym_math_environment] = STATE(104),
    [sym_tag] = STATE(104),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(104),
    [sym_command] = STATE(104),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_end] = STATE(103),
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
    [sym_math_group] = STATE(104),
    [sym_opt_math_group] = STATE(104),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(104),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(201),
  },
  [49] = {
    [sym_simple_text_group] = STATE(69),
    [sym_begin_group] = ACTIONS(103),
  },
  [50] = {
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
    [sym_end_opt] = STATE(105),
    [aux_sym_math_mode_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(205),
  },
  [51] = {
    [sym__math_mode] = STATE(107),
    [sym_parameter] = STATE(107),
    [sym_math_environment] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(107),
    [sym_command] = STATE(107),
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
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(107),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(211),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym__escape] = ACTIONS(215),
    [sym_begin_group] = ACTIONS(215),
    [sym_end_group] = ACTIONS(215),
    [sym_math_shift] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_comment_char] = ACTIONS(215),
    [sym_text] = ACTIONS(213),
  },
  [53] = {
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
  [54] = {
    [sym_end_display_math] = STATE(109),
    [sym__escape] = ACTIONS(221),
  },
  [55] = {
    [sym__math_mode] = STATE(110),
    [sym_parameter] = STATE(110),
    [sym_math_environment] = STATE(110),
    [sym_tag] = STATE(110),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(110),
    [sym_command] = STATE(110),
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
    [sym_math_group] = STATE(110),
    [sym_opt_math_group] = STATE(110),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(110),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(207),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(225),
  },
  [56] = {
    [sym_end_inline_math] = STATE(112),
    [sym__escape] = ACTIONS(227),
  },
  [57] = {
    [sym_display_math_end] = STATE(114),
    [sym_end_token] = STATE(115),
    [sym__escape] = ACTIONS(229),
  },
  [58] = {
    [sym_inline_math_end] = STATE(116),
    [sym_end_token] = STATE(117),
    [sym__escape] = ACTIONS(229),
  },
  [59] = {
    [sym_verbatim_end] = STATE(119),
    [sym__end_of_line] = ACTIONS(231),
  },
  [60] = {
    [aux_sym_verbatim_text_repeat1] = STATE(120),
    [sym__end_of_line] = ACTIONS(233),
    [sym__verbatim_token] = ACTIONS(235),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(237),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_makeatletter] = ACTIONS(49),
    [sym__name] = ACTIONS(51),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_RBRACK] = ACTIONS(241),
    [sym__escape] = ACTIONS(241),
    [sym_begin_group] = ACTIONS(241),
    [sym_end_group] = ACTIONS(241),
    [sym_math_shift] = ACTIONS(241),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(241),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(241),
    [sym_text] = ACTIONS(239),
  },
  [63] = {
    [sym_simple_text_group] = STATE(122),
    [sym_begin_group] = ACTIONS(103),
  },
  [64] = {
    [sym__text_mode] = STATE(124),
    [sym_at_group] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_text_env] = STATE(124),
    [sym__display_math] = STATE(124),
    [sym_tex_display_math] = STATE(124),
    [sym_latex_display_math] = STATE(124),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(124),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(124),
    [sym_tex_inline_math] = STATE(124),
    [sym_latex_inline_math] = STATE(124),
    [sym_inline_math_env] = STATE(124),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(124),
    [sym_command] = STATE(124),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(123),
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
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(124),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(243),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(245),
  },
  [65] = {
    [sym_display_math_env_name] = ACTIONS(247),
    [sym_inline_math_env_name] = ACTIONS(249),
    [sym_verbatim_env_name] = ACTIONS(251),
    [sym_text] = ACTIONS(253),
  },
  [66] = {
    [sym_text_group] = STATE(131),
    [sym_opt_text_group] = STATE(132),
    [sym_begin_opt] = STATE(133),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(255),
    [sym__end_of_line] = ACTIONS(257),
  },
  [67] = {
    [anon_sym_LBRACK] = ACTIONS(259),
    [sym__escape] = ACTIONS(259),
    [sym_begin_group] = ACTIONS(259),
    [sym_alignment_tab] = ACTIONS(259),
    [sym_parameter_char] = ACTIONS(259),
    [sym_superscript] = ACTIONS(259),
    [sym_subscript] = ACTIONS(259),
    [sym_active_char] = ACTIONS(259),
    [sym_comment_char] = ACTIONS(259),
    [sym_text] = ACTIONS(261),
  },
  [68] = {
    [sym_text_group] = STATE(135),
    [sym_opt_text_group] = STATE(136),
    [sym_begin_opt] = STATE(133),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(255),
    [sym__end_of_line] = ACTIONS(263),
  },
  [69] = {
    [anon_sym_LBRACK] = ACTIONS(265),
    [sym__escape] = ACTIONS(265),
    [sym_begin_group] = ACTIONS(265),
    [sym_math_shift] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(265),
    [sym_parameter_char] = ACTIONS(265),
    [sym_superscript] = ACTIONS(265),
    [sym_subscript] = ACTIONS(265),
    [sym_active_char] = ACTIONS(265),
    [sym_comment_char] = ACTIONS(265),
    [sym_text] = ACTIONS(267),
  },
  [70] = {
    [sym_text] = ACTIONS(269),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(273),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(273),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_comment_char] = ACTIONS(273),
    [sym_text] = ACTIONS(271),
  },
  [72] = {
    [sym_simple_text_group] = STATE(137),
    [sym_begin_group] = ACTIONS(103),
  },
  [73] = {
    [sym__text_mode] = STATE(140),
    [sym_at_group] = STATE(140),
    [sym_parameter] = STATE(140),
    [sym_text_env] = STATE(140),
    [sym__display_math] = STATE(140),
    [sym_tex_display_math] = STATE(140),
    [sym_latex_display_math] = STATE(140),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(140),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(140),
    [sym_tex_inline_math] = STATE(140),
    [sym_latex_inline_math] = STATE(140),
    [sym_inline_math_env] = STATE(140),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(140),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(140),
    [sym_command] = STATE(140),
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
    [sym_text_group] = STATE(140),
    [sym_opt_text_group] = STATE(140),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(140),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(139),
    [aux_sym_text_mode_repeat1] = STATE(140),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(277),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(279),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym__escape] = ACTIONS(283),
    [sym_begin_group] = ACTIONS(283),
    [sym_end_group] = ACTIONS(283),
    [sym_math_shift] = ACTIONS(283),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(283),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(283),
    [sym_active_char] = ACTIONS(283),
    [sym_comment_char] = ACTIONS(283),
    [sym_text] = ACTIONS(281),
  },
  [75] = {
    [sym_simple_text_group] = STATE(141),
    [sym_begin_group] = ACTIONS(103),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym__escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(287),
    [sym_end_group] = ACTIONS(287),
    [sym_math_shift] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(287),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(287),
    [sym_text] = ACTIONS(285),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym__escape] = ACTIONS(291),
    [sym_begin_group] = ACTIONS(291),
    [sym_end_group] = ACTIONS(291),
    [sym_math_shift] = ACTIONS(291),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(291),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_comment_char] = ACTIONS(291),
    [sym_text] = ACTIONS(289),
  },
  [78] = {
    [sym_text_group] = STATE(142),
    [sym_begin_group] = ACTIONS(105),
  },
  [79] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(293),
  },
  [80] = {
    [anon_sym_EQ] = ACTIONS(295),
  },
  [81] = {
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
    [anon_sym_makeatother] = ACTIONS(297),
    [sym__at_name] = ACTIONS(299),
  },
  [82] = {
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
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(149),
    [sym_opt_at_text_group] = STATE(149),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(149),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(149),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(115),
    [sym_end_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(305),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(307),
  },
  [83] = {
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym__escape] = ACTIONS(309),
    [sym_begin_group] = ACTIONS(309),
    [sym_end_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(309),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_comment_char] = ACTIONS(309),
    [sym_text] = ACTIONS(311),
  },
  [84] = {
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [sym__escape] = ACTIONS(313),
    [sym_begin_group] = ACTIONS(313),
    [sym_end_group] = ACTIONS(313),
    [sym_math_shift] = ACTIONS(313),
    [sym_alignment_tab] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(313),
    [sym_superscript] = ACTIONS(313),
    [sym_subscript] = ACTIONS(313),
    [sym_active_char] = ACTIONS(313),
    [sym_comment_char] = ACTIONS(313),
    [sym_text] = ACTIONS(315),
  },
  [85] = {
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
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym__escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(323),
    [sym_math_shift] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_comment_char] = ACTIONS(323),
    [sym_text] = ACTIONS(321),
  },
  [87] = {
    [sym__at_text_mode] = STATE(151),
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
    [sym_at_command] = STATE(151),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(151),
    [sym_opt_at_text_group] = STATE(151),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(87),
    [sym_end_opt] = STATE(150),
    [aux_sym_at_group_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(327),
  },
  [88] = {
    [sym__at_text_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_text_env] = STATE(153),
    [sym__display_math] = STATE(153),
    [sym_tex_display_math] = STATE(153),
    [sym_latex_display_math] = STATE(153),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(153),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(153),
    [sym_tex_inline_math] = STATE(153),
    [sym_latex_inline_math] = STATE(153),
    [sym_inline_math_env] = STATE(153),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(153),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(153),
    [sym_at_command] = STATE(153),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_makeatother] = STATE(152),
    [sym_makeatother_token] = STATE(86),
    [sym_at_text_group] = STATE(153),
    [sym_opt_at_text_group] = STATE(153),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(329),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(331),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(333),
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
    [sym_text] = ACTIONS(333),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(337),
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
    [sym_text] = ACTIONS(337),
  },
  [91] = {
    [sym__text_mode] = STATE(155),
    [sym_at_group] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(155),
    [sym_command] = STATE(155),
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
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(155),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(155),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(154),
    [aux_sym_text_mode_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(341),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(343),
  },
  [92] = {
    [sym__text_mode] = STATE(92),
    [sym_at_group] = STATE(92),
    [sym_parameter] = STATE(92),
    [sym_text_env] = STATE(92),
    [sym__display_math] = STATE(92),
    [sym_tex_display_math] = STATE(92),
    [sym_latex_display_math] = STATE(92),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(92),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(92),
    [sym_tex_inline_math] = STATE(92),
    [sym_latex_inline_math] = STATE(92),
    [sym_inline_math_env] = STATE(92),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(92),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(92),
    [sym_command] = STATE(92),
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
    [sym_text_group] = STATE(92),
    [sym_opt_text_group] = STATE(92),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(92),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(92),
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(359),
    [sym_comment_char] = ACTIONS(368),
    [sym_text] = ACTIONS(371),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_RBRACK] = ACTIONS(376),
    [sym__escape] = ACTIONS(376),
    [sym_begin_group] = ACTIONS(376),
    [sym_end_group] = ACTIONS(376),
    [sym_math_shift] = ACTIONS(376),
    [sym_alignment_tab] = ACTIONS(376),
    [sym_parameter_char] = ACTIONS(376),
    [sym_superscript] = ACTIONS(376),
    [sym_subscript] = ACTIONS(376),
    [sym_active_char] = ACTIONS(376),
    [sym_comment_char] = ACTIONS(376),
    [sym_text] = ACTIONS(374),
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(94),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(94),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_end_group] = ACTIONS(378),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(380),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(380),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(380),
    [sym_comment_char] = ACTIONS(368),
    [sym_text] = ACTIONS(383),
  },
  [95] = {
    [sym_begin_group] = ACTIONS(386),
  },
  [96] = {
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [sym__escape] = ACTIONS(388),
    [sym_begin_group] = ACTIONS(388),
    [sym_end_group] = ACTIONS(388),
    [sym_math_shift] = ACTIONS(388),
    [sym_alignment_tab] = ACTIONS(388),
    [sym_parameter_char] = ACTIONS(388),
    [sym_superscript] = ACTIONS(388),
    [sym_subscript] = ACTIONS(388),
    [sym_active_char] = ACTIONS(388),
    [sym_comment_char] = ACTIONS(388),
    [sym_text] = ACTIONS(390),
  },
  [97] = {
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_environment] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
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
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(392),
    [sym_alignment_tab] = ACTIONS(394),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(394),
    [sym_subscript] = ACTIONS(394),
    [sym_active_char] = ACTIONS(394),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(396),
  },
  [98] = {
    [sym_math_shift] = ACTIONS(398),
  },
  [99] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(402),
    [anon_sym_RBRACK] = ACTIONS(402),
    [sym__escape] = ACTIONS(402),
    [sym_begin_group] = ACTIONS(402),
    [sym_end_group] = ACTIONS(402),
    [sym_math_shift] = ACTIONS(402),
    [sym_alignment_tab] = ACTIONS(402),
    [sym_parameter_char] = ACTIONS(402),
    [sym_superscript] = ACTIONS(402),
    [sym_subscript] = ACTIONS(402),
    [sym_active_char] = ACTIONS(402),
    [sym_comment_char] = ACTIONS(402),
    [sym_text] = ACTIONS(400),
  },
  [100] = {
    [sym__text_mode] = STATE(161),
    [sym_text_mode] = STATE(160),
    [sym_at_group] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_text_env] = STATE(161),
    [sym__display_math] = STATE(161),
    [sym_tex_display_math] = STATE(161),
    [sym_latex_display_math] = STATE(161),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(161),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(161),
    [sym_tex_inline_math] = STATE(161),
    [sym_latex_inline_math] = STATE(161),
    [sym_inline_math_env] = STATE(161),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(161),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(161),
    [sym_command] = STATE(161),
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
    [sym_text_group] = STATE(161),
    [sym_opt_text_group] = STATE(161),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(161),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(404),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(406),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(406),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(406),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(408),
  },
  [101] = {
    [anon_sym_LBRACK] = ACTIONS(410),
    [anon_sym_RBRACK] = ACTIONS(410),
    [sym__escape] = ACTIONS(410),
    [sym_begin_group] = ACTIONS(410),
    [sym_end_group] = ACTIONS(410),
    [sym_math_shift] = ACTIONS(410),
    [sym_alignment_tab] = ACTIONS(410),
    [sym_parameter_char] = ACTIONS(410),
    [sym_superscript] = ACTIONS(410),
    [sym_subscript] = ACTIONS(410),
    [sym_active_char] = ACTIONS(410),
    [sym_comment_char] = ACTIONS(410),
    [sym_text] = ACTIONS(412),
  },
  [102] = {
    [anon_sym_tag] = ACTIONS(185),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(237),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym__name] = ACTIONS(51),
  },
  [103] = {
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_RBRACK] = ACTIONS(414),
    [sym__escape] = ACTIONS(414),
    [sym_begin_group] = ACTIONS(414),
    [sym_end_group] = ACTIONS(414),
    [sym_math_shift] = ACTIONS(414),
    [sym_alignment_tab] = ACTIONS(414),
    [sym_parameter_char] = ACTIONS(414),
    [sym_superscript] = ACTIONS(414),
    [sym_subscript] = ACTIONS(414),
    [sym_active_char] = ACTIONS(414),
    [sym_comment_char] = ACTIONS(414),
    [sym_text] = ACTIONS(416),
  },
  [104] = {
    [sym__math_mode] = STATE(110),
    [sym_parameter] = STATE(110),
    [sym_math_environment] = STATE(110),
    [sym_tag] = STATE(110),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(110),
    [sym_command] = STATE(110),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_end] = STATE(162),
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
    [sym_math_group] = STATE(110),
    [sym_opt_math_group] = STATE(110),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(110),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(225),
  },
  [105] = {
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym__escape] = ACTIONS(418),
    [sym_begin_group] = ACTIONS(418),
    [sym_end_group] = ACTIONS(418),
    [sym_math_shift] = ACTIONS(418),
    [sym_alignment_tab] = ACTIONS(418),
    [sym_parameter_char] = ACTIONS(418),
    [sym_superscript] = ACTIONS(418),
    [sym_subscript] = ACTIONS(418),
    [sym_active_char] = ACTIONS(418),
    [sym_comment_char] = ACTIONS(418),
    [sym_text] = ACTIONS(420),
  },
  [106] = {
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_environment] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(164),
    [sym_command] = STATE(164),
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
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(164),
    [sym_begin_opt] = STATE(50),
    [sym_end_opt] = STATE(163),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(422),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(422),
    [sym_subscript] = ACTIONS(422),
    [sym_active_char] = ACTIONS(422),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(424),
  },
  [107] = {
    [sym__math_mode] = STATE(107),
    [sym_parameter] = STATE(107),
    [sym_math_environment] = STATE(107),
    [sym_tag] = STATE(107),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(107),
    [sym_command] = STATE(107),
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
    [sym_math_group] = STATE(107),
    [sym_opt_math_group] = STATE(107),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(107),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(107),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(432),
    [sym_math_shift] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(437),
    [sym_parameter_char] = ACTIONS(440),
    [sym_superscript] = ACTIONS(437),
    [sym_subscript] = ACTIONS(437),
    [sym_active_char] = ACTIONS(437),
    [sym_comment_char] = ACTIONS(443),
    [sym_text] = ACTIONS(446),
  },
  [108] = {
    [anon_sym_RBRACK] = ACTIONS(449),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym__escape] = ACTIONS(453),
    [sym_begin_group] = ACTIONS(453),
    [sym_end_group] = ACTIONS(453),
    [sym_math_shift] = ACTIONS(453),
    [sym_alignment_tab] = ACTIONS(453),
    [sym_parameter_char] = ACTIONS(453),
    [sym_superscript] = ACTIONS(453),
    [sym_subscript] = ACTIONS(453),
    [sym_active_char] = ACTIONS(453),
    [sym_comment_char] = ACTIONS(453),
    [sym_text] = ACTIONS(451),
  },
  [110] = {
    [sym__math_mode] = STATE(110),
    [sym_parameter] = STATE(110),
    [sym_math_environment] = STATE(110),
    [sym_tag] = STATE(110),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(110),
    [sym_command] = STATE(110),
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
    [sym_math_group] = STATE(110),
    [sym_opt_math_group] = STATE(110),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(110),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(110),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(440),
    [sym_superscript] = ACTIONS(455),
    [sym_subscript] = ACTIONS(455),
    [sym_active_char] = ACTIONS(455),
    [sym_comment_char] = ACTIONS(443),
    [sym_text] = ACTIONS(458),
  },
  [111] = {
    [anon_sym_RPAREN] = ACTIONS(461),
  },
  [112] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym__escape] = ACTIONS(465),
    [sym_begin_group] = ACTIONS(465),
    [sym_end_group] = ACTIONS(465),
    [sym_math_shift] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(465),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(465),
    [sym_active_char] = ACTIONS(465),
    [sym_comment_char] = ACTIONS(465),
    [sym_text] = ACTIONS(463),
  },
  [113] = {
    [anon_sym_end] = ACTIONS(467),
  },
  [114] = {
    [ts_builtin_sym_end] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [sym__escape] = ACTIONS(471),
    [sym_begin_group] = ACTIONS(471),
    [sym_end_group] = ACTIONS(471),
    [sym_math_shift] = ACTIONS(471),
    [sym_alignment_tab] = ACTIONS(471),
    [sym_parameter_char] = ACTIONS(471),
    [sym_superscript] = ACTIONS(471),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(471),
    [sym_comment_char] = ACTIONS(471),
    [sym_text] = ACTIONS(469),
  },
  [115] = {
    [sym_display_math_env_group] = STATE(168),
    [sym_begin_group] = ACTIONS(473),
  },
  [116] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym__escape] = ACTIONS(477),
    [sym_begin_group] = ACTIONS(477),
    [sym_end_group] = ACTIONS(477),
    [sym_math_shift] = ACTIONS(477),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(477),
    [sym_superscript] = ACTIONS(477),
    [sym_subscript] = ACTIONS(477),
    [sym_active_char] = ACTIONS(477),
    [sym_comment_char] = ACTIONS(477),
    [sym_text] = ACTIONS(475),
  },
  [117] = {
    [sym_inline_math_env_group] = STATE(170),
    [sym_begin_group] = ACTIONS(479),
  },
  [118] = {
    [sym_end_token] = STATE(171),
    [sym__escape] = ACTIONS(229),
  },
  [119] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(483),
    [sym__escape] = ACTIONS(483),
    [sym_begin_group] = ACTIONS(483),
    [sym_end_group] = ACTIONS(483),
    [sym_math_shift] = ACTIONS(483),
    [sym_alignment_tab] = ACTIONS(483),
    [sym_parameter_char] = ACTIONS(483),
    [sym_superscript] = ACTIONS(483),
    [sym_subscript] = ACTIONS(483),
    [sym_active_char] = ACTIONS(483),
    [sym_comment_char] = ACTIONS(483),
    [sym_text] = ACTIONS(481),
  },
  [120] = {
    [aux_sym_verbatim_text_repeat1] = STATE(120),
    [sym__end_of_line] = ACTIONS(485),
    [sym__verbatim_token] = ACTIONS(487),
  },
  [121] = {
    [sym_begin_group] = ACTIONS(490),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(492),
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym__escape] = ACTIONS(494),
    [sym_begin_group] = ACTIONS(494),
    [sym_end_group] = ACTIONS(494),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(494),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(494),
    [sym_active_char] = ACTIONS(494),
    [sym_comment_char] = ACTIONS(494),
    [sym_text] = ACTIONS(492),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(496),
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
    [sym_text] = ACTIONS(496),
  },
  [124] = {
    [sym__text_mode] = STATE(124),
    [sym_at_group] = STATE(124),
    [sym_parameter] = STATE(124),
    [sym_text_env] = STATE(124),
    [sym__display_math] = STATE(124),
    [sym_tex_display_math] = STATE(124),
    [sym_latex_display_math] = STATE(124),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(124),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(124),
    [sym_tex_inline_math] = STATE(124),
    [sym_latex_inline_math] = STATE(124),
    [sym_inline_math_env] = STATE(124),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(124),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(124),
    [sym_command] = STATE(124),
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
    [sym_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(124),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(124),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(347),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(500),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(500),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(500),
    [sym_comment_char] = ACTIONS(368),
    [sym_text] = ACTIONS(503),
  },
  [125] = {
    [sym_end_group] = ACTIONS(506),
  },
  [126] = {
    [sym_end_group] = ACTIONS(508),
  },
  [127] = {
    [sym_end_group] = ACTIONS(510),
  },
  [128] = {
    [sym_end_group] = ACTIONS(512),
  },
  [129] = {
    [sym__text_mode] = STATE(177),
    [sym_at_group] = STATE(177),
    [sym_parameter] = STATE(177),
    [sym_text_env] = STATE(177),
    [sym__display_math] = STATE(177),
    [sym_tex_display_math] = STATE(177),
    [sym_latex_display_math] = STATE(177),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(177),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(177),
    [sym_tex_inline_math] = STATE(177),
    [sym_latex_inline_math] = STATE(177),
    [sym_inline_math_env] = STATE(177),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(177),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(177),
    [sym_command] = STATE(177),
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
    [sym_text_group] = STATE(177),
    [sym_opt_text_group] = STATE(177),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(177),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(514),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(516),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(516),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(518),
  },
  [130] = {
    [anon_sym_LBRACK] = ACTIONS(520),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(520),
    [sym_alignment_tab] = ACTIONS(520),
    [sym_parameter_char] = ACTIONS(520),
    [sym_superscript] = ACTIONS(520),
    [sym_subscript] = ACTIONS(520),
    [sym_active_char] = ACTIONS(520),
    [sym_comment_char] = ACTIONS(520),
    [sym_text] = ACTIONS(522),
  },
  [131] = {
    [sym__end_of_line] = ACTIONS(524),
  },
  [132] = {
    [sym_text_group] = STATE(179),
    [sym_begin_group] = ACTIONS(255),
    [sym__end_of_line] = ACTIONS(524),
  },
  [133] = {
    [sym__text_mode] = STATE(182),
    [sym_at_group] = STATE(182),
    [sym_parameter] = STATE(182),
    [sym_text_env] = STATE(182),
    [sym__display_math] = STATE(182),
    [sym_tex_display_math] = STATE(182),
    [sym_latex_display_math] = STATE(182),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(182),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(182),
    [sym_tex_inline_math] = STATE(182),
    [sym_latex_inline_math] = STATE(182),
    [sym_inline_math_env] = STATE(182),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(182),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(182),
    [sym_command] = STATE(182),
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
    [sym_text_group] = STATE(182),
    [sym_opt_text_group] = STATE(182),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(182),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(181),
    [aux_sym_text_mode_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(528),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(528),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(530),
  },
  [134] = {
    [sym__verbatim_token] = ACTIONS(532),
  },
  [135] = {
    [sym__end_of_line] = ACTIONS(534),
  },
  [136] = {
    [sym_text_group] = STATE(184),
    [sym_begin_group] = ACTIONS(255),
    [sym__end_of_line] = ACTIONS(534),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(536),
    [anon_sym_LBRACK] = ACTIONS(538),
    [anon_sym_RBRACK] = ACTIONS(538),
    [sym__escape] = ACTIONS(538),
    [sym_begin_group] = ACTIONS(538),
    [sym_end_group] = ACTIONS(538),
    [sym_math_shift] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(538),
    [sym_parameter_char] = ACTIONS(538),
    [sym_superscript] = ACTIONS(538),
    [sym_subscript] = ACTIONS(538),
    [sym_active_char] = ACTIONS(538),
    [sym_comment_char] = ACTIONS(538),
    [sym_text] = ACTIONS(536),
  },
  [138] = {
    [sym_begin_group] = ACTIONS(333),
  },
  [139] = {
    [sym_begin_group] = ACTIONS(337),
  },
  [140] = {
    [sym__text_mode] = STATE(155),
    [sym_at_group] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(155),
    [sym_command] = STATE(155),
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
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(155),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(155),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(185),
    [aux_sym_text_mode_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(275),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(341),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(343),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(540),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_RBRACK] = ACTIONS(542),
    [sym__escape] = ACTIONS(542),
    [sym_begin_group] = ACTIONS(542),
    [sym_end_group] = ACTIONS(542),
    [sym_math_shift] = ACTIONS(542),
    [sym_alignment_tab] = ACTIONS(542),
    [sym_parameter_char] = ACTIONS(542),
    [sym_superscript] = ACTIONS(542),
    [sym_subscript] = ACTIONS(542),
    [sym_active_char] = ACTIONS(542),
    [sym_comment_char] = ACTIONS(542),
    [sym_text] = ACTIONS(540),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(544),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_RBRACK] = ACTIONS(546),
    [sym__escape] = ACTIONS(546),
    [sym_begin_group] = ACTIONS(546),
    [sym_end_group] = ACTIONS(546),
    [sym_math_shift] = ACTIONS(546),
    [sym_alignment_tab] = ACTIONS(546),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(546),
    [sym_subscript] = ACTIONS(546),
    [sym_active_char] = ACTIONS(546),
    [sym_comment_char] = ACTIONS(546),
    [sym_text] = ACTIONS(544),
  },
  [143] = {
    [anon_sym_EQ] = ACTIONS(147),
  },
  [144] = {
    [sym_number] = ACTIONS(548),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(550),
    [anon_sym_LBRACK] = ACTIONS(552),
    [anon_sym_RBRACK] = ACTIONS(552),
    [sym__escape] = ACTIONS(552),
    [sym_begin_group] = ACTIONS(552),
    [sym_end_group] = ACTIONS(552),
    [sym_math_shift] = ACTIONS(552),
    [sym_alignment_tab] = ACTIONS(552),
    [sym_parameter_char] = ACTIONS(552),
    [sym_superscript] = ACTIONS(552),
    [sym_subscript] = ACTIONS(552),
    [sym_active_char] = ACTIONS(552),
    [sym_comment_char] = ACTIONS(552),
    [sym_text] = ACTIONS(550),
  },
  [146] = {
    [anon_sym_LBRACK] = ACTIONS(554),
    [anon_sym_RBRACK] = ACTIONS(554),
    [sym__escape] = ACTIONS(554),
    [sym_begin_group] = ACTIONS(554),
    [sym_end_group] = ACTIONS(554),
    [sym_math_shift] = ACTIONS(554),
    [sym_alignment_tab] = ACTIONS(554),
    [sym_parameter_char] = ACTIONS(554),
    [sym_superscript] = ACTIONS(554),
    [sym_subscript] = ACTIONS(554),
    [sym_active_char] = ACTIONS(554),
    [sym_comment_char] = ACTIONS(554),
    [sym_text] = ACTIONS(556),
  },
  [147] = {
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
    [sym__at_name] = ACTIONS(299),
  },
  [148] = {
    [anon_sym_LBRACK] = ACTIONS(558),
    [anon_sym_RBRACK] = ACTIONS(558),
    [sym__escape] = ACTIONS(558),
    [sym_begin_group] = ACTIONS(558),
    [sym_end_group] = ACTIONS(558),
    [sym_math_shift] = ACTIONS(558),
    [sym_alignment_tab] = ACTIONS(558),
    [sym_parameter_char] = ACTIONS(558),
    [sym_superscript] = ACTIONS(558),
    [sym_subscript] = ACTIONS(558),
    [sym_active_char] = ACTIONS(558),
    [sym_comment_char] = ACTIONS(558),
    [sym_text] = ACTIONS(560),
  },
  [149] = {
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
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(188),
    [sym_opt_at_text_group] = STATE(188),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(188),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(115),
    [sym_end_group] = ACTIONS(562),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(564),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(564),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(566),
  },
  [150] = {
    [anon_sym_LBRACK] = ACTIONS(568),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym__escape] = ACTIONS(568),
    [sym_begin_group] = ACTIONS(568),
    [sym_end_group] = ACTIONS(568),
    [sym_math_shift] = ACTIONS(568),
    [sym_alignment_tab] = ACTIONS(568),
    [sym_parameter_char] = ACTIONS(568),
    [sym_superscript] = ACTIONS(568),
    [sym_subscript] = ACTIONS(568),
    [sym_active_char] = ACTIONS(568),
    [sym_comment_char] = ACTIONS(568),
    [sym_text] = ACTIONS(570),
  },
  [151] = {
    [sym__at_text_mode] = STATE(190),
    [sym_parameter] = STATE(190),
    [sym_text_env] = STATE(190),
    [sym__display_math] = STATE(190),
    [sym_tex_display_math] = STATE(190),
    [sym_latex_display_math] = STATE(190),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(190),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(190),
    [sym_tex_inline_math] = STATE(190),
    [sym_latex_inline_math] = STATE(190),
    [sym_inline_math_env] = STATE(190),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(190),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(190),
    [sym_at_command] = STATE(190),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(190),
    [sym_opt_at_text_group] = STATE(190),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(190),
    [sym_begin_opt] = STATE(87),
    [sym_end_opt] = STATE(189),
    [aux_sym_at_group_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym__escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(115),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(572),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(572),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(572),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(574),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_LBRACK] = ACTIONS(578),
    [anon_sym_RBRACK] = ACTIONS(578),
    [sym__escape] = ACTIONS(578),
    [sym_begin_group] = ACTIONS(578),
    [sym_end_group] = ACTIONS(578),
    [sym_math_shift] = ACTIONS(578),
    [sym_alignment_tab] = ACTIONS(578),
    [sym_parameter_char] = ACTIONS(578),
    [sym_superscript] = ACTIONS(578),
    [sym_subscript] = ACTIONS(578),
    [sym_active_char] = ACTIONS(578),
    [sym_comment_char] = ACTIONS(578),
    [sym_text] = ACTIONS(576),
  },
  [153] = {
    [sym__at_text_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_text_env] = STATE(153),
    [sym__display_math] = STATE(153),
    [sym_tex_display_math] = STATE(153),
    [sym_latex_display_math] = STATE(153),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(153),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(153),
    [sym_tex_inline_math] = STATE(153),
    [sym_latex_inline_math] = STATE(153),
    [sym_inline_math_env] = STATE(153),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(153),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(153),
    [sym_at_command] = STATE(153),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(153),
    [sym_opt_at_text_group] = STATE(153),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(580),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(586),
    [sym_math_shift] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(592),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(592),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(592),
    [sym_comment_char] = ACTIONS(601),
    [sym_text] = ACTIONS(604),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(607),
    [anon_sym_LBRACK] = ACTIONS(609),
    [anon_sym_RBRACK] = ACTIONS(609),
    [sym__escape] = ACTIONS(609),
    [sym_begin_group] = ACTIONS(609),
    [sym_end_group] = ACTIONS(609),
    [sym_math_shift] = ACTIONS(609),
    [sym_alignment_tab] = ACTIONS(609),
    [sym_parameter_char] = ACTIONS(609),
    [sym_superscript] = ACTIONS(609),
    [sym_subscript] = ACTIONS(609),
    [sym_active_char] = ACTIONS(609),
    [sym_comment_char] = ACTIONS(609),
    [sym_text] = ACTIONS(607),
  },
  [155] = {
    [sym__text_mode] = STATE(155),
    [sym_at_group] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(155),
    [sym_command] = STATE(155),
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
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(155),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(155),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(378),
    [sym__escape] = ACTIONS(350),
    [sym_begin_group] = ACTIONS(353),
    [sym_math_shift] = ACTIONS(356),
    [sym_alignment_tab] = ACTIONS(611),
    [sym_parameter_char] = ACTIONS(362),
    [sym_superscript] = ACTIONS(611),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(611),
    [sym_comment_char] = ACTIONS(368),
    [sym_text] = ACTIONS(614),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(617),
    [sym__escape] = ACTIONS(617),
    [sym_begin_group] = ACTIONS(617),
    [sym_end_group] = ACTIONS(617),
    [sym_math_shift] = ACTIONS(617),
    [sym_alignment_tab] = ACTIONS(617),
    [sym_parameter_char] = ACTIONS(617),
    [sym_superscript] = ACTIONS(617),
    [sym_subscript] = ACTIONS(617),
    [sym_active_char] = ACTIONS(617),
    [sym_comment_char] = ACTIONS(617),
    [sym_text] = ACTIONS(619),
  },
  [157] = {
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_environment] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
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
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(432),
    [sym_end_group] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(440),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_comment_char] = ACTIONS(443),
    [sym_text] = ACTIONS(624),
  },
  [158] = {
    [sym_math_shift] = ACTIONS(627),
  },
  [159] = {
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
    [sym__escape] = ACTIONS(629),
    [sym_begin_group] = ACTIONS(629),
    [sym_end_group] = ACTIONS(629),
    [sym_math_shift] = ACTIONS(629),
    [sym_alignment_tab] = ACTIONS(629),
    [sym_parameter_char] = ACTIONS(629),
    [sym_superscript] = ACTIONS(629),
    [sym_subscript] = ACTIONS(629),
    [sym_active_char] = ACTIONS(629),
    [sym_comment_char] = ACTIONS(629),
    [sym_text] = ACTIONS(631),
  },
  [160] = {
    [sym_end_group] = ACTIONS(633),
  },
  [161] = {
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(94),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(94),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(635),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(181),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(183),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(637),
    [anon_sym_RBRACK] = ACTIONS(637),
    [sym__escape] = ACTIONS(637),
    [sym_begin_group] = ACTIONS(637),
    [sym_end_group] = ACTIONS(637),
    [sym_math_shift] = ACTIONS(637),
    [sym_alignment_tab] = ACTIONS(637),
    [sym_parameter_char] = ACTIONS(637),
    [sym_superscript] = ACTIONS(637),
    [sym_subscript] = ACTIONS(637),
    [sym_active_char] = ACTIONS(637),
    [sym_comment_char] = ACTIONS(637),
    [sym_text] = ACTIONS(639),
  },
  [163] = {
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(641),
    [sym__escape] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(641),
    [sym_end_group] = ACTIONS(641),
    [sym_math_shift] = ACTIONS(641),
    [sym_alignment_tab] = ACTIONS(641),
    [sym_parameter_char] = ACTIONS(641),
    [sym_superscript] = ACTIONS(641),
    [sym_subscript] = ACTIONS(641),
    [sym_active_char] = ACTIONS(641),
    [sym_comment_char] = ACTIONS(641),
    [sym_text] = ACTIONS(643),
  },
  [164] = {
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_environment] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(47),
    [sym_escaped] = STATE(164),
    [sym_command] = STATE(164),
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
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(164),
    [sym_begin_opt] = STATE(50),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [anon_sym_LBRACK] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(432),
    [sym_alignment_tab] = ACTIONS(645),
    [sym_parameter_char] = ACTIONS(440),
    [sym_superscript] = ACTIONS(645),
    [sym_subscript] = ACTIONS(645),
    [sym_active_char] = ACTIONS(645),
    [sym_comment_char] = ACTIONS(443),
    [sym_text] = ACTIONS(648),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_RBRACK] = ACTIONS(653),
    [sym__escape] = ACTIONS(653),
    [sym_begin_group] = ACTIONS(653),
    [sym_end_group] = ACTIONS(653),
    [sym_math_shift] = ACTIONS(653),
    [sym_alignment_tab] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(653),
    [sym_superscript] = ACTIONS(653),
    [sym_subscript] = ACTIONS(653),
    [sym_active_char] = ACTIONS(653),
    [sym_comment_char] = ACTIONS(653),
    [sym_text] = ACTIONS(651),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(655),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym__escape] = ACTIONS(657),
    [sym_begin_group] = ACTIONS(657),
    [sym_end_group] = ACTIONS(657),
    [sym_math_shift] = ACTIONS(657),
    [sym_alignment_tab] = ACTIONS(657),
    [sym_parameter_char] = ACTIONS(657),
    [sym_superscript] = ACTIONS(657),
    [sym_subscript] = ACTIONS(657),
    [sym_active_char] = ACTIONS(657),
    [sym_comment_char] = ACTIONS(657),
    [sym_text] = ACTIONS(655),
  },
  [167] = {
    [sym_display_math_env_name] = ACTIONS(659),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [sym__escape] = ACTIONS(663),
    [sym_begin_group] = ACTIONS(663),
    [sym_end_group] = ACTIONS(663),
    [sym_math_shift] = ACTIONS(663),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(663),
    [sym_superscript] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_active_char] = ACTIONS(663),
    [sym_comment_char] = ACTIONS(663),
    [sym_text] = ACTIONS(661),
  },
  [169] = {
    [sym_inline_math_env_name] = ACTIONS(665),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(669),
    [anon_sym_RBRACK] = ACTIONS(669),
    [sym__escape] = ACTIONS(669),
    [sym_begin_group] = ACTIONS(669),
    [sym_end_group] = ACTIONS(669),
    [sym_math_shift] = ACTIONS(669),
    [sym_alignment_tab] = ACTIONS(669),
    [sym_parameter_char] = ACTIONS(669),
    [sym_superscript] = ACTIONS(669),
    [sym_subscript] = ACTIONS(669),
    [sym_active_char] = ACTIONS(669),
    [sym_comment_char] = ACTIONS(669),
    [sym_text] = ACTIONS(667),
  },
  [171] = {
    [sym_verbatim_env_group] = STATE(195),
    [sym_begin_group] = ACTIONS(671),
  },
  [172] = {
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_begin_group] = ACTIONS(673),
    [sym__end_of_line] = ACTIONS(675),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
    [sym__escape] = ACTIONS(679),
    [sym_begin_group] = ACTIONS(679),
    [sym_end_group] = ACTIONS(679),
    [sym_math_shift] = ACTIONS(679),
    [sym_alignment_tab] = ACTIONS(679),
    [sym_parameter_char] = ACTIONS(679),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(679),
    [sym_active_char] = ACTIONS(679),
    [sym_comment_char] = ACTIONS(679),
    [sym_text] = ACTIONS(677),
  },
  [174] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym__end_of_line] = ACTIONS(683),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(685),
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
    [sym_text] = ACTIONS(685),
  },
  [176] = {
    [sym__end_of_line] = ACTIONS(175),
  },
  [177] = {
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
    [sym_makeatletter] = STATE(25),
    [sym_makeatletter_token] = STATE(26),
    [sym_text_group] = STATE(94),
    [sym_opt_text_group] = STATE(94),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(94),
    [sym_begin_opt] = STATE(27),
    [aux_sym_text_mode_repeat1] = STATE(94),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(689),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(181),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(181),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(181),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(183),
  },
  [178] = {
    [anon_sym_LBRACK] = ACTIONS(691),
    [sym__escape] = ACTIONS(691),
    [sym_begin_group] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(691),
    [sym_parameter_char] = ACTIONS(691),
    [sym_superscript] = ACTIONS(691),
    [sym_subscript] = ACTIONS(691),
    [sym_active_char] = ACTIONS(691),
    [sym_comment_char] = ACTIONS(691),
    [sym_text] = ACTIONS(693),
  },
  [179] = {
    [sym__end_of_line] = ACTIONS(695),
  },
  [180] = {
    [sym_begin_group] = ACTIONS(335),
    [sym__end_of_line] = ACTIONS(333),
  },
  [181] = {
    [sym_begin_group] = ACTIONS(339),
    [sym__end_of_line] = ACTIONS(337),
  },
  [182] = {
    [sym__text_mode] = STATE(155),
    [sym_at_group] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_text_env] = STATE(155),
    [sym__display_math] = STATE(155),
    [sym_tex_display_math] = STATE(155),
    [sym_latex_display_math] = STATE(155),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(155),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(155),
    [sym_tex_inline_math] = STATE(155),
    [sym_latex_inline_math] = STATE(155),
    [sym_inline_math_env] = STATE(155),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(155),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(155),
    [sym_command] = STATE(155),
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
    [sym_text_group] = STATE(155),
    [sym_opt_text_group] = STATE(155),
    [sym_token] = STATE(18),
    [sym_comment] = STATE(155),
    [sym_begin_opt] = STATE(27),
    [sym_end_opt] = STATE(198),
    [aux_sym_text_mode_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(341),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(341),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(341),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(343),
  },
  [183] = {
    [sym__verbatim_token] = ACTIONS(697),
  },
  [184] = {
    [sym__end_of_line] = ACTIONS(699),
  },
  [185] = {
    [sym_begin_group] = ACTIONS(607),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [sym__escape] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_end_group] = ACTIONS(703),
    [sym_math_shift] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_active_char] = ACTIONS(703),
    [sym_comment_char] = ACTIONS(703),
    [sym_text] = ACTIONS(701),
  },
  [187] = {
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(705),
    [sym__escape] = ACTIONS(705),
    [sym_begin_group] = ACTIONS(705),
    [sym_end_group] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(705),
    [sym_alignment_tab] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(705),
    [sym_superscript] = ACTIONS(705),
    [sym_subscript] = ACTIONS(705),
    [sym_active_char] = ACTIONS(705),
    [sym_comment_char] = ACTIONS(705),
    [sym_text] = ACTIONS(707),
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
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(188),
    [sym_opt_at_text_group] = STATE(188),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(188),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(188),
    [anon_sym_LBRACK] = ACTIONS(580),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(586),
    [sym_end_group] = ACTIONS(709),
    [sym_math_shift] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(711),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(711),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(711),
    [sym_comment_char] = ACTIONS(601),
    [sym_text] = ACTIONS(714),
  },
  [189] = {
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym__escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_end_group] = ACTIONS(717),
    [sym_math_shift] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_comment_char] = ACTIONS(717),
    [sym_text] = ACTIONS(719),
  },
  [190] = {
    [sym__at_text_mode] = STATE(190),
    [sym_parameter] = STATE(190),
    [sym_text_env] = STATE(190),
    [sym__display_math] = STATE(190),
    [sym_tex_display_math] = STATE(190),
    [sym_latex_display_math] = STATE(190),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_display_math_env] = STATE(190),
    [sym_display_math_begin] = STATE(13),
    [sym__inline_math] = STATE(190),
    [sym_tex_inline_math] = STATE(190),
    [sym_latex_inline_math] = STATE(190),
    [sym_inline_math_env] = STATE(190),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(190),
    [sym_verbatim_begin] = STATE(15),
    [sym_escaped] = STATE(190),
    [sym_at_command] = STATE(190),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(84),
    [sym_documentclass_token] = STATE(19),
    [sym_usepackage] = STATE(84),
    [sym_usepackage_token] = STATE(20),
    [sym_include] = STATE(84),
    [sym_include_token] = STATE(21),
    [sym_section] = STATE(84),
    [sym_section_token] = STATE(22),
    [sym_storage] = STATE(84),
    [sym_storage_token] = STATE(23),
    [sym_catcode] = STATE(84),
    [sym_catcode_token] = STATE(24),
    [sym_at_text_group] = STATE(190),
    [sym_opt_at_text_group] = STATE(190),
    [sym_at_token] = STATE(84),
    [sym_comment] = STATE(190),
    [sym_begin_opt] = STATE(87),
    [aux_sym_at_group_repeat1] = STATE(190),
    [anon_sym_LBRACK] = ACTIONS(580),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym__escape] = ACTIONS(583),
    [sym_begin_group] = ACTIONS(586),
    [sym_math_shift] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(598),
    [sym_active_char] = ACTIONS(721),
    [sym_comment_char] = ACTIONS(601),
    [sym_text] = ACTIONS(724),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [sym__escape] = ACTIONS(729),
    [sym_begin_group] = ACTIONS(729),
    [sym_end_group] = ACTIONS(729),
    [sym_math_shift] = ACTIONS(729),
    [sym_alignment_tab] = ACTIONS(729),
    [sym_parameter_char] = ACTIONS(729),
    [sym_superscript] = ACTIONS(729),
    [sym_subscript] = ACTIONS(729),
    [sym_active_char] = ACTIONS(729),
    [sym_comment_char] = ACTIONS(729),
    [sym_text] = ACTIONS(727),
  },
  [192] = {
    [anon_sym_LBRACK] = ACTIONS(731),
    [anon_sym_RBRACK] = ACTIONS(731),
    [sym__escape] = ACTIONS(731),
    [sym_begin_group] = ACTIONS(731),
    [sym_end_group] = ACTIONS(731),
    [sym_math_shift] = ACTIONS(731),
    [sym_alignment_tab] = ACTIONS(731),
    [sym_parameter_char] = ACTIONS(731),
    [sym_superscript] = ACTIONS(731),
    [sym_subscript] = ACTIONS(731),
    [sym_active_char] = ACTIONS(731),
    [sym_comment_char] = ACTIONS(731),
    [sym_text] = ACTIONS(733),
  },
  [193] = {
    [sym_end_group] = ACTIONS(735),
  },
  [194] = {
    [sym_verbatim_env_name] = ACTIONS(737),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [sym__escape] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_end_group] = ACTIONS(741),
    [sym_math_shift] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_active_char] = ACTIONS(741),
    [sym_comment_char] = ACTIONS(741),
    [sym_text] = ACTIONS(739),
  },
  [196] = {
    [sym__end_of_line] = ACTIONS(374),
  },
  [197] = {
    [anon_sym_LBRACK] = ACTIONS(743),
    [sym__escape] = ACTIONS(743),
    [sym_begin_group] = ACTIONS(743),
    [sym_alignment_tab] = ACTIONS(743),
    [sym_parameter_char] = ACTIONS(743),
    [sym_superscript] = ACTIONS(743),
    [sym_subscript] = ACTIONS(743),
    [sym_active_char] = ACTIONS(743),
    [sym_comment_char] = ACTIONS(743),
    [sym_text] = ACTIONS(745),
  },
  [198] = {
    [sym_begin_group] = ACTIONS(609),
    [sym__end_of_line] = ACTIONS(607),
  },
  [199] = {
    [sym__verbatim_token] = ACTIONS(747),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(675),
    [anon_sym_LBRACK] = ACTIONS(673),
    [anon_sym_RBRACK] = ACTIONS(673),
    [sym__escape] = ACTIONS(673),
    [sym_begin_group] = ACTIONS(673),
    [sym_end_group] = ACTIONS(673),
    [sym_math_shift] = ACTIONS(673),
    [sym_alignment_tab] = ACTIONS(673),
    [sym_parameter_char] = ACTIONS(673),
    [sym_superscript] = ACTIONS(673),
    [sym_subscript] = ACTIONS(673),
    [sym_active_char] = ACTIONS(673),
    [sym_comment_char] = ACTIONS(673),
    [sym_text] = ACTIONS(675),
  },
  [201] = {
    [sym_end_group] = ACTIONS(749),
  },
  [202] = {
    [ts_builtin_sym_end] = ACTIONS(683),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_end_group] = ACTIONS(681),
    [sym_math_shift] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_comment_char] = ACTIONS(681),
    [sym_text] = ACTIONS(683),
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
  [15] = {.count = 1, .reusable = false}, SHIFT(28),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(28),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(29),
  [31] = {.count = 1, .reusable = false}, SHIFT(30),
  [33] = {.count = 1, .reusable = false}, SHIFT(31),
  [35] = {.count = 1, .reusable = false}, SHIFT(32),
  [37] = {.count = 1, .reusable = false}, SHIFT(33),
  [39] = {.count = 1, .reusable = false}, SHIFT(34),
  [41] = {.count = 1, .reusable = false}, SHIFT(35),
  [43] = {.count = 1, .reusable = false}, SHIFT(36),
  [45] = {.count = 1, .reusable = false}, SHIFT(37),
  [47] = {.count = 1, .reusable = false}, SHIFT(38),
  [49] = {.count = 1, .reusable = false}, SHIFT(39),
  [51] = {.count = 1, .reusable = false}, SHIFT(40),
  [53] = {.count = 1, .reusable = false}, SHIFT(41),
  [55] = {.count = 1, .reusable = false}, SHIFT(42),
  [57] = {.count = 1, .reusable = true}, SHIFT(42),
  [59] = {.count = 1, .reusable = false}, SHIFT(43),
  [61] = {.count = 1, .reusable = false}, SHIFT(44),
  [63] = {.count = 1, .reusable = false}, SHIFT(45),
  [65] = {.count = 1, .reusable = false}, SHIFT(51),
  [67] = {.count = 1, .reusable = true}, SHIFT(51),
  [69] = {.count = 1, .reusable = true}, SHIFT(52),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(53),
  [77] = {.count = 1, .reusable = false}, SHIFT(53),
  [79] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [83] = {.count = 1, .reusable = false}, SHIFT(55),
  [85] = {.count = 1, .reusable = true}, SHIFT(55),
  [87] = {.count = 1, .reusable = true}, SHIFT(60),
  [89] = {.count = 1, .reusable = false}, SHIFT(61),
  [91] = {.count = 1, .reusable = false}, SHIFT(64),
  [93] = {.count = 1, .reusable = true}, SHIFT(64),
  [95] = {.count = 1, .reusable = true}, SHIFT(65),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [101] = {.count = 1, .reusable = true}, SHIFT(2),
  [103] = {.count = 1, .reusable = true}, SHIFT(70),
  [105] = {.count = 1, .reusable = true}, SHIFT(4),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(79),
  [113] = {.count = 1, .reusable = false}, SHIFT(81),
  [115] = {.count = 1, .reusable = false}, SHIFT(82),
  [117] = {.count = 1, .reusable = false}, SHIFT(88),
  [119] = {.count = 1, .reusable = false}, SHIFT(83),
  [121] = {.count = 1, .reusable = true}, SHIFT(88),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [127] = {.count = 1, .reusable = false}, SHIFT(89),
  [129] = {.count = 1, .reusable = false}, SHIFT(91),
  [131] = {.count = 1, .reusable = true}, SHIFT(91),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [135] = {.count = 1, .reusable = false}, SHIFT(92),
  [137] = {.count = 1, .reusable = true}, SHIFT(92),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [179] = {.count = 1, .reusable = false}, SHIFT(93),
  [181] = {.count = 1, .reusable = false}, SHIFT(94),
  [183] = {.count = 1, .reusable = true}, SHIFT(94),
  [185] = {.count = 1, .reusable = false}, SHIFT(95),
  [187] = {.count = 1, .reusable = false}, SHIFT(96),
  [189] = {.count = 1, .reusable = false}, SHIFT(97),
  [191] = {.count = 1, .reusable = true}, SHIFT(97),
  [193] = {.count = 1, .reusable = true}, SHIFT(99),
  [195] = {.count = 1, .reusable = true}, SHIFT(100),
  [197] = {.count = 1, .reusable = false}, SHIFT(102),
  [199] = {.count = 1, .reusable = false}, SHIFT(104),
  [201] = {.count = 1, .reusable = true}, SHIFT(104),
  [203] = {.count = 1, .reusable = false}, SHIFT(106),
  [205] = {.count = 1, .reusable = true}, SHIFT(106),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_math_mode, 1),
  [209] = {.count = 1, .reusable = false}, SHIFT(107),
  [211] = {.count = 1, .reusable = true}, SHIFT(107),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(108),
  [223] = {.count = 1, .reusable = false}, SHIFT(110),
  [225] = {.count = 1, .reusable = true}, SHIFT(110),
  [227] = {.count = 1, .reusable = true}, SHIFT(111),
  [229] = {.count = 1, .reusable = true}, SHIFT(113),
  [231] = {.count = 1, .reusable = true}, SHIFT(118),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_text, 1),
  [235] = {.count = 1, .reusable = false}, SHIFT(120),
  [237] = {.count = 1, .reusable = false}, SHIFT(121),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [241] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 2),
  [243] = {.count = 1, .reusable = false}, SHIFT(124),
  [245] = {.count = 1, .reusable = true}, SHIFT(124),
  [247] = {.count = 1, .reusable = false}, SHIFT(125),
  [249] = {.count = 1, .reusable = false}, SHIFT(126),
  [251] = {.count = 1, .reusable = false}, SHIFT(127),
  [253] = {.count = 1, .reusable = false}, SHIFT(128),
  [255] = {.count = 1, .reusable = false}, SHIFT(129),
  [257] = {.count = 1, .reusable = true}, SHIFT(130),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_begin, 2),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(134),
  [265] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2, .alias_sequence_id = 2),
  [269] = {.count = 1, .reusable = true}, SHIFT(128),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [275] = {.count = 1, .reusable = false}, SHIFT(138),
  [277] = {.count = 1, .reusable = false}, SHIFT(140),
  [279] = {.count = 1, .reusable = true}, SHIFT(140),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [287] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [291] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(143),
  [295] = {.count = 1, .reusable = true}, SHIFT(144),
  [297] = {.count = 1, .reusable = false}, SHIFT(145),
  [299] = {.count = 1, .reusable = false}, SHIFT(146),
  [301] = {.count = 1, .reusable = false}, SHIFT(147),
  [303] = {.count = 1, .reusable = false}, SHIFT(148),
  [305] = {.count = 1, .reusable = false}, SHIFT(149),
  [307] = {.count = 1, .reusable = true}, SHIFT(149),
  [309] = {.count = 1, .reusable = false}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [313] = {.count = 1, .reusable = false}, REDUCE(sym_at_command, 1),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 2),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [325] = {.count = 1, .reusable = false}, SHIFT(151),
  [327] = {.count = 1, .reusable = true}, SHIFT(151),
  [329] = {.count = 1, .reusable = false}, SHIFT(153),
  [331] = {.count = 1, .reusable = true}, SHIFT(153),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [335] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [341] = {.count = 1, .reusable = false}, SHIFT(155),
  [343] = {.count = 1, .reusable = true}, SHIFT(155),
  [345] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [347] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [350] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [353] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(92),
  [362] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [365] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(8),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(92),
  [374] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [376] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [378] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(94),
  [383] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(94),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [392] = {.count = 1, .reusable = false}, SHIFT(156),
  [394] = {.count = 1, .reusable = false}, SHIFT(157),
  [396] = {.count = 1, .reusable = true}, SHIFT(157),
  [398] = {.count = 1, .reusable = true}, SHIFT(158),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_tex_inline_math, 3),
  [404] = {.count = 1, .reusable = false}, SHIFT(159),
  [406] = {.count = 1, .reusable = false}, SHIFT(161),
  [408] = {.count = 1, .reusable = true}, SHIFT(161),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [422] = {.count = 1, .reusable = false}, SHIFT(164),
  [424] = {.count = 1, .reusable = true}, SHIFT(164),
  [426] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [429] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(43),
  [432] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(44),
  [435] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(107),
  [440] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [443] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(8),
  [446] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(107),
  [449] = {.count = 1, .reusable = true}, SHIFT(165),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_latex_display_math, 3),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(110),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(110),
  [461] = {.count = 1, .reusable = true}, SHIFT(166),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_latex_inline_math, 3),
  [467] = {.count = 1, .reusable = true}, SHIFT(121),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env, 3),
  [473] = {.count = 1, .reusable = true}, SHIFT(167),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env, 3),
  [479] = {.count = 1, .reusable = true}, SHIFT(169),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env, 3),
  [485] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [487] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(120),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2, .alias_sequence_id = 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_text_env, 3),
  [500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(124),
  [503] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(124),
  [506] = {.count = 1, .reusable = true}, SHIFT(172),
  [508] = {.count = 1, .reusable = true}, SHIFT(173),
  [510] = {.count = 1, .reusable = true}, SHIFT(174),
  [512] = {.count = 1, .reusable = true}, SHIFT(175),
  [514] = {.count = 1, .reusable = false}, SHIFT(176),
  [516] = {.count = 1, .reusable = false}, SHIFT(177),
  [518] = {.count = 1, .reusable = true}, SHIFT(177),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 3),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [524] = {.count = 1, .reusable = true}, SHIFT(178),
  [526] = {.count = 1, .reusable = false}, SHIFT(180),
  [528] = {.count = 1, .reusable = false}, SHIFT(182),
  [530] = {.count = 1, .reusable = true}, SHIFT(182),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [534] = {.count = 1, .reusable = true}, SHIFT(183),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [538] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [540] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [542] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [546] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [548] = {.count = 1, .reusable = true}, SHIFT(186),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [554] = {.count = 1, .reusable = false}, REDUCE(sym_at_token, 2),
  [556] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [558] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 2),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [562] = {.count = 1, .reusable = false}, SHIFT(187),
  [564] = {.count = 1, .reusable = false}, SHIFT(188),
  [566] = {.count = 1, .reusable = true}, SHIFT(188),
  [568] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 2),
  [570] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [572] = {.count = 1, .reusable = false}, SHIFT(190),
  [574] = {.count = 1, .reusable = true}, SHIFT(190),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [578] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 3),
  [580] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [583] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(147),
  [586] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(82),
  [589] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [592] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(153),
  [595] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [598] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(83),
  [601] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(8),
  [604] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(153),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(155),
  [614] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(155),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(157),
  [624] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(157),
  [627] = {.count = 1, .reusable = true}, SHIFT(191),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [631] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [633] = {.count = 1, .reusable = true}, SHIFT(192),
  [635] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode, 1),
  [637] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [639] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [641] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [643] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [645] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(164),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(164),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [653] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [655] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [659] = {.count = 1, .reusable = true}, SHIFT(193),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [663] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_end, 2),
  [665] = {.count = 1, .reusable = true}, SHIFT(126),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [669] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_end, 2),
  [671] = {.count = 1, .reusable = true}, SHIFT(194),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_env_group, 3),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [679] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math_env_group, 3),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_env_group, 3),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [689] = {.count = 1, .reusable = false}, SHIFT(196),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 4),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [695] = {.count = 1, .reusable = true}, SHIFT(197),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [699] = {.count = 1, .reusable = true}, SHIFT(199),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 3),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [709] = {.count = 1, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2),
  [711] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(188),
  [714] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(188),
  [717] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 3),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [721] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(190),
  [724] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(190),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_tex_display_math, 5),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [735] = {.count = 1, .reusable = true}, SHIFT(200),
  [737] = {.count = 1, .reusable = true}, SHIFT(201),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 3),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_end, 3),
  [743] = {.count = 1, .reusable = false}, REDUCE(sym_display_math_begin, 5),
  [745] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [749] = {.count = 1, .reusable = true}, SHIFT(202),
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
