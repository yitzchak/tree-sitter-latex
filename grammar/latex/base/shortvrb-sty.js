module.exports = {
  common: {
    commands: {
      DeleteShortVerb: {
        cs: $ => $.cs_DeleteShortVerb,
        parameters: $ => [
          optional($.star),
          $._delete_verb_delim_parameter
        ]
      },
      MakeShortVerb: {
        cs: $ => $.cs_MakeShortVerb,
        parameters: $ => [
          optional($.star),
          $._make_verb_delim_parameter
        ]
      }
    },
    rules: {
      short_verb: $ => seq(
        alias($.short_verb_delim, $.verb_delim),
        optional(alias($.verb_body, $.verbatim)),
        choice(
          alias($.verb_end_delim, $.verb_delim),
          $.exit
        )
      )
    }
  }
}
