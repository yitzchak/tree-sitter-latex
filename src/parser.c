#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 6
#define STATE_COUNT 40
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_DOT_SLASH = 1,
  sym_storage = 2,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 3,
  anon_sym_EQ = 4,
  sym_escape = 5,
  sym_begin_group = 6,
  sym_end_group = 7,
  sym_math_shift = 8,
  sym_parameter_char = 9,
  sym_superscript = 10,
  sym_subscript = 11,
  sym_keyword = 12,
  sym_active_char = 13,
  sym_comment_char = 14,
  sym_text = 15,
  sym_number = 16,
  sym_magic = 17,
  sym_comment_text = 18,
  sym_tex = 19,
  sym_text_mode = 20,
  sym_math_mode = 21,
  sym_parameter = 22,
  sym_escaped = 23,
  sym_command = 24,
  sym_catcode = 25,
  sym_text_group = 26,
  sym_math_group = 27,
  sym_display_math = 28,
  sym_inline_math = 29,
  sym_comment = 30,
  aux_sym_text_mode_repeat1 = 31,
  aux_sym_math_mode_repeat1 = 32,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_DOT_SLASH] = "/./",
  [sym_storage] = "storage",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [anon_sym_EQ] = "=",
  [sym_escape] = "escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_keyword] = "keyword",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_magic] = "magic",
  [sym_comment_text] = "comment_text",
  [sym_tex] = "tex",
  [sym_text_mode] = "text_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_escaped] = "escaped",
  [sym_command] = "command",
  [sym_catcode] = "catcode",
  [sym_text_group] = "text_group",
  [sym_math_group] = "math_group",
  [sym_display_math] = "display_math",
  [sym_inline_math] = "inline_math",
  [sym_comment] = "comment",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_storage] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
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
  [sym_keyword] = {
    .visible = true,
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
  [sym_magic] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_text_mode] = {
    .visible = true,
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
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == 'd')
        ADVANCE(2);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'f')
        ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_storage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(9);
      if (lookahead == '$')
        ADVANCE(10);
      if (lookahead == '%')
        ADVANCE(11);
      if (lookahead == '\\')
        ADVANCE(12);
      if (lookahead == '^')
        ADVANCE(13);
      if (lookahead == '_')
        ADVANCE(14);
      if (lookahead == '{')
        ADVANCE(15);
      if (lookahead == '}')
        ADVANCE(16);
      if (lookahead == '~')
        ADVANCE(17);
      if ((lookahead < '#' || lookahead > '&'))
        ADVANCE(18);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'c')
        ADVANCE(20);
      if (lookahead == 'd')
        ADVANCE(28);
      if (lookahead == 'k')
        ADVANCE(29);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'o')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '`')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'c')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '!')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 36:
      if (lookahead == '!')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'T')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'X')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(41);
      if (lookahead != 0)
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(36);
      if (lookahead == '!')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(50);
      if (lookahead != 0)
        ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == '=')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 34},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 52},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_storage] = ACTIONS(3),
    [sym_keyword] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
  },
  [1] = {
    [sym_tex] = STATE(8),
    [sym_text_mode] = STATE(9),
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(10),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [2] = {
    [sym_catcode] = STATE(12),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(21),
    [sym_storage] = ACTIONS(23),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(25),
    [sym_keyword] = ACTIONS(27),
  },
  [3] = {
    [sym_text_mode] = STATE(14),
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(15),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [4] = {
    [sym_math_mode] = STATE(19),
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(20),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(29),
    [sym_math_shift] = ACTIONS(31),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(35),
  },
  [5] = {
    [sym_number] = ACTIONS(37),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_escape] = ACTIONS(39),
    [sym_begin_group] = ACTIONS(39),
    [sym_end_group] = ACTIONS(39),
    [sym_math_shift] = ACTIONS(39),
    [sym_parameter_char] = ACTIONS(39),
    [sym_superscript] = ACTIONS(39),
    [sym_subscript] = ACTIONS(39),
    [sym_active_char] = ACTIONS(39),
    [sym_comment_char] = ACTIONS(39),
    [sym_text] = ACTIONS(41),
  },
  [7] = {
    [sym_magic] = ACTIONS(43),
    [sym_comment_text] = ACTIONS(45),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(47),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(49),
  },
  [10] = {
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(53),
    [sym_end_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(53),
    [sym_parameter_char] = ACTIONS(53),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(53),
    [sym_active_char] = ACTIONS(53),
    [sym_comment_char] = ACTIONS(53),
    [sym_text] = ACTIONS(55),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(57),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(57),
    [sym_text] = ACTIONS(59),
  },
  [13] = {
    [sym_escaped] = STATE(25),
    [sym_escape] = ACTIONS(61),
  },
  [14] = {
    [sym_end_group] = ACTIONS(63),
  },
  [15] = {
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(27),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(11),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [16] = {
    [sym_math_mode] = STATE(28),
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(29),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(29),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(35),
  },
  [17] = {
    [sym_math_mode] = STATE(30),
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(20),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(29),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(35),
  },
  [18] = {
    [sym_escape] = ACTIONS(65),
    [sym_begin_group] = ACTIONS(65),
    [sym_end_group] = ACTIONS(65),
    [sym_math_shift] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(65),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(65),
    [sym_text] = ACTIONS(67),
  },
  [19] = {
    [sym_math_shift] = ACTIONS(69),
  },
  [20] = {
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(32),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(29),
    [sym_math_shift] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(35),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(73),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(73),
    [sym_text] = ACTIONS(75),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_escape] = ACTIONS(77),
    [sym_begin_group] = ACTIONS(77),
    [sym_end_group] = ACTIONS(77),
    [sym_math_shift] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(77),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(77),
    [sym_text] = ACTIONS(79),
  },
  [23] = {
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(86),
    [sym_math_shift] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(92),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(95),
    [sym_comment_char] = ACTIONS(98),
    [sym_text] = ACTIONS(101),
  },
  [24] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(104),
  },
  [25] = {
    [anon_sym_EQ] = ACTIONS(106),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_escape] = ACTIONS(108),
    [sym_begin_group] = ACTIONS(108),
    [sym_end_group] = ACTIONS(108),
    [sym_math_shift] = ACTIONS(108),
    [sym_parameter_char] = ACTIONS(108),
    [sym_superscript] = ACTIONS(108),
    [sym_subscript] = ACTIONS(108),
    [sym_active_char] = ACTIONS(108),
    [sym_comment_char] = ACTIONS(108),
    [sym_text] = ACTIONS(110),
  },
  [27] = {
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_comment] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(27),
    [sym_escape] = ACTIONS(83),
    [sym_begin_group] = ACTIONS(86),
    [sym_end_group] = ACTIONS(81),
    [sym_math_shift] = ACTIONS(89),
    [sym_parameter_char] = ACTIONS(92),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(95),
    [sym_comment_char] = ACTIONS(98),
    [sym_text] = ACTIONS(101),
  },
  [28] = {
    [sym_end_group] = ACTIONS(112),
  },
  [29] = {
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(36),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(29),
    [sym_end_group] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(13),
    [sym_superscript] = ACTIONS(33),
    [sym_subscript] = ACTIONS(33),
    [sym_active_char] = ACTIONS(33),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(35),
  },
  [30] = {
    [sym_math_shift] = ACTIONS(114),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [sym_escape] = ACTIONS(116),
    [sym_begin_group] = ACTIONS(116),
    [sym_end_group] = ACTIONS(116),
    [sym_math_shift] = ACTIONS(116),
    [sym_parameter_char] = ACTIONS(116),
    [sym_superscript] = ACTIONS(116),
    [sym_subscript] = ACTIONS(116),
    [sym_active_char] = ACTIONS(116),
    [sym_comment_char] = ACTIONS(116),
    [sym_text] = ACTIONS(118),
  },
  [32] = {
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(32),
    [sym_escape] = ACTIONS(120),
    [sym_begin_group] = ACTIONS(123),
    [sym_math_shift] = ACTIONS(126),
    [sym_parameter_char] = ACTIONS(128),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(134),
    [sym_text] = ACTIONS(137),
  },
  [33] = {
    [anon_sym_EQ] = ACTIONS(53),
  },
  [34] = {
    [sym_number] = ACTIONS(140),
  },
  [35] = {
    [sym_escape] = ACTIONS(142),
    [sym_begin_group] = ACTIONS(142),
    [sym_end_group] = ACTIONS(142),
    [sym_math_shift] = ACTIONS(142),
    [sym_parameter_char] = ACTIONS(142),
    [sym_superscript] = ACTIONS(142),
    [sym_subscript] = ACTIONS(142),
    [sym_active_char] = ACTIONS(142),
    [sym_comment_char] = ACTIONS(142),
    [sym_text] = ACTIONS(144),
  },
  [36] = {
    [sym_parameter] = STATE(18),
    [sym_escaped] = STATE(18),
    [sym_command] = STATE(18),
    [sym_math_group] = STATE(18),
    [sym_comment] = STATE(18),
    [aux_sym_math_mode_repeat1] = STATE(36),
    [sym_escape] = ACTIONS(120),
    [sym_begin_group] = ACTIONS(123),
    [sym_end_group] = ACTIONS(126),
    [sym_parameter_char] = ACTIONS(128),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(134),
    [sym_text] = ACTIONS(137),
  },
  [37] = {
    [sym_math_shift] = ACTIONS(146),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [sym_escape] = ACTIONS(148),
    [sym_begin_group] = ACTIONS(148),
    [sym_end_group] = ACTIONS(148),
    [sym_math_shift] = ACTIONS(148),
    [sym_parameter_char] = ACTIONS(148),
    [sym_superscript] = ACTIONS(148),
    [sym_subscript] = ACTIONS(148),
    [sym_active_char] = ACTIONS(148),
    [sym_comment_char] = ACTIONS(148),
    [sym_text] = ACTIONS(150),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_escape] = ACTIONS(152),
    [sym_begin_group] = ACTIONS(152),
    [sym_end_group] = ACTIONS(152),
    [sym_math_shift] = ACTIONS(152),
    [sym_parameter_char] = ACTIONS(152),
    [sym_superscript] = ACTIONS(152),
    [sym_subscript] = ACTIONS(152),
    [sym_active_char] = ACTIONS(152),
    [sym_comment_char] = ACTIONS(152),
    [sym_text] = ACTIONS(154),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [25] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [31] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(17),
  [33] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [35] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(21),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 1),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_text_mode_repeat1, 1),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tex, 1),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(24),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 1),
  [67] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_mode_repeat1, 1),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [83] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [86] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [89] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [92] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [95] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [98] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [101] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(34),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(35),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(37),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [120] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [123] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(16),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [128] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(5),
  [131] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(18),
  [134] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(7),
  [137] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(18),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(38),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catcode, 4),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 4),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
