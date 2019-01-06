module.exports = {
  common: {
    commands: {
      lua: {
        local: true,
        cs: $ => $.cs_lua,
        parameters: $ => [optional($._number), $._apply_parameter]
      }
    }
  }
}
