module.exports.env = [
  {
    label: 'tabulary',
    text: true,
    math: true,
    name: $ => 'tabulary',
    parameters: $ => [
      alias($.dimension_group, $.group),
      optional($.brack_group),
      $.group
    ]
  }
]
