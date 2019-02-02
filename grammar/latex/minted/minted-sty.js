module.exports = {
  commands: {
    mint: {
      cs: $ => $.cs_mint,
      parameters: $ => [
        optional($.brack_group),
        $._token,
        $.verb_delim,
        optional(alias($.verb_body, $.verbatim)),
        choice(
          alias($.verb_end_delim, $.verb_delim),
          $.exit
        )
      ]
    },
    mintinline: {
      cs: $ => $.cs_mintinline,
      parameters: $ => [
        optional($.brack_group),
        $._token,
        $.verb_delim,
        optional(alias($.verb_body, $.verbatim)),
        choice(
          alias($.verb_end_delim, $.verb_delim),
          $.exit
        )
      ]
    }
  },
  environments: {
    minted: {
      name: $ => $.env_name_minted,
      beginParameters: $ => [
        optional($.brack_group),
        optional($._token),
        $.eol
      ],
      contents: $ => [
        $.verbatim
      ],
      bare: true
    }
  }
}
