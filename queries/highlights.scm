; Highlight function names after the lozenge
(command
  (identifier) @function)

; Highlight the lozenge
"◊" @punctuation.special

; Highlight braces
"{" @punctuation.bracket
"}" @punctuation.bracket

; Highlight comments
(comment) @comment
