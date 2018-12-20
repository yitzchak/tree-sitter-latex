module.exports.env = [
  {
    label: 'supertabular',
    text: true,
    math: true,
    name: $ => 'supertabular',
    parameters: $ => [
      optional($.brack_group),
      $.group
    ]
  },
  {
    label: 'supertabularstar',
    text: true,
    math: true,
    name: $ => 'supertabular*',
    parameters: $ => [
      alias($.dimension_group, $.group),
      optional($.brack_group),
      $.group
    ]
  }
]
