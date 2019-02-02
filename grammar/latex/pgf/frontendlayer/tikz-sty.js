module.exports = {
  text: {
    environments: {
      tikzpicture: {
        name: $ => $.env_name_tikzpicture,
        beginParameters: $ => [optional($.brack_group)]
      }
    }
  }
}
