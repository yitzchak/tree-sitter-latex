module.exports = {
  text: {
    commands: {
      luacode: {
        cs: $ => $.cs_luacode,
        parameters: $ => [$._apply_token]
      }
    },
    environments: {
      luacode: {
        name: $ => $.env_name_luacode,
        contents: $ => [repeat($._expanded_tokens)]
      },
      luacodestar: {
        name: $ => $.env_name_luacodestar,
        bare: true,
        contents: $ => [$.verbatim]
      }
    }
  }
}
