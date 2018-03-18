module.exports = grammar({
  name: 'latex',

  rules: {
    program: $ => repeat($.text_mode),

    text_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      $.subscript,
      $.superscript,
      $.text,
      $.display_math,
      $.inline_math,
      $.text_environment,
      $.command,
      $.escaped,
      $.text_group,
      $.opt_text_group,
      $.comment
    ),

    math_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      $.subscript,
      $.superscript,
      $.text,
      $.math_environment,
      $.command,
      $.escaped,
      $.math_group,
      $.opt_math_group,
      $.comment
    ),

    parameter: $ => seq(
      $.parameter_char, $.number
    ),

    text_environment: $ => seq(
      $.begin, repeat($.text_mode), $.end
    ),

    math_environment: $ => seq(
      $.begin, repeat($.math_mode), $.end
    ),

    display_math: $ => choice(
      seq(
        $.math_shift, $.math_shift,
        repeat($.math_mode),
        $.math_shift, $.math_shift
      ),
      seq(
        $.escape, '[',
        repeat($.math_mode),
        $.escape, ']'
      ),
      seq( // AMS align
        $.begin_align,
        repeat($.math_mode),
        $.end_align
      ),
      seq( // AMS align*
        $.begin_align_star,
        repeat($.math_mode),
        $.end_align_star
      ),
      seq( // AMS alignat
        $.begin_alignat,
        repeat($.math_mode),
        $.end_alignat
      ),
      seq( // AMS alignat*
        $.begin_alignat_star,
        repeat($.math_mode),
        $.end_alignat_star
      ),
      seq(
        $.begin_eqnarray,
        repeat($.math_mode),
        $.end_eqnarray
      ),
      seq(
        $.begin_eqnarray_star,
        repeat($.math_mode),
        $.end_eqnarray_star
      ),
      seq(
        $.begin_equation,
        repeat($.math_mode),
        $.end_equation
      ),
      seq(
        $.begin_equation_star,
        repeat($.math_mode),
        $.end_equation_star
      ),
      seq(
        $.begin_flalign,
        repeat($.math_mode),
        $.end_flalign
      ),
      seq(
        $.begin_flalign_star,
        repeat($.math_mode),
        $.end_flalign_star
      ),
      seq( // AMS gather
        $.begin_gather,
        repeat($.math_mode),
        $.end_gather
      ),
      seq( // AMS gather*
        $.begin_gather_star,
        repeat($.math_mode),
        $.end_gather_star
      ),
      seq( // AMS multline
        $.begin_multline,
        repeat($.math_mode),
        $.end_multline
      ),
      seq( // AMS multline*
        $.begin_multline_star,
        repeat($.math_mode),
        $.end_multline_star
      ),
      seq( // AMS split
        $.begin_split,
        repeat($.math_mode),
        $.end_split
      ),
      seq( // AMS split*
        $.begin_split_star,
        repeat($.math_mode),
        $.end_split_star
      )
    ),

    inline_math: $ => choice(
      seq(
        $.math_shift,
        repeat1($.math_mode), // This has to be repeat1 or $$ will not work for display math
        $.math_shift
      ),
      seq(
        $.escape, '(',
        repeat($.math_mode),
        $.escape, ')'
      ),
      seq(
        $.begin_math,
        repeat($.math_mode),
        $.end_math
      )
    ),

    begin_align: $ => seq($.escape, 'begin', $.begin_group, 'align', $.end_group),

    end_align: $ => seq($.escape, 'end', $.begin_group, 'align', $.end_group),

    begin_align_star: $ => seq($.escape, 'begin', $.begin_group, 'align*', $.end_group),

    end_align_star: $ => seq($.escape, 'end', $.begin_group, 'align*', $.end_group),

    begin_alignat: $ => seq($.escape, 'begin', $.begin_group, 'alignat', $.end_group, $.text_group),

    end_alignat: $ => seq($.escape, 'end', $.begin_group, 'alignat', $.end_group),

    begin_alignat_star: $ => seq($.escape, 'begin', $.begin_group, 'alignat*', $.end_group, $.text_group),

    end_alignat_star: $ => seq($.escape, 'end', $.begin_group, 'alignat*', $.end_group),

    begin_eqnarray: $ => seq($.escape, 'begin', $.begin_group, 'eqnarray', $.end_group),

    end_eqnarray: $ => seq($.escape, 'end', $.begin_group, 'eqnarray', $.end_group),

    begin_eqnarray_star: $ => seq($.escape, 'begin', $.begin_group, 'eqnarray*', $.end_group),

    end_eqnarray_star: $ => seq($.escape, 'end', $.begin_group, 'eqnarray*', $.end_group),

    begin_equation: $ => seq($.escape, 'begin', $.begin_group, 'equation', $.end_group),

    end_equation: $ => seq($.escape, 'end', $.begin_group, 'equation', $.end_group),

    begin_equation_star: $ => seq($.escape, 'begin', $.begin_group, 'equation*', $.end_group),

    end_equation_star: $ => seq($.escape, 'end', $.begin_group, 'equation*', $.end_group),

    begin_flalign: $ => seq($.escape, 'begin', $.begin_group, 'flalign', $.end_group),

    end_flalign: $ => seq($.escape, 'end', $.begin_group, 'flalign', $.end_group),

    begin_flalign_star: $ => seq($.escape, 'begin', $.begin_group, 'flalign*', $.end_group),

    end_flalign_star: $ => seq($.escape, 'end', $.begin_group, 'flalign*', $.end_group),

    begin_gather: $ => seq($.escape, 'begin', $.begin_group, 'gather', $.end_group),

    end_gather: $ => seq($.escape, 'end', $.begin_group, 'gather', $.end_group),

    begin_gather_star: $ => seq($.escape, 'begin', $.begin_group, 'gather*', $.end_group),

    end_gather_star: $ => seq($.escape, 'end', $.begin_group, 'gather*', $.end_group),

    begin_multline: $ => seq($.escape, 'begin', $.begin_group, 'multline', $.end_group),

    end_multline: $ => seq($.escape, 'end', $.begin_group, 'multline', $.end_group),

    begin_multline_star: $ => seq($.escape, 'begin', $.begin_group, 'multline*', $.end_group),

    end_multline_star: $ => seq($.escape, 'end', $.begin_group, 'multline*', $.end_group),

    begin_split: $ => seq($.escape, 'begin', $.begin_group, 'split', $.end_group),

    end_split: $ => seq($.escape, 'end', $.begin_group, 'split', $.end_group),

    begin_split_star: $ => seq($.escape, 'begin', $.begin_group, 'split*', $.end_group),

    end_split_star: $ => seq($.escape, 'end', $.begin_group, 'split*', $.end_group),

    begin_math: $ => seq($.escape, 'begin', $.begin_group, 'math', $.end_group),

    end_math: $ => seq($.escape, 'end', $.begin_group, 'math', $.end_group),

    escaped: $ => seq(
      $.escape,
      /[^()\[\]]/
    ),

    command: $ => choice(
      $.catcode,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      seq($.escape, $.name)
    ),

    begin: $ => seq($.escape, "begin", $.text_group),

    end: $ => seq($.escape, "end", $.text_group),

    documentclass: $ => seq(
      $.escape, "documentclass",
      optional($.opt_text_group),
      $.text_group
    ),

    usepackage: $ => seq(
      $.escape, "usepackage",
      optional($.opt_text_group),
      $.text_group
    ),

    include: $ => seq(
      $.escape, /include|input/,
      $.text_group
    ),

    section: $ => seq(
      $.section_token,
      optional($.opt_text_group),
      $.text_group
    ),

    section_token: $ => seq($.escape, /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/),

    storage: $ => seq($.escape, /[egx]?def/),

    catcode: $ => seq(
      $.escape, /k?catcode`/, $.escaped, '=', $.number
    ),

    text_group: $ => seq(
      $.begin_group, repeat($.text_mode), $.end_group
    ),

    opt_text_group: $ => seq(
      $.begin_opt, repeat($.text_mode), $.end_opt
    ),

    math_group: $ => seq(
      $.begin_group, repeat($.math_mode), $.end_group
    ),

    opt_math_group: $ => seq(
      $.begin_opt, repeat($.math_mode), $.end_opt
    ),

    comment: $ => seq(
      $.comment_char,
      choice(
        $.magic,
        $.comment_text
      )
    ),

    escape: $ => '\\',
    begin_group: $ => '{',
    end_group: $ => '}',
    begin_opt: $ => '[',
    end_opt: $ => ']',
    math_shift: $ => '$',
    alignment_tab: $ => '&',
    end_of_line: $ => '\n',
    parameter_char: $ => '#',
    superscript: $ => '^',
    subscript: $ => '_',
    //ignored_character: //,
    space: $ => /[ \t]/,
    letter: $ => /[a-zA-Z]/,
    name: $ => /[a-zA-Z]+/,
    other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    comment_char: $ => '%',
    text: $ => /[^\\{}$&#^_~%\[\]]+/,
    number: $ => /[0-9]+/,

    magic: $ => /\s*!T[eE]X\s+.*/,
    comment_text: $ => /.*/
  }
})
