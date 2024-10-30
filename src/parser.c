#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_POUND_COLON = 3,
  anon_sym_SPACE = 4,
  sym_string = 5,
  sym_number = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_u25ca = 9,
  aux_sym_identifier_token1 = 10,
  aux_sym_text_token1 = 11,
  aux_sym_text_token2 = 12,
  anon_sym_SEMI = 13,
  aux_sym_comment_token1 = 14,
  sym_source = 15,
  sym__expression = 16,
  sym_kwargs = 17,
  sym_kwarg = 18,
  sym_arg = 19,
  sym_command = 20,
  sym_identifier = 21,
  sym_kwarg_identifier = 22,
  sym_text = 23,
  sym_comment = 24,
  aux_sym_source_repeat1 = 25,
  aux_sym_kwargs_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUND_COLON] = "#:",
  [anon_sym_SPACE] = " ",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_u25ca] = "\u25ca",
  [aux_sym_identifier_token1] = "identifier_token1",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source] = "source",
  [sym__expression] = "_expression",
  [sym_kwargs] = "kwargs",
  [sym_kwarg] = "kwarg",
  [sym_arg] = "arg",
  [sym_command] = "command",
  [sym_identifier] = "identifier",
  [sym_kwarg_identifier] = "kwarg_identifier",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_kwargs_repeat1] = "kwargs_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUND_COLON] = anon_sym_POUND_COLON,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_u25ca] = anon_sym_u25ca,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source] = sym_source,
  [sym__expression] = sym__expression,
  [sym_kwargs] = sym_kwargs,
  [sym_kwarg] = sym_kwarg,
  [sym_arg] = sym_arg,
  [sym_command] = sym_command,
  [sym_identifier] = sym_identifier,
  [sym_kwarg_identifier] = sym_kwarg_identifier,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_kwargs_repeat1] = aux_sym_kwargs_repeat1,
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
  [anon_sym_POUND_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u25ca] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
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
  [sym_kwargs] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [aux_sym_kwargs_repeat1] = {
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 15,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 2,
        '#', 3,
        ';', 21,
        '[', 7,
        '\\', 4,
        ']', 8,
        '{', 13,
        '}', 14,
        0x25ca, 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == ';') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r')) SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == 0x25ca) ADVANCE(20);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(7);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == 0x25ca) ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead)) ADVANCE(19);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_POUND_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_u25ca);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x25ca) ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == 0x25ca) ADVANCE(20);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x25ca) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_text_token2);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != 0x25ca) ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(23);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 24},
  [29] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUND_COLON] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_u25ca] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(27),
    [sym__expression] = STATE(5),
    [sym_command] = STATE(5),
    [sym_text] = STATE(5),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_u25ca] = ACTIONS(7),
    [aux_sym_text_token1] = ACTIONS(9),
    [aux_sym_text_token2] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      anon_sym_u25ca,
    ACTIONS(23), 1,
      anon_sym_SEMI,
    ACTIONS(20), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(2), 5,
      sym__expression,
      sym_command,
      sym_text,
      sym_comment,
      aux_sym_source_repeat1,
  [24] = 7,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_LBRACK,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(8), 1,
      sym_kwargs,
    STATE(12), 1,
      sym_arg,
    ACTIONS(32), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [50] = 6,
    ACTIONS(7), 1,
      anon_sym_u25ca,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      sym_comment,
    ACTIONS(9), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(6), 4,
      sym__expression,
      sym_command,
      sym_text,
      aux_sym_source_repeat1,
  [73] = 6,
    ACTIONS(7), 1,
      anon_sym_u25ca,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
    ACTIONS(9), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(2), 4,
      sym__expression,
      sym_command,
      sym_text,
      aux_sym_source_repeat1,
  [96] = 6,
    ACTIONS(7), 1,
      anon_sym_u25ca,
    ACTIONS(11), 1,
      anon_sym_SEMI,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    ACTIONS(9), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(2), 4,
      sym__expression,
      sym_command,
      sym_text,
      aux_sym_source_repeat1,
  [119] = 3,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
    ACTIONS(42), 7,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [135] = 5,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_comment,
    STATE(14), 1,
      sym_arg,
    ACTIONS(46), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [155] = 3,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    ACTIONS(50), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [170] = 3,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_comment,
    ACTIONS(54), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [184] = 3,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_comment,
    ACTIONS(58), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [198] = 3,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_comment,
    ACTIONS(46), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [212] = 3,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
    ACTIONS(62), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [226] = 3,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_comment,
    ACTIONS(66), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [240] = 3,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_comment,
    ACTIONS(70), 5,
      anon_sym_RBRACE,
      anon_sym_u25ca,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_SEMI,
  [254] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    ACTIONS(74), 1,
      anon_sym_POUND_COLON,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_kwargs_repeat1,
    STATE(23), 1,
      sym_kwarg,
  [273] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_RBRACK,
    ACTIONS(78), 1,
      anon_sym_POUND_COLON,
    STATE(23), 1,
      sym_kwarg,
    STATE(17), 2,
      sym_comment,
      aux_sym_kwargs_repeat1,
  [290] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      anon_sym_POUND_COLON,
    STATE(16), 1,
      aux_sym_kwargs_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(23), 1,
      sym_kwarg,
  [306] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      aux_sym_identifier_token1,
    STATE(3), 1,
      sym_identifier,
    STATE(19), 1,
      sym_comment,
  [319] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_RBRACK,
      anon_sym_POUND_COLON,
  [330] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym_string,
      sym_number,
  [341] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      aux_sym_identifier_token1,
    STATE(22), 1,
      sym_comment,
    STATE(25), 1,
      sym_kwarg_identifier,
  [354] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(89), 2,
      anon_sym_RBRACK,
      anon_sym_POUND_COLON,
  [365] = 3,
    ACTIONS(91), 1,
      anon_sym_SPACE,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
  [375] = 3,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_SPACE,
    STATE(25), 1,
      sym_comment,
  [385] = 3,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      aux_sym_comment_token1,
    STATE(26), 1,
      sym_comment,
  [395] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(27), 1,
      sym_comment,
  [405] = 3,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(101), 1,
      aux_sym_comment_token1,
    STATE(28), 1,
      sym_comment,
  [415] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 73,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 273,
  [SMALL_STATE(18)] = 290,
  [SMALL_STATE(19)] = 306,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 395,
  [SMALL_STATE(28)] = 405,
  [SMALL_STATE(29)] = 415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwargs, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_kwargs, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arg, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kwargs_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_kwargs_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 4, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_kwargs_repeat1, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg_identifier, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [99] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
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
