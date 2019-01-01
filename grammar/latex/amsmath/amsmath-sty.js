// AMS math environments that have the same form as base environments are not
// given separate definitions. This leaves alignat.

module.exports = {
  text: {
    environments: {
      alignat: {
        name: $ => $.env_name_alignat,
        beginParameters: $ => [$._parameter],
        contents: $ => [repeat($._math_mode)]
      }
    }
  },
  math: {
    commands: {
      tag: {
        cs: $ => $.cs_tag,
        parameters: $ => [$._parameter]
      }
    }
  }
}
