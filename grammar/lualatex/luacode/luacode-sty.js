module.exports = {
  common: {
    commands: {
      luacode: {
        cs: $ => $.cs_luacode,
        parameters: $ => [$._token_apply]
      }
    },
    environments: {
      luacode: {
        name: $ => $.env_name_luacode,
        contents: $ => [repeat($._token_expanded)]
      },
      luacodestar: {
        name: $ => $.env_name_luacodestar,
        bare: true,
        contents: $ => [$.verbatim]
      }
    }
  }
}
