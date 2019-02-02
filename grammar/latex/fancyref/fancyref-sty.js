module.exports = {
  commands: {
    fref: {
      cs: $ => $.cs_fref,
      parameters: $ => [
        optional($.brack_group),
        $._token
      ]
    }
  }
}
