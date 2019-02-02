module.exports = {
  environments: {
    filecontents: {
      name: $ => $.env_name_filecontents,
      bare: true,
      beginParameters: $ => [
        $._token,
        $.eol
      ],
      contents: $ => [$.verbatim]
    }
  }
}
