module.exports = {
  _: {
    commands: {
      begingroup: {
        cs: $ => $.cs_begingroup
      },
      bgroup: {
        cs: $ => $.cs_bgroup
      },
      endgroup: {
        cs: $ => $.cs_endgroup
      },
      egroup: {
        cs: $ => $.cs_egroup
      }
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
        local: true,
        cs: $ => $.cs_def,
        parameters: $ => [
          $.cs,
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
      expandafter: {
        cs: $ => $.cs_expandafter,
        parameters: $ => [
          $._text_token_parameter,
          $._text_expanded_parameter
        ]
      },
      input: {
        cs: $ => $.cs_input,
        parameters: $ => [$._text_token_parameter]
      },
      let: {
        cs: $ => $.cs_let,
        parameters: $ => [$.cs, $.cs]
      },
      relax: {
        cs: $ => $.cs_relax
      }
    },
    rules: {
      _cmd: $ => seq($.cs, $._cmd_apply)
    }
  },
  text: {
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
