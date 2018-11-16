module.exports = grammar({
  name: 'latex',

  externals: $ => [
    $.verb_body,
    $.verb_delim
  ],

  extras: $ => [
    $.magic_comment,
    $.comment
  ],

  rules: {
    document: $ => optional($.text_mode),

    _common: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      $.text,
      $.escaped,
      $.catcode
    ),

    _text_mode_common: $ => choice(
      $._common,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, 'text'),
      alias($.superscript, 'text'),
      $.verbatim_env,
      $.inline_verbatim
    ),

    inline_verbatim: $ => seq($.verb_token, $.verb_delim, $.verb_body, $.verb_delim),

    verb_token: $ => seq($._escape, 'verb', optional($._whitespace)),

    _whitespace: $ => repeat1(/[\s\t]/),

    _text_mode: $ => choice(
      $._text_mode_common,
      $._display_math,
      $._inline_math,
      $.text_env,
      $.text_group,
      $.opt_text_group,
      $.text_mode_at_region,
      $.emph,
      $.textbf,
      $.textit,
      $.texttt,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      $.token
    ),

    text_mode: $ => repeat1($._text_mode),

    _text_mode_at: $ => choice(
      $._text_mode_common,
      $._display_math_at,
      $._inline_math_at,
      $.text_env_at,
      $.text_group_at,
      $.opt_text_group_at,
      $.emph_at,
      $.textbf_at,
      $.textit_at,
      $.texttt_at,
      $.documentclass,
      $.include_at,
      $.section_at,
      $.storage,
      $.usepackage,
      $.token_at
    ),

    text_mode_at: $ => prec.left(2, repeat1($._text_mode_at)),

    text_mode_at_region: $ => seq($.makeatletter, optional($.text_mode_at), $.makeatother),

    _math_mode_common: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
    ),

    _math_mode: $ => choice(
      $._math_mode_common,
      $.math_env,
      $.math_group,
      $.opt_math_group,
      $.include,
      $.storage,
      $.token,
      $.tag
    ),

    math_mode: $ => prec.left(2, repeat1($._math_mode)),

    _math_mode_at: $ => choice(
      $._math_mode_common,
      $.math_env_at,
      $.math_group_at,
      $.opt_math_group_at,
      $.include_at,
      $.storage,
      $.token_at,
      $.tag_at
    ),

    math_mode_at: $ => prec.left(2, repeat1($._math_mode_at)),

    parameter: $ => seq(
      repeat1($.parameter_char), $.number
    ),

    text_env: $ => seq(
      $.begin, repeat($._text_mode), $.end
    ),

    text_env_at: $ => seq(
      $.begin, repeat($._text_mode_at), $.end
    ),

    math_env: $ => seq(
      $.begin, repeat($._math_mode), $.end
    ),

    math_env_at: $ => seq(
      $.begin, repeat($._math_mode_at), $.end
    ),

    _display_math: $ => choice(
      $.tex_display_math,
      $.latex_display_math,
      $.display_math_env
    ),

    _display_math_at: $ => choice(
      $.tex_display_math_at,
      $.latex_display_math_at,
      $.display_math_env_at
    ),

    tex_display_math: $ => seq(
      $.math_shift, $.math_shift,
      $.math_mode,
      $.math_shift, $.math_shift
    ),

    tex_display_math_at: $ => seq(
      $.math_shift, $.math_shift,
      $.math_mode_at,
      $.math_shift, $.math_shift
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      $.math_mode,
      $.end_display_math
    ),

    latex_display_math_at: $ => seq(
      $.begin_display_math,
      $.math_mode_at,
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

    display_math_env_at: $ => seq(
      alias($.display_math_begin_at, 'display_math_begin'),
      $.math_mode_at,
      $.display_math_end
    ),

    display_math_begin: $ => seq(
      $.begin_token,
      $.display_math_env_group,
      optional($.opt_text_group),
      optional($.text_group),
      $._end_of_line
    ),

    display_math_begin_at: $ => seq(
      $.begin_token,
      $.display_math_env_group,
      optional($.opt_text_group_at),
      optional($.text_group_at),
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

    _inline_math_at: $ => choice(
      $.tex_inline_math_at,
      $.latex_inline_math_at,
      $.inline_math_env_at
    ),

    tex_inline_math: $ => seq(
      $.math_shift,
      $.math_mode,
      $.math_shift
    ),

    tex_inline_math_at: $ => seq(
      $.math_shift,
      $.math_mode_at,
      $.math_shift
    ),

    latex_inline_math: $ => seq(
      $.begin_inline_math,
      $.math_mode,
      $.end_inline_math
    ),

    latex_inline_math_at: $ => seq(
      $.begin_inline_math,
      $.math_mode_at,
      $.end_inline_math
    ),

    inline_math_env: $ => seq(
      $.inline_math_begin,
      $.math_mode,
      $.inline_math_end
    ),

    inline_math_env_at: $ => seq(
      $.inline_math_begin,
      $.math_mode_at,
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

    tag: $ => seq($.tag_token, $.math_text_group),

    tag_at: $ => seq($.tag_token, $.math_text_group_at),

    tag_token: $ => seq($._escape, 'tag'),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
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
      // $._end_of_line,
      $.end_token,
      $.verbatim_env_group
    ),

    verbatim_text: $ => repeat1(seq(repeat(/./), $._end_of_line)),

    verbatim_env_group: $ => seq($.begin_group, $.verbatim_env_name, $.end_group),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted)/,

    escaped: $ => seq(
      $._escape,
      /[^()\[\]]/
    ),

    begin: $ => seq($.begin_token, alias($.simple_text_group, 'env_name')),

    begin_token: $ => seq($._escape, 'begin'),

    end: $ => seq($.end_token, alias($.simple_text_group, 'env_name')),

    end_token: $ => seq($._escape, 'end'),

    documentclass: $ => seq(
      $.documentclass_token,
      optional($.opt_text_group),
      alias($.simple_text_group, 'class_name')
    ),

    documentclass_token: $ => seq($._escape, 'documentclass'),

    usepackage: $ => seq(
      $.usepackage_token,
      optional($.opt_text_group),
      alias($.simple_text_group, 'package_name')
    ),

    usepackage_token: $ => seq($._escape, 'usepackage'),

    include: $ => seq($.include_token, $.text_group),

    include_at: $ => seq($.include_token, $.text_group_at),

    include_token: $ => seq($._escape, /include|input/),

    section: $ => seq($.section_token, optional($.opt_text_group), $.text_group),

    section_at: $ => seq($.section_token, optional($.opt_text_group_at), $.text_group_at),

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

    emph: $ => seq($.emph_token, $.text_group),

    emph_at: $ => seq($.emph_token, $.text_group_at),

    emph_token: $ => seq($._escape, 'emph'),

    footnote: $ => seq($.footnote_token, $.opt_text_group, $.text_group),

    footnote_at: $ => seq($.footnote_token, $.opt_text_group_at, $.text_group_at),

    footnote_token: $ => seq($._escape, 'footnote'),

    textbf: $ => seq($.textbf_token, $.text_group),

    textbf_at: $ => seq($.textbf_token, $.text_group_at),

    textbf_token: $ => seq($._escape, 'textbf'),

    textit: $ => seq($.textit_token, $.text_group),

    textit_at: $ => seq($.textit_token, $.text_group_at),

    textit_token: $ => seq($._escape, 'textit'),

    texttt: $ => seq($.texttt_token, $.text_group),

    texttt_at: $ => seq($.texttt_token, $.text_group_at),

    texttt_token: $ => seq($._escape, 'texttt'),

    makeatletter: $ => $.makeatletter_token,

    makeatletter_token: $ => seq($._escape, 'makeatletter'),

    makeatother: $ => $.makeatother_token,

    makeatother_token: $ => seq($._escape, 'makeatother'),

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    text_group_at: $ => seq(
      $.begin_group, repeat($._text_mode_at), $.end_group
    ),

    simple_text_group: $ => seq(
      $.begin_group, $.text, $.end_group
    ),

    opt_text_group: $ => seq(
      $.begin_opt, repeat($._text_mode), $.end_opt
    ),

    opt_text_group_at: $ => seq(
      $.begin_opt, repeat($._text_mode_at), $.end_opt
    ),

    math_group: $ => seq(
      $.begin_group, repeat($._math_mode), $.end_group
    ),

    math_group_at: $ => seq(
      $.begin_group, repeat($._math_mode_at), $.end_group
    ),

    opt_math_group: $ => seq(
      $.begin_opt, repeat($._math_mode), $.end_opt
    ),

    opt_math_group_at: $ => seq(
      $.begin_opt, repeat($._math_mode_at), $.end_opt
    ),

    math_text_group: $ => seq(
      $.begin_group, optional($.text_mode), $.end_group
    ),

    math_text_group_at: $ => seq(
      $.begin_group, optional($.text_mode_at), $.end_group
    ),

    token: $ => seq($._escape, $._name),

    token_at: $ => seq($._escape, $._name_at),

    magic_comment: $ => /%\s*!T[eE]X\s+.*/,

    comment: $ => /%.*/,

    // verbatim_text: $ => seq(/.*/, $._end_of_line),

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
    _name_at: $ => /[a-zA-Z@]+/,
    // other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    // comment_char: $ => '%',
    text: $ => /[^\\{}$&#^_~%\[\]]+/,
    number: $ => /[0-9]+/,
    // _verbatim_token: $ => /.*/,
  }
})
