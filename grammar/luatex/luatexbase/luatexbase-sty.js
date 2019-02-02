module.exports = {
  commands: {
    lua: {
      cs: $ => $.cs_lua,
      parameters: $ => [optional($._number), $._apply_token]
    }
  }
}
