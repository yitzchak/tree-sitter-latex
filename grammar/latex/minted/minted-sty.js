module.exports.env = [{
  label: 'minted',
  text: true,
  name: $ => 'minted',
  parameters: $ => [
    optional($.brack_group),
    optional($._parameter),
    $.eol
  ],
  contents: $ => [
    alias($.minted_body, $.text)
  ]
}]
