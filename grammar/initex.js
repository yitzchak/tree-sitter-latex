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
        parameters: $ => [$._math_token]
      },
      right: {
        cs: $ => $.cs_right,
        parameters: $ => [$._math_token]
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
          $._nil_group
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
  math: {
    commands: {
      expandafter: {
        cs: $ => $.cs_expandafter,
        parameters: $ => [
          $._math_token,
          $._math_expanded_parameter
        ]
      },
      phantom_smash: {
        cs: $ => $.cs_phantom_smash,
        parameters: $ => [$._math_token]
      }
    },
    rules: {
      delimiter_group: $ => seq(
        $.left,
        $._scope_begin,
        repeat($._math_mode),
        choice($.right, $.exit, alias($.exit_math, $.exit)),
        $._scope_end
      )
    }
  },
  text: {
    commands: {
      expandafter: {
        cs: $ => $.cs_expandafter,
        parameters: $ => [
          $._text_token,
          $._text_expanded_parameter
        ]
      }
    },
    rules: {
      tex_display_math: $ => seq(
        $.display_math_shift,
        repeat($._math_mode),
        choice(
          alias($.display_math_shift_end, $.display_math_shift),
          seq($.math_shift, $.exit),
          $.exit
        )
      ),
      tex_inline_math: $ => seq(
        $.math_shift,
        repeat1($._math_mode),
        choice(alias($.math_shift_end, $.math_shift), $.exit)
      )
    }
  }
}
