module.exports = {
  common: {
    commands: {
      ExplSyntaxOff: {
        cs: $ => $.cs_ExplSyntaxOff,
        apply: true
      },
      ExplSyntaxOn: {
        cs: $ => $.cs_ExplSyntaxOn,
        apply: true
      }
    }
  },
  text: {
    commands: {
      ProvidesExpl: {
        cs: $ => $.cs_ProvidesExpl,
        parameters: $ => [
          $._text_token,
          $._text_token,
          $._text_token,
          $._text_token
        ],
        apply: true
      }
    }
  }
}
