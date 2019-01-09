module.exports = {
  text: {
    commands: {
      mint: {
        cs: $ => $.cs_mint,
        local: true,
        parameters: $ => [
          optional($.brack_group),
          $._text_token,
          $.verb_delim,
          alias($.verb_body, $.verbatim),
          alias($.verb_end_delim, $.verb_delim)
        ]
      },
      mintinline: {
        cs: $ => $.cs_mintinline,
        local: true,
        parameters: $ => [
          optional($.brack_group),
          $._text_token,
          $.verb_delim,
          alias($.verb_body, $.verbatim),
          alias($.verb_end_delim, $.verb_delim)
        ]
      }
    },
    environments: {
      minted: {
        name: $ => $.env_name_minted,
        beginParameters: $ => [
          optional($.brack_group),
          optional($._text_token),
          $.eol
        ],
        contents: $ => [
          $.verbatim
        ],
        bare: true
      }
    }
  }
}
