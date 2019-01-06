module.exports = {
  text: {
    environments: {
      filecontents: {
        name: $ => $.env_name_filecontents,
        bare: true,
        beginParameters: $ => [
          $._parameter,
          $.eol
        ],
        contents: $ => [$.verbatim]
      }
    }
  }
}
