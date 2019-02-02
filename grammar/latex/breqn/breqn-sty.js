module.exports = {
  text: {
    environments: {
      dmath: {
        name: $ => $.env_name_dmath,
        beginParameters: $ => [optional($.brack_group)]
      },
      dseries: {
        name: $ => $.env_name_dseries,
        beginParameters: $ => [optional($.brack_group)]
      }
    }
  }
}
