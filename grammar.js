module.exports = grammar({
  name: 'pollen',

  extras: $ => [
    /\s/,
    $.comment
  ],

  rules: {
    source: $ => repeat($._expression),

    _expression: $ => choice(
      $.command,
      $.text
    ),

    command: $ => seq(
      '◊',
      $.identifier,
      optional(seq(
        '{',
        optional($._expression),
        '}'
      ))
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9-]*/,
    
    text: $ => /[^◊]+/,

    comment: $ => seq(';', /.*/),
  }
});
