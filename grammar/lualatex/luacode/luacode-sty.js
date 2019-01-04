module.exports = {
  common: {
    commands: {
      luacode: {
        local: true,
        cs: $ => $.cs_luacode,
        parameters: $ => [$._apply_parameter]
      }
    },
    environments: {
      luacode: {
        name: $ => $.env_name_luacode,
        contents: $ => [repeat($._text_mode)]
      },
      luacodestar: {
        name: $ => $.env_name_luacodestar,
        bare: true,
        contents: $ => [$.verbatim]
      }
    }
  }
}
