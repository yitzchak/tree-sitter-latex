module.exports = {
  common: {
    commands: {
      refrange: {
        cs: $ => $.cs_refrange,
        parameters: $ => [optional($.star), $._text_token_parameter, $._text_token_parameter]
      }
    }
  }
}
