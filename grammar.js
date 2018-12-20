const readdir = require('readdir-enhanced')
const path = require('path')

const DECIMAL_DIGIT = choice('0', '1', '2', '3', '4', '5', '6', '7', '8', '9')
const ONE_MORE_DECIMAL_DIGITS = prec.right(2, repeat1(DECIMAL_DIGIT))
const ZERO_MORE_DECIMAL_DIGITS = prec.right(2, repeat(DECIMAL_DIGIT))
const SIGN = choice('+', '-')
const FIXED_PATTERN = choice(
  SIGN,
  seq(optional(SIGN), ONE_MORE_DECIMAL_DIGITS, optional(seq('.', ZERO_MORE_DECIMAL_DIGITS))),
  seq(optional(SIGN), '.', ONE_MORE_DECIMAL_DIGITS)
)

function cs ($, name) {
  return seq($._cs_begin, name, $._cs_end)
}

function escaped ($, name) {
  return seq($._escaped_begin, name, $._escaped_end)
}

function cmd ($, cs, ...args) {
  cs = alias(cs, $.cs)

  return (args.length === 0)
    ? cs
    : seq(cs, ...args)
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

function group ($, ...contents) {
  return seq($.l, $._scope_begin, ...contents, $.r, $._scope_end)
}

function simple_group ($, ...contents) {
  return seq(choice($.l, $.bgroup), $._scope_begin, ...contents, choice($.r, $.egroup), $._scope_end)
}

function semi_simple_group ($, ...contents) {
  return seq($.begingroup, $._scope_begin, ...contents, choice($.endgroup, $.exit), $._scope_end)
}

function brack_group ($, contents) {
  return seq($.lbrack, contents, $.rbrack)
}

function optional_seq (...args) {
  var result

  for (var i = args.length - 1; i > -1; i--) {
    result = optional(
      result
        ? seq(args[i], result)
        : args[i])
  }

  return result
}

let common_rules = [], math_rules = [], text_rules = [], name_rules = []

let g = {
  name: 'latex',

  externals: $ => [
    $.__ccc_alltt,
    $.__ccc_at_letter,
    $.__ccc_at_other,
    $.__ccc_expl_begin,
    $.__ccc_expl_end,
    $.__ccc_l3doc,
    $.__ccc_luacode,
    $.__ccc_luadirect,
    $.__ccc_luaexec,
    $.__ccc_pipe_verb_delim,
    $._cs_begin,
    $._cs_end,
    $._escaped_begin,
    $._escaped_end,
    $._scope_begin,
    $._scope_end,
    $._space,
    $.active_char,
    $.alignment_tab,
    $.arara_comment,
    $.bib_comment,
    $.BVerbatim_body,
    $.BVerbatimstar_body,
    $.comment_body,
    $.comment,
    $.delete_verb_delim,
    $.eol,
    $.exit,
    $.filecontents_body,
    $.filecontentsstar_body,
    $.l,
    $.lstlisting_body,
    $.luacodestar_body,
    $.LVerbatim_body,
    $.LVerbatimstar_body,
    $.magic_comment,
    $.make_verb_delim,
    $.math_shift,
    $.minted_body,
    $.parameter_char,
    $.r,
    $.short_verb_delim,
    $.subscript,
    $.superscript,
    $.tag_comment,
    $.verb_body,
    $.verb_delim,
    $.verb_end_delim,
    $.verbatim_body,
    $.Verbatim_body,
    $.verbatimstar_body,
    $.Verbatimstar_body,
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

    _common: $ => choice(...common_rules.map(name => $[name]),
      // $._box,
      // $.box_dimension_assign,
      $.active_char,
      $.alignment_tab,
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
      $.luadirect,
      $.luaexec,
      $.makeatletter,
      $.makeatother,
      $.makebox,
      $.newcommand,
      $.newenvironment,
      $.parameter_ref,
      $.parbox,
      $.ref,
      $.savebox,
      $.setlength,
      $.storage,
      $.string,
      $.text,
    ),

    verb: $ => choice(
      cmd($,
        $.verb_cs,
        $.verb_delim,
        alias($.verb_body, $.text),
        alias($.verb_end_delim, $.verb_delim)
      ),
      seq(
        alias($.short_verb_delim, $.verb_delim),
        alias($.verb_body, $.text),
        alias($.verb_end_delim, $.verb_delim)
      )
    ),

    verb_cs: $ => cs($, $._verb_word),

    _verb_word: $ => 'verb',

    _text_mode: $ => choice(...text_rules.map(name => $[name]),
      $._common,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, $.text),
      alias($.superscript, $.text),
      $.verb,
      $.MakeShortVerb,
      $.DeleteShortVerb,
      $._display_math,
      $._inline_math,
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
      $.ProvidesExpl,
      $.documentclass,
      $.documentstyle,
      $.section,
      $.use,
      $.footnote,
      $.end_inline_math,
      $.end_display_math,
      // LaTeX cls
      $.NeedsTeXFormat,
      $.Provides,
      $.DeclareOption,
      $.semi_simple_group,
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

    _math_mode: $ => choice(...math_rules.map(name => $[name]),
      $._common,
      $.subscript,
      $.superscript,
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

    parameter_ref: $ => seq(
      $.parameter_char,
      optional(/[1-9]/)
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
      repeat($._math_mode),
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
      $.latex_inline_math
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

    ensuremath: $ => cmd_opt($,
      $.ensuremath_cs,
      alias($.math_group, $.group)
    ),

    ensuremath_cs: $ => cs($, $._ensuremath_word),

    _ensuremath_word: $ => 'ensuremath',

    tag: $ => cmd_opt($, $.tag_cs, $._parameter),

    tag_cs: $ => cs($, $._tag_word),

    _tag_word: $ => 'tag',

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

    ProvidesExpl: $ => cmd_opt($,
      $.ProvidesExpl_cs,
      $._parameter,
      $._parameter,
      $._parameter,
      $._parameter,
      $.__ccc_expl_begin
    ),

    ProvidesExpl_cs: $ => cs($, $._ProvidesExpl_word),

    _ProvidesExpl_word: $ => /ProvidesExpl(Class|File|Package)/,

    section: $ => cmd_opt($,
      $.section_cs,
      optional('*'),
      optional($.brack_group),
      $._parameter,
    ),

    section_cs: $ => cs($, $._section_word),

    _section_word: $ => /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/,

    storage: $ => cmd_opt($,
      $.storage_cs,
      choice($.cs, $.escaped),
      repeat(
        choice(
          $.parameter_ref,
          $.text,
          alias($.lbrack, $.text),
          alias($.rbrack, $.text),
          $.text,
          $.escaped
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
      $.__ccc_at_letter,
    ),

    makeatletter_cs: $ => cs($, $._makeatletter_word),

    _makeatletter_word: $ => 'makeatletter',

    makeatother: $ => cmd($,
      $.makeatother_cs,
      $.__ccc_at_other
    ),

    makeatother_cs: $ => cs($, $._makeatother_word),

    _makeatother_word: $ => 'makeatother',

    ExplSyntaxOn: $ => cmd($,
      $.ExplSyntaxOn_cs,
      $.__ccc_expl_begin
    ),

    ExplSyntaxOn_cs: $ => cs($, $._ExplSyntaxOn_word),

    _ExplSyntaxOn_word: $ => 'ExplSyntaxOn',

    ExplSyntaxOff: $ => cmd($,
      $.ExplSyntaxOff_cs,
      $.__ccc_expl_end
    ),

    ExplSyntaxOff_cs: $ => cs($, $._ExplSyntaxOff_word),

    _ExplSyntaxOff_word: $ => 'ExplSyntaxOff',

    string: $ => cmd_opt($,
      $.string_cs,
      choice($.cs, $.active_char, $.parameter_char, $.escaped)
    ),

    string_cs: $ => cs($, $._string_word),

    _string_word: $ => 'string',

    // TeX dimension commands

    dimension_assign: $ => cmd_opt($,
      $.dimension_cs,
      optional('='),
      $._dimension
    ),

    glue_assign: $ => cmd_opt($,
      $.glue_cs,
      optional('='),
      $.glue
    ),

    glue_cs: $ => cs($, $._glue_word),

    _glue_word: $ => /(((above|below)display(short)?|baseline|left|line|normalbaseline|normalline|parfill|par|right|splittop|tab|top|x?space)skip)|(small|mid|big)skipamount/,

    dimension_cs: $ => cs($, $._dimension_word),

    _dimension_word: $ => /(h|v)(offset|size|badness|fuzz)|boxmaxdepth|displayindent|displaywidth|emergencystretch|hangindent|lineskiplimit|maxdepth|normallineskiplimit|overfullrule|page(fil{1,3)stretch|page(depth|goal|shrink|total)|parindent|predisplaysize|prevdepth|splitmaxdepth/,

    glue_space: $ => cmd_opt($,
      $.glue_space_cs,
      $.glue
    ),

    glue_space_cs: $ => cs($, $._glue_space_word),

    _glue_space_word: $ => /[hmv]skip|(h|top|v)glue/,

    // mkbox: $ => cmd($,
    //   $.mkbox_cs,
    //   optional(
    //     seq(
    //       choice('to', 'spread'),
    //       $._dimension
    //     )
    //   ),
    //   $._parameter
    // ),
    //
    // strut: $ => cmd($,
    //   $.strut_cs
    // ),
    //
    // strut_cs: $ => cs($, $._strut_word),
    //
    // _strut_word: $ => /(math)?strut|null/,
    //
    // phantom_smash: $ => cmd_opt($,
    //   $.phantom_smash_cs,
    //   $._parameter
    // ),
    //
    // phantom_smash_cs: $ => cs($, $._phantom_smash_word),
    //
    // _phantom_smash_word: $ => /[hv]?phantom|smash/,
    //
    // mkbox_cs: $ => cs($, $._mkbox_word),
    //
    // _mkbox_word: $ => /[hv]box|vtop/,
    //
    // usebox: $ => cmd($,
    //   $.usebox_cs,
    //   choice($._number, $.cs, $.parameter_ref)
    // ),
    //
    // usebox_cs: $ => cs($, $._usebox_word),
    //
    // _usebox_word: $ => /(un[hv])?(box|copy)/,
    //
    // movebox: $ => cmd($,
    //   $.movebox_cs,
    //   $._dimension,
    //   $._box,
    // ),
    //
    // movebox_cs: $ => cs($, $._movebox_word),
    //
    // _movebox_word: $ => /move(left|right)|raise|lower/,
    //
    // _box: $ => choice(
    //   $.mkbox,
    //   $.movebox,
    //   $.phantom_smash,
    //   $.strut,
    //   $.usebox,
    //   $.setbox
    // ),
    //
    // setbox: $ => cmd_opt($,
    //   $.setbox_cs,
    //   choice($._number, $.cs, $.parameter_ref),
    //   optional('='),
    //   $._box
    // ),
    //
    // setbox_cs: $ => cs($, $._setbox_word),
    //
    // _setbox_word: $ => 'setbox',
    //
    // box_dimension_assign: $ => cmd($,
    //   $.box_dimension_cs,
    //   choice($._number, $.cs, $.parameter_ref),
    //   optional('='),
    //   $._dimension
    // ),
    //
    // box_dimension_cs: $ => cs($, $._box_dimension_word),
    //
    // _box_dimension_word: $ => /ht|dp|wd/,

    glue: $ => /*choice(
      seq(
        optional($.fixed),
        alias($.glue_cs, $.cs)
      ),*/
      seq(
        $._dimension,
        optional(seq('plus', $._dimension)),
        optional(seq('minus', $._dimension))
      // )
    ),

    // box_dimension_ref: $ => cmd($,
    //   $.box_dimension_cs,
    //   choice($._number, $.cs, $.parameter_ref)
    // ),

    _dimension: $ => choice(
      $.dimension,
      // seq(optional($.fixed), $.box_dimension_ref),
      prec.right(-1, seq(optional($.fixed), $.cs))
    ),

    // TeX character functions

    catcode: $ => prec.right(-1, cmd($,
      $.catcode_cs,
      optional(choice($._number, $.cs, $.parameter_ref)),
      optional('='),
      optional(choice($._number, $.cs, $.parameter_ref))
    )),

    catcode_cs: $ => cs($, $._catcode_word),

    _catcode_word: $ => /(cat|del|kcat|lc|math|sf|uc)code/,

    chardef: $ => cmd_opt($,
      $.chardef_cs,
      $.cs,
      optional('='),
      choice($._number, $.cs, $.parameter_ref)
    ),

    chardef_cs: $ => cs($, $._chardef_word),

    _chardef_word: $ => /(math)?chardef/,

    catcode_ref: $ => cmd($,
      $.catcode_cs, choice($._number, $.cs, $.parameter_ref)
    ),

    char: $ => cmd_opt($,
      $.char_cs, choice($._number, $.cs, $.parameter_ref)
    ),

    char_cs: $ => cs($, $._char_word),

    _char_word: $ => /(math)?char|accent/,

    // LaTex preamble commands

    documentclass: $ => cmd_opt($,
      $.documentclass_cs,
      optional($.brack_group),
      choice(
        alias($.name_group, $.group),
        seq(alias($.l3doc_name_group, $.group), $.__ccc_l3doc),
        seq(alias($.pipe_name_group, $.group), $.__ccc_pipe_verb_delim),
      ),
      optional($.brack_group)
    ),

    l3doc_name_group: $ => group($, alias($.l3doc_class_name, $.name)),

    l3doc_class_name: $ => /l3doc(-TUB)?/,

    pipe_name_group: $ => group($, alias($.pipe_class_name, $.name)),

    pipe_class_name: $ => /ltxdoc|ltxguide|nlctdoc|plnews/,

    documentclass_cs: $ => cs($, $._documentclass_word),

    _documentclass_word: $ => 'documentclass',

    documentstyle: $ => cmd_opt($,
      $.documentstyle_cs,
      optional($.brack_group),
      alias($.name_group, $.group)
    ),

    documentstyle_cs: $ => cs($, $._documentstyle_word),

    _documentstyle_word: $ => 'documentstyle',

    use: $ => cmd_opt($,
      $.use_cs,
      optional($.brack_group),
      alias($.name_group, $.group),
      optional($.brack_group)
    ),

    use_cs: $ => cs($, $._use_word),

    _use_word: $ => /usepackage|(LoadClass|RequirePackage)(WithOptions)?/,

    // LaTeX definitions

    newcommand: $ => cmd_opt($,
      $.newcommand_cs,
      optional('*'),
      $._cs_parameter,
      optional($.brack_group),
      optional($.brack_group),
      $._parameter
    ),

    newcommand_cs: $ => cs($, $._newcommand_word),

    _newcommand_word: $ => /(DeclareRobust|Check)Command|(new|provide|renew)command/,

    newenvironment: $ => cmd_opt($,
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

    // LaTeX lengths

    setlength: $ => cmd_opt($,
      $.setlength_cs,
      $._parameter,
      optional(alias($.glue_group, $.group))
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

    NeedsTeXFormat: $ => cmd_opt($,
      $.NeedsTeXFormat_cs,
      $._parameter
    ),

    NeedsTeXFormat_cs: $ => cs($, $._NeedsTeXFormat_word),

    _NeedsTeXFormat_word: $ => 'NeedsTeXFormat',

    Provides: $ => cmd_opt($,
      $.Provides_cs,
      $._parameter,
      $.__ccc_at_letter,
      optional($.brack_group)
    ),

    Provides_cs: $ => cs($, $._Provides_word),

    _Provides_word: $ => /Provides(Class|Package|File)/,

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

    lua: $ => cmd_opt($,
      $.lua_cs,
      optional($._number),
      $._luadirect_parameter,
    ),

    lua_cs: $ => cs($, $._lua_word),

    _lua_word: $ => /(direct|late)lua/,

    _luadirect_parameter: $ => choice($.cs, alias($.luadirect_group, $.group)),

    luadirect_group: $ => group($, $.__ccc_luadirect, repeat($._text_mode)),

    luadirect: $ => cmd_opt($,
      $.luadirect_cs,
      $._luadirect_parameter,
    ),

    luadirect_cs: $ => cs($, $._luadirect_word),

    _luadirect_word: $ => 'luadirect',

    luaexec: $ => cmd_opt($,
      $.luaexec_cs,
      $._luaexec_parameter,
    ),

    luaexec_cs: $ => cs($, $._luaexec_word),

    _luaexec_word: $ => 'luaexec',

    _luaexec_parameter: $ => choice($.cs, alias($.luaexec_group, $.group)),

    luaexec_group: $ => group($, $.__ccc_luaexec, repeat($._text_mode)),


    // shortvrb

    MakeShortVerb: $ => cmd_opt($,
      $.MakeShortVerb_cs,
      optional('*'),
      choice(
        alias($.make_verb_delim, $.escaped),
        alias($.make_verb_delim_group, $.group)
      )
    ),

    make_verb_delim_group: $ => group($,
      choice(
        alias($.make_verb_delim, $.escaped),
        repeat($._text_mode)
      )
    ),

    MakeShortVerb_cs: $ => cs($, $._MakeShortVerb_word),

    _MakeShortVerb_word: $ => /(Make|Define)ShortVerb/,

    DeleteShortVerb: $ => cmd_opt($,
      $.DeleteShortVerb_cs,
      choice(
        alias($.delete_verb_delim, $.escaped),
        alias($.delete_verb_delim_group, $.group)
      )
    ),

    delete_verb_delim_group: $ => group($,
      choice(
        alias($.delete_verb_delim, $.escaped),
        repeat($._text_mode)
      )
    ),

    DeleteShortVerb_cs: $ => cs($, $._DeleteShortVerb_word),

    _DeleteShortVerb_word: $ => /(Delete|Undefine)ShortVerb/,

    // Common rules

    group: $ => group($, repeat($._text_mode)),

    semi_simple_group: $ => semi_simple_group($, repeat($._text_mode)),

    _parameter: $ => choice($.group, $.cs),

    dimension_group: $ => group($,
      seq(
        optional($._dimension),
        repeat($._text_mode)
      )
    ),

    dimension_brack_group: $ => brack_group($,
      seq(
        optional($._dimension),
        repeat($._text_mode)
      )
    ),

    glue_group: $ => group($,
      seq(
        optional($.glue),
        repeat($._text_mode)
      )
    ),

    glue_brack_group: $ => brack_group($,
      seq(
        optional($.glue),
        repeat($._text_mode)
      )
    ),

    _cs_parameter: $ => choice(
      $.begin_display_math,
      $.begin_inline_math,
      $.cs,
      $.end_display_math,
      $.end_inline_math,
      $.escaped,
      alias($.cs_group, $.group)
    ),

    cs_group: $ => group($,
      choice(
        $.begin_display_math,
        $.begin_inline_math,
        $.cs,
        $.end_display_math,
        $.end_inline_math,
        $.escaped
      )
    ),

    name_group: $ => group($, alias(
      seq(
        optional(
          choice(...name_rules.map(name => $[name]),
            $.display_math_env_name,
            $.l3doc_class_name,
            $.pipe_class_name
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
          $._begingroup_word,
          $._bgroup_word,
          // $._box_dimension_word,
          $._catcode_word,
          $._char_word,
          $._chardef_word,
          $._cite_word,
          $._DeclareOption_word,
          $._DeleteShortVerb_word,
          $._dimension_word,
          $._documentclass_word,
          $._documentstyle_word,
          $._egroup_word,
          $._emph_word,
          $._end_word,
          $._endgroup_word,
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
          $._MakeShortVerb_word,
          $._mathbf_word,
          $._mathcal_word,
          $._mathit_word,
          $._mathnormal_word,
          $._mathrm_word,
          $._mathsf_word,
          $._mathtt_word,
          // $._mkbox_word,
          // $._movebox_word,
          $._NeedsTeXFormat_word,
          $._newcommand_word,
          $._newenvironment_word,
          $._parbox_word,
          $._PassOptionTo_word,
          // $._phantom_smash_word,
          $._ProcessOptions_word,
          $._Provides_word,
          $._ProvidesExpl_word,
          $._ref_word,
          $._savebox_word,
          $._section_word,
          // $._setbox_word,
          $._setlength_word,
          $._storage_word,
          // $._strut_word,
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
          // $._usebox_word,
          $._verb_word,
          $._WarningInfo_word
        ),
        repeat(/./)
      ),
      repeat1(/./)
    )),

    escaped: $ => escaped($, /[^()\[\]]/),

    begingroup: $ => cmd($, $.begingroup_cs),

    begingroup_cs: $ => cs($, $._begingroup_word),

    _begingroup_word: $ => 'begingroup',

    endgroup: $ => cmd($, $.endgroup_cs),

    endgroup_cs: $ => cs($, $._endgroup_word),

    _endgroup_word: $ => 'endgroup',

    bgroup: $ => cmd($, $.bgroup_cs),

    bgroup_cs: $ => cs($, $._bgroup_word),

    _bgroup_word: $ => 'bgroup',

    egroup: $ => cmd($, $.egroup_cs),

    egroup_cs: $ => cs($, $._egroup_word),

    _egroup_word: $ => 'egroup',

    dimension: $ => token(
        seq(
          FIXED_PATTERN,
          // fi introduced by LuaTeX
          /bp|cc|cm|dd|em|ex|fil{0,3}|in|mm|mu|nc|nd|pc|pt|sp/
      )
    ),

    fixed: $ => FIXED_PATTERN,

    _number: $ => choice(
      $.decimal,
      $.octal,
      $.hexadecimal,
      $.charcode,
      $.catcode_ref
    ),

    decimal: $ => token(ONE_MORE_DECIMAL_DIGITS),

    octal: $ => /'[0-7]+/,

    hexadecimal: $ => /"[0-9a-fA-F]+/,

    charcode: $ => seq('`', choice($.escaped, /./, $.cs))
  }
}

function def_env({ label, text, math, name, parameters, contents }) {
  const env_sym = `${label}_env`
  const name_rule_sym = `_${label}_name`
  const name_group_rule_sym = `_${label}_name_group`
  const begin_rule_sym = `_${label}_begin`
  const end_rule_sym = `_${label}_end`

  if (name) {
    g.rules[name_rule_sym] = name

    g.rules[name_group_rule_sym] = $ => group($,
      alias($[name_rule_sym], $.name)
    )

    name_rules.push(name_rule_sym)
  }

  g.rules[begin_rule_sym] = $ => begin_cmd($,
    alias(name ? $[name_group_rule_sym] : $.name_group, $.group),
    ...(parameters ? parameters($) : [])
  )

  g.rules[end_rule_sym] = $ => end_cmd($,
    alias(name ? $[name_group_rule_sym] : $.name_group, $.group)
  )

  g.rules[env_sym] = $ => seq(
    alias($[begin_rule_sym], $.begin),
    $._scope_begin,
    ...(contents ? contents($) : [repeat(text ? $._text_mode : $._math_mode)]),
    choice(
      alias($[end_rule_sym], $.end),
      $.exit
    ),
    $._scope_end
  )

  if (text && math) {
    common_rules.push(env_sym)
  } else if (text) {
    text_rules.push(env_sym)
  } else if (math) {
    math_rules.push(env_sym)
  }
}

const root = 'grammar'

console.log(`Loading grammar definitions...`)

for (const filePath of readdir.sync(root, { deep: true, filter: '**/*.js' })) {
  console.log(`  ${path.join(root, filePath)}`)
  const m = require(path.join(__dirname, root, filePath))

  if (m.env) m.env.forEach(def_env)
}

module.exports = grammar(g)
