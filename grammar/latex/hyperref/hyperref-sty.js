module.exports = {
  common: {
    commands: {
      href: {
        cs: $ => $.cs_href,
        parameters: $ => [
          optional($.brack_group),
          $._text_token_parameter,
          $._text_token_parameter
        ]
      },
      url: {
        cs: $ => $.cs_url,
        parameters: $ => [
          $._text_token_parameter
        ]
      },
      hyperbaseurl: {
        cs: $ => $.cs_hyperbaseurl,
        parameters: $ => [
          $._text_token_parameter
        ]
      },
      hyperimage: {
        cs: $ => $.cs_hyperimage,
        parameters: $ => [
          $._text_token_parameter,
          $._text_token_parameter
        ]
      },
      hyperref: {
        cs: $ => $.cs_hyperref,
        parameters: $ => [
          choice(
            seq(
              $._text_token_parameter,
              $._text_token_parameter,
              $._text_token_parameter,
              $._text_token_parameter
            ),
            seq(
              $.brack_group,
              $._text_token_parameter
            )
          )
        ]
      }
    }
  }
}
