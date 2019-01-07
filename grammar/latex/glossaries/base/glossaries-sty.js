module.exports = {
  text: {
    commands: {
      longnewglossaryentry: {
        cs: $ => $.cs_longnewglossaryentry,
        parameters: $ => [
          $._parameter,
          $._parameter,
          $._parameter
        ]
      },
      newglossaryentry: {
        cs: $ => $.cs_newglossaryentry,
        parameters: $ => [
          $._parameter,
          $._parameter
        ]
      },
      gls: {
        cs: $ => $.cs_gls,
        parameters: $ => [
          optional($.brack_group),
          $._parameter,
          optional($.brack_group)
        ]
      },
      glsdisp: {
        cs: $ => $.cs_glsdisp,
        parameters: $ => [
          optional($.brack_group),
          $._parameter,
          $._parameter
        ]
      }
    }
  }
}
