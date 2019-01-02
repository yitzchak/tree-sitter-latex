module.exports = {
  common: {
    commands: {
      ensuremath: {
        cs: $ => $.cs_ensuremath,
        parameters: $ => [alias($.math_group, $.group)]
      },
      newcommand: {
        cs: $ => $.cs_newcommand,
        parameters: $ => [
          $._cs_parameter,
          optional('*'),
          optional($.brack_group),
          optional($.brack_group),
          $._nil_parameter
        ]
      },
      newenvironment: {
        cs: $ => $.cs_newenvironment,
        parameters: $ => [
          alias($.name_group, $.group),
          optional($.brack_group),
          optional($.brack_group),
          $._nil_parameter,
          $._nil_parameter
        ]
      },
      verb: {
        cs: $ => $.cs_verb,
        local: true,
        parameters: $ => [
          $.verb_delim,
          alias($.verb_body, $.verbatim),
          alias($.verb_end_delim, $.verb_delim)
        ]
      }
    }
  },
  math: {
    environments: {
      math: {
        name: $ => $.env_name,
        contents: $ => [repeat($._math_mode)]
      }
    }
  },
  text: {
    commands: {
      use_209: {
        cs: $ => $.cs_use_209,
        parameters: $ => [
          optional($.brack_group),
          alias($.name_group, $.group)
        ]
      },
      use: {
        cs: $ => $.cs_use,
        local: true,
        parameters: $ => [
          optional($.brack_group),
          alias($.name_group, $.group),
          $._cmd_apply,
          optional($.brack_group)
        ]
      }
    },
    environments: {
      display_math: {
        name: $ => $.env_name_display_math,
        contents: $ => [repeat($._math_mode)]
      },
      inline_math: {
        name: $ => $.env_name_inline_math,
        contents: $ => [repeat($._math_mode)]
      },
      text: {
        name: $ => $.env_name,
        contents: $ => [repeat($._text_mode)]
      }
    },
    rules: {
      latex_display_math: $ => seq(
        alias($.cs_display_math_begin, $.cs),
        repeat($._math_mode),
        choice(alias($.cs_display_math_end, $.cs), $.exit)
      ),
      latex_inline_math: $ => seq(
        alias($.cs_inline_math_begin, $.cs),
        repeat($._math_mode),
        choice(alias($.cs_inline_math_end, $.cs), $.exit)
      )
    }
  }
}
