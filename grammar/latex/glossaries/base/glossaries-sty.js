module.exports = {
  text: {
    commands: {
      longnewglossaryentry: {
        cs: $ => $.cs_longnewglossaryentry,
        parameters: $ => [
          $._parameter,
          $._parameter,
          $._parameter
        ]
      },
      newglossaryentry: {
        cs: $ => $.cs_newglossaryentry,
        parameters: $ => [
          $._parameter,
          $._parameter
        ]
      }
    }
  }
}
