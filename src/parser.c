#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_u25ca = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  sym_text = 5,
  anon_sym_SEMI = 6,
  aux_sym_comment_token1 = 7,
  sym_source = 8,
  sym__expression = 9,
  sym_command = 10,
  sym_comment = 11,
  aux_sym_source_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_u25ca] = "\u25ca",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_text] = "text",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_command] = "command",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_u25ca] = anon_sym_u25ca,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_text] = sym_text,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_command] = sym_command,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_u25ca] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 7,
  [16] = 16,
  [17] = 9,
  [18] = 10,
  [19] = 12,
  [20] = 16,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(8);
      if (lookahead == 0x25ca) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == 0x25ca) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '{') ADVANCE(7);
      if (lookahead == 0x25ca) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == 0x25ca) ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_u25ca);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '{') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ';') ADVANCE(17);
      if (lookahead == '}') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ';') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != 0x25ca) ADVANCE(14);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_u25ca] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(13),
    [sym__expression] = STATE(8),
    [sym_command] = STATE(7),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_u25ca] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
  },
  [2] = {
    [sym__expression] = STATE(8),
    [sym_command] = STATE(7),
    [sym_comment] = STATE(2),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_u25ca] = ACTIONS(7),
    [sym_text] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
  },
  [3] = {
    [sym__expression] = STATE(8),
    [sym_command] = STATE(7),
    [sym_comment] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_u25ca] = ACTIONS(17),
    [sym_text] = ACTIONS(20),
    [anon_sym_SEMI] = ACTIONS(11),
  },
  [4] = {
    [sym__expression] = STATE(16),
    [sym_command] = STATE(15),
    [sym_comment] = STATE(4),
    [anon_sym_u25ca] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(11),
  },
  [5] = {
    [sym__expression] = STATE(20),
    [sym_command] = STATE(15),
    [sym_comment] = STATE(5),
    [anon_sym_u25ca] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(29),
    [sym_text] = ACTIONS(27),
    [anon_sym_SEMI] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_comment,
    ACTIONS(33), 2,
      anon_sym_u25ca,
      sym_text,
  [17] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_u25ca,
      sym_text,
  [31] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_u25ca,
      sym_text,
  [45] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    ACTIONS(47), 2,
      anon_sym_u25ca,
      sym_text,
  [59] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_u25ca,
      sym_text,
  [73] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_LBRACE,
    STATE(11), 1,
      sym_comment,
  [86] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(12), 1,
      sym_comment,
  [96] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
  [106] = 3,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    STATE(14), 1,
      sym_comment,
  [116] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_comment,
  [126] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym_comment,
  [136] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      sym_comment,
  [146] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_comment,
  [156] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(19), 1,
      sym_comment,
  [166] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(20), 1,
      sym_comment,
  [176] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 17,
  [SMALL_STATE(8)] = 31,
  [SMALL_STATE(9)] = 45,
  [SMALL_STATE(10)] = 59,
  [SMALL_STATE(11)] = 73,
  [SMALL_STATE(12)] = 86,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 106,
  [SMALL_STATE(15)] = 116,
  [SMALL_STATE(16)] = 126,
  [SMALL_STATE(17)] = 136,
  [SMALL_STATE(18)] = 146,
  [SMALL_STATE(19)] = 156,
  [SMALL_STATE(20)] = 166,
  [SMALL_STATE(21)] = 176,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 5, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 5, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_pollen(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
