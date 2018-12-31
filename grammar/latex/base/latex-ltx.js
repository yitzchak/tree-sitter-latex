module.exports = {
  env: [
    {
      label: 'display_math',
      mode: 'text',
      name: $ => $.env_name_display_math,
      contents: $ => [repeat($._math_mode)]
    }
  ]
}
