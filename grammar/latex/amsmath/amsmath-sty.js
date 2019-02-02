// AMS math environments that have the same form as base environments are not
// given separate definitions. This leaves alignat.

module.exports = {
  text: {
    commands: {
      tag: {
        cs: $ => $.cs_tag,
        parameters: $ => [$._apply_token]
      },
      text_cmd: {
        cs: $ => $.cs_text,
        parameters: $ => [$._apply_token]
      }
    },
    environments: {
      alignat: {
        name: $ => $.env_name_alignat,
        beginParameters: $ => [$._token]
      }
    }
  }
}
