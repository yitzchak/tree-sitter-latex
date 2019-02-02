module.exports = {
  text: {
    commands: {
      addvspace: {
        cs: $ => $.cs_addvspace,
        parameters: $ => [
          $._glue_token
        ]
      },
      CheckCommand: {
        cs: $ => $.cs_CheckCommand,
        parameters: $ => [
          optional($.star),
          $._cs_token,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token
        ]
      },
      cline: {
        cs: $ => $.cs_cline,
        parameters: $ => [$._token]
      },
      endinput: {
        cs: $ => $.cs_endinput,
        parameters: $ => [alias($.ignored_rest, $.ignored)]
      },
      ensuremath: {
        cs: $ => $.cs_ensuremath,
        parameters: $ => [$._apply_token]
      },
      Error: {
        cs: $ => $.cs_Error,
        parameters: $ => [
          $._token,
          $._token,
          $._token
        ]
      },
      IfFileExists: {
        cs: $ => $.cs_IfFileExists,
        parameters: $ => [
          $._token,
          $._token,
          $._token
        ]
      },
      label: {
        cs: $ => $.cs_label,
        parameters: $ => [
          // Base LaTeX doesn't actually allow an optional arguments, but
          // cleveref does. It's just easier to join the two definitions.
          optional($.brack_group),
          $._token
        ]
      },
      makeatletter: {
        cs: $ => $.cs_makeatletter,
        apply: true
      },
      makeatother: {
        cs: $ => $.cs_makeatother,
        apply: true
      },
      makebox: {
        cs: $ => $.cs_makebox,
        parameters: $ => [
          optional(
            seq(
              $._dimension_brack_group,
              optional($.brack_group)
            )
          ),
          $._token
        ]
      },
      newcommand: {
        cs: $ => $.cs_newcommand,
        parameters: $ => [
          optional($.star),
          $._cs_token,
          optional($.brack_group),
          optional($.brack_group),
          $._nil_token
        ]
      },
      newcounter: {
        cs: $ => $.cs_newcounter,
        parameters: $ => [
          $._token,
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
          $._cs_token,
          $._token
        ]
      },
      newlength: {
        cs: $ => $.cs_newlength,
        parameters: $ => [
          $._cs_token
        ]
      },
      newsavebox: {
        cs: $ => $.cs_newsavebox,
        parameters: $ => [
          $._cs_token
        ]
      },
      printcounter: {
        cs: $ => $.cs_printcounter,
        parameters: $ => [$._token]
      },
      ref: {
        cs: $ => $.cs_ref,
        parameters: $ => [
          // Base LaTeX doesn't actually allow a starred version, but hyperref
          // adds \ref* and \pageref*. This combined with the starred versions
          // of varioref makes just simpler to define one command.
          optional($.star),
          $._token
        ]
      },
      setcounter: {
        cs: $ => $.cs_setcounter,
        parameters: $ => [$._token, $._token]
      },
      setlength: {
        cs: $ => $.cs_setlength,
        parameters: $ => [
          $._cs_token,
          $._glue_token
        ]
      },
      space: {
        cs: $ => $.cs_space,
        parameters: $ => [
          optional($.star),
          $._glue_token
        ]
      },
      setto: {
        cs: $ => $.cs_setto,
        parameters: $ => [
          $._cs_token,
          $._token
        ]
      },
      stepcounter: {
        cs: $ => $.cs_stepcounter,
        parameters: $ => [$._token]
      },
      value: {
        cs: $ => $.cs_value,
        parameters: $ => [$._token]
      },
      verb: {
        cs: $ => $.cs_verb,
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
          $._token,
          $._token
        ]
      },
      at_ifpackagelater: {
        cs: $ => $.cs_at_ifpackagelater,
        parameters: $ => [
          $._token,
          $._token,
          $._nil_token,
          $._nil_token
        ]
      },
      At: {
        cs: $ => $.cs_At,
        parameters: $ => [$._token]
      },
      author: {
        cs: $ => $.cs_author,
        parameters: $ => [
          $._token
        ]
      },
      bibitem: {
        cs: $ => $.cs_bibitem,
        parameters: $ => [optional($.brack_group), $._token]
      },
      DeclareOption: {
        cs: $ => $.cs_DeclareOption,
        parameters: $ => [
          choice($.star, $._token),
          $._token
        ]
      },
      date: {
        cs: $ => $.cs_date,
        parameters: $ => [
          $._token
        ]
      },
      discretionary: {
        cs: $ => $.cs_discretionary,
        parameters: $ => [$._token, $._token, $._token]
      },
      emph: {
        cs: $ => $.cs_emph,
        parameters: $ => [
          $._token
        ]
      },
      enlargethispage: {
        cs: $ => $.cs_enlargethispage,
        parameters: $ => [
          optional($.star),
          $._dimension_token
        ]
      },
      footnote: {
        cs: $ => $.cs_footnote,
        parameters: $ => [
          optional($.brack_group),
          $._token
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
          $._token
        ]
      },
      frac: {
        cs: $ => $.cs_frac,
        parameters: $ => [
          $._token,
          $._token
        ]
      },
      mathaccent: {
        cs: $ => $.cs_mathaccent,
        parameters: $ => [
          $._token
        ]
      },
      mathstyle: {
        cs: $ => $.cs_mathstyle,
        parameters: $ => [
          $._token
        ]
      },
      hyphenation: {
        cs: $ => $.cs_hyphenation,
        parameters: $ => [$._token]
      },
      item: {
        cs: $ => $.cs_item,
        parameters: $ => [optional($.brack_group)]
      },
      linebreak: {
        cs: $ => $.cs_linebreak,
        parameters: $ => [optional($.brack_group)]
      },
      marginpar: {
        cs: $ => $.cs_marginpar,
        parameters: $ => [optional($.brack_group), $._token]
      },
      mbox: {
        cs: $ => $.cs_mbox,
        parameters: $ => [
          $._token
        ]
      },
      multicolumn: {
        cs: $ => $.cs_multicolumn,
        parameters: $ => [
          $._token,
          $._token,
          $._token
        ]
      },
      NeedsTeXFormat: {
        cs: $ => $.cs_NeedsTeXFormat,
        parameters: $ => [
          $._token,
          optional($.brack_group)
        ]
      },
      newline: {
        cs: $ => $.cs_newline,
        parameters: $ => [optional($.star), optional($._glue_brack_group)]
      },
      newtheorem: {
        cs: $ => $.cs_newtheorem,
        parameters: $ => [
          optional($.star),
          $._token,
          choice(
            seq(
              $.brack_group,
              $._token
            ),
            seq(
              $._token,
              optional($.brack_group)
            )
          )
        ]
      },
      obeycr: {
        cs: $ => $.cs_obeycr,
        apply: true
      },
      pagebreak: {
        cs: $ => $.cs_pagebreak,
        parameters: $ => [optional($.brack_group)]
      },
      pagenumbering: {
        cs: $ => $.cs_pagenumbering,
        parameters: $ => [$._token]
      },
      pagestyle: {
        cs: $ => $.cs_pagestyle,
        parameters: $ => [$._token]
      },
      parbox: {
        cs: $ => $.cs_parbox,
        parameters: $ => [
          optional(
            seq(
              $.brack_group,
              optional(
                seq(
                  $._dimension_brack_group,
                  optional($.brack_group)
                )
              )
            )
          ),
          $._dimension_token,
          $._token
        ]
      },
      PassOptionsTo: {
        cs: $ => $.cs_PassOptionsTo,
        parameters: $ => [
          $._token,
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
        parameters: $ => [$._expanded_token]
      },
      Provides: {
        cs: $ => $.cs_Provides,
        parameters: $ => [
          $._name_token,
          optional($.brack_group)
        ],
        apply: true
      },
      raisebox: {
        cs: $ => $.cs_raisebox,
        parameters: $ => [
          optional($._dimension_brack_group),
          optional($._dimension_brack_group),
          $._dimension_token,
          $._token
        ]
      },
      restorecr: {
        cs: $ => $.cs_restorecr,
        apply: true
      },
      savebox: {
        cs: $ => $.cs_savebox,
        parameters: $ => [
          $._cs_token,
          optional(
            seq(
              $._dimension_brack_group,
              optional($.brack_group)
            )
          ),
          $._token
        ]
      },
      sbox: {
        cs: $ => $.cs_sbox,
        parameters: $ => [
          $._cs_token,
          $._token
        ]
      },
      // section is actually in the class file, but it's here in the core for
      // simplicity.
      section: {
        cs: $ => $.cs_section,
        parameters: $ => [
          optional(choice($.star, $.brack_group)),
          $._token
        ]
      },
      stackrel: {
        cs: $ => $.cs_stackrel,
        parameters: $ => [
          $._token,
          $._token
        ]
      },
      sqrt: {
        cs: $ => $.cs_sqrt,
        parameters: $ => [
          optional($.brack_group),
          $._token
        ]
      },
      thanks: {
        cs: $ => $.cs_thanks,
        parameters: $ => [
          $._token
        ]
      },
      title: {
        cs: $ => $.cs_title,
        parameters: $ => [
          $._token
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
          $._token
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
        parameters: $ => [$._cs_token]
      }
    },
    environments: {
      array: {
        name: $ => $.env_name_array,
        beginParameters: $ => [
          optional($.brack_group),
          $._token
        ]
      },
      display_math: {
        name: $ => $.env_name_display_math
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
        name: $ => $.env_name_inline_math
      },
      itemize: {
        name: $ => $.env_name_itemize,
        // enumitem allows an optional parameter
        beginParameters: $ => [optional($.brack_group)]
      },
      lrbox: {
        name: $ => $.env_name_lrbox,
        beginParameters: $ => [$._cs_token]
      },
      minipage: {
        name: $ => $.env_name_minipage,
        beginParameters: $ => [
          optional(
            seq(
              $.brack_group,
              optional(
                seq(
                  alias($.dimension_brack_group, $.brack_group),
                  optional($.brack_group)
                )
              )
            )
          ),
          $._dimension_token
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
      tabular: {
        name: $ => $.env_name_tabular,
        beginParameters: $ => [
          optional($.brack_group),
          $._token
        ]
      },
      tabularstar: {
        name: $ => $.env_name_tabularstar,
        beginParameters: $ => [
          $._token,
          optional($.brack_group),
          $._token
        ]
      },
      text: {
        name: $ => $.env_name
      },
      thebibliography: {
        name: $ => $.env_name_thebibliography,
        beginParameters: $ => [$._token]
      },
      theorem: {
        name: $ => $.env_name_theorem,
        beginParameters: $ => [optional($.brack_group)]
      }
    },
    rules: {
      latex_display_math: $ => seq(
        alias($.cs_display_math_begin, $.cs),
        $._scope_begin_cmd,
        repeat($._expanded_tokens),
        choice(alias($.cs_display_math_end, $.cs), $.exit),
        $._scope_end
      ),
      latex_inline_math: $ => seq(
        alias($.cs_inline_math_begin, $.cs),
        $._scope_begin_cmd,
        repeat($._expanded_tokens),
        choice(alias($.cs_inline_math_end, $.cs), $.exit),
        $._scope_end
      )
    }
  }
}
