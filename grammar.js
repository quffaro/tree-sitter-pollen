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
      $.text,
	  $.comment
    ),

    kwargs: $ => seq(
      '[',
      repeat1($.kwarg),
      ']'
    ),

    kwarg: $ => seq(
	  "#:",
	  $.kwarg_identifier,
      ' ',
      choice($.string, $.number)
    ),

    string: $ => /"[^"]*"/,
    number: $ => /\d+/,

    arg: $ => seq(
      '{',
      repeat($._expression),  // Allow multiple expressions
      '}'
    ),

    command: $ => seq(
      '◊',
      $.identifier,
      optional($.kwargs),  // Make kwargs optional
      optional($.arg)      // Make args optional too for tag-only commands
    ),

    identifier: $ => /[a-zA-Z][a-zA-Z0-9-]*/,
	kwarg_identifier: $ => /[a-zA-Z][a-zA-Z0-9-]*/,

    
    text: $ => choice(
      /[^◊{}\[\]]+/,           // Normal text
      /\\[◊{}\[\]]/           // Escaped special characters
    ),

    comment: $ => seq(';', /.*/),
  }
});
