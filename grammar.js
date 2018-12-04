function cs ($, name) {
  return seq($._cs_begin, name, $._cs_end)
}

function escaped ($, name) {
  return seq($._escaped_begin, name, $._escaped_end)
}

// This command is a placeholder for aliasing of cs
function cmd ($, cs) {
  return seq.apply(null, [alias(cs, 'cs')].concat(Array.prototype.slice.call(arguments, 2)))
}

function begin_cmd ($) {
  return (arguments.length > 1)
    ? seq.apply(null, [alias($.begin_cs, 'cs')].concat(Array.prototype.slice.call(arguments, 1)))
    : seq(alias($.begin_cs, 'cs'), $.name_group)
}

function end_cmd ($) {
  return (arguments.length > 1)
    ? seq.apply(null, [alias($.end_cs, 'cs')].concat(Array.prototype.slice.call(arguments, 1)))
    : seq(alias($.end_cs, 'cs'), $.name_group)
}

function group ($, contents) {
  return seq($.begin_group, contents, $.end_group)
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
    $.begin_group,
    $.bib_comment,
    $.comment,
    $.end_group,
    $.eol,
    $.exit_group,
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
    [$._word, $._word]
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
      $.parameter,
      $.parbox,
      $.savebox,
      $.setbox,
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

    parameter: $ => prec.left(-1, seq(
      repeat1($.parameter_char),
      optional(/[1-9]/)
    )),

    text_env: $ => seq(
      $.begin,
      repeat($._text_mode),
      choice($.end, $.exit_group)
    ),

    math_env: $ => seq(
      $.begin,
      repeat($._math_mode),
      choice($.end, $.exit_group)
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
        seq($.math_shift, $.exit_group),
        $.exit_group
      )
    ),

    latex_display_math: $ => seq(
      $.begin_display_math,
      repeat1($._math_mode),
      choice($.end_display_math, $.exit_group)
    ),

    begin_display_math: $ => escaped($, '['),

    end_display_math: $ => prec(-3, escaped($, ']')),

    display_math_env: $ => seq(
      $.display_math_begin,
      repeat1($._math_mode),
      choice($.display_math_end, $.exit_group)
    ),

    display_math_begin: $ => begin_cmd($,
      $.display_math_env_group,
      optional($.text_brack_group),
      optional($.text_group),
      $.eol
    ),

    display_math_end: $ => prec(-3, end_cmd($,
      $.display_math_env_group
    )),

    display_math_env_group: $ => group($, $.display_math_env_name),

    display_math_env_name: $ => /(displaymath|eqnarray\*?|align\*?|alignat\*?|equation\*?|flalign\*?|gather\*?|multiline\*?|split\*?|dmath\*?|dseries\*?|dgroup\*?|darray\*?)/,

    _inline_math: $ => choice(
      $.tex_inline_math,
      $.latex_inline_math,
      $.inline_math_env
    ),

    tex_inline_math: $ => seq(
      $.math_shift,
      repeat1($._math_mode),
      choice($.math_shift, $.exit_group)
    ),

    latex_inline_math: $ => seq(
      $.begin_inline_math,
      repeat($._math_mode),
      choice($.end_inline_math, $.exit_group)
    ),

    begin_inline_math: $ => escaped($, '('),

    end_inline_math: $ => escaped($, ')'),

    inline_math_env: $ => seq(
      $.inline_math_begin,
      repeat($._math_mode),
      choice($.inline_math_end, $.exit_group)
    ),

    inline_math_begin: $ => begin_cmd($,
      $.inline_math_env_group
    ),

    inline_math_end: $ => prec(-3, end_cmd($,
      $.inline_math_env_group
    )),

    inline_math_env_group: $ => group($, $.inline_math_env_name),

    inline_math_env_name: $ => 'math',

    ensuremath: $ => cmd($,
      $.ensuremath_cs,
      $.math_group
    ),

    ensuremath_cs: $ => cs($, $._ensuremath_word),

    _ensuremath_word: $ => 'ensuremath',

    tag: $ => cmd($, $.tag_cs, $.text_group),

    tag_cs: $ => cs($, $._tag_word),

    _tag_word: $ => 'tag',

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
      // We don't allow exit_group here since braces are meaningless in verbatim.
      $.verbatim_end
    ),

    verbatim_begin: $ => begin_cmd($,
      $.verbatim_env_group,
      optional($.text_brack_group),
      optional($.text_group),
      $.eol
    ),

    verbatim_end: $ => end_cmd($,
      $.verbatim_env_group
    ),

    verbatim_text: $ => repeat1($._verb_line),

    verbatim_env_group: $ => group($, $.verbatim_env_name),

    verbatim_env_name: $ => /verbatim|[BL]?Verbatim\*?|lstlisting|minted|alltt|filecontents\*?/,

    begin: $ => begin_cmd($),

    begin_cs: $ => cs($, $._begin_word),

    _begin_word: $ => 'begin',

    end: $ => end_cmd($),

    end_cs: $ => cs($, $._end_word),

    _end_word: $ => 'end',

    include: $ => cmd($,
      $.include_cs,
      $.text_group
    ),

    include_cs: $ => cs($, $._include_word),

    _include_word: $ => /include|input/,

    ProvidesExplClass: $ => cmd($,
      $.ProvidesExplClass_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group,
      $._expl_begin
    ),

    ProvidesExplClass_cs: $ => cs($, $._ProvidesExplClass_word),

    _ProvidesExplClass_word: $ => 'ProvidesExplClass',

    ProvidesExplFile: $ => cmd($,
      $.ProvidesExplFile_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group,
      $._expl_begin
    ),

    ProvidesExplFile_cs: $ => cs($, $._ProvidesExplFile_word),

    _ProvidesExplFile_word: $ => 'ProvidesExplFile',

    ProvidesExplPackage: $ => cmd($,
      $.ProvidesExplPackage_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group,
      $._expl_begin
    ),

    ProvidesExplPackage_cs: $ => cs($, $._ProvidesExplPackage_word),

    _ProvidesExplPackage_word: $ => 'ProvidesExplPackage',

    section: $ => cmd($,
      $.section_cs,
      optional('*'),
      optional($.text_brack_group),
      $.text_group
    ),

    section_cs: $ => cs($, $._section_word),

    _section_word: $ => /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/,

    storage: $ => cmd($, $.storage_cs),

    storage_cs: $ => cs($, $._storage_word),

    _storage_word: $ => /[egx]?def/,

    footnote: $ => cmd($,
      $.footnote_cs,
      optional($.text_brack_group),
      $.text_group
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
      $.text_group
    ),

    strut: $ => cmd($,
      $.strut_cs
    ),

    strut_cs: $ => cs($, $._strut_word),

    _strut_word: $ => /(math)?strut|null/,

    phantom_smash: $ => cmd($,
      $.phantom_smash_cs,
      $.text_group
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
        alias($.glue_cs, 'cs')
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
        alias($.dimension_cs, 'cs'),
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
      optional($.text_brack_group),
      $.name_group,
      optional($.text_brack_group)
    )),

    documentclass_cs: $ => cs($, $._documentclass_word),

    _documentclass_word: $ => 'documentclass',

    documentstyle: $ => cmd($,
      $.documentstyle_cs,
      optional($.text_brack_group),
      $.name_group
    ),

    documentstyle_cs: $ => cs($, $._documentstyle_word),

    _documentstyle_word: $ => 'documentstyle',

    use: $ => prec.right(-2, cmd($,
      $.use_cs,
      optional($.text_brack_group),
      $.name_group,
      optional($.text_brack_group)
    )),

    use_cs: $ => cs($, $._use_word),

    _use_word: $ => /usepackage|(LoadClass|RequirePackage)(WithOptions)?/,

    // LaTeX definitions

    newcommand: $ => cmd($,
      $.newcommand_cs,
      optional('*'),
      $.text_group,
      optional($.text_brack_group),
      optional($.text_brack_group),
      $.text_group
    ),

    newcommand_cs: $ => cs($, $._newcommand_word),

    _newcommand_word: $ => /(DeclareRobust|Check)Command|(new|provide|renew)command/,

    newenvironment: $ => cmd($,
      $.newenvironment_cs,
      optional('*'),
      $.text_group,
      optional($.text_brack_group),
      optional($.text_brack_group),
      $.text_group,
      $.text_group
    ),

    newenvironment_cs: $ => cs($, $._newenvironment_word),

    _newenvironment_word: $ => /(re)?newenvironment/,

    // LaTeX boxes

    makebox: $ => cmd($,
      $.makebox_cs,
      optional_seq(
        $.dimension_brack_group,
        $.text_brack_group,
      ),
      $.text_group
    ),

    makebox_cs: $ => cs($, $._makebox_word),

    _makebox_word: $ => /(make|frame)box/,

    savebox: $ => cmd($,
      $.savebox_cs,
      $.text_group,
      optional_seq(
        $.dimension_brack_group,
        $.text_brack_group
      ),
      $.text_group
    ),

    savebox_cs: $ => cs($, $._savebox_word),

    _savebox_word: $ => 'savebox',

    parbox: $ => cmd($,
      $.parbox_cs,
      optional_seq(
        $.text_brack_group,
        $.dimension_brack_group,
        $.text_brack_group
      ),
      $.dimension_group,
      $.text_group
    ),

    parbox_cs: $ => cs($, $._parbox_word),

    _parbox_word: $ => 'parbox',

    minipage_env: $ => seq(
      $.minipage_begin,
      repeat($._text_mode),
      choice($.minipage_end, $.exit_group)
    ),

    minipage_begin: $ => begin_cmd($,
      $.minipage_env_group,
      optional_seq(
        $.text_brack_group,
        $.dimension_brack_group,
        $.text_brack_group
      ),
      $.dimension_group
    ),

    minipage_end: $ => end_cmd($,
      $.minipage_env_group
    ),

    minipage_env_group: $ => group($, $.minipage_env_name),

    minipage_env_name: $ => 'minipage',

    // LaTeX Measuring things



    // LaTeX font changing: text

    // \*family, \*series and \*shape skipped because they are zero argument
    // commands and are not used as operands.

    // It would be nice to collapse the following into single cmd rule, but
    // Atom seems pretty limited in the scope selectors.

    textrm: $ => cmd($,
      $.textrm_cs,
      $.text_group
    ),

    textrm_cs: $ => cs($, $._textrm_word),

    _textrm_word: $ => 'textrm',

    textsf: $ => cmd($,
      $.textsf_cs,
      $.text_group
    ),

    textsf_cs: $ => cs($, $._textsf_word),

    _textsf_word: $ => 'textsf',

    texttt: $ => cmd($,
      $.texttt_cs,
      $.text_group
    ),

    texttt_cs: $ => cs($, $._texttt_word),

    _texttt_word: $ => 'texttt',

    textmd: $ => cmd($,
      $.textmd_cs,
      $.text_group
    ),

    textmd_cs: $ => cs($, $._textmd_word),

    _textmd_word: $ => 'textmd',

    textbf: $ => cmd($,
      $.textbf_cs,
      $.text_group
    ),

    textbf_cs: $ => cs($, $._textbf_word),

    _textbf_word: $ => 'textbf',

    textup: $ => cmd($,
      $.textup_cs,
      $.text_group
    ),

    textup_cs: $ => cs($, $._textup_word),

    _textup_word: $ => 'textup',

    textit: $ => cmd($,
      $.textit_cs,
      $.text_group
    ),

    textit_cs: $ => cs($, $._textit_word),

    _textit_word: $ => 'textit',

    textsl: $ => cmd($,
      $.textsl_cs,
      $.text_group
    ),

    textsl_cs: $ => cs($, $._textsl_word),

    _textsl_word: $ => 'textsl',

    textsc: $ => cmd($,
      $.textsc_cs,
      $.text_group
    ),

    textsc_cs: $ => cs($, $._textsc_word),

    _textsc_word: $ => 'textsc',

    emph: $ => cmd($,
      $.emph_cs,
      $.text_group
    ),

    emph_cs: $ => cs($, $._emph_word),

    _emph_word: $ => 'emph',

    // LaTeX font changing: math

    // It would be nice to collapse the following into single cmd rule, but
    // Atom seems pretty limited in the scope selectors.

    mathrm: $ => cmd($,
      $.mathrm_cs,
      $.math_group
    ),

    mathrm_cs: $ => cs($, $._mathrm_word),

    _mathrm_word: $ => 'mathrm',

    mathnormal: $ => cmd($,
      $.mathnormal_cs,
      $.math_group
    ),

    mathnormal_cs: $ => cs($, $._mathnormal_word),

    _mathnormal_word: $ => 'mathnormal',

    mathcal: $ => cmd($,
      $.mathcal_cs,
      $.math_group
    ),

    mathcal_cs: $ => cs($, $._mathcal_word),

    _mathcal_word: $ => 'mathcal',

    mathbf: $ => cmd($,
      $.mathbf_cs,
      $.math_group
    ),

    mathbf_cs: $ => cs($, $._mathbf_word),

    _mathbf_word: $ => 'mathbf',

    mathsf: $ => cmd($,
      $.mathsf_cs,
      $.math_group
    ),

    mathsf_cs: $ => cs($, $._mathsf_word),

    _mathsf_word: $ => 'mathsf',

    mathtt: $ => cmd($,
      $.mathtt_cs,
      $.math_group
    ),

    mathtt_cs: $ => cs($, $._mathtt_word),

    _mathtt_word: $ => 'mathtt',

    mathit: $ => cmd($,
      $.mathit_cs,
      $.math_group
    ),

    mathit_cs: $ => cs($, $._mathit_word),

    _mathit_word: $ => 'mathit',

    // LaTeX cls identification

    NeedsTeXFormat: $ => cmd($,
      $.NeedsTeXFormat_cs,
      $.text_group
    ),

    NeedsTeXFormat_cs: $ => cs($, $._NeedsTeXFormat_word),

    _NeedsTeXFormat_word: $ => 'NeedsTeXFormat',

    ProvidesPackage: $ => prec.right(-2, cmd($,
      $.ProvidesPackage_cs,
      $.text_group,
      optional($.text_brack_group)
    )),

    ProvidesPackage_cs: $ => cs($, $._ProvidesPackage_word),

    _ProvidesPackage_word: $ => 'ProvidesPackage',

    // LaTeX cls declaring options

    DeclareOption: $ => cmd($,
      $.DeclareOption_cs,
      choice('*', $.text_group),
      $.text_group
    ),

    DeclareOption_cs: $ => cs($, $._DeclareOption_word),

    _DeclareOption_word: $ => 'DeclareOption',

    PassOptionTo: $ => cmd($,
      $.PassOptionTo_cs,
      $.text_group,
      $.name_group
    ),

    PassOptionTo_cs: $ => cs($, $._PassOptionTo_word),

    _PassOptionTo_word: $ => /PassOptionTo(Class|Package)/,

    // LaTeX cls Delaying code

    At: $ => cmd($,
      $.At_cs,
      $.text_group
    ),

    At_cs: $ => cs($, $._At_word),

    _At_word: $ => /At(EndOfClass|EndOfPackage|BeginDocument|EndDocument|BeginDvi)/,

    // LaTeX cls Option processing

    ProcessOptions: $ => cmd($, $.ProcessOptions_cs, optional('*')),

    ProcessOptions_cs: $ => cs($, $._ProcessOptions_word),

    _ProcessOptions_word: $ => 'ProcessOptions',

    ExecuteOptions: $ => cmd($,
      $.ExecuteOptions_cs,
      $.name_group
    ),

    ExecuteOptions_cs: $ => cs($, $._ExecuteOptions_word),

    _ExecuteOptions_word: $ => 'ExecuteOptions',

    // LaTeX cls Safe file commands

    IfFileExists: $ => cmd($,
      $.IfFileExists_cs,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    IfFileExists_cs: $ => cs($, $._IfFileExists_word),

    _IfFileExists_word: $ => /(Input)?IfFileExists/,

    // LaTeX cls Reporting errors, etc

    Error: $ => cmd($,
      $.Error_cs,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    Error_cs: $ => cs($, $._Error_word),

    _Error_word: $ => /(Class|Package)Error/,

    WarningInfo: $ => cmd($,
      $.WarningInfo_cs,
      $.text_group,
      $.text_group
    ),

    WarningInfo_cs: $ => cs($, $._WarningInfo_word),

    _WarningInfo_word: $ => /(Class|Package)(Warning(NoLine)?|Info)/,

    // hyperref functions

    href: $ => cmd($,
      $.href_cs,
      optional($.text_brack_group),
      $.text_group,
      $.text_group
    ),

    href_cs: $ => cs($, $._href_word),

    _href_word: $ => 'href',

    url: $ => cmd($,
      $.url_cs,
      $.text_group
    ),

    url_cs: $ => cs($, $._url_word),

    _url_word: $ => /(nolink)?url/,

    hyperbaseurl: $ => cmd($,
      $.hyperbaseurl_cs,
      $.text_group
    ),

    hyperbaseurl_cs: $ => cs($, $._hyperbaseurl_word),

    _hyperbaseurl_word: $ => 'hyperbaseurl',

    hyperimage: $ => cmd($,
      $.hyperimage_cs,
      $.text_group,
      $.text_group
    ),

    hyperimage_cs: $ => cs($, $._hyperimage_word),

    _hyperimage_word: $ => 'hyperimage',

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
          optional($.text_brack_group),
          $.text_group
        )
      )
    ),

    hyperref_cs: $ => cs($, $._hyperref_word),

    _hyperref_word: $ => 'hyperref',

    // luacode

    lua: $ => cmd($,
      $.lua_cs,
      $._luadirect_begin,
      optional($._number),
      $.text_group,
      $._lua_end
    ),

    lua_cs: $ => cs($, $._lua_word),

    _lua_word: $ => /(direct|late)lua/,

    luadirect: $ => cmd($,
      $.luadirect_cs,
      $._luadirect_begin,
      $.text_group,
      $._lua_end
    ),

    luadirect_cs: $ => cs($, $._luadirect_word),

    _luadirect_word: $ => 'luadirect',

    luaexec: $ => cmd($,
      $.luaexec_cs,
      $._luaexec_begin,
      $.text_group,
      $._lua_end
    ),

    luaexec_cs: $ => cs($, $._luaexec_word),

    _luaexec_word: $ => 'luaexec',

    luacode_env: $ => seq(
      $.luacode_begin,
      repeat($._text_mode),
      choice($.luacode_end, $.exit_group)
    ),

    luacode_begin: $ => begin_cmd($,
      $.luacode_env_group,
      $._luacode_begin
    ),

    luacode_end: $ => end_cmd($,
      $.luacode_env_group,
      $._lua_end
    ),

    luacode_env_group: $ => group($, $.luacode_env_name),

    luacode_env_name: $ => 'luacode',

    luacodestar_env: $ => seq(
      $.luacodestar_begin,
      optional($.lua_text),
      // We don't allow exit_group since luacode* is a verbatim environment.
      $.luacodestar_end
    ),

    luacodestar_begin: $ => begin_cmd($,
      $.luacodestar_env_group,
      $.eol
    ),

    luacodestar_end: $ => end_cmd($,
      $.luacodestar_env_group
    ),

    lua_text: $ => repeat1($._verb_line),

    luacodestar_env_group: $ => group($, $.luacodestar_env_name),

    luacodestar_env_name: $ => 'luacode*',

    // pgf/tikz

    tikzpicture_env: $ => seq(
      $.tikzpicture_begin,
      repeat($._text_mode),
      choice($.tikzpicture_end, $.exit_group)
    ),

    tikzpicture_begin: $ => begin_cmd($,
      $.tikzpicture_env_group
    ),

    tikzpicture_end: $ => prec(-3, end_cmd($,
      $.tikzpicture_env_group
    )),

    tikzpicture_env_group: $ => group($, $.tikzpicture_env_name),

    tikzpicture_env_name: $ => 'tikzpicture',

    // Common rules

    text_group: $ => group($, repeat($._text_mode)),

    dimension_group: $ => group($, $.dimension),

    dimension_brack_group: $ => brack_group($, $.dimension),

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
      'name')
    ),

    text_brack_group: $ => brack_group($, repeat($._text_mode)),

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
          $._savebox_word,
          $._section_word,
          $._setbox_word,
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

    // This rule unused. It exists merely make aliasing of cs work.
    _snafu: $ => seq(
      $.At_cs,
      $.begin_cs,
      $.box_dimension_cs,
      $.catcode_cs,
      $.char_cs,
      $.chardef_cs,
      $.DeclareOption_cs,
      $.dimension_cs,
      $.documentclass_cs,
      $.documentstyle_cs,
      $.emph_cs,
      $.end_cs,
      $.ensuremath_cs,
      $.Error_cs,
      $.ExecuteOptions_cs,
      $.ExplSyntaxOff_cs,
      $.ExplSyntaxOn_cs,
      $.footnote_cs,
      $.glue_cs,
      $.glue_space_cs,
      $.href_cs,
      $.hyperbaseurl_cs,
      $.hyperimage_cs,
      $.hyperref_cs,
      $.IfFileExists_cs,
      $.include_cs,
      $.lua_cs,
      $.luadirect_cs,
      $.luaexec_cs,
      $.makeatletter_cs,
      $.makeatother_cs,
      $.makebox_cs,
      $.mathbf_cs,
      $.mathcal_cs,
      $.mathit_cs,
      $.mathnormal_cs,
      $.mathrm_cs,
      $.mathsf_cs,
      $.mathtt_cs,
      $.mkbox_cs,
      $.movebox_cs,
      $.NeedsTeXFormat_cs,
      $.newcommand_cs,
      $.newenvironment_cs,
      $.parbox_cs,
      $.PassOptionTo_cs,
      $.phantom_smash_cs,
      $.ProcessOptions_cs,
      $.ProvidesExplClass_cs,
      $.ProvidesExplFile_cs,
      $.ProvidesExplPackage_cs,
      $.ProvidesPackage_cs,
      $.savebox_cs,
      $.section_cs,
      $.setbox_cs,
      $.storage_cs,
      $.strut_cs,
      $.tag_cs,
      $.textbf_cs,
      $.textit_cs,
      $.textmd_cs,
      $.textrm_cs,
      $.textsc_cs,
      $.textsf_cs,
      $.textsl_cs,
      $.texttt_cs,
      $.textup_cs,
      $.url_cs,
      $.use_cs,
      $.usebox_cs,
      $.verb_cs,
      $.WarningInfo_cs
    ),

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
