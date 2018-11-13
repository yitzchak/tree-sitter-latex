module.exports = grammar({
  name: 'latex',

  rules: {
    document: $ => optional($.text_mode),

    _text_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, 'text'),
      $.superscript,
      $.text,
      $._display_math,
      $._inline_math,
      $.verbatim_env,
      $.text_environment,
      $.command,
      $.escaped,
      $.text_group,
      $.opt_text_group,
      $.at_group,
      $.comment
    ),

    text_mode: $ => repeat1($._text_mode),

    _at_text_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, 'text'),
      $.superscript,
      $.text,
      $._display_math,
      $._inline_math,
      $.verbatim_env,
      $.text_environment,
      $.at_command,
      $.escaped,
      $.at_text_group,
      $.opt_at_text_group,
      $.comment
    ),

    at_group: $ => seq($.makeatletter, repeat($._at_text_mode), $.makeatother),

    _math_mode: $ => choice(
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
      $.tag,
      $.comment
    ),

    math_mode: $ => prec.left(2, repeat1($._math_mode)),

    parameter: $ => seq(
      $.parameter_char, $.number
    ),

    text_environment: $ => seq(
      $.begin, repeat($._text_mode), $.end
    ),

    math_environment: $ => seq(
      $.begin, repeat($._math_mode), $.end
    ),

    _display_math: $ => choice(
      $.tex_display_math,
      $.latex_display_math,
      $.display_math_env
    ),

    tex_display_math: $ => seq(
      $.math_shift, $.math_shift,
      $.math_mode,
      $.math_shift, $.math_shift
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      $.math_mode,
      $.end_display_math
    ),

    begin_display_math: $ => seq($._escape, '['),

    end_display_math: $ => seq($._escape, ']'),

    begin_inline_math: $ => seq($._escape, '('),

    end_inline_math: $ => seq($._escape, ')'),

    display_math_env: $ => seq(
      $.display_math_begin,
      $.math_mode,
      $.display_math_end
    ),

    display_math_begin: $ => seq(
      $.begin_token,
      $.display_math_env_group,
      optional($.opt_text_group),
      optional($.text_group),
      $._end_of_line
    ),

    display_math_end: $ => seq(
      $.end_token,
      $.display_math_env_group
    ),

    display_math_env_group: $ => seq($.begin_group, $.display_math_env_name, $.end_group),

    display_math_env_name: $ => /(displaymath|eqnarray\*?|align\*?|alignat\*?|equation\*?|flalign\*?|gather\*?|multiline\*?|split\*?|dmath\*?|dseries\*?|dgroup\*?|darray\*?)/,

    _inline_math: $ => choice(
      $.tex_inline_math,
      $.latex_inline_math,
      $.inline_math_env
    ),

    tex_inline_math: $ => seq(
      $.math_shift,
      $.math_mode,
      $.math_shift
    ),

    latex_inline_math: $ => seq(
      $.begin_inline_math,
      $.math_mode,
      $.end_inline_math
    ),

    inline_math_env: $ => seq(
      $.inline_math_begin,
      $.math_mode,
      $.inline_math_end
    ),

    inline_math_begin: $ => seq(
      $.begin_token,
      $.inline_math_env_group
    ),

    inline_math_end: $ => seq(
      $.end_token,
      $.inline_math_env_group
    ),

    inline_math_env_group: $ => seq($.begin_group, $.inline_math_env_name, $.end_group),

    inline_math_env_name: $ => 'math',

    begin_lstlisting: $ => seq( // lstlisting from listing package
      $.begin_token,
      $.begin_group,
      'lstlisting',
      $.end_group
    ),

    end_lstlisting: $ => seq( // lstlisting from listing package
      $.end_token,
      $.begin_group,
      'lstlisting',
      $.end_group
    ),

    begin_minted: $ => seq( // minted from minted package
      $.begin_token,
      $.begin_group,
      'minted',
      $.end_group
    ),

    end_minted: $ => seq( // minted from minted package
      $.end_token,
      $.begin_group,
      'minted',
      $.end_group
    ),

    tag: $ => seq($.tag_token, $.math_text_group),

    tag_token: $ => seq($._escape, 'tag'),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      $.verbatim_text,
      $.verbatim_end
    ),

    verbatim_begin: $ => seq(
      $.begin_token,
      $.verbatim_env_group,
      optional($.opt_text_group),
      optional($.text_group),
      $._end_of_line
    ),

    verbatim_end: $ => seq(
      $.end_token,
      $.verbatim_env_group
    ),

    verbatim_env_group: $ => seq($.begin_group, $.verbatim_env_name, $.end_group),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted)/,

    escaped: $ => seq(
      $._escape,
      /[^()\[\]]/
    ),

    command: $ => choice(
      $.catcode,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      $.token
    ),

    at_command: $ => choice(
      $.catcode,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      $.at_token
    ),

    begin: $ => seq($.begin_token, alias($.simple_text_group, 'env_name')),

    begin_token: $ => seq($._escape, "begin"),

    end: $ => seq($.end_token, alias($.simple_text_group, 'env_name')),

    end_token: $ => seq($._escape, "end"),

    documentclass: $ => seq(
      $.documentclass_token,
      optional($.opt_text_group),
      $.simple_text_group
    ),

    documentclass_token: $ => seq($._escape, "documentclass"),

    usepackage: $ => seq(
      $.usepackage_token,
      optional($.opt_text_group),
      $.simple_text_group
    ),

    usepackage_token: $ => seq($._escape, "usepackage"),

    include: $ => seq($.include_token, $.text_group),

    include_token: $ => seq($._escape, /include|input/),

    section: $ => seq($.section_token, optional($.opt_text_group), $.text_group),

    section_token: $ => seq(
      $._escape,
      /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/
    ),

    storage: $ => $.storage_token,

    storage_token: $ => seq($._escape, /[egx]?def/),

    catcode: $ => seq(
      $.catcode_token, $.escaped, '=', $.number
    ),

    catcode_token: $ => seq($._escape, /k?catcode`/),

    makeatletter: $ => $.makeatletter_token,

    makeatletter_token: $ => seq($._escape, 'makeatletter'),

    makeatother: $ => $.makeatother_token,

    makeatother_token: $ => seq($._escape, 'makeatother'),

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    at_text_group: $ => seq(
      $.begin_group, repeat($._at_text_mode), $.end_group
    ),

    simple_text_group: $ => seq(
      $.begin_group, $.text, $.end_group
    ),

    opt_text_group: $ => seq(
      $.begin_opt, repeat($._text_mode), $.end_opt
    ),

    opt_at_text_group: $ => seq(
      $.begin_opt, repeat($._at_text_mode), $.end_opt
    ),

    math_group: $ => seq(
      $.begin_group, repeat($._math_mode), $.end_group
    ),

    opt_math_group: $ => seq(
      $.begin_opt, repeat($._math_mode), $.end_opt
    ),

    math_text_group: $ => seq(
      $.begin_group, optional($.text_mode), $.end_group
    ),

    token: $ => seq($._escape, $._name),

    at_token: $ => seq($._escape, $._at_name),

    comment: $ => seq(
      $.comment_char,
      choice(
        $.magic,
        $.comment_text
      )
    ),

    verbatim_text: $ => repeat1($._verbatim_token),

    _escape: $ => '\\',
    begin_group: $ => '{',
    end_group: $ => '}',
    begin_opt: $ => '[',
    end_opt: $ => ']',
    math_shift: $ => '$',
    alignment_tab: $ => '&',
    _end_of_line: $ => '\n',
    parameter_char: $ => '#',
    superscript: $ => '^',
    subscript: $ => '_',
    //ignored_character: //,
    // space: $ => /[ \t]/,
    // letter: $ => /[a-zA-Z]/,
    _name: $ => /[a-zA-Z]+/,
    _at_name: $ => /[a-zA-Z@]+/,
    // other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    comment_char: $ => '%',
    text: $ => /[^\\{}$&#^_~%\[\]]+/,
    number: $ => /[0-9]+/,
    _verbatim_token: $ => /(\n|.)/,

    magic: $ => /\s*!T[eE]X\s+.*/,
    comment_text: $ => /.*/
  }
})
