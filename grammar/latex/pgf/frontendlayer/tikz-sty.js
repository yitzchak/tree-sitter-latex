module.exports = {
  common: {
    environments: {
      tikzpicture: {
        name: $ => $.env_name_tikzpicture,
        beginParameters: $ => [optional($.brack_group)]
      }
    }
  }
}
