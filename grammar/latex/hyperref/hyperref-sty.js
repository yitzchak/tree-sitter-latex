module.exports = {
  common: {
    commands: {
      href: {
        cs: $ => $.cs_href,
        parameters: $ => [
          optional($.brack_group),
          $._text_token,
          $._text_token
        ]
      },
      url: {
        cs: $ => $.cs_url,
        parameters: $ => [
          $._text_token
        ]
      },
      hyperbaseurl: {
        cs: $ => $.cs_hyperbaseurl,
        parameters: $ => [
          $._text_token
        ]
      },
      hyperimage: {
        cs: $ => $.cs_hyperimage,
        parameters: $ => [
          $._text_token,
          $._text_token
        ]
      },
      hyperref: {
        cs: $ => $.cs_hyperref,
        parameters: $ => [
          choice(
            seq(
              $._text_token,
              $._text_token,
              $._text_token,
              $._text_token
            ),
            seq(
              $.brack_group,
              $._text_token
            )
          )
        ]
      }
    }
  }
}
