// AMS math environments that have the same form as base environments are not
// given separate definitions. This leaves alignat.

module.exports = {
  cmd: [
    {
      label: 'tag',
      mode: 'math',
      cs: $ => $.cs_tag,
      parameters: $ => [$._parameter]
    }
  ],
  env: [
    {
      label: 'alignat',
      mode: 'text',
      name: $ => $.env_name_alignat,
      beginParameters: $ => [$._parameter],
      contents: $ => [repeat($._math_mode)]
    }
  ]
}
