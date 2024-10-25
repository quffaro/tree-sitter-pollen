module.exports = grammar({
  name: 'pollen',

  word: $ => $.identifier,

  // Remove the unnecessary conflict
  precedences: $ => [
    [
      'command_args',
      'bare_command'
    ],
    ['tag_content']  // Add precedence for tag_content
  ],

  rules: {
    source_file: $ => repeat($._expression),

    _expression: $ => choice(
      $.command,
      $.text,
      $.tag,
      $.comment,
      $.lozenge_command
    ),

    // Modified tag rule to be more explicit
    tag: $ => choice(
      // Self-closing tag
      seq(
        '<',
        $.identifier,
        repeat($.attribute),
        '/>'
      ),
      // Tag with content - use prec to handle nesting
      prec('tag_content', seq(
        '<',
        $.identifier,
        repeat($.attribute),
        '>',
        repeat($._expression),
        '</',
        $.identifier,
        '>'
      ))
    ),

    command: $ => prec.dynamic(1, choice(
      prec('command_args', seq(
        '◊',
        $.identifier,
        choice(
          $.bracket_args,
          $.brace_args
        )
      )),
      prec('bare_command', seq(
        '◊',
        $.identifier
      ))
    )),

    bracket_args: $ => seq(
      '[',
      repeat($._expression),
      ']'
    ),

    brace_args: $ => seq(
      '{',
      repeat($._expression),
      '}'
    ),

    lozenge_command: $ => seq(
      '{',
      '◊',
      $.identifier,
      optional(choice(
        $.bracket_args,
        $.brace_args
      )),
      '}'
    ),

    attribute: $ => seq(
      $.identifier,
      '=',
      choice(
        $.string,
        $.identifier
      )
    ),

    // Make text more specific to avoid conflicts
    text: $ => token(prec(-1, /[^◊{}<>\[\]]+/)),

    string: $ => choice(
      seq('"', /[^"]*/, '"'),
      seq("'", /[^']*/, "'")
    ),

    comment: $ => seq(
      ';',
      /.*/
    ),

    identifier: $ => /[a-zA-Z\-_!?+<>=%*]+/
  }
});
