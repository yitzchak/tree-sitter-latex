module.exports = {
  env: [
    {
      label: 'filecontents',
      mode: 'text',
      name: $ => $.env_name_filecontents,
      bare: true,
      beginParameters: $ => [
        $._parameter,
        $.eol
      ],
      contents: $ => [$.verbatim]
    }
  ]
}
