module.exports.env = [
  {
    label: 'document',
    text: true,
    name: $ => 'document'
  },
  {
    label: 'filecontents',
    text: true,
    name: $ => 'filecontents',
    parameters: $ => [
      $.group,
      $.eol
    ],
    contents: $ => [
      alias($.filecontents_body, $.text)
    ]
  },
  {
    label: 'filecontentsstar',
    text: true,
    name: $ => 'filecontents*',
    parameters: $ => [
      $.group,
      $.eol
    ],
    contents: $ => [
      alias($.filecontentsstar_body, $.text)
    ]
  },
  {
    label: 'inline_math',
    text: true,
    name: $ => 'math',
    contents: $ => [
      repeat($._math_mode)
    ]
  },
  { // The default math environment (in math mode)
    label: 'math',
    math: true
  },
  {
    label: 'minipage',
    text: true,
    name: $ => 'minipage',
    parameters: $ => [
      optional(
        seq(
          $.brack_group,
          optional(
            seq(
              alias($.dimension_brack_group, $.brack_group),
              optional($.brack_group)
            )
          )
        )
      ),
      alias($.dimension_group, $.group)
    ]
  },
  { // The default text environment
    label: 'text',
    text: true,
  },
]
