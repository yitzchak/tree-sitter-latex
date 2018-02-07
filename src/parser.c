#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 34
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  sym_text = 14,
  sym_number = 15,
  sym_comment = 16,
  sym_magic = 17,
  sym_tex = 18,
  sym_text_mode = 19,
  sym_math_mode = 20,
  sym_parameter = 21,
  sym_escaped = 22,
  sym_command = 23,
  sym_catcode = 24,
  sym_text_group = 25,
  sym_math_group = 26,
  sym_display_math = 27,
  sym_inline_math = 28,
  aux_sym_text_mode_repeat1 = 29,
  aux_sym_math_mode_repeat1 = 30,
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
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_magic] = "magic",
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_magic] = {
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
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == 'd')
        ADVANCE(26);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '!')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == 'T')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'X')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == ':')
        ADVANCE(10);
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(9);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '=')
        ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '!')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'T')
        ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == 'X')
        ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == ':')
        ADVANCE(21);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'f')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_storage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keyword);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(33);
      if (lookahead == '$')
        ADVANCE(34);
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(35);
      if (lookahead == '^')
        ADVANCE(36);
      if (lookahead == '_')
        ADVANCE(37);
      if (lookahead == '{')
        ADVANCE(38);
      if (lookahead == '}')
        ADVANCE(39);
      if (lookahead == '~')
        ADVANCE(40);
      if ((lookahead < '#' || lookahead > '&'))
        ADVANCE(41);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '\\' &&
          lookahead != '^' &&
          lookahead != '_' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(41);
      END_STATE();
    case 42:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead == 'c')
        ADVANCE(44);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'k')
        ADVANCE(53);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(57);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'c')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'o')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'd')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '`')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'c')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'a')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 58:
      if (lookahead == '%')
        ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == '%')
        ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '%')
        ADVANCE(2);
      if (lookahead == '=')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 59},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 32},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 60},
  [29] = {.lex_state = 58},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_storage] = ACTIONS(3),
    [sym_keyword] = ACTIONS(5),
    [sym_number] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [sym_magic] = ACTIONS(10),
  },
  [1] = {
    [sym_tex] = STATE(7),
    [sym_text_mode] = STATE(8),
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(9),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_magic] = ACTIONS(28),
  },
  [2] = {
    [sym_catcode] = STATE(11),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(30),
    [sym_storage] = ACTIONS(32),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(34),
    [sym_keyword] = ACTIONS(36),
    [sym_comment] = ACTIONS(28),
    [sym_magic] = ACTIONS(28),
  },
  [3] = {
    [sym_text_mode] = STATE(13),
    [sym_parameter] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_text_group] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [aux_sym_text_mode_repeat1] = STATE(9),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_math_shift] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
    [sym_magic] = ACTIONS(28),
  },
  [4] = {
    [sym_math_mode] = STATE(17),
    [sym_parameter] = STATE(16),
    [sym_escaped] = STATE(16),
    [sym_command] = STATE(16),
    [sym_math_group] = STATE(16),
    [aux_sym_math_mode_repeat1] = STATE(18),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(38),
    [sym_math_shift] = ACTIONS(40),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(42),
    [sym_subscript] = ACTIONS(42),
    [sym_active_char] = ACTIONS(42),
    [sym_text] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
    [sym_magic] = ACTIONS(28),
  },
  [5] = {
    [sym_number] = ACTIONS(49),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_escape] = ACTIONS(53),
    [sym_begin_group] = ACTIONS(53),
    [sym_end_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(53),
    [sym_parameter_char] = ACTIONS(53),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(53),
    [sym_active_char] = ACTIONS(53),
    [sym_text] = ACTIONS(55),
    [sym_comment] = ACTIONS(55),
    [sym_magic] = ACTIONS(28),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [9] = {
    [sym_parameter] = STATE(20),
    [sym_escaped] = STATE(20),
    [sym_command] = STATE(20),
    [sym_text_group] = STATE(20),
    [sym_display_math] = STATE(20),
    [sym_inline_math] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(15),
    [sym_end_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(17),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(63),
    [sym_active_char] = ACTIONS(63),
    [sym_text] = ACTIONS(65),
    [sym_comment] = ACTIONS(67),
    [sym_magic] = ACTIONS(28),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_escape] = ACTIONS(70),
    [sym_begin_group] = ACTIONS(70),
    [sym_end_group] = ACTIONS(70),
    [sym_math_shift] = ACTIONS(70),
    [sym_parameter_char] = ACTIONS(70),
    [sym_superscript] = ACTIONS(70),
    [sym_subscript] = ACTIONS(70),
    [sym_active_char] = ACTIONS(70),
    [sym_text] = ACTIONS(72),
    [sym_comment] = ACTIONS(72),
    [sym_magic] = ACTIONS(28),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [sym_escape] = ACTIONS(74),
    [sym_begin_group] = ACTIONS(74),
    [sym_end_group] = ACTIONS(74),
    [sym_math_shift] = ACTIONS(74),
    [sym_parameter_char] = ACTIONS(74),
    [sym_superscript] = ACTIONS(74),
    [sym_subscript] = ACTIONS(74),
    [sym_active_char] = ACTIONS(74),
    [sym_text] = ACTIONS(76),
    [sym_comment] = ACTIONS(76),
    [sym_magic] = ACTIONS(28),
  },
  [12] = {
    [sym_escaped] = STATE(22),
    [sym_escape] = ACTIONS(78),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [13] = {
    [sym_end_group] = ACTIONS(80),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [14] = {
    [sym_math_mode] = STATE(24),
    [sym_parameter] = STATE(16),
    [sym_escaped] = STATE(16),
    [sym_command] = STATE(16),
    [sym_math_group] = STATE(16),
    [aux_sym_math_mode_repeat1] = STATE(18),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(38),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(42),
    [sym_subscript] = ACTIONS(42),
    [sym_active_char] = ACTIONS(42),
    [sym_text] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
    [sym_magic] = ACTIONS(28),
  },
  [15] = {
    [sym_math_mode] = STATE(25),
    [sym_parameter] = STATE(16),
    [sym_escaped] = STATE(16),
    [sym_command] = STATE(16),
    [sym_math_group] = STATE(16),
    [aux_sym_math_mode_repeat1] = STATE(18),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(38),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(42),
    [sym_subscript] = ACTIONS(42),
    [sym_active_char] = ACTIONS(42),
    [sym_text] = ACTIONS(44),
    [sym_comment] = ACTIONS(46),
    [sym_magic] = ACTIONS(28),
  },
  [16] = {
    [sym_escape] = ACTIONS(82),
    [sym_begin_group] = ACTIONS(82),
    [sym_end_group] = ACTIONS(82),
    [sym_math_shift] = ACTIONS(82),
    [sym_parameter_char] = ACTIONS(82),
    [sym_superscript] = ACTIONS(82),
    [sym_subscript] = ACTIONS(82),
    [sym_active_char] = ACTIONS(82),
    [sym_text] = ACTIONS(84),
    [sym_comment] = ACTIONS(84),
    [sym_magic] = ACTIONS(28),
  },
  [17] = {
    [sym_math_shift] = ACTIONS(86),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [18] = {
    [sym_parameter] = STATE(27),
    [sym_escaped] = STATE(27),
    [sym_command] = STATE(27),
    [sym_math_group] = STATE(27),
    [sym_escape] = ACTIONS(13),
    [sym_begin_group] = ACTIONS(38),
    [sym_end_group] = ACTIONS(88),
    [sym_math_shift] = ACTIONS(88),
    [sym_parameter_char] = ACTIONS(19),
    [sym_superscript] = ACTIONS(90),
    [sym_subscript] = ACTIONS(90),
    [sym_active_char] = ACTIONS(90),
    [sym_text] = ACTIONS(92),
    [sym_comment] = ACTIONS(94),
    [sym_magic] = ACTIONS(28),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(97),
    [sym_end_group] = ACTIONS(97),
    [sym_math_shift] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(97),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(97),
    [sym_text] = ACTIONS(99),
    [sym_comment] = ACTIONS(99),
    [sym_magic] = ACTIONS(28),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_text] = ACTIONS(103),
    [sym_comment] = ACTIONS(103),
    [sym_magic] = ACTIONS(28),
  },
  [21] = {
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(105),
    [sym_comment] = ACTIONS(28),
    [sym_magic] = ACTIONS(28),
  },
  [22] = {
    [anon_sym_EQ] = ACTIONS(107),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [sym_escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_end_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_text] = ACTIONS(111),
    [sym_comment] = ACTIONS(111),
    [sym_magic] = ACTIONS(28),
  },
  [24] = {
    [sym_end_group] = ACTIONS(113),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [25] = {
    [sym_math_shift] = ACTIONS(115),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [sym_escape] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
    [sym_end_group] = ACTIONS(117),
    [sym_math_shift] = ACTIONS(117),
    [sym_parameter_char] = ACTIONS(117),
    [sym_superscript] = ACTIONS(117),
    [sym_subscript] = ACTIONS(117),
    [sym_active_char] = ACTIONS(117),
    [sym_text] = ACTIONS(119),
    [sym_comment] = ACTIONS(119),
    [sym_magic] = ACTIONS(28),
  },
  [27] = {
    [sym_escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_end_group] = ACTIONS(121),
    [sym_math_shift] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(121),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(121),
    [sym_active_char] = ACTIONS(121),
    [sym_text] = ACTIONS(123),
    [sym_comment] = ACTIONS(123),
    [sym_magic] = ACTIONS(28),
  },
  [28] = {
    [anon_sym_EQ] = ACTIONS(70),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [29] = {
    [sym_number] = ACTIONS(125),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [30] = {
    [sym_escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_text] = ACTIONS(129),
    [sym_comment] = ACTIONS(129),
    [sym_magic] = ACTIONS(28),
  },
  [31] = {
    [sym_math_shift] = ACTIONS(131),
    [sym_comment] = ACTIONS(51),
    [sym_magic] = ACTIONS(28),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(133),
    [sym_escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_end_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
    [sym_comment] = ACTIONS(135),
    [sym_magic] = ACTIONS(28),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [sym_escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_end_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [sym_text] = ACTIONS(139),
    [sym_comment] = ACTIONS(139),
    [sym_magic] = ACTIONS(28),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [13] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [15] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [17] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [21] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [25] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT(6), SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(15),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(16),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [46] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT(16), SHIFT_EXTRA(),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 1),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_text_mode_repeat1, 1),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tex, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [67] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT(20), SHIFT_EXTRA(),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 2),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(21),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(23),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 1),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_mode_repeat1, 1),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(27),
  [94] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT(27), SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [103] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [107] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(30),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catcode, 4),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 4),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
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
