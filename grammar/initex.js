module.exports = {
  common: {
    commands: {
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
          $._no_parameter
        ]
      }
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
