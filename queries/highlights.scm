; Commands and functions
(command
  (identifier) @function)

; The lozenge symbol
"◊" @punctuation.special

; Keyword arguments
"#:" @keyword
(kwarg
  (kwarg_identifier) @variable.parameter)

; Strings and numbers in kwargs
(kwarg
  (string) @string)
(kwarg
  (number) @number)

; Brackets for kwargs
"[" @punctuation.bracket
"]" @punctuation.bracket

; Braces for arguments
"{" @punctuation.bracket
"}" @punctuation.bracket

; Comments
(comment) @comment

; Regular text content
(text) @text

; Escaped characters in text
(text) @string.escape

; Optional: highlight the entire kwarg structure
(kwargs) @keyword.operator
