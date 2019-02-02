module.exports = {
  text: {
    commands: {
      refrange: {
        cs: $ => $.cs_refrange,
        parameters: $ => [optional($.star), $._token, $._token]
      }
    }
  }
}
