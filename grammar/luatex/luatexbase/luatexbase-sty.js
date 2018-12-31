module.exports = {
  cmd: [
    {
      label: 'lua',
      mode: 'common',
      local: true,
      cs: $ => $.cs_lua,
      parameters: $ => [optional($._number), $._apply_parameter]
    }
  ]
}
