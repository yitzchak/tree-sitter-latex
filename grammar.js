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

function end_cmd ($) {
  return (arguments.length > 1)
    ? seq.apply(null, [$.end_cs].concat(Array.prototype.slice.call(arguments, 1)))
    : seq($.end_cs, $.name_group)
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
    $._cs_end,
    $._default_catcodes,
    $._escape,
    $._expl_begin,
    $._expl_end,
    $._lua_end,
    $._luacode_begin,
    $._luadirect_begin,
    $._luaexec_begin,
    $._non_letter_or_other,
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
      $.ensuremath,
      $.ExplSyntaxOff,
      $.ExplSyntaxOn,
      $.glue_assign,
      $.glue_space,
      $.lua,
      $.luadirect,
      $.luaexec,
      $.luacode_env,
      $.luacodestar_env,
      $.makeatletter,
      $.makeatother,
      $.newcommand,
      $.newenvironment,
      $.makebox,
      $.parbox,
      $.minipage_env,
      $.savebox,
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
      $.ProvidesExplClass,
      $.ProvidesExplFile,
      $.ProvidesExplPackage,
      $.documentclass,
      $.documentstyle,
      $.section,
      $.use,
      $.footnote,
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

    inline_math_env_group: $ => group($, $.inline_math_env_name),

    inline_math_env_name: $ => 'math',

    ensuremath: $ => cmd($,
      $.ensuremath_cs,
      $.math_group
    ),

    ensuremath_cs: $ => cs($, 'ensuremath'),

    tag: $ => cmd($, $.tag_cs, $.text_group),

    tag_cs: $ => cs($, 'tag'),

    verbatim_env: $ => seq(
      $.verbatim_begin,
      optional($.verbatim_text),
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

    begin_cs: $ => cs($, 'begin'),

    end: $ => end_cmd($),

    end_cs: $ => cs($, 'end'),

    include: $ => cmd($,
      $.include_cs,
      $.text_group
    ),

    include_cs: $ => cs($, /include|input/),

    ProvidesExplClass: $ => cmd($,
      $.ProvidesExplClass_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group,
      $._expl_begin
    ),

    ProvidesExplClass_cs: $ => cs($, 'ProvidesExplClass'),

    ProvidesExplFile: $ => cmd($,
      $.ProvidesExplFile_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group,
      $._expl_begin
    ),

    ProvidesExplFile_cs: $ => cs($, 'ProvidesExplFile'),

    ProvidesExplPackage: $ => cmd($,
      $.ProvidesExplPackage_cs,
      $.text_group,
      $.text_group,
      $.text_group,
      $.text_group,
      $._expl_begin
    ),

    ProvidesExplPackage_cs: $ => cs($, 'ProvidesExplPackage'),

    section: $ => cmd($,
      $.section_cs,
      optional('*'),
      optional($.text_brack_group),
      $.text_group
    ),

    section_cs: $ => cs($,
      /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/
    ),

    storage: $ => cmd($, $.storage_cs),

    storage_cs: $ => cs($, /[egx]?def/),

    footnote: $ => cmd($,
      $.footnote_cs,
      optional($.text_brack_group),
      $.text_group
    ),

    footnote_cs: $ => cs($, 'footnote'),

    makeatletter: $ => cmd($,
      $.makeatletter_cs,
      $._at_letter,
    ),

    makeatletter_cs: $ => cs($, 'makeatletter'),

    makeatother: $ => cmd($,
      $.makeatother_cs,
      $._at_other
    ),

    makeatother_cs: $ => cs($, 'makeatother'),

    ExplSyntaxOn: $ => cmd($,
      $.ExplSyntaxOn_cs,
      $._expl_begin
    ),

    ExplSyntaxOn_cs: $ => cs($, 'ExplSyntaxOn'),

    ExplSyntaxOff: $ => cmd($,
      $.ExplSyntaxOff_cs,
      $._expl_end
    ),

    ExplSyntaxOff_cs: $ => cs($, 'ExplSyntaxOff'),

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
      optional($.text_brack_group),
      $.name_group,
      optional($.text_brack_group)
    )),

    documentclass_cs: $ => cs($, 'documentclass'),

    documentstyle: $ => cmd($,
      $.documentstyle_cs,
      optional($.text_brack_group),
      $.name_group
    ),

    documentstyle_cs: $ => cs($, 'documentstyle'),

    use: $ => prec.right(-2, cmd($,
      $.use_cs,
      optional($.text_brack_group),
      $.name_group,
      optional($.text_brack_group)
    )),

    use_cs: $ => cs($, /usepackage|(LoadClass|RequirePackage)(WithOptions)?/),

    // LaTeX definitions

    newcommand: $ => cmd($,
      $.newcommand_cs,
      optional('*'),
      $.text_group,
      optional($.text_brack_group),
      optional($.text_brack_group),
      $.text_group
    ),

    newcommand_cs: $ => cs($, /(DeclareRobust|Check)Command|(new|provide|renew)command/),

    newenvironment: $ => cmd($,
      $.newenvironment_cs,
      optional('*'),
      $.text_group,
      optional($.text_brack_group),
      optional($.text_brack_group),
      $.text_group,
      $.text_group
    ),

    newenvironment_cs: $ => cs($, /(re)?newenvironment/),

    // LaTeX boxes

    makebox: $ => cmd($,
      $.makebox_cs,
      optional_seq(
        $.dimension_brack_group,
        $.text_brack_group,
      ),
      $.text_group
    ),

    makebox_cs: $ => cs($, /(make|frame)box/),

    savebox: $ => cmd($,
      $.savebox_cs,
      $.text_group,
      optional_seq(
        $.dimension_brack_group,
        $.text_brack_group
      ),
      $.text_group
    ),

    savebox_cs: $ => cs($, 'savebox'),

    makebox_cs: $ => cs($, /(make|frame)box/),

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

    parbox_cs: $ => cs($, 'parbox'),

    minipage_env: $ => seq(
      $.minipage_begin,
      repeat($._text_mode),
      $.minipage_end
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

    // LaTeX cls identification

    NeedsTeXFormat: $ => cmd($,
      $.NeedsTeXFormat_cs,
      $.text_group
    ),

    NeedsTeXFormat_cs: $ => cs($, 'NeedsTeXFormat'),

    ProvidesPackage: $ => prec.right(-2, cmd($,
      $.ProvidesPackage_cs,
      $.text_group,
      optional($.text_brack_group)
    )),

    ProvidesPackage_cs: $ => cs($, 'ProvidesPackage'),

    // LaTeX cls declaring options

    DeclareOption: $ => cmd($,
      $.DeclareOption_cs,
      choice('*', $.text_group),
      $.text_group
    ),

    DeclareOption_cs: $ => cs($, 'DeclareOption'),

    PassOptionTo: $ => cmd($,
      $.PassOptionTo_cs,
      $.text_group,
      $.name_group
    ),

    PassOptionTo_cs: $ => cs($, /PassOptionTo(Class|Package)/),

    // LaTeX cls Delaying code

    At: $ => cmd($,
      $.At_cs,
      $.text_group
    ),

    At_cs: $ => cs($,
      /At(EndOfClass|EndOfPackage|BeginDocument|EndDocument|BeginDvi)/
    ),

    // LaTeX cls Option processing

    ProcessOptions: $ => cmd($, $.ProcessOptions_cs, optional('*')),

    ProcessOptions_cs: $ => cs($, 'ProcessOptions'),

    ExecuteOptions: $ => cmd($,
      $.ExecuteOptions_cs,
      $.name_group
    ),

    ExecuteOptions_cs: $ => cs($, 'ExecuteOptions'),

    // LaTeX cls Safe file commands

    IfFileExists: $ => cmd($,
      $.IfFileExists_cs,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    IfFileExists_cs: $ => cs($, /(Input)?IfFileExists/),

    // LaTeX cls Reporting errors, etc

    Error: $ => cmd($,
      $.Error_cs,
      $.text_group,
      $.text_group,
      $.text_group
    ),

    Error_cs: $ => cs($, /(Class|Package)Error/),

    WarningInfo: $ => cmd($,
      $.WarningInfo_cs,
      $.text_group,
      $.text_group
    ),

    WarningInfo_cs: $ => cs($, /(Class|Package)(Warning(NoLine)?|Info)/),

    // hyperref functions

    href: $ => cmd($,
      $.href_cs,
      optional($.text_brack_group),
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
          optional($.text_brack_group),
          $.text_group
        )
      )
    ),

    hyperref_cs: $ => cs($, 'hyperref'),

    // luacode

    lua: $ => cmd($,
      $.lua_cs,
      $._luadirect_begin,
      optional($._number),
      $.text_group,
      $._lua_end
    ),

    lua_cs: $ => cs($, /(direct|late)lua/),

    luadirect: $ => cmd($,
      $.luadirect_cs,
      $._luadirect_begin,
      $.text_group,
      $._lua_end
    ),

    luadirect_cs: $ => cs($, 'luadirect'),

    luaexec: $ => cmd($,
      $.luaexec_cs,
      $._luaexec_begin,
      $.text_group,
      $._lua_end
    ),

    luaexec_cs: $ => cs($, 'luaexec'),

    luacode_env: $ => seq(
      $.luacode_begin,
      repeat($._text_mode),
      $.luacode_end
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

    // Common rules

    text_group: $ => group($, repeat($._text_mode)),

    dimension_group: $ => group($, $.dimension),

    dimension_brack_group: $ => brack_group($, $.dimension),

    name_group: $ => group($, alias($.text, 'name')),

    text_brack_group: $ => brack_group($, repeat($._text_mode)),

    math_group: $ => group($, repeat($._math_mode)),

    math_brack_group: $ => brack_group($, repeat($._math_mode)),

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

    // digit: $ => /[1-9]/,

    octal: $ => /'[0-7]+/,

    hexadecimal: $ => /"[0-9a-fA-F]+/,

    charcode: $ => seq('`', choice($.escaped, /./))
  }
})
