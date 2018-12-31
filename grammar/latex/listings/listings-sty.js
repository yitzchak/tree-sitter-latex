module.exports = {
  cmd: [{
    label: 'lstinline',
    cs: $ => $.cs_lstinline,
    mode: 'text',
    local: true,
    parameters: $ => [
      choice(
        seq(
          $.brack_group,
          $.verb_delim
        ),
        alias($.verb_delim_no_lbrack, $.verb_delim)
      ),
      alias($.verb_body, $.verbatim),
      alias($.verb_end_delim, $.verb_delim)
    ]
  }],
  env: [{
    label: 'lstlisting',
    mode: 'text',
    name: $ => $.env_name_lstlisting,
    beginParameters: $ => [
      optional($.brack_group),
      $.eol
    ],
    contents: $ => [
      $.verbatim
    ],
    bare: true
  }]
}
