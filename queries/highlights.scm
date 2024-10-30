; Highlight function names after the lozenge
(command
  (identifier) @function)

; Highlight the lozenge
"◊" @punctuation.special

(kwarg_command) @kwarg_command

; Highlight braces
"{" @punctuation.bracket
"}" @punctuation.bracket

; Highlight comments
(comment) @comment
