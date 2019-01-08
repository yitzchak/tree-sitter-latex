module.exports = {
  text: {
    environments: {
      filecontents: {
        name: $ => $.env_name_filecontents,
        bare: true,
        beginParameters: $ => [
          $._text_token_parameter,
          $.eol
        ],
        contents: $ => [$.verbatim]
      }
    }
  }
}
