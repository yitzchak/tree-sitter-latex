module.exports = {
  env: [
    {
      label: 'breqn_display_math',
      text: true,
      name: $ => /(dmath|dgroup|darray)\*?/,
      parameters: $ => [
        optional($.brack_group)
      ],
      contents: $ => [
        repeat($._math_mode)
      ]
    },
    { // dseries starts in text mode
      label: 'dseries',
      text: true,
      name: $ => /dseries\*?/,
      parameters: $ => [
        optional($.brack_group)
      ],
    }
  ]
}
