const named_command = ($, name, starred=false) => {
  if (starred) {
    return seq($._escape, name, repeat($.space), optional('*'), repeat($.space))
  } else {
    return seq($._escape, name, repeat($.space))
  }
}

const command_options = ($) => optional(seq($.opt_text_group, repeat($.space)))

const env_options = ($) => command_options($)

module.exports = grammar({
  name: 'latex',

  externals: $ => [
    $.alignment_tab,
    $.begin_display_math,
    $.begin_group,
    $.begin_inline_math,
    $.begin_token,
    $.catcode_token,
    $.comment_char,
    $.documentclass_token,
    $.emph_token,
    $.end_display_math,
    $.end_group,
    $.end_inline_math,
    $.end_token,
    $.eol,
    $.escaped,
    $.explsyntaxoff_token,
    $.explsyntaxon_token,
    $.footnote_token,
    $.include_token,
    $.makeatletter_token,
    $.makeatother_token,
    $.math_shift,
    $.parameter_char,
    $.section_token,
    $.space,
    $.storage_token,
    $.subscript,
    $.superscript,
    $.tag_token,
    $.textbf_token,
    $.textit_token,
    $.texttt_token,
    $.token,
    $.usepackage_token,
    $.verb_body,
    $.verb_delim,
    $.verb_token
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
      $.catcode,
      $.explsyntaxoff,
      $.explsyntaxon,
      $.makeatletter,
      $.makeatother
    ),

    inline_verbatim: $ => seq($.verb_token, $.verb_delim, $.verb_body, $.verb_delim),

    // verb_token: $ => seq($._escape, /verb\*?/), // whitespace is _not_ gobbled here

    // _whitespace: $ => repeat1(/[\s\t]/),

    _text_mode: $ => choice(
      $._common,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, 'text'),
      alias($.superscript, 'text'),
      $.verbatim_env,
      $.inline_verbatim,
      $._display_math,
      $._inline_math,
      $.text_env,
      $.text_group,
      $.opt_text_group,
      $.emph,
      $.textbf,
      $.textit,
      $.texttt,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      $.token,
      $.footnote
    ),

    text_mode: $ => repeat1($._text_mode),

    _math_mode: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
      $.math_env,
      $.math_group,
      $.opt_math_group,
      $.include,
      $.storage,
      $.token,
      $.tag
    ),

    math_mode: $ => prec.left(2, repeat1($._math_mode)),

    parameter: $ => seq(
      repeat1($.parameter_char), $.number
    ),

    text_env: $ => seq(
      $.begin, repeat($._text_mode), $.end
    ),

    math_env: $ => seq(
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

    // begin_display_math: $ => named_command($, '['),
    //
    // end_display_math: $ => named_command($, ']'),

    // begin_inline_math: $ => named_command($, '('),
    //
    // end_inline_math: $ => named_command($, ')'),

    display_math_env: $ => seq(
      $.display_math_begin,
      $.math_mode,
      $.display_math_end
    ),

    display_math_begin: $ => seq(
      $.begin_token,
      $.display_math_env_group,
      env_options($),
      optional($.text_group),
      $.eol
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

    tag: $ => seq($.tag_token, $.math_text_group),

    // tag_token: $ => named_command($, 'tag'),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
      $.verbatim_end
    ),

    verbatim_begin: $ => seq(
      $.begin_token,
      $.verbatim_env_group,
      env_options($),
      optional($.text_group),
      $.eol
    ),

    verbatim_end: $ => seq(
      // $.eol,
      $.end_token,
      $.verbatim_env_group
    ),

    verbatim_text: $ => repeat1(seq(repeat(/./), $.eol)),

    verbatim_env_group: $ => seq($.begin_group, $.verbatim_env_name, $.end_group),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt)/,

    // escaped: $ => seq(
    //   $._escape,
    //   /[^()\[\]]/
    // ),

    begin: $ => seq($.begin_token, alias($.simple_text_group, 'env_name')),

    // begin_token: $ => named_command($, 'begin'),

    end: $ => seq($.end_token, alias($.simple_text_group, 'env_name')),

    // end_token: $ => named_command($, 'end'),

    documentclass: $ => seq(
      $.documentclass_token,
      command_options($),
      alias($.simple_text_group, 'class_name')
    ),

    // documentclass_token: $ => named_command($, 'documentclass'),

    usepackage: $ => seq(
      $.usepackage_token,
      command_options($),
      alias($.simple_text_group, 'package_name')
    ),

    // usepackage_token: $ => named_command($, 'usepackage'),

    include: $ => seq($.include_token, $.text_group),

    // include_token: $ => named_command($, /include|input/),

    section: $ => seq($.section_token, command_options($), $.text_group),

    // section_token: $ => named_command(
    //   $, /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/, true
    // ),

    storage: $ => $.storage_token,

    // storage_token: $ => named_command($, /[egx]?def/),

    catcode: $ => seq(
      $.catcode_token, $.escaped, '=', $.number
    ),

    // catcode_token: $ => seq($._escape, /k?catcode`/),

    emph: $ => seq($.emph_token, $.text_group),

    footnote: $ => seq($.footnote_token, command_options($), $.text_group),

    // footnote_token: $ => named_command($, 'footnote'),

    textbf: $ => seq($.textbf_token, $.text_group),

    textit: $ => seq($.textit_token, $.text_group),

    texttt: $ => seq($.texttt_token, $.text_group),

    makeatletter: $ => $.makeatletter_token,

    makeatother: $ => $.makeatother_token,

    explsyntaxon: $ => $.explsyntaxon_token,

    explsyntaxoff: $ => $.explsyntaxoff_token,

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    simple_text_group: $ => seq(
      $.begin_group, $.text, $.end_group
    ),

    opt_text_group: $ => seq(
      $.begin_opt, repeat($._text_mode), $.end_opt
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

    magic_comment: $ => /\s*!T[eE]X\s+.*/,

    comment: $ => /%.*/,

    begin_opt: $ => '[',
    end_opt: $ => ']',
    // eol: $ => '\n',
    _name: $ => /[a-zA-Z]+/,
    active_char: $ => '~',
    text: $ => /[^\\{}$&#^_~%\[\]]+/,
    number: $ => /[0-9]+/,
  }
})
