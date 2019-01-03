module.exports = {
  common: {
    commands: {
      code: {
        cs: $ => $.cs_code,
        parameters: $ => [
          $._number_parameter,
          optional('='),
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
              alias($.lbrack, $.text),
              alias($.rbrack, $.text),
              $.text
            )
          ),
          $._nil_parameter
        ]
      }
    },
    rules: {
      _cmd: $ => seq($.cs, $._cmd_apply),
      parameter_ref: $ => seq(
        $.parameter_char,
        optional(/[1-9]/)
      )
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
