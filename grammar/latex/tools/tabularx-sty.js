module.exports.env = [
  {
    label: 'tabularx',
    text: true,
    math: true,
    name: $ => 'tabularx',
    parameters: $ => [
      alias($.dimension_group, $.group),
      optional($.brack_group),
      $.group
    ]
  }
]
