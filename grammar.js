function begin_env_rule ($, options = {}) {
  const args = [
    $.begin_cs,
    options.name_group || $.name_group
  ]

  for (let i = options.opt || 0; i > 0; i--) {
    args.push(optional($.opt_text_group))
  }

  for (let i = options.text || 0; i > 0; i--) {
    args.push(optional($.text_group))
  }

  if (options.eol) {
    args.push($.eol)
  }

  return seq.apply(null, args)
}

function end_env_rule ($, options = {}) {
  const args = [
    $.end_cs,
    options.name_group || $.name_group
  ]

  return seq.apply(null, args)
}

function command_rule ($, cs, options = {}) {
  const args = [cs]

  if (options.star) {
    args.push(optional('*'))
  }

  for (let i = options.opt || 0; i > 0; i--) {
    args.push(optional($.opt_text_group))
  }

  for (let i = options.name || 0; i > 0; i--) {
    args.push($.name_group)
  }

  for (let i = options.text || 0; i > 0; i--) {
    args.push($.text_group)
  }

  for (let i = options.math_text || 0; i > 0; i--) {
    args.push($.math_text_group)
  }

  for (let i = options.text_opt || 0; i > 0; i--) {
    args.push(optional($.text_group))
  }

  return seq.apply(null, args)
}

function cs_rule ($, name) {
  return seq($._escape, name, $._cs_end)
}

