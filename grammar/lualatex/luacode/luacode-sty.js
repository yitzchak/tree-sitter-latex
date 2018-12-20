module.exports = {
  cmd: [
    {
      label: 'lua',
      text: true,
      math: true,
      word: $ => /(direct|late)lua/,
      parameters: $ => [
        optional($._number),
        $._luadirect_parameter,
      ]
    },
    {
      label: 'luadirect',
      text: true,
      math: true,
      word: $ => 'luadirect',
      parameters: $ => [
        $._luadirect_parameter,
      ]
    },
    {
      label: 'luaexec',
      text: true,
      math: true,
      word: $ => 'luaexec',
      parameters: $ => [
        $._luaexec_parameter,
      ]
    }
  ],
  env: [
    {
      label: 'luacode',
      text: true,
      math: true,
      name: $ => 'luacode',
      contents: $ => [
        $.__ccc_luacode,
        repeat($._text_mode)
      ]
    }, {
      label: 'luacodestar',
      text: true,
      math: true,
      name: $ => 'luacode*',
      parameters: $ => [
        $.eol
      ],
      contents: $ => [
        alias($.luacodestar_body, $.text)
      ]
    }
  ]
}
