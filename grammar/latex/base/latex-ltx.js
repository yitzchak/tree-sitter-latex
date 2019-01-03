module.exports = {
  common: {
    commands: {
      ensuremath: {
        cs: $ => $.cs_ensuremath,
        parameters: $ => [alias($.math_group, $.group)]
      },
      label: {
        cs: $ => $.cs_label,
        parameters: $ => [
          // Base LaTeX doesn't actually allow an optional arguments, but
          // cleveref does. It's just easier to join the two definitions.
          optional($.brack_group),
          $._parameter
        ]
      },
      newcommand: {
        cs: $ => $.cs_newcommand,
        parameters: $ => [
          optional('*'),
          $._cs_parameter,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_parameter
        ]
      },
      newenvironment: {
        cs: $ => $.cs_newenvironment,
        parameters: $ => [
          optional('*'),
          alias($.name_group, $.group),
          optional($.brack_group),
          optional($.brack_group),
          $._nil_parameter,
          $._nil_parameter
        ]
      },
      ref: {
        cs: $ => $.cs_ref,
        parameters: $ => [
          // Base LaTeX doesn't actually allow a starred version, but hyperref
          // adds \ref* and \pageref*. This combined with the starred versions
          // of varioref makes just simpler to define one command.
          optional('*'),
          $._parameter
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
    },
    environments: {
      tabular: {
        name: $ => $.env_name_tabular,
        beginParameters: $ => [
          optional($.brack_group),
          $._parameter
        ],
        contents: $ => [repeat($._text_mode)]
      },
      tabularstar: {
        name: $ => $.env_name_tabularstar,
        beginParameters: $ => [
          $._parameter,
          optional($.brack_group),
          $._parameter
        ],
        contents: $ => [repeat($._text_mode)]
      }
    }
  },
  math: {
    environments: {
      array: {
        name: $ => $.env_name_array,
        beginParameters: $ => [
          optional($.brack_group),
          $._parameter
        ]
      },
      math: {
        name: $ => $.env_name
      }
    }
  },
  text: {
    commands: {
      // section is actually in the class file, but it's here in the core for
      // simplicity.
      section: {
        cs: $ => $.cs_section,
        parameters: $ => [
          optional('*'),
          optional($.brack_group),
          $._parameter
        ]
      },
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
        name: $ => $.env_name
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
