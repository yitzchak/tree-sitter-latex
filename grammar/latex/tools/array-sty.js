module.exports.env = [
  {
    label: 'array',
    math: true,
    name: $ => 'array',
    parameters: $ => [
      optional($.brack_group),
      $.group
    ]
  },
  {
    label: 'tabular',
    text: true,
    math: true,
    name: $ => 'tabular',
    parameters: $ => [
      optional($.brack_group),
      $.group
    ]
  },
  {
    label: 'tabularstar',
    text: true,
    math: true,
    name: $ => 'tabular*',
    parameters: $ => [
      alias($.dimension_group, $.group),
      optional($.brack_group),
      $.group
    ]
  }
]
