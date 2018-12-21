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

    _common: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.catcode,
      $.char,
      $.cs,
      $.ensuremath,
      $.escaped,
      $.ExplSyntaxOff,
      $.ExplSyntaxOn,
      $.lua,
      $.luacode_env,
      $.luacodestar_env,
      $.luadirect,
      $.luaexec,
      $.makeatletter,
      $.makeatother,
      $.parameter_ref,
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

    _text_mode: $ => choice(
      $._common,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, $.text),
      alias($.superscript, $.text),
      $.comment_env,
      $.verbatim_env,
      $.verbatimstar_env,
      $.filecontents_env,
      $.filecontentsstar_env,
      $.Verbatim_env,
      $.Verbatimstar_env,
      $.BVerbatim_env,
      $.BVerbatimstar_env,
      $.LVerbatim_env,
      $.LVerbatimstar_env,
      $.lstlisting_env,
      $.minted_env,
      $.verb,
      $.MakeShortVerb,
      $.DeleteShortVerb,
      $.alltt_env,
      $._display_math,
      $._inline_math,
      $.text_env,
      $.group,
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      $.ProvidesExpl,
      $.documentclass,
      $.documentstyle,
      $.use,
      $.end_inline_math,
      $.end_display_math,
      $.Provides,
      $.semi_simple_group,
    ),

    _math_mode: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
      $.math_env,
      alias($.math_group, $.group),
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      $.tag
    ),

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
      alias($.verbatim_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.verbatim_end, $.end)
    ),

    verbatim_begin: $ => begin_cmd($,
      alias($.verbatim_env_group, $.group),
      $.eol
    ),

    verbatim_end: $ => end_cmd($,
      alias($.verbatim_env_group, $.group)
    ),

    verbatim_env_group: $ => group($, alias($.verbatim_env_name, $.name)),

    verbatim_env_name: $ => 'verbatim',

    verbatimstar_env: $ => seq(
      alias($.verbatimstar_begin, $.begin),
      alias($.verbatimstar_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.verbatimstar_end, $.end)
    ),

    verbatimstar_begin: $ => begin_cmd($,
      alias($.verbatimstar_env_group, $.group),
      $.eol
    ),

    verbatimstar_end: $ => end_cmd($,
      alias($.verbatimstar_env_group, $.group)
    ),

    verbatimstar_env_group: $ => group($, alias($.verbatimstar_env_name, $.name)),

    verbatimstar_env_name: $ => 'verbatim*',

    comment_env: $ => seq(
      alias($.comment_begin, $.begin),
      alias($.comment_body, $.text),
      // We don't allow exit here since braces are meaningless in comment.
      alias($.comment_end, $.end)
    ),

    comment_begin: $ => begin_cmd($,
      alias($.comment_env_group, $.group),
      $.eol
    ),

    comment_end: $ => end_cmd($,
      alias($.comment_env_group, $.group)
    ),

    comment_env_group: $ => group($, alias($.comment_env_name, $.name)),

    comment_env_name: $ => 'comment',

    filecontents_env: $ => seq(
      alias($.filecontents_begin, $.begin),
      alias($.filecontents_body, $.text),
      // We don't allow exit here since braces are meaningless in filecontents.
      alias($.filecontents_end, $.end)
    ),

    filecontents_begin: $ => begin_cmd($,
      alias($.filecontents_env_group, $.group),
      $.group,
      $.eol
    ),

    filecontents_end: $ => end_cmd($,
      alias($.filecontents_env_group, $.group)
    ),

    filecontents_env_group: $ => group($, alias($.filecontents_env_name, $.name)),

    filecontents_env_name: $ => 'filecontents',

    filecontentsstar_env: $ => seq(
      alias($.filecontentsstar_begin, $.begin),
      alias($.filecontentsstar_body, $.text),
      // We don't allow exit here since braces are meaningless in filecontents.
      alias($.filecontentsstar_end, $.end)
    ),

    filecontentsstar_begin: $ => begin_cmd($,
      alias($.filecontentsstar_env_group, $.group),
      $.group,
      $.eol
    ),

    filecontentsstar_end: $ => end_cmd($,
      alias($.filecontentsstar_env_group, $.group)
    ),

    filecontentsstar_env_group: $ => group($, alias($.filecontentsstar_env_name, $.name)),

    filecontentsstar_env_name: $ => 'filecontents*',

    Verbatim_env: $ => seq(
      alias($.Verbatim_begin, $.begin),
      alias($.Verbatim_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.Verbatim_end, $.end)
    ),

    Verbatim_begin: $ => begin_cmd($,
      alias($.Verbatim_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    Verbatim_end: $ => end_cmd($,
      alias($.Verbatim_env_group, $.group)
    ),

    Verbatim_env_group: $ => group($, alias($.Verbatim_env_name, $.name)),

    Verbatim_env_name: $ => 'Verbatim',

    Verbatimstar_env: $ => seq(
      alias($.Verbatimstar_begin, $.begin),
      alias($.Verbatimstar_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.Verbatimstar_end, $.end)
    ),

    Verbatimstar_begin: $ => begin_cmd($,
      alias($.Verbatimstar_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    Verbatimstar_end: $ => end_cmd($,
      alias($.Verbatimstar_env_group, $.group)
    ),

    Verbatimstar_env_group: $ => group($, alias($.Verbatimstar_env_name, $.name)),

    Verbatimstar_env_name: $ => 'Verbatim*',

    BVerbatim_env: $ => seq(
      alias($.BVerbatim_begin, $.begin),
      alias($.BVerbatim_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.BVerbatim_end, $.end)
    ),

    BVerbatim_begin: $ => begin_cmd($,
      alias($.BVerbatim_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    BVerbatim_end: $ => end_cmd($,
      alias($.BVerbatim_env_group, $.group)
    ),

    BVerbatim_env_group: $ => group($, alias($.BVerbatim_env_name, $.name)),

    BVerbatim_env_name: $ => 'BVerbatim',

    BVerbatimstar_env: $ => seq(
      alias($.BVerbatimstar_begin, $.begin),
      alias($.BVerbatimstar_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.BVerbatimstar_end, $.end)
    ),

    BVerbatimstar_begin: $ => begin_cmd($,
      alias($.BVerbatimstar_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    BVerbatimstar_end: $ => end_cmd($,
      alias($.BVerbatimstar_env_group, $.group)
    ),

    BVerbatimstar_env_group: $ => group($, alias($.BVerbatimstar_env_name, $.name)),

    BVerbatimstar_env_name: $ => 'BVerbatim*',

    LVerbatim_env: $ => seq(
      alias($.LVerbatim_begin, $.begin),
      alias($.LVerbatim_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.LVerbatim_end, $.end)
    ),

    LVerbatim_begin: $ => begin_cmd($,
      alias($.LVerbatim_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    LVerbatim_end: $ => end_cmd($,
      alias($.LVerbatim_env_group, $.group)
    ),

    LVerbatim_env_group: $ => group($, alias($.LVerbatim_env_name, $.name)),

    LVerbatim_env_name: $ => 'LVerbatim',

    LVerbatimstar_env: $ => seq(
      alias($.LVerbatimstar_begin, $.begin),
      alias($.LVerbatimstar_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.LVerbatimstar_end, $.end)
    ),

    LVerbatimstar_begin: $ => begin_cmd($,
      alias($.LVerbatimstar_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    LVerbatimstar_end: $ => end_cmd($,
      alias($.LVerbatimstar_env_group, $.group)
    ),

    LVerbatimstar_env_group: $ => group($, alias($.LVerbatimstar_env_name, $.name)),

    LVerbatimstar_env_name: $ => 'LVerbatim*',

    lstlisting_env: $ => seq(
      alias($.lstlisting_begin, $.begin),
      alias($.lstlisting_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.lstlisting_end, $.end)
    ),

    lstlisting_begin: $ => begin_cmd($,
      alias($.lstlisting_env_group, $.group),
      optional($.brack_group),
      $.eol
    ),

    lstlisting_end: $ => end_cmd($,
      alias($.lstlisting_env_group, $.group)
    ),

    lstlisting_env_group: $ => group($, alias($.lstlisting_env_name, $.name)),

    lstlisting_env_name: $ => 'lstlisting',

    minted_env: $ => seq(
      alias($.minted_begin, $.begin),
      alias($.minted_body, $.text),
      // We don't allow exit here since braces are meaningless in verbatim.
      alias($.minted_end, $.end)
    ),

    minted_begin: $ => begin_cmd($,
      alias($.minted_env_group, $.group),
      optional($.brack_group),
      optional($._parameter),
      $.eol
    ),

    minted_end: $ => end_cmd($,
      alias($.minted_env_group, $.group)
    ),

    minted_env_group: $ => group($, alias($.minted_env_name, $.name)),

    minted_env_name: $ => 'minted',

    begin: $ => begin_cmd($),

    begin_cs: $ => cs($, $._begin_word),

    _begin_word: $ => 'begin',

    end: $ => end_cmd($),

    end_cs: $ => cs($, $._end_word),

    _end_word: $ => 'end',

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

    // LaTeX cls identification

    Provides: $ => cmd_opt($,
      $.Provides_cs,
      $._parameter,
      $.__ccc_at_letter,
      optional($.brack_group)
    ),

    Provides_cs: $ => cs($, $._Provides_word),

    _Provides_word: $ => /Provides(Class|Package|File)/,

    // alltt - alltt is not a true verbatim environment since it understands
    // control sequences and groups.

    alltt_env: $ => seq(
      alias($.alltt_begin, $.begin),
      $._scope_begin,
      $.__ccc_alltt,
      repeat($._text_mode),
      choice(alias($.alltt_end, $.end), $.exit),
      $._scope_end
    ),

    alltt_begin: $ => begin_cmd($,
      alias($.alltt_env_group, $.group)
    ),

    alltt_end: $ => end_cmd($,
      alias($.alltt_env_group, $.group),
    ),

    alltt_env_group: $ => group($, alias($.alltt_env_name, $.name)),

    alltt_env_name: $ => 'alltt',

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

    luacode_env: $ => seq(
      alias($.luacode_begin, $.begin),
      $._scope_begin,
      $.__ccc_luacode,
      repeat($._text_mode),
      choice(alias($.luacode_end, $.end), $.exit),
      $._scope_end
    ),

    luacode_begin: $ => begin_cmd($,
      alias($.luacode_env_group, $.group)
    ),

    luacode_end: $ => end_cmd($,
      alias($.luacode_env_group, $.group)
    ),

    luacode_env_group: $ => group($, alias($.luacode_env_name, $.name)),

    luacode_env_name: $ => 'luacode',

    luacodestar_env: $ => seq(
      alias($.luacodestar_begin, $.begin),
      alias($.luacodestar_body, $.text),
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

    // lua_text: $ => repeat1($._verb_line),

    luacodestar_env_group: $ => group($, alias($.luacodestar_env_name, $.name)),

    luacodestar_env_name: $ => 'luacode*',

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

    name_group: $ => group($, alias(
      seq(
        optional(
          choice(
            $.alltt_env_name,
            $.BVerbatim_env_name,
            $.BVerbatimstar_env_name,
            $.comment_env_name,
            $.display_math_env_name,
            $.filecontents_env_name,
            $.filecontentsstar_env_name,
            $.inline_math_env_name,
            $.l3doc_class_name,
            $.lstlisting_env_name,
            $.luacode_env_name,
            $.luacodestar_env_name,
            $.LVerbatim_env_name,
            $.LVerbatimstar_env_name,
            $.minted_env_name,
            $.pipe_class_name,
            $.verbatim_env_name,
            $.Verbatim_env_name,
            $.verbatimstar_env_name,
            $.Verbatimstar_env_name,
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
          $._begin_word,
          $._begingroup_word,
          $._bgroup_word,
          // $._box_dimension_word,
          $._catcode_word,
          $._char_word,
          $._chardef_word,
          $._DeleteShortVerb_word,
          $._documentclass_word,
          $._documentstyle_word,
          $._egroup_word,
          $._end_word,
          $._endgroup_word,
          $._ensuremath_word,
          $._ExplSyntaxOff_word,
          $._ExplSyntaxOn_word,
          $._lua_word,
          $._luadirect_word,
          $._luaexec_word,
          $._makeatletter_word,
          $._makeatother_word,
          $._MakeShortVerb_word,
          $._Provides_word,
          $._ProvidesExpl_word,
          $._tag_word,
          $._use_word,
          $._verb_word,
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
})
