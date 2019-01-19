module.exports = {
  common: {
    commands: {
      addvspace: {
        cs: $ => $.cs_addvspace,
        parameters: $ => [
          $._glue_parameter
        ]
      },
      CheckCommand: {
        cs: $ => $.cs_CheckCommand,
        parameters: $ => [
          optional($.star),
          $._cs_parameter,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token
        ]
      },
      cline: {
        cs: $ => $.cs_cline,
        parameters: $ => [$._text_token]
      },
      endinput: {
        cs: $ => $.cs_endinput,
        parameters: $ => [alias($.ignored_rest, $.ignored)]
      },
      ensuremath: {
        cs: $ => $.cs_ensuremath,
        parameters: $ => [$._math_token]
      },
      Error: {
        cs: $ => $.cs_Error,
        parameters: $ => [
          $._text_token,
          $._text_token,
          $._text_token
        ]
      },
      IfFileExists: {
        cs: $ => $.cs_IfFileExists,
        parameters: $ => [
          $._text_token,
          $._text_token,
          $._text_token
        ]
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
      newcounter: {
        cs: $ => $.cs_newcounter,
        parameters: $ => [
          $._text_token,
          optional($.brack_group)
        ]
      },
      newenvironment: {
        cs: $ => $.cs_newenvironment,
        parameters: $ => [
          optional($.star),
          $._name_group,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token,
          $._nil_token
        ]
      },
      newfont: {
        cs: $ => $.cs_newfont,
        parameters: $ => [
          $._cs_parameter,
          $._text_token
        ]
      },
      newlength: {
        cs: $ => $.cs_newlength,
        parameters: $ => [
          $._cs_parameter
        ]
      },
      newsavebox: {
        cs: $ => $.cs_newsavebox,
        parameters: $ => [
          $._cs_parameter
        ]
      },
      printcounter: {
        cs: $ => $.cs_printcounter,
        parameters: $ => [$._text_token]
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
      setcounter: {
        cs: $ => $.cs_setcounter,
        parameters: $ => [$._text_token, $._text_token]
      },
      setlength: {
        cs: $ => $.cs_setlength,
        parameters: $ => [
          $._cs_parameter,
          $._glue_parameter
        ]
      },
      space: {
        cs: $ => $.cs_space,
        parameters: $ => [
          optional($.star),
          $._glue_parameter
        ]
      },
      setto: {
        cs: $ => $.cs_setto,
        parameters: $ => [
          $._cs_parameter,
          $._text_token
        ]
      },
      stepcounter: {
        cs: $ => $.cs_stepcounter,
        parameters: $ => [$._text_token]
      },
      value: {
        cs: $ => $.cs_value,
        parameters: $ => [$._text_token]
      },
      verb: {
        cs: $ => $.cs_verb,
        local: true,
        parameters: $ => [
          optional($.star),
          $.verb_delim,
          optional(alias($.verb_body, $.verbatim)),
          choice(
            alias($.verb_end_delim, $.verb_delim),
            $.exit
          )
        ]
      },
      WarningInfo: {
        cs: $ => $.cs_WarningInfo,
        parameters: $ => [
          $._text_token,
          $._text_token
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
      protect: {
        cs: $ => $.cs_protect,
        parameters: $ => [$._math_expanded_parameter]
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
      at_ifpackagelater: {
        cs: $ => $.cs_at_ifpackagelater,
        parameters: $ => [
          $._text_token,
          $._text_token,
          $._nil_token,
          $._nil_token
        ]
      },
      At: {
        cs: $ => $.cs_At,
        parameters: $ => [$._text_token]
      },
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
      DeclareOption: {
        cs: $ => $.cs_DeclareOption,
        parameters: $ => [
          choice($.star, $._text_token),
          $._text_token
        ]
      },
      date: {
        cs: $ => $.cs_date,
        parameters: $ => [
          $._text_token
        ]
      },
      discretionary: {
        cs: $ => $.cs_discretionary,
        parameters: $ => [$._text_token, $._text_token, $._text_token]
      },
      emph: {
        cs: $ => $.cs_emph,
        parameters: $ => [
          $._text_token
        ]
      },
      enlargethispage: {
        cs: $ => $.cs_enlargethispage,
        parameters: $ => [
          optional($.star),
          $._dimension_parameter
        ]
      },
      footnote: {
        cs: $ => $.cs_footnote,
        parameters: $ => [
          optional($.brack_group),
          $._text_token
        ]
      },
      footnotemark: {
        cs: $ => $.cs_footnotemark,
        parameters: $ => [
          optional($.brack_group)
        ]
      },
      ExecuteOptions: {
        cs: $ => $.cs_ExecuteOptions,
        parameters: $ => [
          $._text_token
        ]
      },
      hyphenation: {
        cs: $ => $.cs_hyphenation,
        parameters: $ => [$._text_token]
      },
      item: {
        cs: $ => $.cs_item,
        parameters: $ => [optional($.brack_group)]
      },
      linebreak: {
        cs: $ => $.cs_linebreak,
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
      NeedsTeXFormat: {
        cs: $ => $.cs_NeedsTeXFormat,
        parameters: $ => [
          $._text_token,
          optional($.brack_group)
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
      pagebreak: {
        cs: $ => $.cs_pagebreak,
        parameters: $ => [optional($.brack_group)]
      },
      pagenumbering: {
        cs: $ => $.cs_pagenumbering,
        parameters: $ => [$._text_token]
      },
      pagestyle: {
        cs: $ => $.cs_pagestyle,
        parameters: $ => [$._text_token]
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
      PassOptionsTo: {
        cs: $ => $.cs_PassOptionsTo,
        parameters: $ => [
          $._text_token,
          $._name_group
        ]
      },
      ProcessOptions: {
        cs: $ => $.cs_ProcessOptions,
        parameters: $ => [
          optional($.star)
        ]
      },
      protect: {
        cs: $ => $.cs_protect,
        parameters: $ => [$._text_expanded_parameter]
      },
      Provides: {
        cs: $ => $.cs_Provides,
        parameters: $ => [
          $._name_parameter,
          optional($.brack_group)
        ]
      },
      raisebox: {
        cs: $ => $.cs_raisebox,
        parameters: $ => [
          optional($._dimension_brack_group),
          optional($._dimension_brack_group),
          $._dimension_parameter,
          $._text_token
        ]
      },
      savebox: {
        cs: $ => $.cs_savebox,
        parameters: $ => [
          $._cs_parameter,
          optional($._dimension_brack_group),
          optional($.brack_group),
          $._text_token
        ]
      },
      sbox: {
        cs: $ => $.cs_sbox,
        parameters: $ => [
          $._cs_parameter,
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
      },
      usebox: {
        cs: $ => $.cs_usebox,
        parameters: $ => [$._cs_parameter]
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
      itemize: {
        name: $ => $.env_name_itemize,
        // enumitem allows an optional parameter
        beginParameters: $ => [optional($.brack_group)]
      },
      lrbox: {
        name: $ => $.env_name_lrbox,
        beginParameters: $ => [$._cs_parameter]
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