module.exports = grammar({
  name: 'latex',

  externals: $ => [
    $._cs_end,
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
    $._verb_line,
    $.active_char,
    $.alignment_tab,
    $.arara_comment,
    $.begin_group,
    $.bib_comment,
    $.comment,
    $.end_group,
    $.eol,
    $.magic_comment,
    $.math_shift,
    $.parameter_char,
    $.subscript,
    $.superscript,
    $.tag_comment,
    $.verb_body,
    $.verb_delim
  ],

  extras: $ => [
    $._space,
    $.arara_comment,
    $.bib_comment,
    $.comment,
    $.magic_comment,
    $.tag_comment,
  ],

  rules: {
    document: $ => optional($.text_mode),

    _common: $ => choice(
      $._box,
      $.active_char,
      $.alignment_tab,
      $.box_dimension_assign,
      $.catcode,
      $.char,
      $.chardef,
      $.dimension_assign,
      $.escaped,
      $.explsyntaxoff,
      $.explsyntaxon,
      $.glue_assign,
      $.glue_space,
      $.makeatletter,
      $.makeatother,
      $.newcommand,
      $.newenvironment,
      $.parameter,
      $.setbox,
      $.text
    ),

    inline_verbatim: $ => seq($.verb_cs, $.verb_delim, $.verb_body, $.verb_delim),

    verb_cs: $ => cs_rule($, 'verb'),

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
      $.cs,
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
      $.include,
      $.storage,
      command_rule($, $.cs),
      $.tag
    ),

    math_mode: $ => prec.left(2, repeat1($._math_mode)),

    parameter: $ => seq(
      repeat1($.parameter_char), $.decimal
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
      $.begin_cs,
      $.inline_math_env_group
    ),

    inline_math_end: $ => seq(
      $.end_cs,
      $.inline_math_env_group
    ),

    inline_math_env_group: $ => seq($.begin_group, $.inline_math_env_name, $.end_group),

    inline_math_env_name: $ => 'math',

    tag: $ => command_rule($, $.tag_cs, { math_text: 1 }),

    tag_cs: $ => cs_rule($, 'tag'),

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

    verbatim_text: $ => repeat1($._verb_line),

    verbatim_env_group: $ => seq($.begin_group, $.verbatim_env_name, $.end_group),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt)/,

    begin: $ => begin_env_rule($),

    begin_cs: $ => cs_rule($, 'begin'),

    end: $ => end_env_rule($),

    end_cs: $ => cs_rule($, 'end'),

    documentclass: $ => command_rule($, $.documentclass_cs, { opt: 1, name: 1 }),

    documentclass_cs: $ => cs_rule($, 'documentclass'),

    usepackage: $ => command_rule($, $.usepackage_cs, { opt: 1, name: 1 }),

    usepackage_cs: $ => cs_rule($, 'usepackage'),

    include: $ => command_rule($, $.include_cs, { text: 1 }),

    include_cs: $ => cs_rule($, /include|input/),

    providesexplclass: $ => command_rule($, $.providesexplclass_cs, { text: 4 }),

    providesexplclass_cs: $ => cs_rule($, $._providesexplclass_word),

    providesexplfile: $ => command_rule($, $.providesexplfile_cs, { text: 4 }),

    providesexplfile_cs: $ => cs_rule($, $._providesexplfile_word),

    providesexplpackage: $ => command_rule($, $.providesexplpackage_cs, { text: 4 }),

    providesexplpackage_cs: $ => cs_rule($, $._providesexplpackage_word),

    section: $ => command_rule($, $.section_cs, { text: 1, opt: 1, star: true }),

    section_cs: $ => cs_rule($, /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/),

    storage: $ => command_rule($, $.storage_cs),

    storage_cs: $ => cs_rule($, /[egx]?def/),

    emph: $ => command_rule($, $.emph_cs, { text: 1 }),

    emph_cs: $ => cs_rule($, 'emph'),

    footnote: $ => command_rule($, $.footnote_cs, { text: 1, opt: 1 }),

    footnote_cs: $ => cs_rule($, 'footnote'),

    textbf: $ => command_rule($, $.textbf_cs, { text: 1 }),

    textbf_cs: $ => cs_rule($, 'textbf'),

    textit: $ => command_rule($, $.textit_cs, { text: 1 }),

    textit_cs: $ => cs_rule($, 'textit'),

    texttt: $ => command_rule($, $.texttt_cs, { text: 1 }),

    texttt_cs: $ => cs_rule($, 'texttt'),

    makeatletter: $ => command_rule($, $.makeatletter_cs),

    makeatletter_cs: $ => cs_rule($, $._makeatletter_word),

    makeatother: $ => command_rule($, $.makeatother_cs),

    makeatother_cs: $ => cs_rule($, $._makeatother_word),

    explsyntaxon: $ => command_rule($, $.explsyntaxon_cs),

    explsyntaxon_cs: $ => cs_rule($, $._explsyntaxon_word),

    explsyntaxoff: $ => command_rule($, $.explsyntaxoff_cs),

    explsyntaxoff_cs: $ => cs_rule($, $._explsyntaxoff_word),

    // TeX dimension commands

    dimension_assign: $ => seq(
      $.dimension_cs,
      optional('='),
      $.dimension
    ),

    glue_assign: $ => seq(
      $.glue_cs,
      optional('='),
      $.glue
    ),

    glue_cs: $ => cs_rule($,
      /(((above|below)display(short)?|baseline|left|line|normalbaseline|normalline|parfill|par|right|splittop|tab|top|x?space)skip)|(small|mid|big)skipamount/
    ),

    dimension_cs: $ => cs_rule($,
      /(h|v)(offset|size|badness|fuzz)|boxmaxdepth|displayindent|displaywidth|emergencystretch|hangindent|lineskiplimit|maxdepth|normallineskiplimit|overfullrule|page(fil{1,3)stretch|page(depth|goal|shrink|total)|parindent|predisplaysize|prevdepth|splitmaxdepth/
    ),

    glue_space: $ => seq(
      $.glue_space_cs,
      $.glue),

    glue_space_cs: $ => cs_rule($,
      /[hmv]skip|(h|top|v)glue/
    ),

    makebox: $ => seq(
      $.makebox_cs,
      optional(
        seq(
          choice('to', 'spread'),
          $.dimension
        )
      ),
      $.text_group
    ),

    strut: $ => command_rule($, $.strut_cs),

    strut_cs: $ => cs_rule($, /(math)?strut|null/),

    phantom_smash: $ => command_rule($, $.phantom_smash_cs, { text: 1 }),

    phantom_smash_cs: $ => cs_rule($, /[hv]?phantom|smash/),

    makebox_cs: $ => cs_rule($,
      /[hv]box|vtop/
    ),

    usebox: $ => seq(
      $.usebox_cs,
      $._number
    ),

    usebox_cs: $ => cs_rule($,
      /(un[hv])?(box|copy)/
    ),

    movebox: $ => seq(
      $.movebox_cs,
      $.dimension,
      $._box,
    ),

    movebox_cs: $ => cs_rule($,
      /move(left|right)|raise|lower/
    ),

    _box: $ => choice(
      $.makebox,
      $.movebox,
      $.phantom_smash,
      $.strut,
      $.usebox
    ),

    setbox: $ => seq(
      $.setbox_cs,
      $._number,
      optional('='),
      $._box
    ),

    setbox_cs: $ => cs_rule($, 'setbox'),

    box_dimension_assign: $ => seq(
      $.box_dimension_cs,
      $._number,
      optional('='),
      $.dimension
    ),

    box_dimension_cs: $ => cs_rule($, /ht|dp|wd/),

    glue: $ => choice(
      seq(
        optional($.fixed),
        $.glue_cs
      ),
      seq(
        $.dimension,
        optional(seq('plus', $.dimension)),
        optional(seq('minus', $.dimension))
      )
    ),

    box_dimension_ref: $ => seq(
      $.box_dimension_cs,
      $._number
    ),

    dimension: $ => seq(
      optional($.fixed),
      choice(
        $.unit,
        $.box_dimension_ref,
        $.dimension_cs,
        $.cs
      )
    ),

    // TeX character functions

    catcode: $ => seq(
      $.catcode_cs, $._number, '=', $._number
    ),

    catcode_cs: $ => cs_rule($,
      /(cat|del|kcat|lc|math|sf|uc)code/
    ),

    chardef: $ => seq(
      $.chardef_cs,
      $.cs,
      optional('='),
      $._number
    ),

    chardef_cs: $ => cs_rule($, /(math)?chardef/),

    catcode_ref: $ => seq(
      $.catcode_cs, $._number
    ),

    char: $ => seq(
      $.char_cs, $._number
    ),

    char_cs: $ => cs_rule($, /(math)?char|accent/),

    // LaTeX newcommand, etc.

    newcommand: $ => seq(
      $.newcommand_cs,
      optional('*'),
      $.text_group,
      optional($.opt_text_group),
      optional($.opt_text_group),
      $.text_group
    ),

    newcommand_cs: $ => cs_rule($, /(DeclareRobust|Check)Command|(new|provide|renew)command/),

    newenvironment: $ => seq(
      $.newenvironment_cs,
      optional('*'),
      $.text_group,
      optional($.opt_text_group),
      optional($.opt_text_group),
      $.text_group,
      $.text_group
    ),

    newenvironment_cs: $ => cs_rule($, /(re)?newenvironment/),

    // hyperref functions

    href: $ => command_rule($, $.href_cs, { opt: 1, text: 2 }),

    href_cs: $ => cs_rule($, 'href'),

    url: $ => command_rule($, $.url_cs, { text: 1 }),

    url_cs: $ => cs_rule($, /(nolink)?url/),

    hyperbaseurl: $ => command_rule($, $.hyperbaseurl_cs, { text: 1 }),

    hyperbaseurl_cs: $ => cs_rule($, 'hyperbaseurl'),

    hyperimage: $ => command_rule($, $.hyperimage_cs, { text: 2 }),

    hyperimage_cs: $ => cs_rule($, 'hyperimage'),

    hyperref: $ => choice(
      command_rule($, $.hyperref_cs, { text: 4 }),
      prec(-1, command_rule($, $.hyperref_cs, { opt: 1, text: 1 }))),

    hyperref_cs: $ => cs_rule($, 'hyperref'),

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

    begin_opt: $ => '[',

    end_opt: $ => ']',

    text: $ => prec.left(-1,repeat1(/[^\]\[]/)),

    cs: $ => cs_rule($, repeat1(/./)),

    escaped: $ => seq($._escape, $._non_letter_or_other),

    // fi introduced by LuaTeX
    unit: $ => /bp|cc|cm|dd|em|ex|fil{0,3}|in|mm|mu|pc|pt|sp/,

    fixed: $ => /[+-]?([0-9]+(\.[0-9]*)?|[0-9]\.[0-9]+)/,

    _number: $ => choice(
      $.decimal,
      $.octal,
      $.hexadecimal,
      $.charcode,
      $.catcode_ref
    ),

    decimal: $ => /[0-9]+/,

    octal: $ => /'[0-7]+/,

    hexadecimal: $ => /"[0-9a-fA-F]+/,

    charcode: $ => seq('`', choice($.escaped, /./))
  }
})
