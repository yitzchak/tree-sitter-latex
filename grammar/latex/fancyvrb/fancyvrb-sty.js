module.exports = {
  cmd: [
    {
      label: 'DefineShortVerb',
      text: true,
      word: $ => 'DefineShortVerb',
      parameters: $ => [
        optional('*'),
        choice(
          alias($.delete_verb_delim, $.escaped),
          alias($.delete_verb_delim_group, $.group)
        )
      ]
    },
    {
      label: 'UndefineShortVerb',
      text: true,
      word: $ => 'UndefineShortVerb',
      parameters: $ => [
        optional('*'),
        choice(
          alias($.make_verb_delim, $.escaped),
          alias($.make_verb_delim_group, $.group)
        )
      ]
    }
  ],
  env: [
    {
      label: 'BVerbatim',
      text: true,
      name: $ => 'BVerbatim',
      parameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [
        alias($.BVerbatim_body, $.text)
      ]
    },
    {
      label: 'BVerbatimstar',
      text: true,
      name: $ => 'BVerbatim*',
      parameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [
        alias($.BVerbatimstar_body, $.text)
      ]
    },
    {
      label: 'LVerbatim',
      text: true,
      name: $ => 'LVerbatim',
      parameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [
        alias($.LVerbatim_body, $.text)
      ]
    },
    {
      label: 'LVerbatimstar',
      text: true,
      name: $ => 'LVerbatim*',
      parameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [
        alias($.LVerbatimstar_body, $.text)
      ]
    },
    {
      label: 'Verbatim',
      text: true,
      name: $ => 'Verbatim',
      parameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [
        alias($.Verbatim_body, $.text)
      ]
    },
    {
      label: 'Verbatimstar',
      text: true,
      name: $ => 'Verbatim*',
      parameters: $ => [
        optional($.brack_group),
        $.eol
      ],
      contents: $ => [
        alias($.Verbatimstar_body, $.text)
      ]
    }
  ]
}
