function cs ($, name) {
  return seq($._escape, name, $._cs_end)
}

// This command is a placeholder for aliasing of cs
function cmd () {
  return seq.apply(null, Array.prototype.slice.call(arguments, 1))
}

function begin_cmd ($) {
  return (arguments.length > 1)
    ? seq.apply(null, [$.begin_cs].concat(Array.prototype.slice.call(arguments, 1)))
    : seq($.begin_cs, $.name_group)
}

function end_cmd ($, name_group) {
  return seq($.end_cs, name_group || $.name_group)
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

  conflicts: $ => [
    [$._math_mode]
  ],

  rules: {
    document: $ => repeat($._text_mode),

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
      $.text,
      $.include,
      $.storage,
      $.cs
    ),

    inline_verbatim: $ => seq(
      $.verb_cs,
      $.verb_delim,
      $.verb_body,
      $.verb_delim
    ),

    verb_cs: $ => cs($, 'verb'),

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
      prec(-1, alias($.lbrack, 'text')),
      prec(-1, alias($.rbrack, 'text')),
      $.emph,
      $.textrm,
      $.textsf,
      $.texttt,
      $.textmd,
      $.textbf,
      $.textup,
      $.textit,
      $.textsl,
      $.textsc,
      $.providesexplclass,
      $.providesexplfile,
      $.providesexplpackage,
      $.documentclass,
      $.documentstyle,
      $.section,
      $.usepackage,
      $.footnote,
      // hyperref package
      $.href,
      $.url,
      $.hyperbaseurl,
      $.hyperimage,
      $.hyperref
    ),

    // text_mode: $ => repeat1($._text_mode),

    _math_mode: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
      $.math_env,
      $.math_group,
      prec(-1, alias($.lbrack, 'text')),
      prec(-1, alias($.rbrack, 'text')),
      $.mathrm,
      $.mathnormal,
      $.mathcal,
      $.mathbf,
      $.mathsf,
      $.mathtt,
      $.mathit,
      $.tag
    ),

    // math_mode: $ => repeat1($._math_mode),

    parameter: $ => seq(
      repeat1($.parameter_char),
      $.decimal
    ),

    text_env: $ => seq(
      $.begin,
      repeat($._text_mode),
      $.end
    ),

    math_env: $ => seq(
      $.begin,
      repeat($._math_mode),
      $.end
    ),

    _display_math: $ => choice(
      $.tex_display_math,
      $.latex_display_math,
      $.display_math_env
    ),

    tex_display_math: $ => seq(
      $.math_shift, $.math_shift,
      repeat($._math_mode),
      $.math_shift, $.math_shift
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      repeat1($._math_mode),
      $.end_display_math
    ),

    begin_display_math: $ => seq($._escape, '['),

    end_display_math: $ => prec(-3, seq($._escape, ']')),

    display_math_env: $ => seq(
      $.display_math_begin,
      repeat1($._math_mode),
      $.display_math_end
    ),

    display_math_begin: $ => begin_cmd($,
      $.display_math_env_group,
      optional($.brack_group_text),
      optional($.text_group),
      $.eol
    ),

    display_math_end: $ => prec(-3, end_cmd($,
      $.display_math_env_group
    )),

    display_math_env_group: $ => seq(
      $.begin_group,
      $.display_math_env_name,
      $.end_group
    ),

    display_math_env_name: $ => /(displaymath|eqnarray\*?|align\*?|alignat\*?|equation\*?|flalign\*?|gather\*?|multiline\*?|split\*?|dmath\*?|dseries\*?|dgroup\*?|darray\*?)/,

    _inline_math: $ => choice(
      $.tex_inline_math,
      $.latex_inline_math,
      $.inline_math_env
    ),

    tex_inline_math: $ => seq(
      $.math_shift,
      repeat1($._math_mode),
      $.math_shift
    ),

    latex_inline_math: $ => seq(
      $.begin_inline_math,
      repeat($._math_mode),
      $.end_inline_math
    ),

    begin_inline_math: $ => seq($._escape, '('),

    end_inline_math: $ => seq($._escape, ')'),

    inline_math_env: $ => seq(
      $.inline_math_begin,
      repeat($._math_mode),
      $.inline_math_end
    ),

    inline_math_begin: $ => begin_cmd($,
      $.inline_math_env_group
    ),

    inline_math_end: $ => prec(-3, end_cmd($,
      $.inline_math_env_group
    )),

    inline_math_env_group: $ => seq(
      $.begin_group,
      $.inline_math_env_name,
      $.end_group
    ),

    inline_math_env_name: $ => 'math',

    tag: $ => cmd($, $.tag_cs, $.math_text_group),

    tag_cs: $ => cs($, 'tag'),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
      $.verbatim_end
    ),

    verbatim_begin: $ => begin_cmd($,
      $.verbatim_env_group,
      optional($.brack_group_text),
      optional($.text_group),
      $.eol
    ),

    verbatim_end: $ => end_cmd($,
      $.verbatim_env_group
    ),

    verbatim_text: $ => repeat1($._verb_line),

    verbatim_env_group: $ => seq(
      $.begin_group,
      $.verbatim_env_name,
      $.end_group
    ),

    verbatim_env_name: $ => /(verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt)/,

    begin: $ => begin_cmd($),

    begin_cs: $ => cs($, 'begin'),

    end: $ => end_cmd($),

    end_cs: $ => cs($, 'end'),

    include: $ => cmd($,
      $.include_cs,
      $.text_group
    ),

    include_cs: $ => cs($, /include|input/),

    providesexplclass: $ => cmd($,
      $.providesexplclass_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    providesexplclass_cs: $ => cs($,
      $._providesexplclass_word
    ),

    providesexplfile: $ => cmd($,
      $.providesexplfile_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    providesexplfile_cs: $ => cs($,
      $._providesexplfile_word
    ),

    providesexplpackage: $ => cmd($,
      $.providesexplpackage_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    providesexplpackage_cs: $ => cs($,
      $._providesexplpackage_word
    ),

    section: $ => cmd($,
      $.section_cs,
      optional('*'),
      optional($.brack_group_text),
      $.text_group
    ),

    section_cs: $ => cs($,
      /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/
    ),

    storage: $ => cmd($, $.storage_cs),

    storage_cs: $ => cs($, /[egx]?def/),

    footnote: $ => cmd($,
      $.footnote_cs,
      optional($.brack_group_text),
      $.text_group
    ),

    footnote_cs: $ => cs($, 'footnote'),

    makeatletter: $ => cmd($,
      $.makeatletter_cs
    ),

    makeatletter_cs: $ => cs($, $._makeatletter_word),

    makeatother: $ => cmd($,
      $.makeatother_cs
    ),

    makeatother_cs: $ => cs($, $._makeatother_word),

    explsyntaxon: $ => cmd($,
      $.explsyntaxon_cs
    ),

    explsyntaxon_cs: $ => cs($, $._explsyntaxon_word),

    explsyntaxoff: $ => cmd($,
      $.explsyntaxoff_cs
    ),

    explsyntaxoff_cs: $ => cs($, $._explsyntaxoff_word),

    // TeX dimension commands

    dimension_assign: $ => cmd($,
      $.dimension_cs,
      optional('='),
      $.dimension
    ),

    glue_assign: $ => cmd($,
      $.glue_cs,
      optional('='),
      $.glue
    ),

    glue_cs: $ => cs($,
      /(((above|below)display(short)?|baseline|left|line|normalbaseline|normalline|parfill|par|right|splittop|tab|top|x?space)skip)|(small|mid|big)skipamount/
    ),

    dimension_cs: $ => cs($,
      /(h|v)(offset|size|badness|fuzz)|boxmaxdepth|displayindent|displaywidth|emergencystretch|hangindent|lineskiplimit|maxdepth|normallineskiplimit|overfullrule|page(fil{1,3)stretch|page(depth|goal|shrink|total)|parindent|predisplaysize|prevdepth|splitmaxdepth/
    ),

    glue_space: $ => cmd($,
      $.glue_space_cs,
      $.glue
    ),

    glue_space_cs: $ => cs($,
      /[hmv]skip|(h|top|v)glue/
    ),

    mkbox: $ => cmd($,
      $.mkbox_cs,
      optional(
        seq(
          choice('to', 'spread'),
          $.dimension
        )
      ),
      $.text_group
    ),

    strut: $ => cmd($,
      $.strut_cs
    ),

    strut_cs: $ => cs($, /(math)?strut|null/),

    phantom_smash: $ => cmd($,
      $.phantom_smash_cs,
      $.text_group
    ),

    phantom_smash_cs: $ => cs($, /[hv]?phantom|smash/),

    mkbox_cs: $ => cs($,
      /[hv]box|vtop/
    ),

    usebox: $ => cmd($,
      $.usebox_cs,
      $._number
    ),

    usebox_cs: $ => cs($,
      /(un[hv])?(box|copy)/
    ),

    movebox: $ => cmd($,
      $.movebox_cs,
      $.dimension,
      $._box,
    ),

    movebox_cs: $ => cs($,
      /move(left|right)|raise|lower/
    ),

    _box: $ => choice(
      $.mkbox,
      $.movebox,
      $.phantom_smash,
      $.strut,
      $.usebox
    ),

    setbox: $ => cmd($,
      $.setbox_cs,
      $._number,
      optional('='),
      $._box
    ),

    setbox_cs: $ => cs($, 'setbox'),

    box_dimension_assign: $ => cmd($,
      $.box_dimension_cs,
      $._number,
      optional('='),
      $.dimension
    ),

    box_dimension_cs: $ => cs($, /ht|dp|wd/),

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

    catcode: $ => cmd($,
      $.catcode_cs,
      $._number,
      optional('='),
      $._number
    ),

    catcode_cs: $ => cs($,
      /(cat|del|kcat|lc|math|sf|uc)code/
    ),

    chardef: $ => cmd($,
      $.chardef_cs,
      $.cs,
      optional('='),
      $._number
    ),

    chardef_cs: $ => cs($, /(math)?chardef/),

    catcode_ref: $ => cmd($,
      $.catcode_cs, $._number
    ),

    char: $ => cmd($,
      $.char_cs, $._number
    ),

    char_cs: $ => cs($, /(math)?char|accent/),

    // LaTex preamble commands

    documentclass: $ => prec.right(-2, cmd($,
      $.documentclass_cs,
      optional($.brack_group_text),
      $.name_group,
      optional($.brack_group_text)
    )),

    documentclass_cs: $ => cs($, 'documentclass'),

    documentstyle: $ => cmd($,
      $.documentstyle_cs,
      optional($.brack_group_text),
      $.name_group
    ),

    documentstyle_cs: $ => cs($, 'documentstyle'),

    usepackage: $ => prec.right(-2, cmd($,
      $.usepackage_cs,
      optional($.brack_group_text),
      $.name_group,
      optional($.brack_group_text)
    )),

    usepackage_cs: $ => cs($, 'usepackage'),

    // LaTeX definitions

    newcommand: $ => cmd($,
      $.newcommand_cs,
      optional('*'),
      $.text_group,
      optional($.brack_group_text),
      optional($.brack_group_text),
      $.text_group
    ),

    newcommand_cs: $ => cs($, /(DeclareRobust|Check)Command|(new|provide|renew)command/),

    newenvironment: $ => cmd($,
      $.newenvironment_cs,
      optional('*'),
      $.text_group,
      optional($.brack_group_text),
      optional($.brack_group_text),
      $.text_group,
      $.text_group
    ),

    newenvironment_cs: $ => cs($, /(re)?newenvironment/),

    // LaTeX boxes

    makebox: $ => cmd($,
      $.makebox_cs,
      optional(
        seq(
          $.brack_group_dimension,
          optional($.brack_group_text)
        ),
      ),
      $.text_group
    ),

    makebox_cs: $ => cs($, /(make|frame)box/),

    savebox: $ => cmd($,
      $.savebox_cs,
      $.text_group,
      optional($.brack_group_dimension),
      optional($.brack_group_text),
      $.text_group
    ),

    savebox_cs: $ => cs($, 'savebox'),

    makebox_cs: $ => cs($, /(make|frame)box/),

    parbox: $ => cmd($,
      $.parbox_cs,
      optional($.brack_group_text),
      optional($.brack_group_dimension),
      optional($.brack_group_text),
      $.group_dimension,
      $.text_group
    ),

    parbox_cs: $ => cs($, 'parbox'),

    minipage_env: $ => seq(
      $.minipage_begin,
      repeat($._text_mode),
      $.minipage_end
    ),

    minipage_begin: $ => begin_cmd($,
      $.minipage_env_group,
      optional($.brack_group_text),
      optional($.brack_group_dimension),
      optional($.brack_group_text),
      $.group_dimension
    ),

    minipage_end: $ => end_cmd($,
      $.minipage_env_group
    ),

    minipage_env_group: $ => seq(
      $.begin_group,
      $.minipage_env_name,
      $.end_group
    ),

    minipage_env_name: $ => 'minipage',

    // LaTeX font changing: text

    // \*family, \*series and \*shape skipped because they are zero argument
    // commands and are not used as operands.

    // It would be nice to collapse the following into single cmd rule, but
    // Atom seems pretty limited in the scope selectors.

    textrm: $ => cmd($,
      $.textrm_cs,
      $.text_group
    ),

    textrm_cs: $ => cs($, 'textrm'),

    textsf: $ => cmd($,
      $.textsf_cs,
      $.text_group
    ),

    textsf_cs: $ => cs($, 'textsf'),

    texttt: $ => cmd($,
      $.texttt_cs,
      $.text_group
    ),

    texttt_cs: $ => cs($, 'texttt'),

    textmd: $ => cmd($,
      $.textmd_cs,
      $.text_group
    ),

    textmd_cs: $ => cs($, 'textmd'),

    textbf: $ => cmd($,
      $.textbf_cs,
      $.text_group
    ),

    textbf_cs: $ => cs($, 'textbf'),

    textup: $ => cmd($,
      $.textup_cs,
      $.text_group
    ),

    textup_cs: $ => cs($, 'textup'),

    textit: $ => cmd($,
      $.textit_cs,
      $.text_group
    ),

    textit_cs: $ => cs($, 'textit'),

    textsl: $ => cmd($,
      $.textsl_cs,
      $.text_group
    ),

    textsl_cs: $ => cs($, 'textsl'),

    textsc: $ => cmd($,
      $.textsc_cs,
      $.text_group
    ),

    textsc_cs: $ => cs($, 'textsc'),

    emph: $ => cmd($,
      $.emph_cs,
      $.text_group
    ),

    emph_cs: $ => cs($, 'emph'),

    // LaTeX font changing: math

    // It would be nice to collapse the following into single cmd rule, but
    // Atom seems pretty limited in the scope selectors.

    mathrm: $ => cmd($,
      $.mathrm_cs,
      $.math_group
    ),

    mathrm_cs: $ => cs($, 'mathrm'),

    mathnormal: $ => cmd($,
      $.mathnormal_cs,
      $.math_group
    ),

    mathnormal_cs: $ => cs($, 'mathnormal'),

    mathcal: $ => cmd($,
      $.mathcal_cs,
      $.math_group
    ),

    mathcal_cs: $ => cs($, 'mathcal'),

    mathbf: $ => cmd($,
      $.mathbf_cs,
      $.math_group
    ),

    mathbf_cs: $ => cs($, 'mathbf'),

    mathsf: $ => cmd($,
      $.mathsf_cs,
      $.math_group
    ),

    mathsf_cs: $ => cs($, 'mathsf'),

    mathtt: $ => cmd($,
      $.mathtt_cs,
      $.math_group
    ),

    mathtt_cs: $ => cs($, 'mathtt'),

    mathit: $ => cmd($,
      $.mathit_cs,
      $.math_group
    ),

    mathit_cs: $ => cs($, 'mathit'),

    // hyperref functions

    href: $ => cmd($,
      $.href_cs,
      optional($.brack_group_text),
      $.text_group,
      $.text_group
    ),

    href_cs: $ => cs($, 'href'),

    url: $ => cmd($,
      $.url_cs,
      $.text_group
    ),

    url_cs: $ => cs($, /(nolink)?url/),

    hyperbaseurl: $ => cmd($,
      $.hyperbaseurl_cs,
      $.text_group
    ),

    hyperbaseurl_cs: $ => cs($, 'hyperbaseurl'),

    hyperimage: $ => cmd($,
      $.hyperimage_cs,
      $.text_group,
      $.text_group
    ),

    hyperimage_cs: $ => cs($, 'hyperimage'),

    hyperref: $ => choice(
      cmd($,
        $.hyperref_cs,
        $.text_group,
        $.text_group,
        $.text_group,
        $.text_group
      ),
      prec(-1,
        cmd($,
          $.hyperref_cs,
          optional($.brack_group_text),
          $.text_group
        )
      )
    ),

    hyperref_cs: $ => cs($, 'hyperref'),

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    group_dimension: $ => seq(
      $.begin_group, $.dimension, $.end_group
    ),

    brack_group_dimension: $ => seq(
      $.lbrack, $.dimension, $.rbrack
    ),

    name_group: $ => seq(
      $.begin_group, alias($.text, 'name'), $.end_group
    ),

    brack_group_text: $ => seq(
      $.lbrack, repeat($._text_mode), $.rbrack
    ),

    math_group: $ => seq(
      $.begin_group, repeat($._math_mode), $.end_group
    ),

    brack_group_math: $ => seq(
      $.lbrack, repeat($._math_mode), $.rbrack
    ),

    math_text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    lbrack: $ => '[',

    rbrack: $ => ']',

    text: $ => prec.left(-1,repeat1(/[^\]\[]/)),

    cs: $ => cs($, repeat1(/./)),

    escaped: $ => seq($._escape, $._non_letter_or_other),

    // fi introduced by LuaTeX
    unit: $ => /bp|cc|cm|dd|em|ex|fil{0,3}|in|mm|mu|nc|nd|pc|pt|sp/,

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
