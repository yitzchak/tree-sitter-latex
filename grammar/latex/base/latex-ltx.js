module.exports = {
  common: {
    commands: {
      endinput: {
        cs: $ => $.cs_endinput,
        parameters: $ => [alias($.ignored_rest, $.ignored)]
      },
      ensuremath: {
        cs: $ => $.cs_ensuremath,
        parameters: $ => [$._math_token]
      },
      label: {
        cs: $ => $.cs_label,
        parameters: $ => [
          // Base LaTeX doesn't actually allow an optional arguments, but
          // cleveref does. It's just easier to join the two definitions.
          optional($.brack_group),
          $._text_token
        ]
      },
      newcommand: {
        cs: $ => $.cs_newcommand,
        parameters: $ => [
          optional($.star),
          $._cs_parameter,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token
        ]
      },
      newenvironment: {
        cs: $ => $.cs_newenvironment,
        parameters: $ => [
          optional($.star),
          alias($.name_group, $.group),
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token,
          $._nil_token
        ]
      },
      ref: {
        cs: $ => $.cs_ref,
        parameters: $ => [
          // Base LaTeX doesn't actually allow a starred version, but hyperref
          // adds \ref* and \pageref*. This combined with the starred versions
          // of varioref makes just simpler to define one command.
          optional($.star),
          $._text_token
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
          $._text_token
        ],
        contents: $ => [repeat($._text_mode)]
      },
      tabularstar: {
        name: $ => $.env_name_tabularstar,
        beginParameters: $ => [
          $._text_token,
          optional($.brack_group),
          $._text_token
        ],
        contents: $ => [repeat($._text_mode)]
      }
    }
  },
  math: {
    commands: {
      frac: {
        cs: $ => $.cs_frac,
        parameters: $ => [
          $._math_token,
          $._math_token
        ]
      },
      mathaccent: {
        cs: $ => $.cs_mathaccent,
        parameters: $ => [
          $._math_token
        ]
      },
      mathstyle: {
        cs: $ => $.cs_mathstyle,
        parameters: $ => [
          $._math_token
        ]
      },
      multicolumn: {
        cs: $ => $.cs_multicolumn,
        parameters: $ => [
          $._math_token,
          $._math_token,
          $._math_token
        ]
      },
      stackrel: {
        cs: $ => $.cs_stackrel,
        parameters: $ => [
          $._math_token,
          $._math_token
        ]
      },
      sqrt: {
        cs: $ => $.cs_sqrt,
        parameters: $ => [
          optional(alias($.math_brack_group, $.brack_group)),
          $._math_token
        ]
      }
    },
    environments: {
      array: {
        name: $ => $.env_name_array,
        beginParameters: $ => [
          optional($.brack_group),
          $._text_token
        ]
      },
      math: {
        name: $ => $.env_name
      }
    }
  },
  text: {
    commands: {
      author: {
        cs: $ => $.cs_author,
        parameters: $ => [
          $._text_token
        ]
      },
      bibitem: {
        cs: $ => $.cs_bibitem,
        parameters: $ => [optional($.brack_group), $._text_token]
      },
      date: {
        cs: $ => $.cs_date,
        parameters: $ => [
          $._text_token
        ]
      },
      emph: {
        cs: $ => $.cs_emph,
        parameters: $ => [
          $._text_token
        ]
      },
      item: {
        cs: $ => $.cs_item,
        parameters: $ => [optional($.brack_group)]
      },
      makebox: {
        cs: $ => $.cs_makebox,
        parameters: $ => [
          optional($._dimension_brack_group),
          optional($.brack_group),
          $._text_token
        ]
      },
      marginpar: {
        cs: $ => $.cs_marginpar,
        parameters: $ => [optional($.brack_group), $._text_token]
      },
      mbox: {
        cs: $ => $.cs_mbox,
        parameters: $ => [
          $._text_token
        ]
      },
      multicolumn: {
        cs: $ => $.cs_multicolumn,
        parameters: $ => [
          $._text_token,
          $._text_token,
          $._text_token
        ]
      },
      newline: {
        cs: $ => $.cs_newline,
        parameters: $ => [optional($.star), optional($._glue_brack_parameter)]
      },
      newtheorem: {
        cs: $ => $.cs_newtheorem,
        local: true,
        parameters: $ => [
          optional($.star),
          $._text_token,
          choice(
            seq(
              $.brack_group,
              $._text_token
            ),
            seq(
              $._text_token,
              optional($.brack_group)
            )
          )
        ]
      },
      parbox: {
        cs: $ => $.cs_parbox,
        parameters: $ => [
          optional($.brack_group),
          optional($._dimension_brack_group),
          optional($.brack_group),
          $._dimension_parameter,
          $._text_token
        ]
      },
      // section is actually in the class file, but it's here in the core for
      // simplicity.
      section: {
        cs: $ => $.cs_section,
        parameters: $ => [
          optional(choice($.star, $.brack_group)),
          $._text_token
        ]
      },
      thanks: {
        cs: $ => $.cs_thanks,
        parameters: $ => [
          $._text_token
        ]
      },
      title: {
        cs: $ => $.cs_title,
        parameters: $ => [
          $._text_token
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
          $._text_token
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
        beginParameters: $ => [$._text_token]
      },
      theorem: {
        name: $ => $.env_name_theorem,
        beginParameters: $ => [optional($.brack_group)]
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
