module.exports = {
  common: {
    commands: {
      DeleteShortVerb: {
        cs: $ => $.cs_DeleteShortVerb,
        parameters: $ => [
          optional('*'),
          $._delete_verb_delim_parameter
        ]
      },
      MakeShortVerb: {
        cs: $ => $.cs_MakeShortVerb,
        parameters: $ => [
          optional('*'),
          $._make_verb_delim_parameter
        ]
      }
    },
    rules: {
      short_verb: $ => seq(
        alias($.short_verb_delim, $.verb_delim),
        alias($.verb_body, $.verbatim),
        alias($.verb_end_delim, $.verb_delim)
      )
    }
  }
}
