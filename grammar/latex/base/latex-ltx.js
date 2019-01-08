module.exports = {
  common: {
    commands: {
      endinput: {
        cs: $ => $.cs_endinput,
        parameters: $ => [alias($.ignored_rest, $.ignored)]
      },
      ensuremath: {
        cs: $ => $.cs_ensuremath,
        parameters: $ => [$._math_token_parameter]
      },
      label: {
        cs: $ => $.cs_label,
        parameters: $ => [
          // Base LaTeX doesn't actually allow an optional arguments, but
          // cleveref does. It's just easier to join the two definitions.
          optional($.brack_group),
          $._text_token_parameter
        ]
      },
      newcommand: {
        cs: $ => $.cs_newcommand,
        parameters: $ => [
          optional($.star),
          $._cs_parameter,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token_parameter
        ]
      },
      newenvironment: {
        cs: $ => $.cs_newenvironment,
        parameters: $ => [
          optional($.star),
          alias($.name_group, $.group),
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token_parameter,
          $._nil_token_parameter
        ]
      },
      ref: {
        cs: $ => $.cs_ref,
        parameters: $ => [
          // Base LaTeX doesn't actually allow a starred version, but hyperref
          // adds \ref* and \pageref*. This combined with the starred versions
          // of varioref makes just simpler to define one command.
          optional($.star),
          $._text_token_parameter
        ]
      },
      setlength: {
        cs: $ => $.cs_setlength,
        parameters: $ => [
          $._cs_parameter,
          $._glue_parameter
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
          $._text_token_parameter
        ],
        contents: $ => [repeat($._text_mode)]
      },
      tabularstar: {
        name: $ => $.env_name_tabularstar,
        beginParameters: $ => [
          $._text_token_parameter,
          optional($.brack_group),
          $._text_token_parameter
        ],
        contents: $ => [repeat($._text_mode)]
      }
    }
  },
  math: {
    commands: {
      mathstyle: {
        cs: $ => $.cs_mathstyle,
        parameters: $ => [
          $._math_token_parameter
        ]
      }
    },
    environments: {
      array: {
        name: $ => $.env_name_array,
        beginParameters: $ => [
          optional($.brack_group),
          $._text_token_parameter
        ]
      },
      math: {
        name: $ => $.env_name
      }
    }
  },
  text: {
    commands: {
      bibitem: {
        cs: $ => $.cs_bibitem,
        parameters: $ => [optional($.brack_group), $._text_token_parameter]
      },
      emph: {
        cs: $ => $.cs_emph,
        parameters: $ => [
          $._text_token_parameter
        ]
      },
      item: {
        cs: $ => $.cs_item,
        parameters: $ => [optional($.brack_group)]
      },
      newline: {
        cs: $ => $.cs_newline,
        parameters: $ => [optional($.star), optional($._glue_brack_parameter)]
      },
      // section is actually in the class file, but it's here in the core for
      // simplicity.
      section: {
        cs: $ => $.cs_section,
        parameters: $ => [
          optional(choice($.star, $.brack_group)),
          $._text_token_parameter
        ]
      },
      use_209: {
        cs: $ => $.cs_use_209,
        parameters: $ => [
          optional($.brack_group),
          alias($.names_group, $.group)
        ]
      },
      textstyle: {
        cs: $ => $.cs_textstyle,
        parameters: $ => [
          $._text_token_parameter
        ]
      },
      use: {
        cs: $ => $.cs_use,
        parameters: $ => [
          optional($.brack_group),
          alias($.names_group, $.group),
          optional($.brack_group)
        ]
      }
    },
    environments: {
      display_math: {
        name: $ => $.env_name_display_math,
        contents: $ => [repeat($._math_mode)]
      },
      document: {
        name: $ => $.env_name_document,
        endParameters: $ => [alias($.ignored_rest, $.ignored)]
      },
      figure: {
        name: $ => $.env_name_figure,
        beginParameters: $ => [optional($.brack_group)]
      },
      inline_math: {
        name: $ => $.env_name_inline_math,
        contents: $ => [repeat($._math_mode)]
      },
      minipage: {
        name: $ => $.env_name_minipage,
        beginParameters: $ => [
          optional($.brack_group),
          optional(alias($.dimension_brack_group, $.brack_group)),
          optional($.brack_group),
          $._dimension_parameter
        ]
      },
      picture: {
        name: $ => $.env_name_picture,
        beginParameters: $ => [
          alias($.fixed_pair, $.paren_group),
          optional(alias($.fixed_pair, $.paren_group))
        ]
      },
      table: {
        name: $ => $.env_name_table,
        beginParameters: $ => [optional($.brack_group)]
      },
      text: {
        name: $ => $.env_name
      },
      thebibliography: {
        name: $ => $.env_name_thebibliography,
        beginParameters: $ => [$._text_token_parameter]
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
