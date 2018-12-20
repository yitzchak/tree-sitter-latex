module.exports.env = [
  {
    label: 'amsmath_display_math',
    text: true,
    name: $ => /align\*?|equation\*|flalign\*?|gather\*?|multiline\*?|split\*?/,
    contents: $ => [
      repeat($._math_mode)
    ]
  },
  {
    label: 'alignat',
    text: true,
    name: $ => /alignat\*?/,
    parameters: $ => [
      $.group
    ],
    contents: $ => [
      repeat($._math_mode)
    ]
  },
]
