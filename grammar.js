function begin_env ($, options = {}) {
  const args = [
    $.begin_token,
    options.name_group || $.name_group
  ]

  for (let i = options.opt || 0; i > 0; i--) {
    args.push(optional($._space))
    args.push(optional($.opt_text_group))
  }

  for (let i = options.text || 0; i > 0; i--) {
    args.push(optional($._space))
    args.push(optional($.text_group))
  }

  if (options.eol) {
    args.push($.eol)
  }

  return seq.apply(null, args)
}

function end_env ($, options = {}) {
  const args = [
    $.end_token,
    options.name_group || $.name_group
  ]

  return seq.apply(null, args)
}

function command ($, token, options = {}) {
  const args = [token]

  if (options.star) {
    args.push(optional($._space))
    args.push(optional('*'))
  }

  for (let i = options.opt || 0; i > 0; i--) {
    args.push(optional($._space))
    args.push(optional($.opt_text_group))
  }

  for (let i = options.name || 0; i > 0; i--) {
    args.push(optional($._space))
    args.push($.name_group)
  }

  for (let i = options.text || 0; i > 0; i--) {
    args.push(optional($._space))
    args.push($.text_group)
  }

  for (let i = options.math_text || 0; i > 0; i--) {
    args.push(optional($._space))
    args.push($.math_text_group)
  }

  if (args.length === 1) {
    args.push(optional($._space))
  }

  return seq.apply(null, args)
}

