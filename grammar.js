function cs ($, name) {
  return seq($._cs_begin, name, $._cs_end)
}

function escaped ($, name) {
  return seq($._escaped_begin, name, $._escaped_end)
}

function cmd ($, cs, ...args) {
  return seq(alias(cs, $.cs), ...args)
}

function cmd_opt ($, cs, ...args) {
  cs = alias(cs, $.cs)

  return (args.length === 0)
    ? cs
    : prec.right(-1, seq(cs, optional(seq(...args))))
}

function begin_cmd ($, ...args) {
  const cs = alias($.begin_cs, $.cs)

  return (args.length === 0)
    ? seq(cs, alias($.name_group, $.group))
    : seq(cs, ...args)
}

function end_cmd ($, ...args) {
  const cs = alias($.end_cs, $.cs)

  return (args.length === 0)
    ? seq(cs, alias($.name_group, $.group))
    : seq(cs, ...args)
}

function group ($, contents) {
  return seq($.l, contents, $.r)
}

function brack_group ($, contents) {
  return seq($.lbrack, contents, $.rbrack)
}

function optional_seq () {
  var result

  for (var i = arguments.length - 1; i > -1; i--) {
    result = optional(
      result
        ? seq(arguments[i], result)
        : arguments[i])
  }

  return result
}

