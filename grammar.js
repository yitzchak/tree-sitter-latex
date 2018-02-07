module.exports = grammar({
  name: 'latex',

  extras: $ => [
    $.magic,
    $.comment
  ],

  rules: {
    tex: $ => $.text_mode,

    text_mode: $ => repeat1(choice(
      $.active_char,
      $.command,
      $.escaped,
      $.parameter,
      $.subscript,
      $.superscript,
      $.text,
      $.inline_math,
      $.display_math,
      $.text_group,
      $.comment
    )),

    math_mode: $ => repeat1(choice(
      $.active_char,
      $.command,
      $.escaped,
      $.parameter,
      $.subscript,
      $.superscript,
      $.text,
      $.math_group,
      $.comment
    )),

    parameter: $ => seq(
      $.parameter_char, $.number
    ),

    escaped: $ => seq(
      $.escape,
      /./
    ),

    command: $ => seq(
      $.escape,
      choice(
        $.storage,
        $.catcode,
        $.keyword
      )
    ),

    storage: $ => /[egx]?def/,

    catcode: $ => seq(
      /k?catcode`/, $.escaped, '=', $.number
    ),

    text_group: $ => seq(
      $.begin_group, $.text_mode, $.end_group
    ),

    math_group: $ => seq(
      $.begin_group, $.math_mode, $.end_group
    ),

    display_math: $ => seq(
      $.math_shift, $.math_shift,
      $.math_mode,
      $.math_shift, $.math_shift
    ),

    inline_math: $ => seq(
      $.math_shift,
      $.math_mode,
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
    keyword: $ => /[a-zA-Z]+/,
    other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    comment_char: $ => '%',
    text: $ => /[^\\{}$&#^_~%]+/,
    number: $ => /[0-9]+/,

    comment: $ => /%.*/,
    magic: $ => /%\s+!T[eE]X\s+(\w+:)?\w+\s*=.*/
  }
})
