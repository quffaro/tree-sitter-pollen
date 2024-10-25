; queries/highlights.scm

; Commands
(command
  identifier: (identifier) @function)

(lozenge_command
  identifier: (identifier) @function)

; Tags
(tag
  identifier: (identifier) @tag)

; Attributes in tags
(attribute
  (identifier) @property)

; Strings
(string) @string

; Comments
(comment) @comment

; Numbers
(number) @number

; Lists
(list) @punctuation.bracket

; Identifiers in other contexts
(identifier) @variable
