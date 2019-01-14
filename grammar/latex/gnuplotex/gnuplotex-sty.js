module.exports = {
  text: {
    environments: {
      gnuplot: {
        name: $ => $.env_name_gnuplot,
        bare: true,
        beginParameters: $ => [
          optional($.brack_group),
          $.eol
        ],
        contents: $ => [$.verbatim]
      }
    }
  }
}
