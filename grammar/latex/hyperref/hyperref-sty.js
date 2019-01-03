module.exports = {
  common: {
    commands: {
      href: {
        cs: $ => $.cs_href,
        parameters: $ => [
          optional($.brack_group),
          $._parameter,
          $._parameter
        ]
      },
      url: {
        cs: $ => $.cs_url,
        parameters: $ => [
          $._parameter
        ]
      },
      hyperbaseurl: {
        cs: $ => $.cs_hyperbaseurl,
        parameters: $ => [
          $._parameter
        ]
      },
      hyperimage: {
        cs: $ => $.cs_hyperimage,
        parameters: $ => [
          $._parameter,
          $._parameter
        ]
      },
      hyperref: {
        cs: $ => $.cs_hyperref,
        parameters: $ => [
          $._parameter,
          $._parameter,
          $._parameter,
          $._parameter
        ]
      }
    }
  }
}
