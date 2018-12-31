module.exports = {
  cmd: [
    {
      label: 'luacode',
      mode: 'common',
      local: true,
      cs: $ => $.cs_luacode,
      parameters: $ => [$._apply_parameter]
    }
  ],
  env: [
    {
      label: 'luacode',
      mode: 'common',
      name: $ => $.env_name_luacode,
      contents: $ => [repeat($._text_mode)]
    },
    {
      label: 'luacodestar',
      mode: 'text',
      name: $ => $.env_name_luacodestar,
      bare: true,
      contents: $ => [$.verbatim]
    }
  ]
}
