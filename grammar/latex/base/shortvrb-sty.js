module.exports = {
  cmd: [
    {
      label: 'DeleteShortVerb',
      text: true,
      word: $ => 'DeleteShortVerb',
      parameters: $ => [
        optional('*'),
        choice(
          alias($.delete_verb_delim, $.escaped),
          alias($.delete_verb_delim_group, $.group)
        )
      ]
    },
    {
      label: 'MakeShortVerb',
      text: true,
      word: $ => 'MakeShortVerb',
      parameters: $ => [
        optional('*'),
        choice(
          alias($.make_verb_delim, $.escaped),
          alias($.make_verb_delim_group, $.group)
        )
      ]
    }
  ]
}
