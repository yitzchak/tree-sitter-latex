module.exports = {
  commands: {
    cite: {
      cs: $ => $.cs_cite,
      parameters: $ => [
        optional($.star),
        optional($.brack_group),
        optional($.brack_group),
        $._token
      ]
    },
    cites: {
      cs: $ => $.cs_cites,
      parameters: $ => [
        prec.right(-1,
          repeat1(
            seq(
              optional($.brack_group),
              optional($.brack_group),
              $._token
            )
          )
        )
      ]
    },
    nocite: {
      cs: $ => $.cs_nocite,
      parameters: $ => [$._token]
    },
    regexp: {
      cs: $ => $.cs_regexp,
      parameters: $ => [$._token]
    },
    volcite: {
      cs: $ => $.cs_volcite,
      parameters: $ => [
        optional($.star),
        optional($.brack_group),
        $._token,
        optional($.brack_group),
        $._token
      ]
    },
    volcites: {
      cs: $ => $.cs_volcites,
      parameters: $ => [
        prec.right(-1,
          repeat1(
            seq(
              optional($.brack_group),
              $._token,
              optional($.brack_group),
              $._token
            )
          )
        )
      ]
    }
  }
}
