module.exports = {
  text: {
    commands: {
      cite: {
        cs: $ => $.cs_cite,
        parameters: $ => [
          optional($.star),
          optional($.brack_group),
          optional($.brack_group),
          $._text_token_parameter
        ]
      },
      cites: {
        cs: $ => $.cs_cites,
        local: true,
        parameters: $ => [
          prec.right(-1,
            repeat1(
              seq(
                optional($.brack_group),
                optional($.brack_group),
                $._text_token_parameter
              )
            )
          )
        ]
      },
      nocite: {
        cs: $ => $.cs_nocite,
        parameters: $ => [$._text_token_parameter]
      },
      volcite: {
        cs: $ => $.cs_volcite,
        parameters: $ => [
          optional($.star),
          optional($.brack_group),
          $._text_token_parameter,
          optional($.brack_group),
          $._text_token_parameter
        ]
      },
      volcites: {
        cs: $ => $.cs_volcites,
        local: true,
        parameters: $ => [
          prec.right(-1,
            repeat1(
              seq(
                optional($.brack_group),
                $._text_token_parameter,
                optional($.brack_group),
                $._text_token_parameter
              )
            )
          )
        ]
      }
    }
  }
}
