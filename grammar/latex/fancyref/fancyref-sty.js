module.exports = {
  common: {
    commands: {
      fref: {
        cs: $ => $.cs_fref,
        parameters: $ => [
          optional($.brack_group),
          $._parameter
        ]
      }
    }
  }
}
