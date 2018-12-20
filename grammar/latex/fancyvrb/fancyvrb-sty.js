module.exports.env = [{
  label: 'BVerbatim',
  text: true,
  name: $ => 'BVerbatim',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.BVerbatim_body, $.text)
  ]
}, {
  label: 'BVerbatimstar',
  text: true,
  name: $ => 'BVerbatim*',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.BVerbatimstar_body, $.text)
  ]
}, {
  label: 'LVerbatim',
  text: true,
  name: $ => 'LVerbatim',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.LVerbatim_body, $.text)
  ]
}, {
  label: 'LVerbatimstar',
  text: true,
  name: $ => 'LVerbatim*',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.LVerbatimstar_body, $.text)
  ]
}, {
  label: 'Verbatim',
  text: true,
  name: $ => 'Verbatim',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.Verbatim_body, $.text)
  ]
}, {
  label: 'Verbatimstar',
  text: true,
  name: $ => 'Verbatim*',
  parameters: $ => [
    optional($.brack_group),
    $.eol
  ],
  contents: $ => [
    alias($.Verbatimstar_body, $.text)
  ]
}]
