module.exports.env = [
  {
    label: 'comment',
    text: true,
    name: $ => 'comment',
    parameters: $ => [
      $.eol
    ],
    contents: $ => [
      alias($.comment_body, $.text)
    ]
  },
  {
    label: 'verbatim',
    text: true,
    name: $ => 'verbatim',
    parameters: $ => [
      $.eol
    ],
    contents: $ => [
      alias($.verbatim_body, $.text)
    ]
  },
  {
    label: 'verbatimstar',
    text: true,
    name: $ => 'verbatim*',
    parameters: $ => [
      $.eol
    ],
    contents: $ => [
      alias($.verbatimstar_body, $.text)
    ]
  }
]
