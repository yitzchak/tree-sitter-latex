// filecontents is defined in LaTeX base, but the improved version lives in its
// own package.

module.exports.env = [
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
  }
]
