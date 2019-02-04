module.exports = {
  common: {
    commands: {
      lua: {
        cs: $ => $.cs_lua,
        parameters: $ => [optional($._number), $._cmd_token]
      }
    }
  }
}
