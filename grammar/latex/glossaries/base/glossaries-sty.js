module.exports = {
  text: {
    commands: {
      longnewglossaryentry: {
        cs: $ => $.cs_longnewglossaryentry,
        parameters: $ => [
          $._text_token,
          $._text_token,
          $._text_token
        ]
      },
      newglossaryentry: {
        cs: $ => $.cs_newglossaryentry,
        parameters: $ => [
          $._text_token,
          $._text_token
        ]
      },
      gls_acr: {
        cs: $ => $.cs_gls_acr,
        parameters: $ => [
          optional(choice($.star, $.plus_sym)),
          optional($.brack_group),
          $._text_token,
          optional($.brack_group)
        ]
      },
      glsdisp: {
        cs: $ => $.cs_glsdisp,
        parameters: $ => [
          optional($.brack_group),
          $._text_token,
          $._text_token
        ]
      },
      glsentry: {
        cs: $ => $.cs_glsentry,
        parameters: $ => [
          $._text_token
        ]
      },
      glssee: {
        cs: $ => $.cs_glssee,
        parameters: $ => [
          optional($.brack_group),
          $._text_token,
          $._text_token
        ]
      },
      newacronym: {
        cs: $ => $.cs_newacronym,
        parameters: $ => [
          optional($.brack_group),
          $._text_token,
          $._text_token,
          $._text_token
        ]
      }
    }
  }
}
