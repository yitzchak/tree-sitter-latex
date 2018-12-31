module.exports = {
  cmd: [
    {
      label: 'DeleteShortVerb',
      mode: 'text',
      cs: $ => $.cs_DeleteShortVerb,
      parameters: $ => [
        optional('*'),
        $._delete_verb_delim_parameter
      ]
    },
    {
      label: 'MakeShortVerb',
      mode: 'text',
      cs: $ => $.cs_MakeShortVerb,
      parameters: $ => [
        optional('*'),
        $._make_verb_delim_parameter
      ]
    }
  ]
}
