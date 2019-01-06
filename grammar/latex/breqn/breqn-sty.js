module.exports = {
  text: {
    environments: {
      dmath: {
        name: $ => $.env_name_dmath,
        beginParameters: $ => [optional($.brack_group), $.eol],
        contents: $ => [repeat($._math_mode)]
      },
      dseries: {
        name: $ => $.env_name_dseries,
        beginParameters: $ => [optional($.brack_group), $.eol],
        contents: $ => [repeat($._text_mode)]
      }
    }
  }
}
