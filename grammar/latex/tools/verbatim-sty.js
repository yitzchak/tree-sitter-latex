module.exports = {
  env: [
    {
      label: 'comment',
      mode: 'text',
      name: $ => $.env_name_comment,
      bare: true,
      endParameters: $ => [
        optional(alias($.ignored_line, $.ignored))
      ],
      contents: $ => [alias($.verbatim, $.comment_block)]
    },
    {
      label: 'verbatim',
      mode: 'text',
      name: $ => $.env_name_verbatim,
      bare: true,
      endParameters: $ => [
        optional(alias($.ignored_line, $.ignored))
      ],
      contents: $ => [$.verbatim]
    }
  ]
}
