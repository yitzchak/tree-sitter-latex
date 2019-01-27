module.exports = {
  text: {
    commands: {
      DoNotIndex: {
        cs: $ => $.cs_DoNotIndex,
        parameters: $ => [$._token_apply]
      }
    }
  }
}
