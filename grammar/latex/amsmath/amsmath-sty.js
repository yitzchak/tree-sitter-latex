// AMS math environments that have the same form as base environments are not
// given separate definitions. This leaves alignat.

module.exports = {
  text: {
    environments: {
      alignat: {
        name: $ => $.env_name_alignat,
        beginParameters: $ => [$._text_token]
      }
    }
  },
  math: {
    commands: {
      tag: {
        cs: $ => $.cs_tag,
        parameters: $ => [$._text_token]
      },
      text_cmd: {
        cs: $ => $.cs_text,
        parameters: $ => [$._text_token]
      }
    }
  }
}
