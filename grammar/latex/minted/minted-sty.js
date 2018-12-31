module.exports = {
  cmd: [{
    label: 'mint',
    cs: $ => $.cs_mint,
    mode: 'text',
    local: true,
    parameters: $ => [
      optional($.brack_group),
      $.group,
      $.verb_delim,
      alias($.verb_body, $.verbatim),
      alias($.verb_end_delim, $.verb_delim)
    ]
  }, {
    label: 'mintinline',
    cs: $ => $.cs_mintinline,
    mode: 'text',
    local: true,
    parameters: $ => [
      optional($.brack_group),
      $.group,
      $.verb_delim,
      alias($.verb_body, $.verbatim),
      alias($.verb_end_delim, $.verb_delim)
    ]
  }],
  env: [{
    label: 'minted',
    mode: 'text',
    name: $ => $.env_name_minted,
    parameters: $ => [
      optional($.brack_group),
      optional($._parameter),
      $.eol
    ],
    contents: $ => [
      $.verbatim
    ],
    bare: true
  }]
}
