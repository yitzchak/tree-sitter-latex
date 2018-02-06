module.exports = grammar({
  name: 'latex',

  extras: $ => [$.comment],

  rules: {
    tex: $ => seq(
      $.text_mode,
      repeat($.text_mode)
    ),

    text_mode: $ => choice(
      $.escaped,
      $.command,
      $.group,
      $.parameter,
      $.inline_math,
      $.display_math
    ),

    math_mode: $ => choice(
      $.escaped,
      $.command,
      $.group,
      $.parameter
    ),

    parameter: $ => seq(
      $.parameter_char, /[0-9]+/
    ),

    escaped: $ => seq(
      $.escape,
      choice(
        $.escape,
        $.begin_group,
        $.end_group,
        $.math_shift,
        $.alignment_tab,
        $.parameter_char,
        $.space,
        $.other,
        $.active_char,
        $.comment_char
      )
    ),

    command: $ => seq(
      $.escape,
      $.letter,
      repeat($.letter)
    ),

    group: $ => seq(
      $.begin_group, $.tex, $.end_group
    ),

    display_math: $ => seq(
      $.math_shift, $.math_shift,
      $.math_mode,
      repeat($.math_mode),
      $.math_shift, $.math_shift
    ),

    inline_math: $ => seq(
      $.math_shift,
      $.math_mode,
      repeat($.math_mode),
      $.math_shift
    ),

    escape: $ => '\\',
    begin_group: $ => '{',
    end_group: $ => '}',
    math_shift: $ => '$',
    alignment_tab: $ => '&',
    end_of_line: $ => '\n',
    parameter_char: $ => '#',
    superscript: $ => '^',
    subscript: $ => '_',
    //ignored_character: //,
    space: $ => /[ \t]/,
    letter: $ => /[a-zA-Z]/,
    other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    comment_char: $ => '%',

    comment: $ => seq(/%.*/)
  }
})
