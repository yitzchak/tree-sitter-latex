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
    $._space,
    $.active_char,
    $.alignment_tab,
    $.begin_display_math,
    $.begin_group,
    $.begin_inline_math,
    $.begin_token,
    $.catcode_token,
    $.comment_char,
    $.display_math_env_name,
    $.display_math_shift,
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
    $.inline_math_env_name,
    $.inline_math_shift,
    $.makeatletter_token,
    $.makeatother_token,
    $.name,
    $.parameter_char,
    $.providesexplclass_token,
    $.providesexplfile_token,
    $.providesexplpackage_token,
    $.section_token,
    $.storage_token,
    $.subscript,
    $.superscript,
    $.tag_token,
    $.text,
    $.textbf_token,
    $.textit_token,
    $.texttt_token,
    $.token,
    $.usepackage_token,
    $.verb_body,
    $.verb_delim,
    $.verb_line,
    $.verb_token,
    $.verbatim_env_name
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
      $.display_math_shift,
      optional($.math_mode),
      $.display_math_shift
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      $.math_mode,
      $.end_display_math
    ),

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

    _inline_math: $ => choice(
      $.tex_inline_math,
      $.latex_inline_math,
      $.inline_math_env
    ),

    tex_inline_math: $ => seq(
      $.inline_math_shift,
      optional($.math_mode),
      $.inline_math_shift
    ),

    latex_inline_math: $ => seq(
      $.begin_inline_math,
      optional($.math_mode),
      $.end_inline_math
    ),

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

    tag: $ => command($, $.tag_token, { math_text: 1 }),

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

    begin: $ => begin_env($),

    end: $ => end_env($),

    documentclass: $ => command($, $.documentclass_token, { opt: 1, name: 1 }),

    usepackage: $ => command($, $.usepackage_token, { opt: 1, name: 1 }),

    include: $ => command($, $.include_token, { text: 1 }),

    providesexplclass: $ => command($, $.providesexplclass_token, { text: 4 }),

    providesexplfile: $ => command($, $.providesexplfile_token, { text: 4 }),

    providesexplpackage: $ => command($, $.providesexplpackage_token, { text: 4 }),

    section: $ => command($, $.section_token, { text: 1, opt: 1, star: true }),

    storage: $ => command($, $.storage_token),

    catcode: $ => seq(
      $.catcode_token, $.escaped, '=', $.number
    ),

    emph: $ => command($, $.emph_token, { text: 1 }),

    footnote: $ => command($, $.footnote_token, { text: 1, opt: 1 }),

    textbf: $ => command($, $.textbf_token, { text: 1 }),

    textit: $ => command($, $.textit_token, { text: 1 }),

    texttt: $ => command($, $.texttt_token, { text: 1 }),

    makeatletter: $ => command($, $.makeatletter_token),

    makeatother: $ => command($, $.makeatother_token),

    explsyntaxon: $ => command($, $.explsyntaxon_token),

    explsyntaxoff: $ => command($, $.explsyntaxoff_token),

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    name_group: $ => seq(
      $.begin_group, $.name, $.end_group
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
    number: $ => /[0-9]+/,
  }
})
