#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 34
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH = 1,
  sym_escape = 2,
  sym_begin_group = 3,
  sym_end_group = 4,
  sym_math_shift = 5,
  sym_alignment_tab = 6,
  sym_end_of_line = 7,
  sym_parameter_char = 8,
  sym_superscript = 9,
  sym_subscript = 10,
  sym_space = 11,
  sym_letter = 12,
  sym_other = 13,
  sym_active_char = 14,
  sym_comment_char = 15,
  sym_comment = 16,
  sym_tex = 17,
  sym_text_mode = 18,
  sym_math_mode = 19,
  sym_parameter = 20,
  sym_escaped = 21,
  sym_command = 22,
  sym_group = 23,
  sym_display_math = 24,
  sym_inline_math = 25,
  aux_sym_tex_repeat1 = 26,
  aux_sym_command_repeat1 = 27,
  aux_sym_display_math_repeat1 = 28,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = "/[0-9]+/",
  [sym_escape] = "escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym_end_of_line] = "end_of_line",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_space] = "space",
  [sym_letter] = "letter",
  [sym_other] = "other",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_comment] = "comment",
  [sym_tex] = "tex",
  [sym_text_mode] = "text_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_escaped] = "escaped",
  [sym_command] = "command",
  [sym_group] = "group",
  [sym_display_math] = "display_math",
  [sym_inline_math] = "inline_math",
  [aux_sym_tex_repeat1] = "tex_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
  [aux_sym_display_math_repeat1] = "display_math_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
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
  [sym_alignment_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_line] = {
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
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_other] = {
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
  [sym_comment] = {
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
  [sym_group] = {
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
  [aux_sym_tex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_display_math_repeat1] = {
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
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '^')
        ADVANCE(9);
      if (lookahead == '_')
        ADVANCE(10);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '~')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      ADVANCE(16);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_end_of_line);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_comment_char);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_space);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_other);
      END_STATE();
    case 17:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(6);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '#')
        ADVANCE(3);
      if (lookahead == '$')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\\')
        ADVANCE(8);
      if (lookahead == '{')
        ADVANCE(11);
      if (lookahead == '}')
        ADVANCE(12);
      if (lookahead == '~')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '^' &&
          lookahead != '_')
        ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '%')
        ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym_end_of_line] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_space] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_other] = ACTIONS(1),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_tex] = STATE(6),
    [sym_text_mode] = STATE(7),
    [sym_parameter] = STATE(8),
    [sym_escaped] = STATE(8),
    [sym_command] = STATE(8),
    [sym_group] = STATE(8),
    [sym_display_math] = STATE(8),
    [sym_inline_math] = STATE(8),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(12),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [2] = {
    [sym_escape] = ACTIONS(18),
    [sym_begin_group] = ACTIONS(18),
    [sym_end_group] = ACTIONS(18),
    [sym_math_shift] = ACTIONS(18),
    [sym_alignment_tab] = ACTIONS(18),
    [sym_parameter_char] = ACTIONS(18),
    [sym_space] = ACTIONS(18),
    [sym_letter] = ACTIONS(20),
    [sym_other] = ACTIONS(18),
    [sym_active_char] = ACTIONS(18),
    [sym_comment_char] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [sym_tex] = STATE(11),
    [sym_text_mode] = STATE(7),
    [sym_parameter] = STATE(8),
    [sym_escaped] = STATE(8),
    [sym_command] = STATE(8),
    [sym_group] = STATE(8),
    [sym_display_math] = STATE(8),
    [sym_inline_math] = STATE(8),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(12),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [4] = {
    [sym_math_mode] = STATE(13),
    [sym_parameter] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_command] = STATE(14),
    [sym_group] = STATE(14),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(26),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [5] = {
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(28),
    [sym_comment] = ACTIONS(16),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_comment] = ACTIONS(16),
  },
  [7] = {
    [sym_text_mode] = STATE(16),
    [sym_parameter] = STATE(8),
    [sym_escaped] = STATE(8),
    [sym_command] = STATE(8),
    [sym_group] = STATE(8),
    [sym_display_math] = STATE(8),
    [sym_inline_math] = STATE(8),
    [aux_sym_tex_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_end_group] = ACTIONS(32),
    [sym_math_shift] = ACTIONS(12),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(34),
    [sym_escape] = ACTIONS(34),
    [sym_begin_group] = ACTIONS(34),
    [sym_end_group] = ACTIONS(34),
    [sym_math_shift] = ACTIONS(34),
    [sym_parameter_char] = ACTIONS(34),
    [sym_comment] = ACTIONS(16),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(36),
    [sym_escape] = ACTIONS(36),
    [sym_begin_group] = ACTIONS(36),
    [sym_end_group] = ACTIONS(36),
    [sym_math_shift] = ACTIONS(36),
    [sym_parameter_char] = ACTIONS(36),
    [sym_comment] = ACTIONS(16),
  },
  [10] = {
    [aux_sym_command_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(38),
    [sym_escape] = ACTIONS(38),
    [sym_begin_group] = ACTIONS(38),
    [sym_end_group] = ACTIONS(38),
    [sym_math_shift] = ACTIONS(38),
    [sym_parameter_char] = ACTIONS(38),
    [sym_letter] = ACTIONS(40),
    [sym_comment] = ACTIONS(16),
  },
  [11] = {
    [sym_end_group] = ACTIONS(42),
    [sym_comment] = ACTIONS(16),
  },
  [12] = {
    [sym_math_mode] = STATE(21),
    [sym_parameter] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_command] = STATE(14),
    [sym_group] = STATE(14),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [13] = {
    [sym_math_mode] = STATE(23),
    [sym_parameter] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_command] = STATE(14),
    [sym_group] = STATE(14),
    [aux_sym_display_math_repeat1] = STATE(24),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(44),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [14] = {
    [sym_escape] = ACTIONS(46),
    [sym_begin_group] = ACTIONS(46),
    [sym_math_shift] = ACTIONS(46),
    [sym_parameter_char] = ACTIONS(46),
    [sym_comment] = ACTIONS(16),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_escape] = ACTIONS(48),
    [sym_begin_group] = ACTIONS(48),
    [sym_end_group] = ACTIONS(48),
    [sym_math_shift] = ACTIONS(48),
    [sym_parameter_char] = ACTIONS(48),
    [sym_comment] = ACTIONS(16),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(50),
    [sym_escape] = ACTIONS(50),
    [sym_begin_group] = ACTIONS(50),
    [sym_end_group] = ACTIONS(50),
    [sym_math_shift] = ACTIONS(50),
    [sym_parameter_char] = ACTIONS(50),
    [sym_comment] = ACTIONS(16),
  },
  [17] = {
    [sym_text_mode] = STATE(25),
    [sym_parameter] = STATE(8),
    [sym_escaped] = STATE(8),
    [sym_command] = STATE(8),
    [sym_group] = STATE(8),
    [sym_display_math] = STATE(8),
    [sym_inline_math] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_end_group] = ACTIONS(52),
    [sym_math_shift] = ACTIONS(12),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_escape] = ACTIONS(54),
    [sym_begin_group] = ACTIONS(54),
    [sym_end_group] = ACTIONS(54),
    [sym_math_shift] = ACTIONS(54),
    [sym_parameter_char] = ACTIONS(54),
    [sym_letter] = ACTIONS(54),
    [sym_comment] = ACTIONS(16),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_escape] = ACTIONS(56),
    [sym_begin_group] = ACTIONS(56),
    [sym_end_group] = ACTIONS(56),
    [sym_math_shift] = ACTIONS(56),
    [sym_parameter_char] = ACTIONS(56),
    [sym_letter] = ACTIONS(58),
    [sym_comment] = ACTIONS(16),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_escape] = ACTIONS(60),
    [sym_begin_group] = ACTIONS(60),
    [sym_end_group] = ACTIONS(60),
    [sym_math_shift] = ACTIONS(60),
    [sym_parameter_char] = ACTIONS(60),
    [sym_comment] = ACTIONS(16),
  },
  [21] = {
    [sym_math_mode] = STATE(23),
    [sym_parameter] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_command] = STATE(14),
    [sym_group] = STATE(14),
    [aux_sym_display_math_repeat1] = STATE(28),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(62),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_escape] = ACTIONS(64),
    [sym_begin_group] = ACTIONS(64),
    [sym_end_group] = ACTIONS(64),
    [sym_math_shift] = ACTIONS(64),
    [sym_parameter_char] = ACTIONS(64),
    [sym_comment] = ACTIONS(16),
  },
  [23] = {
    [sym_escape] = ACTIONS(66),
    [sym_begin_group] = ACTIONS(66),
    [sym_math_shift] = ACTIONS(66),
    [sym_parameter_char] = ACTIONS(66),
    [sym_comment] = ACTIONS(16),
  },
  [24] = {
    [sym_math_mode] = STATE(30),
    [sym_parameter] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_command] = STATE(14),
    [sym_group] = STATE(14),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(68),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(70),
    [sym_escape] = ACTIONS(70),
    [sym_begin_group] = ACTIONS(70),
    [sym_end_group] = ACTIONS(70),
    [sym_math_shift] = ACTIONS(70),
    [sym_parameter_char] = ACTIONS(70),
    [sym_comment] = ACTIONS(16),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_escape] = ACTIONS(72),
    [sym_begin_group] = ACTIONS(72),
    [sym_end_group] = ACTIONS(72),
    [sym_math_shift] = ACTIONS(72),
    [sym_parameter_char] = ACTIONS(72),
    [sym_letter] = ACTIONS(72),
    [sym_comment] = ACTIONS(16),
  },
  [27] = {
    [sym_math_shift] = ACTIONS(74),
    [sym_comment] = ACTIONS(16),
  },
  [28] = {
    [sym_math_mode] = STATE(30),
    [sym_parameter] = STATE(14),
    [sym_escaped] = STATE(14),
    [sym_command] = STATE(14),
    [sym_group] = STATE(14),
    [sym_escape] = ACTIONS(8),
    [sym_begin_group] = ACTIONS(10),
    [sym_math_shift] = ACTIONS(76),
    [sym_parameter_char] = ACTIONS(14),
    [sym_comment] = ACTIONS(16),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [sym_escape] = ACTIONS(78),
    [sym_begin_group] = ACTIONS(78),
    [sym_end_group] = ACTIONS(78),
    [sym_math_shift] = ACTIONS(78),
    [sym_parameter_char] = ACTIONS(78),
    [sym_comment] = ACTIONS(16),
  },
  [30] = {
    [sym_escape] = ACTIONS(80),
    [sym_begin_group] = ACTIONS(80),
    [sym_math_shift] = ACTIONS(80),
    [sym_parameter_char] = ACTIONS(80),
    [sym_comment] = ACTIONS(16),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [sym_escape] = ACTIONS(82),
    [sym_begin_group] = ACTIONS(82),
    [sym_end_group] = ACTIONS(82),
    [sym_math_shift] = ACTIONS(82),
    [sym_parameter_char] = ACTIONS(82),
    [sym_comment] = ACTIONS(16),
  },
  [32] = {
    [sym_math_shift] = ACTIONS(84),
    [sym_comment] = ACTIONS(16),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [sym_escape] = ACTIONS(86),
    [sym_begin_group] = ACTIONS(86),
    [sym_end_group] = ACTIONS(86),
    [sym_math_shift] = ACTIONS(86),
    [sym_parameter_char] = ACTIONS(86),
    [sym_comment] = ACTIONS(16),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(3),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(9),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tex, 1),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 2),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(20),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(22),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 1),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tex, 2),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_command, 3),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(26),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_group, 3),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(27),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 1),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(29),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_tex_repeat1, 2),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_command_repeat1, 2),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(31),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(32),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_display_math_repeat1, 2),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_display_math, 6),
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
