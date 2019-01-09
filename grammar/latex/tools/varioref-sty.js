module.exports = {
  common: {
    commands: {
      refrange: {
        cs: $ => $.cs_refrange,
        parameters: $ => [optional($.star), $._text_token, $._text_token]
      }
    }
  }
}
