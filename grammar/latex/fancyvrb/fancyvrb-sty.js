module.exports = {
  env: [
    {
      label: 'Verbatim',
      mode: 'text',
      name: $ => $.env_name_Verbatim,
      bare: true,
      beginParameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [$.verbatim]
    }
  ]
}
