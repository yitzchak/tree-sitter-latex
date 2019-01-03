module.exports = {
  common: {
    commands: {
      refrange: {
        cs: $ => $.cs_refrange,
        parameters: $ => [optional('*'), $._parameter, $._parameter]
      }
    }
  }
}
