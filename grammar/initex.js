module.exports = {
  _: {
    commands: {
      begingroup: {
        cs: $ => $.cs_begingroup
      },
      bgroup: {
        cs: $ => $.cs_bgroup
      },
      csname: {
        cs: $ => $.cs_csname
      },
      endcsname: {
        cs: $ => $.cs_endcsname
      },
      endgroup: {
        cs: $ => $.cs_endgroup
      },
      egroup: {
        cs: $ => $.cs_egroup
      },
      left: {
        cs: $ => $.cs_left,
        parameters: $ => [$._text_token]
      },
      right: {
        cs: $ => $.cs_right,
        parameters: $ => [$._text_token]
      }
    },
    rules: {
      par: $ => choice(
        alias($.par_eol, $.eol),
        alias($.cs_par, $.cs)
      )
    }
  },
  common: {
    commands: {
      code: {
        cs: $ => $.cs_code,
        parameters: $ => [
          $._number_parameter,
          optional($.equals),
          $._number_parameter
        ]
      },
      def: {
        cs: $ => $.cs_def,
        parameters: $ => [
          choice($.active_char, $.cs),
          repeat(
            choice(
              $.parameter_ref,
              $.text,
              $.cs
            )
          ),
          alias($.apply_group, $.group)
        ]
      },
      input: {
        cs: $ => $.cs_input,
        parameters: $ => [$._text_token]
      },
      let: {
        cs: $ => $.cs_let,
        parameters: $ => [$.cs, optional($.equals), $.cs]
      },
      relax: {
        cs: $ => $.cs_relax
      },
      string: {
        cs: $ => $.cs_string,
        parameters: $ => [choice($.cs, alias($.text_non_escape, $.text))]
      }
    },
    rules: {
      _cmd: $ => $.cs,
      csname_group: $ => seq(
        $.csname,
        repeat($._text_token),
        $.endcsname
      )
    }
  },
  text: {
    commands: {
      expandafter: {
        cs: $ => $.cs_expandafter,
        parameters: $ => [
          $._text_token,
          $._token_expanded
        ]
      },
      phantom_smash: {
        cs: $ => $.cs_phantom_smash,
        parameters: $ => [$._text_token]
      }
    },
    rules: {
      delimiter_group: $ => seq(
        $.left,
        $._scope_begin,
        repeat($._token_expanded),
        choice($.right, $.exit, alias($.exit_math, $.exit)),
        $._scope_end
      ),
      tex_display_math: $ => seq(
        $.display_math_shift,
        $._scope_begin,
        $._mode_math,
        repeat($._token_expanded),
        choice(
          alias($.display_math_shift_end, $.display_math_shift),
          seq($.math_shift, $.exit),
          $.exit
        ),
        $._scope_end
      ),
      tex_inline_math: $ => seq(
        $.math_shift,
        $._scope_begin,
        $._mode_math,
        repeat($._token_expanded),
        choice(
          alias($.math_shift_end, $.math_shift),
          $.exit
        ),
        $._scope_end
      )
    }
  }
}
