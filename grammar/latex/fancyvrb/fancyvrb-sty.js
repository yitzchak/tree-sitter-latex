module.exports = {
  environments: {
    Verbatim: {
      name: $ => $.env_name_Verbatim,
      bare: true,
      beginParameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [$.verbatim]
    }
  }
}
