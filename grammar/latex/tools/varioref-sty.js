module.exports = {
  common: {
    commands: {
      refrange: {
        cs: $ => $.cs_refrange,
        parameters: $ => [optional($.star), $._parameter, $._parameter]
      }
    }
  }
}
