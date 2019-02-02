module.exports = {
  commands: {
    ExplSyntaxOff: {
      cs: $ => $.cs_ExplSyntaxOff,
      apply: true
    },
    ExplSyntaxOn: {
      cs: $ => $.cs_ExplSyntaxOn,
      apply: true
    },
    ProvidesExpl: {
      cs: $ => $.cs_ProvidesExpl,
      parameters: $ => [
        $._token,
        $._token,
        $._token,
        $._token
      ],
      apply: true
    }
  }
}