module.exports = grammar({
  name: 'latex',

  externals: $ => [
    $._at_letter,
    $._at_other,
    $._cs_begin,
    $._cs_end,
    $._default_catcodes,
    $._escaped_begin,
    $._escaped_end,
    $._expl_begin,
    $._expl_end,
    $._lua_end,
    $._luacode_begin,
    $._luadirect_begin,
    $._luaexec_begin,
    $._space,
    $._verb_line,
    $.active_char,
    $.alignment_tab,
    $.arara_comment,
    $.bib_comment,
    $.comment,
    $.eol,
    $.exit,
    $.l,
    $.magic_comment,
    $.math_shift,
    $.parameter_char,
    $.r,
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
    document: $ => repeat($._text_mode),

    _common: $ => choice(
      $._box,
      $.active_char,
      $.alignment_tab,
      $.box_dimension_assign,
      $.catcode,
      $.char,
      $.chardef,
      $.cite,
      $.cs,
      $.dimension_assign,
      $.ensuremath,
      $.escaped,
      $.ExplSyntaxOff,
      $.ExplSyntaxOn,
      $.glue_assign,
      $.glue_space,
      $.include,
      $.lua,
      $.luacode_env,
      $.luacodestar_env,
      $.luadirect,
      $.luaexec,
      $.makeatletter,
      $.makeatother,
      $.makebox,
      $.minipage_env,
      $.newcommand,
      $.newenvironment,
      $.parameter_ref,
      $.parbox,
      $.ref,
      $.savebox,
      $.setbox,
      $.setlength,
      $.storage,
      $.text,
      $.tikzpicture_env
    ),

    inline_verbatim: $ => cmd($,
      $.verb_cs,
      $.verb_delim,
      $.verb_body,
      $.verb_delim
    ),

    verb_cs: $ => cs($, $._verb_word),

    _verb_word: $ => 'verb',

    _text_mode: $ => choice(
      $._common,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, $.text),
      alias($.superscript, $.text),
      $.verbatim_env,
      $.inline_verbatim,
      $._display_math,
      $._inline_math,
      $.text_env,
      $.group,
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
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
      $.ProvidesExplClass,
      $.ProvidesExplFile,
      $.ProvidesExplPackage,
      $.documentclass,
      $.documentstyle,
      $.section,
      $.use,
      $.footnote,
      $.end_inline_math,
      $.end_display_math,
      // LaTeX cls
      $.NeedsTeXFormat,
      $.ProvidesPackage,
      $.DeclareOption,
      $.PassOptionTo,
      $.At,
      $.ProcessOptions,
      $.ExecuteOptions,
      $.IfFileExists,
      $.Error,
      $.WarningInfo,
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
      alias($.math_group, $.group),
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
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

    parameter_ref: $ => seq(
      $.parameter_char,
      optional(/[1-9]/)
    ),

    text_env: $ => seq(
      $.begin,
      repeat($._text_mode),
      choice($.end, $.exit)
    ),

    math_env: $ => seq(
      $.begin,
      repeat($._math_mode),
      choice($.end, $.exit)
    ),

    _display_math: $ => choice(
      $.tex_display_math,
      $.latex_display_math,
      $.display_math_env
    ),

    tex_display_math: $ => seq(
      $.math_shift, $.math_shift,
      repeat($._math_mode),
      choice(
        seq($.math_shift, $.math_shift),
        seq($.math_shift, $.exit),
        $.exit
      )
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      repeat1($._math_mode),
      choice($.end_display_math, $.exit)
    ),

    begin_display_math: $ => escaped($, '['),

    end_display_math: $ => prec(-3, escaped($, ']')),

    display_math_env: $ => seq(
      alias($.display_math_begin, $.begin),
      repeat1($._math_mode),
      choice(alias($.display_math_end, $.end), $.exit)
    ),

    display_math_begin: $ => begin_cmd($,
      alias($.display_math_env_group, $.group),
      optional($.brack_group),
      optional($._parameter),
      $.eol
    ),

    display_math_end: $ => prec(-3, end_cmd($,
      alias($.display_math_env_group, $.group)
    )),

    display_math_env_group: $ => group($, alias($.display_math_env_name, $.name)),

    display_math_env_name: $ => /(displaymath|eqnarray\*?|align\*?|alignat\*?|equation\*?|flalign\*?|gather\*?|multiline\*?|split\*?|dmath\*?|dseries\*?|dgroup\*?|darray\*?)/,

    _inline_math: $ => choice(
      $.tex_inline_math,
      $.latex_inline_math,
      $.inline_math_env
    ),

    tex_inline_math: $ => seq(
      $.math_shift,
      repeat1($._math_mode),
      choice($.math_shift, $.exit)
    ),

    latex_inline_math: $ => seq(
      $.begin_inline_math,
      repeat($._math_mode),
      choice($.end_inline_math, $.exit)
    ),

    begin_inline_math: $ => escaped($, '('),

    end_inline_math: $ => escaped($, ')'),

    inline_math_env: $ => seq(
      alias($.inline_math_begin, $.begin),
      repeat($._math_mode),
      choice(alias($.inline_math_end, $.end), $.exit)
    ),

    inline_math_begin: $ => begin_cmd($,
      alias($.inline_math_env_group, $.group)
    ),

    inline_math_end: $ => prec(-3, end_cmd($,
      alias($.inline_math_env_group, $.group)
    )),

    inline_math_env_group: $ => group($, alias($.inline_math_env_name, $.name)),

    inline_math_env_name: $ => 'math',

    ensuremath: $ => cmd_opt($,
      $.ensuremath_cs,
      alias($.math_group, $.group)
    ),

    ensuremath_cs: $ => cs($, $._ensuremath_word),

    _ensuremath_word: $ => 'ensuremath',

    tag: $ => cmd_opt($, $.tag_cs, $._parameter),

    tag_cs: $ => cs($, $._tag_word),

    _tag_word: $ => 'tag',

    verbatim_env: $ => seq(
      alias($.verbatim_begin, $.begin),
      optional($.verbatim_text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.verbatim_end, $.end)
    ),

    verbatim_begin: $ => begin_cmd($,
      alias($.verbatim_env_group, $.group),
      optional($.brack_group),
      optional($._parameter),
      $.eol
    ),

    verbatim_end: $ => end_cmd($,
      alias($.verbatim_env_group, $.group)
    ),

    verbatim_text: $ => repeat1($._verb_line),

    verbatim_env_group: $ => group($, alias($.verbatim_env_name, $.name)),

    verbatim_env_name: $ => /verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt|filecontents\*?/,

    begin: $ => begin_cmd($),

    begin_cs: $ => cs($, $._begin_word),

    _begin_word: $ => 'begin',

    end: $ => end_cmd($),

    end_cs: $ => cs($, $._end_word),

    _end_word: $ => 'end',

    include: $ => cmd_opt($,
      $.include_cs,
      $._parameter
    ),

    include_cs: $ => cs($, $._include_word),

    _include_word: $ => /include|input/,

    ProvidesExplClass: $ => cmd_opt($,
      $.ProvidesExplClass_cs,
      $._parameter,
      $._parameter,
      $._parameter,
      $._parameter,
      $._expl_begin
    ),

    ProvidesExplClass_cs: $ => cs($, $._ProvidesExplClass_word),

    _ProvidesExplClass_word: $ => 'ProvidesExplClass',

    ProvidesExplFile: $ => cmd_opt($,
      $.ProvidesExplFile_cs,
      $._parameter,
      $._parameter,
      $._parameter,
      $._parameter,
      $._expl_begin
    ),

    ProvidesExplFile_cs: $ => cs($, $._ProvidesExplFile_word),

    _ProvidesExplFile_word: $ => 'ProvidesExplFile',

    ProvidesExplPackage: $ => cmd_opt($,
      $.ProvidesExplPackage_cs,
      $._parameter,
      $._parameter,
      $._parameter,
      $._parameter,
      $._expl_begin
    ),

    ProvidesExplPackage_cs: $ => cs($, $._ProvidesExplPackage_word),

    _ProvidesExplPackage_word: $ => 'ProvidesExplPackage',

    section: $ => cmd_opt($,
      $.section_cs,
      optional('*'),
      optional($.brack_group),
      $._parameter,
    ),

    section_cs: $ => cs($, $._section_word),

    _section_word: $ => /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/,

    storage: $ => cmd($,
      $.storage_cs,
      $.cs,
      repeat(
        choice(
          $.parameter_ref,
          $.text,
          alias($.lbrack, $.text),
          alias($.rbrack, $.text)
        )
      ),
      $._parameter
    ),

    storage_cs: $ => cs($, $._storage_word),

    _storage_word: $ => /[egx]?def/,

    footnote: $ => cmd_opt($,
      $.footnote_cs,
      optional($.brack_group),
      $._parameter
    ),

    footnote_cs: $ => cs($, $._footnote_word),

    _footnote_word: $ => 'footnote',

    makeatletter: $ => cmd($,
      $.makeatletter_cs,
      $._at_letter,
    ),

    makeatletter_cs: $ => cs($, $._makeatletter_word),

    _makeatletter_word: $ => 'makeatletter',

    makeatother: $ => cmd($,
      $.makeatother_cs,
      $._at_other
    ),

    makeatother_cs: $ => cs($, $._makeatother_word),

    _makeatother_word: $ => 'makeatother',

    ExplSyntaxOn: $ => cmd($,
      $.ExplSyntaxOn_cs,
      $._expl_begin
    ),

    ExplSyntaxOn_cs: $ => cs($, $._ExplSyntaxOn_word),

    _ExplSyntaxOn_word: $ => 'ExplSyntaxOn',

    ExplSyntaxOff: $ => cmd($,
      $.ExplSyntaxOff_cs,
      $._expl_end
    ),

    ExplSyntaxOff_cs: $ => cs($, $._ExplSyntaxOff_word),

    _ExplSyntaxOff_word: $ => 'ExplSyntaxOff',

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

    glue_cs: $ => cs($, $._glue_word),

    _glue_word: $ => /(((above|below)display(short)?|baseline|left|line|normalbaseline|normalline|parfill|par|right|splittop|tab|top|x?space)skip)|(small|mid|big)skipamount/,

    dimension_cs: $ => cs($, $._dimension_word),

    _dimension_word: $ => /(h|v)(offset|size|badness|fuzz)|boxmaxdepth|displayindent|displaywidth|emergencystretch|hangindent|lineskiplimit|maxdepth|normallineskiplimit|overfullrule|page(fil{1,3)stretch|page(depth|goal|shrink|total)|parindent|predisplaysize|prevdepth|splitmaxdepth/,

    glue_space: $ => cmd($,
      $.glue_space_cs,
      $.glue
    ),

    glue_space_cs: $ => cs($, $._glue_space_word),

    _glue_space_word: $ => /[hmv]skip|(h|top|v)glue/,

    mkbox: $ => cmd($,
      $.mkbox_cs,
      optional(
        seq(
          choice('to', 'spread'),
          $.dimension
        )
      ),
      $._parameter
    ),

    strut: $ => cmd($,
      $.strut_cs
    ),

    strut_cs: $ => cs($, $._strut_word),

    _strut_word: $ => /(math)?strut|null/,

    phantom_smash: $ => cmd_opt($,
      $.phantom_smash_cs,
      $._parameter
    ),

    phantom_smash_cs: $ => cs($, $._phantom_smash_word),

    _phantom_smash_word: $ => /[hv]?phantom|smash/,

    mkbox_cs: $ => cs($, $._mkbox_word),

    _mkbox_word: $ => /[hv]box|vtop/,

    usebox: $ => cmd($,
      $.usebox_cs,
      $._number
    ),

    usebox_cs: $ => cs($, $._usebox_word),

    _usebox_word: $ => /(un[hv])?(box|copy)/,

    movebox: $ => cmd($,
      $.movebox_cs,
      $.dimension,
      $._box,
    ),

    movebox_cs: $ => cs($, $._movebox_word),

    _movebox_word: $ => /move(left|right)|raise|lower/,

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

    setbox_cs: $ => cs($, $._setbox_word),

    _setbox_word: $ => 'setbox',

    box_dimension_assign: $ => cmd($,
      $.box_dimension_cs,
      $._number,
      optional('='),
      $.dimension
    ),

    box_dimension_cs: $ => cs($, $._box_dimension_word),

    _box_dimension_word: $ => /ht|dp|wd/,

    glue: $ => choice(
      seq(
        optional($.fixed),
        alias($.glue_cs, $.cs)
      ),
      seq(
        $.dimension,
        optional(seq('plus', $.dimension)),
        optional(seq('minus', $.dimension))
      )
    ),

    box_dimension_ref: $ => cmd($,
      $.box_dimension_cs,
      $._number
    ),

    dimension: $ => seq(
      optional($.fixed),
      choice(
        $.unit,
        $.box_dimension_ref,
        alias($.dimension_cs, $.cs),
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

    catcode_cs: $ => cs($, $._catcode_word),

    _catcode_word: $ => /(cat|del|kcat|lc|math|sf|uc)code/,

    chardef: $ => cmd($,
      $.chardef_cs,
      $.cs,
      optional('='),
      $._number
    ),

    chardef_cs: $ => cs($, $._chardef_word),

    _chardef_word: $ => /(math)?chardef/,

    catcode_ref: $ => cmd($,
      $.catcode_cs, $._number
    ),

    char: $ => cmd($,
      $.char_cs, $._number
    ),

    char_cs: $ => cs($, $._char_word),

    _char_word: $ => /(math)?char|accent/,

    // LaTex preamble commands

    documentclass: $ => prec.right(-2, cmd($,
      $.documentclass_cs,
      optional($.brack_group),
      alias($.name_group, $.group),
      optional($.brack_group)
    )),

    documentclass_cs: $ => cs($, $._documentclass_word),

    _documentclass_word: $ => 'documentclass',

    documentstyle: $ => cmd($,
      $.documentstyle_cs,
      optional($.brack_group),
      alias($.name_group, $.group)
    ),

    documentstyle_cs: $ => cs($, $._documentstyle_word),

    _documentstyle_word: $ => 'documentstyle',

    use: $ => prec.right(-2, cmd($,
      $.use_cs,
      optional($.brack_group),
      alias($.name_group, $.group),
      optional($.brack_group)
    )),

    use_cs: $ => cs($, $._use_word),

    _use_word: $ => /usepackage|(LoadClass|RequirePackage)(WithOptions)?/,

    // LaTeX definitions

    newcommand: $ => cmd($,
      $.newcommand_cs,
      optional('*'),
      $._cs_parameter,
      optional($.brack_group),
      optional($.brack_group),
      $._parameter
    ),

    newcommand_cs: $ => cs($, $._newcommand_word),

    _newcommand_word: $ => /(DeclareRobust|Check)Command|(new|provide|renew)command/,

    newenvironment: $ => cmd($,
      $.newenvironment_cs,
      optional('*'),
      alias($.name_group, $.group),
      optional($.brack_group),
      optional($.brack_group),
      $._parameter,
      $._parameter
    ),

    newenvironment_cs: $ => cs($, $._newenvironment_word),

    _newenvironment_word: $ => /(re)?newenvironment/,

    // LaTeX boxes

    makebox: $ => cmd_opt($,
      $.makebox_cs,
      optional_seq(
        alias($.dimension_brack_group, $.brack_group),
        $.brack_group,
      ),
      $._parameter
    ),

    makebox_cs: $ => cs($, $._makebox_word),

    _makebox_word: $ => /(make|frame)box/,

    savebox: $ => cmd_opt($,
      $.savebox_cs,
      $._parameter,
      optional_seq(
        alias($.dimension_brack_group, $.brack_group),
        $.brack_group
      ),
      $._parameter
    ),

    savebox_cs: $ => cs($, $._savebox_word),

    _savebox_word: $ => 'savebox',

    parbox: $ => cmd_opt($,
      $.parbox_cs,
      optional_seq(
        $.brack_group,
        alias($.dimension_brack_group, $.brack_group),
        $.brack_group
      ),
      alias($.dimension_group, $.group),
      $._parameter
    ),

    parbox_cs: $ => cs($, $._parbox_word),

    _parbox_word: $ => 'parbox',

    minipage_env: $ => seq(
      alias($.minipage_begin, $.begin),
      repeat($._text_mode),
      choice(alias($.minipage_end, $.end), $.exit)
    ),

    minipage_begin: $ => begin_cmd($,
      alias($.minipage_env_group, $.group),
      optional_seq(
        $.brack_group,
        alias($.dimension_brack_group, $.brack_group),
        $.brack_group
      ),
      alias($.dimension_group, $.group)
    ),

    minipage_end: $ => end_cmd($,
      alias($.minipage_env_group, $.group),
    ),

    minipage_env_group: $ => group($, alias($.minipage_env_name, $.name)),

    minipage_env_name: $ => 'minipage',

    // LaTeX lengths

    setlength: $ => cmd($,
      $.setlength_cs,
      $._cs_parameter,
      alias($.dimension_group, $.group)
    ),

    setlength_cs: $ => cs($, $._setlength_word),

    _setlength_word: $ => 'setlength',

    // LaTeX Measuring things



    // LaTeX font changing: text

    // \*family, \*series and \*shape skipped because they are zero argument
    // commands and are not used as operands.

    // It would be nice to collapse the following into single cmd rule, but
    // Atom seems pretty limited in the scope selectors.

    textrm: $ => cmd_opt($,
      $.textrm_cs,
      $._parameter
    ),

    textrm_cs: $ => cs($, $._textrm_word),

    _textrm_word: $ => 'textrm',

    textsf: $ => cmd_opt($,
      $.textsf_cs,
      $._parameter
    ),

    textsf_cs: $ => cs($, $._textsf_word),

    _textsf_word: $ => 'textsf',

    texttt: $ => cmd_opt($,
      $.texttt_cs,
      $._parameter
    ),

    texttt_cs: $ => cs($, $._texttt_word),

    _texttt_word: $ => 'texttt',

    textmd: $ => cmd_opt($,
      $.textmd_cs,
      $._parameter
    ),

    textmd_cs: $ => cs($, $._textmd_word),

    _textmd_word: $ => 'textmd',

    textbf: $ => cmd_opt($,
      $.textbf_cs,
      $._parameter
    ),

    textbf_cs: $ => cs($, $._textbf_word),

    _textbf_word: $ => 'textbf',

    textup: $ => cmd_opt($,
      $.textup_cs,
      $._parameter
    ),

    textup_cs: $ => cs($, $._textup_word),

    _textup_word: $ => 'textup',

    textit: $ => cmd_opt($,
      $.textit_cs,
      $._parameter
    ),

    textit_cs: $ => cs($, $._textit_word),

    _textit_word: $ => 'textit',

    textsl: $ => cmd_opt($,
      $.textsl_cs,
      $._parameter
    ),

    textsl_cs: $ => cs($, $._textsl_word),

    _textsl_word: $ => 'textsl',

    textsc: $ => cmd_opt($,
      $.textsc_cs,
      $._parameter
    ),

    textsc_cs: $ => cs($, $._textsc_word),

    _textsc_word: $ => 'textsc',

    emph: $ => cmd_opt($,
      $.emph_cs,
      $._parameter
    ),

    emph_cs: $ => cs($, $._emph_word),

    _emph_word: $ => 'emph',

    // LaTeX font changing: math

    // It would be nice to collapse the following into single cmd rule, but
    // Atom seems pretty limited in the scope selectors.

    mathrm: $ => cmd_opt($,
      $.mathrm_cs,
      alias($.math_group, $.group)
    ),

    mathrm_cs: $ => cs($, $._mathrm_word),

    _mathrm_word: $ => 'mathrm',

    mathnormal: $ => cmd_opt($,
      $.mathnormal_cs,
      alias($.math_group, $.group)
    ),

    mathnormal_cs: $ => cs($, $._mathnormal_word),

    _mathnormal_word: $ => 'mathnormal',

    mathcal: $ => cmd_opt($,
      $.mathcal_cs,
      alias($.math_group, $.group)
    ),

    mathcal_cs: $ => cs($, $._mathcal_word),

    _mathcal_word: $ => 'mathcal',

    mathbf: $ => cmd_opt($,
      $.mathbf_cs,
      alias($.math_group, $.group)
    ),

    mathbf_cs: $ => cs($, $._mathbf_word),

    _mathbf_word: $ => 'mathbf',

    mathsf: $ => cmd_opt($,
      $.mathsf_cs,
      alias($.math_group, $.group)
    ),

    mathsf_cs: $ => cs($, $._mathsf_word),

    _mathsf_word: $ => 'mathsf',

    mathtt: $ => cmd_opt($,
      $.mathtt_cs,
      alias($.math_group, $.group)

    ),
    mathtt_cs: $ => cs($, $._mathtt_word),

    _mathtt_word: $ => 'mathtt',

    mathit: $ => cmd_opt($,
      $.mathit_cs,
      alias($.math_group, $.group)
    ),

    mathit_cs: $ => cs($, $._mathit_word),

    _mathit_word: $ => 'mathit',

    // LaTeX cite, etc.

    cite: $ => cmd_opt($,
      $.cite_cs,
      optional('*'),
      optional($.brack_group),
      $._name_parameter
    ),

    cite_cs: $ => cs($, $._cite_word),

    _cite_word: $ => /(no)?cite|cite(t|p|lt|lp|text|alt|alp|num|author|year|yearpar|fullauthor|talias|palias)|Cite(t|p|alt|alp|author)/,

    ref: $ => cmd_opt($, $.ref_cs, $._parameter),

    ref_cs: $ => cs($, $._ref_word),

    _ref_word: $ => /(auto|name|page|eq)ref/,

    // LaTeX cls identification

    NeedsTeXFormat: $ => cmd($,
      $.NeedsTeXFormat_cs,
      $._parameter
    ),

    NeedsTeXFormat_cs: $ => cs($, $._NeedsTeXFormat_word),

    _NeedsTeXFormat_word: $ => 'NeedsTeXFormat',

    ProvidesPackage: $ => prec.right(-2, cmd($,
      $.ProvidesPackage_cs,
      $._parameter,
      optional($.brack_group)
    )),

    ProvidesPackage_cs: $ => cs($, $._ProvidesPackage_word),

    _ProvidesPackage_word: $ => 'ProvidesPackage',

    // LaTeX cls declaring options

    DeclareOption: $ => cmd_opt($,
      $.DeclareOption_cs,
      choice('*', $._parameter),
      $._parameter
    ),

    DeclareOption_cs: $ => cs($, $._DeclareOption_word),

    _DeclareOption_word: $ => 'DeclareOption',

    PassOptionTo: $ => cmd_opt($,
      $.PassOptionTo_cs,
      $._parameter,
      alias($.name_group, $.group)
    ),

    PassOptionTo_cs: $ => cs($, $._PassOptionTo_word),

    _PassOptionTo_word: $ => /PassOptionTo(Class|Package)/,

    // LaTeX cls Delaying code

    At: $ => cmd_opt($,
      $.At_cs,
      $._parameter
    ),

    At_cs: $ => cs($, $._At_word),

    _At_word: $ => /At(EndOfClass|EndOfPackage|BeginDocument|EndDocument|BeginDvi)/,

    // LaTeX cls Option processing

    ProcessOptions: $ => cmd($, $.ProcessOptions_cs, optional('*')),

    ProcessOptions_cs: $ => cs($, $._ProcessOptions_word),

    _ProcessOptions_word: $ => 'ProcessOptions',

    ExecuteOptions: $ => cmd_opt($,
      $.ExecuteOptions_cs,
      alias($.name_group, $.group)
    ),

    ExecuteOptions_cs: $ => cs($, $._ExecuteOptions_word),

    _ExecuteOptions_word: $ => 'ExecuteOptions',

    // LaTeX cls Safe file commands

    IfFileExists: $ => cmd_opt($,
      $.IfFileExists_cs,
      $._parameter,
      $._parameter,
      $._parameter
    ),

    IfFileExists_cs: $ => cs($, $._IfFileExists_word),

    _IfFileExists_word: $ => /(Input)?IfFileExists/,

    // LaTeX cls Reporting errors, etc

    Error: $ => cmd_opt($,
      $.Error_cs,
      $._parameter,
      $._parameter,
      $._parameter
    ),

    Error_cs: $ => cs($, $._Error_word),

    _Error_word: $ => /(Class|Package)Error/,

    WarningInfo: $ => cmd_opt($,
      $.WarningInfo_cs,
      $._parameter,
      $._parameter
    ),

    WarningInfo_cs: $ => cs($, $._WarningInfo_word),

    _WarningInfo_word: $ => /(Class|Package)(Warning(NoLine)?|Info)/,

    // hyperref functions

    href: $ => cmd_opt($,
      $.href_cs,
      optional($.brack_group),
      $._parameter,
      $._parameter
    ),

    href_cs: $ => cs($, $._href_word),

    _href_word: $ => 'href',

    url: $ => cmd_opt($,
      $.url_cs,
      $._parameter
    ),

    url_cs: $ => cs($, $._url_word),

    _url_word: $ => /(nolink)?url/,

    hyperbaseurl: $ => cmd_opt($,
      $.hyperbaseurl_cs,
      $._parameter
    ),

    hyperbaseurl_cs: $ => cs($, $._hyperbaseurl_word),

    _hyperbaseurl_word: $ => 'hyperbaseurl',

    hyperimage: $ => cmd_opt($,
      $.hyperimage_cs,
      $._parameter,
      $._parameter
    ),

    hyperimage_cs: $ => cs($, $._hyperimage_word),

    _hyperimage_word: $ => 'hyperimage',

    hyperref: $ => choice(
      cmd_opt($,
        $.hyperref_cs,
        $._parameter,
        $._parameter,
        $._parameter,
        $._parameter
      ),
      cmd_opt($,
        $.hyperref_cs,
        optional($.brack_group),
        $._parameter
      )
    ),

    hyperref_cs: $ => cs($, $._hyperref_word),

    _hyperref_word: $ => 'hyperref',

    // luacode

    lua: $ => cmd($,
      $.lua_cs,
      $._luadirect_begin,
      optional($._number),
      $._parameter,
      $._lua_end
    ),

    lua_cs: $ => cs($, $._lua_word),

    _lua_word: $ => /(direct|late)lua/,

    luadirect: $ => cmd($,
      $.luadirect_cs,
      $._luadirect_begin,
      $._parameter,
      $._lua_end
    ),

    luadirect_cs: $ => cs($, $._luadirect_word),

    _luadirect_word: $ => 'luadirect',

    luaexec: $ => cmd($,
      $.luaexec_cs,
      $._luaexec_begin,
      $._parameter,
      $._lua_end
    ),

    luaexec_cs: $ => cs($, $._luaexec_word),

    _luaexec_word: $ => 'luaexec',

    luacode_env: $ => seq(
      alias($.luacode_begin, $.begin),
      repeat($._text_mode),
      choice(alias($.luacode_end, $.end), $.exit)
    ),

    luacode_begin: $ => begin_cmd($,
      alias($.luacode_env_group, $.group),
      $._luacode_begin
    ),

    luacode_end: $ => end_cmd($,
      alias($.luacode_env_group, $.group),
      $._lua_end
    ),

    luacode_env_group: $ => group($, alias($.luacode_env_name, $.name)),

    luacode_env_name: $ => 'luacode',

    luacodestar_env: $ => seq(
      alias($.luacodestar_begin, $.begin),
      optional($.lua_text),
      // We don't allow exit since luacode* is a verbatim environment.
      alias($.luacodestar_end, $.end)
    ),

    luacodestar_begin: $ => begin_cmd($,
      alias($.luacodestar_env_group, $.group),
      $.eol
    ),

    luacodestar_end: $ => end_cmd($,
      alias($.luacodestar_env_group, $.group)
    ),

    lua_text: $ => repeat1($._verb_line),

    luacodestar_env_group: $ => group($, alias($.luacodestar_env_name, $.name)),

    luacodestar_env_name: $ => 'luacode*',

    // pgf/tikz

    tikzpicture_env: $ => seq(
      alias($.tikzpicture_begin, $.begin),
      repeat($._text_mode),
      choice(alias($.tikzpicture_end, $.end), $.exit)
    ),

    tikzpicture_begin: $ => begin_cmd($,
      alias($.tikzpicture_env_group, $.group)
    ),

    tikzpicture_end: $ => prec(-3, end_cmd($,
      alias($.tikzpicture_env_group, $.group)
    )),

    tikzpicture_env_group: $ => group($, alias($.tikzpicture_env_name, $.name)),

    tikzpicture_env_name: $ => 'tikzpicture',

    // Common rules

    group: $ => group($, repeat($._text_mode)),

    _parameter: $ => choice($.group, $.cs),

    dimension_group: $ => group($, $.dimension),

    dimension_brack_group: $ => brack_group($, $.dimension),

    _cs_parameter: $ => choice($.cs, alias($.cs_group, $.group)),

    cs_group: $ => group($, $.cs),

    name_group: $ => group($, alias(
      seq(
        optional(
          choice(
            $.display_math_env_name,
            $.inline_math_env_name,
            $.luacode_env_name,
            $.luacodestar_env_name,
            $.minipage_env_name,
            $.tikzpicture_env_name,
            $.verbatim_env_name
          )
        ),
        $.text
      ),
      $.name)
    ),

    _name_parameter: $ => choice(alias($.name_group, $.group), $.cs),

    brack_group: $ => brack_group($, repeat($._text_mode)),

    math_group: $ => group($, repeat($._math_mode)),

    math_brack_group: $ => brack_group($, repeat($._math_mode)),

    lbrack: $ => '[',

    rbrack: $ => ']',

    text: $ => prec.left(-1,repeat1(/[^\]\[]/)),

    cs: $ =>  cs($, $._word),

    _word: $ => prec.left(-1, choice(
      seq(
        choice(
          $._At_word,
          $._begin_word,
          $._box_dimension_word,
          $._catcode_word,
          $._char_word,
          $._chardef_word,
          $._cite_word,
          $._DeclareOption_word,
          $._dimension_word,
          $._documentclass_word,
          $._documentstyle_word,
          $._emph_word,
          $._end_word,
          $._ensuremath_word,
          $._Error_word,
          $._ExecuteOptions_word,
          $._ExplSyntaxOff_word,
          $._ExplSyntaxOn_word,
          $._footnote_word,
          $._glue_space_word,
          $._glue_word,
          $._href_word,
          $._hyperbaseurl_word,
          $._hyperimage_word,
          $._hyperref_word,
          $._IfFileExists_word,
          $._include_word,
          $._lua_word,
          $._luadirect_word,
          $._luaexec_word,
          $._makeatletter_word,
          $._makeatother_word,
          $._makebox_word,
          $._mathbf_word,
          $._mathcal_word,
          $._mathit_word,
          $._mathnormal_word,
          $._mathrm_word,
          $._mathsf_word,
          $._mathtt_word,
          $._mkbox_word,
          $._movebox_word,
          $._NeedsTeXFormat_word,
          $._newcommand_word,
          $._newenvironment_word,
          $._parbox_word,
          $._PassOptionTo_word,
          $._phantom_smash_word,
          $._ProcessOptions_word,
          $._ProvidesExplClass_word,
          $._ProvidesExplFile_word,
          $._ProvidesExplPackage_word,
          $._ProvidesPackage_word,
          $._ref_word,
          $._savebox_word,
          $._section_word,
          $._setbox_word,
          $._setlength_word,
          $._storage_word,
          $._strut_word,
          $._tag_word,
          $._textbf_word,
          $._textit_word,
          $._textmd_word,
          $._textrm_word,
          $._textsc_word,
          $._textsf_word,
          $._textsl_word,
          $._texttt_word,
          $._textup_word,
          $._url_word,
          $._use_word,
          $._usebox_word,
          $._verb_word,
          $._WarningInfo_word
        ),
        repeat(/./)
      ),
      repeat1(/./)
    )),

    escaped: $ => escaped($, /[^()\[\]]/),

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