module.exports = grammar({
  name: 'latex',

  externals: $ => [
    $._escape,
    $._explsyntaxoff_word,
    $._explsyntaxon_word,
    $._makeatletter_word,
    $._makeatother_word,
    $._non_letter_or_other,
    $._providesexplclass_word,
    $._providesexplfile_word,
    $._providesexplpackage_word,
    $._space,
    $._token_end,
    $.active_char,
    $.alignment_tab,
    $.begin_group,
    $.comment_char,
    $.end_group,
    $.eol,
    $.math_shift,
    $.parameter_char,
    $.subscript,
    $.superscript,
    $.verb_body,
    $.verb_delim,
    $.verb_line
  ],

  extras: $ => [],

  rules: {
    document: $ => optional($.text_mode),

    _common: $ => choice(
      $.magic_comment,
      $.comment,
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

    verb_token: $ => seq($._escape, 'verb', $._token_end),

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
      prec(-1, alias($.begin_opt, 'text')),
      prec(-1, alias($.end_opt, 'text')),
      // $.opt_text_group,
      $.emph,
      $.textbf,
      $.textit,
      $.texttt,
      $.providesexplclass,
      $.providesexplfile,
      $.providesexplpackage,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      command($, $.token),
      $.footnote
    ),

    text_mode: $ => repeat1($._text_mode),

    _math_mode: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
      $.math_env,
      $.math_group,
      prec(-1, alias($.begin_opt, 'text')),
      prec(-1, alias($.end_opt, 'text')),
      // $.opt_math_group,
      $.include,
      $.storage,
      command($, $.token),
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
      optional($.math_mode),
      $.math_shift, $.math_shift
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      $.math_mode,
      $.end_display_math
    ),

    begin_display_math: $ => seq($._escape, '['),

    end_display_math: $ => seq($._escape, ']'),

    display_math_env: $ => seq(
      $.display_math_begin,
      $.math_mode,
      $.display_math_end
    ),

    display_math_begin: $ => begin_env($, {
      name_group: $.display_math_env_group,
      opt: 1,
      text: 1,
      eol: true
    }),

    display_math_end: $ => end_env($, {
      name_group: $.display_math_env_group
    }),

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
      optional($.math_mode),
      $.end_inline_math
    ),

    begin_inline_math: $ => seq($._escape, '('),

    end_inline_math: $ => seq($._escape, ')'),

    inline_math_env: $ => seq(
      $.inline_math_begin,
      optional($.math_mode),
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

    tag: $ => command($, $.tag_token, { math_text: 1 }),

    tag_token: $ => seq($._escape, 'tag', $._token_end),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
      $.verbatim_end
    ),

    verbatim_begin: $ => begin_env($, {
      name_group: $.verbatim_env_group,
      opt: 1,
      text: 1,
      eol: true
    }),

    verbatim_end: $ => end_env($, {
      name_group: $.verbatim_env_group
    }),

    verbatim_text: $ => repeat1(alias($.verb_line, '_verb_line')),

    verbatim_env_group: $ => seq($.begin_group, $.verbatim_env_name, $.end_group),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt)/,

    begin: $ => begin_env($),

    begin_token: $ => seq($._escape, 'begin', $._token_end),

    end: $ => end_env($),

    end_token: $ => seq($._escape, 'end', $._token_end),

    documentclass: $ => command($, $.documentclass_token, { opt: 1, name: 1 }),

    documentclass_token: $ => seq($._escape, 'documentclass', $._token_end),

    usepackage: $ => command($, $.usepackage_token, { opt: 1, name: 1 }),

    usepackage_token: $ => seq($._escape, 'usepackage', $._token_end),

    include: $ => command($, $.include_token, { text: 1 }),

    include_token: $ => seq($._escape, /include|input/, $._token_end),

    providesexplclass: $ => command($, $.providesexplclass_token, { text: 4 }),

    providesexplclass_token: $ => seq($._escape, $._providesexplclass_word, $._token_end),

    providesexplfile: $ => command($, $.providesexplfile_token, { text: 4 }),

    providesexplfile_token: $ => seq($._escape, $._providesexplfile_word, $._token_end),

    providesexplpackage: $ => command($, $.providesexplpackage_token, { text: 4 }),

    providesexplpackage_token: $ => seq($._escape, $._providesexplpackage_word, $._token_end),

    section: $ => command($, $.section_token, { text: 1, opt: 1, star: true }),

    section_token: $ => seq($._escape, /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/, $._token_end),

    storage: $ => command($, $.storage_token),

    storage_token: $ => seq($._escape, /[egx]?def/, $._token_end),

    catcode: $ => seq(
      $.catcode_token, $.escaped, '=', $.number
    ),

    catcode_token: $ => seq($._escape, /k?catcode`/, $._token_end),

    emph: $ => command($, $.emph_token, { text: 1 }),

    emph_token: $ => seq($._escape, 'emph', $._token_end),

    footnote: $ => command($, $.footnote_token, { text: 1, opt: 1 }),

    footnote_token: $ => seq($._escape, 'footnote', $._token_end),

    textbf: $ => command($, $.textbf_token, { text: 1 }),

    textbf_token: $ => seq($._escape, 'textbf', $._token_end),

    textit: $ => command($, $.textit_token, { text: 1 }),

    textit_token: $ => seq($._escape, 'textit', $._token_end),

    texttt: $ => command($, $.texttt_token, { text: 1 }),

    texttt_token: $ => seq($._escape, 'texttt', $._token_end),

    makeatletter: $ => command($, $.makeatletter_token),

    makeatletter_token: $ => seq($._escape, $._makeatletter_word, $._token_end),

    makeatother: $ => command($, $.makeatother_token),

    makeatother_token: $ => seq($._escape, $._makeatother_word, $._token_end),

    explsyntaxon: $ => command($, $.explsyntaxon_token),

    explsyntaxon_token: $ => seq($._escape, $._explsyntaxon_word, $._token_end),

    explsyntaxoff: $ => command($, $.explsyntaxoff_token),

    explsyntaxoff_token: $ => seq($._escape, $._explsyntaxoff_word, $._token_end),

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    name_group: $ => seq(
      $.begin_group, alias($.text, 'name'), $.end_group
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

    magic_comment: $ => seq(
      $.comment_char,
      optional($._space),
      $.magic_tag,
      $._space,
      repeat(/./),
      // This really needs to be EOL or EOF
      $.eol
    ),

    magic_tag: $ => /!T[eE]X/,

    comment: $ => seq(
      $.comment_char,
      optional($._space),
      repeat(/./),
      // This really needs to be EOL or EOF
      $.eol
    ),

    begin_opt: $ => '[',
    end_opt: $ => ']',
    text: $ => prec.left(-1,repeat1(/[^\]\[]/)),
    token: $ => seq($._escape, repeat1(/./), $._token_end),
    escaped: $ => seq($._escape, $._non_letter_or_other),
    number: $ => /[0-9]+/,
  }
})
