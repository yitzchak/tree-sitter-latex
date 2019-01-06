module.exports = {
  text: {
    commands: {
      cite: {
        cs: $ => $.cs_cite,
        parameters: $ => [
          optional($.star),
          optional($.brack_group),
          optional($.brack_group),
          $._parameter
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
                $._parameter
              )
            )
          )
        ]
      },
      nocite: {
        cs: $ => $.cs_nocite,
        parameters: $ => [$._parameter]
      },
      volcite: {
        cs: $ => $.cs_volcite,
        parameters: $ => [
          optional($.star),
          optional($.brack_group),
          $._parameter,
          optional($.brack_group),
          $._parameter
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
                $._parameter,
                optional($.brack_group),
                $._parameter
              )
            )
          )
        ]
      }
    }
  }
}
