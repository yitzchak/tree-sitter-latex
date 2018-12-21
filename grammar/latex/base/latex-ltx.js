module.exports = {
  cmd: [
    {
      label: 'mathbf',
      math: true,
      word: $ => 'mathbf',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'mathcal',
      math: true,
      word: $ => 'mathcal',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'mathit',
      math: true,
      word: $ => 'mathit',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'mathnormal',
      math: true,
      word: $ => 'mathnormal',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'mathrm',
      math: true,
      word: $ => 'mathrm',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'mathsf',
      math: true,
      word: $ => 'mathsf',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'mathtt',
      math: true,
      word: $ => 'mathtt',
      parameters: $ => [
        alias($.math_group, $.group)
      ]
    },
    {
      label: 'textrm',
      text: true,
      word: $ => 'textrm',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textsf',
      text: true,
      word: $ => 'textsf',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'texttt',
      text: true,
      word: $ => 'texttt',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textnormal',
      text: true,
      word: $ => 'textnormal',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textbf',
      text: true,
      word: $ => 'textbf',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textmd',
      text: true,
      word: $ => 'textmd',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textit',
      text: true,
      word: $ => 'textit',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textsl',
      text: true,
      word: $ => 'textsl',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textsc',
      text: true,
      word: $ => 'textsc',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'textup',
      text: true,
      word: $ => 'textup',
      parameters: $ => [
        $.group
      ]
    },
    {
      label: 'emph',
      text: true,
      word: $ => 'emph',
      parameters: $ => [
        $.group
      ]
    },
  ],
  env: [
    {
      label: 'display_math',
      text: true,
      name: $ => /displaymath|eqnarray\*?|equation/,
      contents: $ => [
        repeat($._math_mode)
      ]
    },
    {
      label: 'document',
      text: true,
      name: $ => 'document'
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
    }
  ]
}
