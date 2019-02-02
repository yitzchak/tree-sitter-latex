module.exports = {
  commands: {
    longnewglossaryentry: {
      cs: $ => $.cs_longnewglossaryentry,
      parameters: $ => [
        $._token,
        $._token,
        $._token
      ]
    },
    newglossaryentry: {
      cs: $ => $.cs_newglossaryentry,
      parameters: $ => [
        $._token,
        $._token
      ]
    },
    gls_acr: {
      cs: $ => $.cs_gls_acr,
      parameters: $ => [
        optional(choice($.star, $.plus_sym)),
        optional($.brack_group),
        $._token,
        optional($.brack_group)
      ]
    },
    glsdisp: {
      cs: $ => $.cs_glsdisp,
      parameters: $ => [
        optional($.brack_group),
        $._token,
        $._token
      ]
    },
    glsentry: {
      cs: $ => $.cs_glsentry,
      parameters: $ => [
        $._token
      ]
    },
    glssee: {
      cs: $ => $.cs_glssee,
      parameters: $ => [
        optional($.brack_group),
        $._token,
        $._token
      ]
    },
    newacronym: {
      cs: $ => $.cs_newacronym,
      parameters: $ => [
        optional($.brack_group),
        $._token,
        $._token,
        $._token
      ]
    }
  }
}
