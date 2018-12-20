module.exports.env = [{
  label: 'lstlisting',
  text: true,
  name: $ => 'lstlisting',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.lstlisting_body, $.text)
  ]
}]
