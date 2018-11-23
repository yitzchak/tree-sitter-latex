function begin_env_rule ($, options = {}) {
  const args = [
    $.begin_token,
    options.name_group || $.name_group
  ]

  for (let i = options.opt || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push(optional($.opt_text_group))
  }

  for (let i = options.text || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push(optional($.text_group))
  }

  if (options.eol) {
    args.push($.eol)
  }

  return seq.apply(null, args)
}

function end_env_rule ($, options = {}) {
  const args = [
    $.end_token,
    options.name_group || $.name_group
  ]

  return seq.apply(null, args)
}

function command_rule ($, token, options = {}) {
  const args = [token]

  if (options.star) {
    args.push(optional($._ignored))
    args.push(optional('*'))
  }

  for (let i = options.opt || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push(optional($.opt_text_group))
  }

  for (let i = options.name || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push($.name_group)
  }

  for (let i = options.text || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push($.text_group)
  }

  for (let i = options.math_text || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push($.math_text_group)
  }

  for (let i = options.text_opt || 0; i > 0; i--) {
    args.push(optional($._ignored))
    args.push(optional($.text_group))
  }

  if (args.length === 1) {
    args.push(optional($._space))
  }

  return seq.apply(null, args)
}

function token_rule ($, name) {
  return seq($._escape, name, $._token_end)
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
      $.dimension_assign,
      $.glue_assign,
      $.skip,
      $.explsyntaxoff,
      $.explsyntaxon,
      $.makeatletter,
      $.makeatother
    ),

    inline_verbatim: $ => seq($.verb_token, $.verb_delim, $.verb_body, $.verb_delim),

    verb_token: $ => token_rule($, 'verb'),

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
      command_rule($, $.token),
      $.footnote,
      // hyperref package
      $.href,
      $.url,
      $.hyperbaseurl,
      $.hyperimage,
      $.hyperref
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
      command_rule($, $.token),
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

    display_math_begin: $ => begin_env_rule($, {
      name_group: $.display_math_env_group,
      opt: 1,
      text: 1,
      eol: true
    }),

    display_math_end: $ => end_env_rule($, {
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

    tag: $ => command_rule($, $.tag_token, { math_text: 1 }),

    tag_token: $ => token_rule($, 'tag'),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
      $.verbatim_end
    ),

    verbatim_begin: $ => begin_env_rule($, {
      name_group: $.verbatim_env_group,
      opt: 1,
      text: 1,
      eol: true
    }),

    verbatim_end: $ => end_env_rule($, {
      name_group: $.verbatim_env_group
    }),

    verbatim_text: $ => repeat1(alias($.verb_line, '_verb_line')),

    verbatim_env_group: $ => seq($.begin_group, $.verbatim_env_name, $.end_group),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt)/,

    begin: $ => begin_env_rule($),

    begin_token: $ => token_rule($, 'begin'),

    end: $ => end_env_rule($),

    end_token: $ => token_rule($, 'end'),

    documentclass: $ => command_rule($, $.documentclass_token, { opt: 1, name: 1 }),

    documentclass_token: $ => token_rule($, 'documentclass'),

    usepackage: $ => command_rule($, $.usepackage_token, { opt: 1, name: 1 }),

    usepackage_token: $ => token_rule($, 'usepackage'),

    include: $ => command_rule($, $.include_token, { text: 1 }),

    include_token: $ => token_rule($, /include|input/),

    providesexplclass: $ => command_rule($, $.providesexplclass_token, { text: 4 }),

    providesexplclass_token: $ => token_rule($, $._providesexplclass_word),

    providesexplfile: $ => command_rule($, $.providesexplfile_token, { text: 4 }),

    providesexplfile_token: $ => token_rule($, $._providesexplfile_word),

    providesexplpackage: $ => command_rule($, $.providesexplpackage_token, { text: 4 }),

    providesexplpackage_token: $ => token_rule($, $._providesexplpackage_word),

    section: $ => command_rule($, $.section_token, { text: 1, opt: 1, star: true }),

    section_token: $ => token_rule($, /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/),

    storage: $ => command_rule($, $.storage_token),

    storage_token: $ => token_rule($, /[egx]?def/),

    catcode: $ => seq(
      $.catcode_token, $.escaped, '=', $.number
    ),

    catcode_token: $ => token_rule($, /k?catcode`/),

    emph: $ => command_rule($, $.emph_token, { text: 1 }),

    emph_token: $ => token_rule($, 'emph'),

    footnote: $ => command_rule($, $.footnote_token, { text: 1, opt: 1 }),

    footnote_token: $ => token_rule($, 'footnote'),

    textbf: $ => command_rule($, $.textbf_token, { text: 1 }),

    textbf_token: $ => token_rule($, 'textbf'),

    textit: $ => command_rule($, $.textit_token, { text: 1 }),

    textit_token: $ => token_rule($, 'textit'),

    texttt: $ => command_rule($, $.texttt_token, { text: 1 }),

    texttt_token: $ => token_rule($, 'texttt'),

    makeatletter: $ => command_rule($, $.makeatletter_token),

    makeatletter_token: $ => token_rule($, $._makeatletter_word),

    makeatother: $ => command_rule($, $.makeatother_token),

    makeatother_token: $ => token_rule($, $._makeatother_word),

    explsyntaxon: $ => command_rule($, $.explsyntaxon_token),

    explsyntaxon_token: $ => token_rule($, $._explsyntaxon_word),

    explsyntaxoff: $ => command_rule($, $.explsyntaxoff_token),

    explsyntaxoff_token: $ => token_rule($, $._explsyntaxoff_word),

    // TeX dimension commands

    dimension_assign: $ => seq(
      $.dimension_token,
      optional($._ignored), optional('='), optional($._ignored),
      $.dimension
    ),

    glue_assign: $ => seq(
      $.glue_token,
      optional($._ignored), optional('='), optional($._ignored),
      $.glue
    ),

    glue_token: $ => token_rule($,
      /(((above|below)display(short)?|baseline|left|line|normalbaseline|normalline|parfill|par|right|splittop|tab|top|x?space)skip)|(small|mid|big)skipamount/
    ),

    dimension_token: $ => token_rule($,
      /(h|v)(offset|size|badness|fuzz)|boxmaxdepth|displayindent|displaywidth|emergencystretch|hangindent|lineskiplimit|maxdepth|normallineskiplimit|overfullrule|page(fil{1,3)stretch|page(depth|goal|shrink|total)|parindent|predisplaysize|prevdepth|splitmaxdepth/
    ),

    // glue_space_token: $ => token_rule($,
    //   /[hv]skip|(h|top|v)glue/
    // ),

    glue: $ => choice(
      seq(optional($.decimal), $.glue_token),
      seq(
        $.dimension,
        optional(seq($._space, 'plus', $._space, $.dimension)),
        optional(seq($._space, 'minus', $._space, $.dimension))
      )
    ),

    dimension: $ => seq(
      optional($.decimal),
      choice($.unit, $.dimension_token, $.token)
    ),

    skip: $ => seq($.skip_token, optional($._ignored), optional('to'), optional($._ignored), $.glue),

    skip_token: $ => token_rule($,
      /[hmv]skip|[hv]box|vtop|vcenter/
    ),

    // hyperref functions

    href: $ => command_rule($, $.href_token, { opt: 1, text: 2 }),

    href_token: $ => token_rule($, 'href'),

    url: $ => command_rule($, $.url_token, { text: 1 }),

    url_token: $ => token_rule($, /(nolink)?url/),

    hyperbaseurl: $ => command_rule($, $.hyperbaseurl_token, { text: 1 }),

    hyperbaseurl_token: $ => token_rule($, 'hyperbaseurl'),

    hyperimage: $ => command_rule($, $.hyperimage_token, { text: 2 }),

    hyperimage_token: $ => token_rule($, 'hyperimage'),

    hyperref: $ => choice(
      command_rule($, $.hyperref_token, { text: 4 }),
      prec(-1, command_rule($, $.hyperref_token, { opt: 1, text: 1 }))),

    hyperref_token: $ => token_rule($, 'hyperref'),

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

    _ignored: $ => prec(-1, repeat1(choice($._space, $.comment, $.magic_comment))),

    begin_opt: $ => '[',
    end_opt: $ => ']',

    text: $ => prec.left(-1,repeat1(/[^\]\[]/)),

    token: $ => token_rule($, repeat1(/./)),
    escaped: $ => seq($._escape, $._non_letter_or_other),

    // fi introduced by LuaTeX
    unit: $ => /bp|cc|cm|dd|em|ex|fil{0,3}|in|mm|mu|pc|pt|sp/,

    decimal: $ => /[+-]?([0-9]+(\.[0-9]*)?|[0-9]\.[0-9]+)/,
    number: $ => /[0-9]+/
  }
})
