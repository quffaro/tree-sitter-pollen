// In grammar.js
module.exports = grammar({
  name: 'pollen',

  // Define which characters can be part of identifiers
  word: $ => $.identifier,

  rules: {
    // The root rule - a program is a sequence of expressions
    source_file: $ => repeat($._expression),

    _expression: $ => choice(
      $.command,
      $.text,
      $.list,
      $.tag,
      $.comment,
      $.lozenge_command
    ),

    // Pollen commands starting with ◊
    command: $ => seq(
      '◊',
      $.identifier,
      optional($.arguments)
    ),

    // Lozenge commands in curly braces
    lozenge_command: $ => seq(
      '{',
      '◊',
      $.identifier,
      optional($.arguments),
      '}'
    ),

    // Arguments can be lists or single values
    arguments: $ => choice(
      $.list,
      $._value
    ),

    // Lists are enclosed in square brackets
    list: $ => seq(
      '[',
      repeat($._expression),
      ']'
    ),

    // Tags are for HTML-like markup
    tag: $ => seq(
      '<',
      $.identifier,
      repeat($.attribute),
      choice('>', seq('/', '>')),
      optional(seq(
        repeat($._expression),
        '</',
        $.identifier,
        '>'
      ))
    ),

    // Tag attributes
    attribute: $ => seq(
      $.identifier,
      '=',
      choice(
        $.string,
        $.identifier
      )
    ),

    // Basic text content
    text: $ => /[^◊{}<>\[\]]+/,

    // Strings can be double or single quoted
    string: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),

    // Comments start with ;
    comment: $ => seq(
      ';',
      /.*/
    ),

    // Identifiers can include Racket-style symbols
    identifier: $ => /[a-zA-Z\-_!?+<>=%*]+/,

    _value: $ => choice(
      $.string,
      $.identifier,
      $.number
    ),

    number: $ => /\d+(\.\d+)?/
  }
});
