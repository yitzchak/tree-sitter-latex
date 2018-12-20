module.exports.env = [
  {
    label: 'longtable',
    text: true,
    math: true,
    name: $ => 'longtable',
    parameters: $ => [
      optional($.brack_group),
      $.group
    ]
  }
]
