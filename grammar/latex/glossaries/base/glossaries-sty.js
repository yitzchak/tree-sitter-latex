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
      },
      gls_acr: {
        cs: $ => $.cs_gls_acr,
        parameters: $ => [
          optional(choice($.star, $.plus)),
          optional($.brack_group),
          $._parameter,
          optional($.brack_group)
        ]
      },
      glsdisp: {
        cs: $ => $.cs_glsdisp,
        parameters: $ => [
          optional($.brack_group),
          $._parameter,
          $._parameter
        ]
      },
      glsentry: {
        cs: $ => $.cs_glsentry,
        parameters: $ => [
          $._parameter
        ]
      },
      glssee: {
        cs: $ => $.cs_glssee,
        parameters: $ => [
          optional($.brack_group),
          $._parameter,
          $._parameter
        ]
      },
      newacronym: {
        cs: $ => $.cs_newacronym,
        parameters: $ => [
          optional($.brack_group),
          $._parameter,
          $._parameter,
          $._parameter
        ]
      }
    }
  }
}
