module.exports = {
  text: {
    commands: {
      longnewglossaryentry: {
        cs: $ => $.cs_longnewglossaryentry,
        parameters: $ => [
          $._text_token_parameter,
          $._text_token_parameter,
          $._text_token_parameter
        ]
      },
      newglossaryentry: {
        cs: $ => $.cs_newglossaryentry,
        parameters: $ => [
          $._text_token_parameter,
          $._text_token_parameter
        ]
      },
      gls_acr: {
        cs: $ => $.cs_gls_acr,
        parameters: $ => [
          optional(choice($.star, $.plus_sym)),
          optional($.brack_group),
          $._text_token_parameter,
          optional($.brack_group)
        ]
      },
      glsdisp: {
        cs: $ => $.cs_glsdisp,
        parameters: $ => [
          optional($.brack_group),
          $._text_token_parameter,
          $._text_token_parameter
        ]
      },
      glsentry: {
        cs: $ => $.cs_glsentry,
        parameters: $ => [
          $._text_token_parameter
        ]
      },
      glssee: {
        cs: $ => $.cs_glssee,
        parameters: $ => [
          optional($.brack_group),
          $._text_token_parameter,
          $._text_token_parameter
        ]
      },
      newacronym: {
        cs: $ => $.cs_newacronym,
        parameters: $ => [
          optional($.brack_group),
          $._text_token_parameter,
          $._text_token_parameter,
          $._text_token_parameter
        ]
      }
    }
  }
}
