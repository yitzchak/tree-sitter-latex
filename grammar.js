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
    $._env_begin,
    $._env_end,
    $._escaped_begin,
    $._escaped_end,
    $._scope_begin,
    $._scope_end,
    $._space,
    $.active_char,
    $.alignment_tab,
    $.arara_comment,
    $.bib_comment,
    $.comment,
    $.delete_verb_delim,
    $.env_name_display_math,
    $.env_name_inline_math,
    $.env_name_math,
    $.env_name_text,
    $.env_name_verbatim,
    $.env_name,
    $.eol,
    $.exit,
    $.l,
    $.magic_comment,
    $.make_verb_delim,
    $.math_shift,
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
      $.verbatim_env,
      $.verb,
      $.MakeShortVerb,
      $.DeleteShortVerb,
      $.tex_display_math,
      $.latex_display_math,
      $.display_math_env,
      $.tex_inline_math,
      $.latex_inline_math,
      $.inline_math_env,
      $.env,
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
      $.text_env,
      alias($.math_group, $.group),
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      $.tag
    ),

    parameter_ref: $ => seq(
      $.parameter_char,
      optional(/[1-9]/)
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

    verbatim_env: $ => seq(
      alias($.verbatim_begin, $.begin),
      alias($.verbatim_body, $.text),
      alias($.verbatim_end, $.end)
    ),

    verbatim_begin: $ => begin_cmd($,
      alias($.verbatim_env_group, $.group),
      repeat(
        choice(
          $.text,
          $.brack_group,
          $.group
        )
      ),
      $.eol
    ),

    verbatim_end: $ => end_cmd($,
      alias($.verbatim_env_group, $.group)
    ),

    verbatim_env_group: $ => group($, alias($.env_name_verbatim, $.name)),

    text_env: $ => seq(
      alias($.text_begin, $.begin),
      repeat($._text_mode),
      choice($.exit, alias($.text_end, $.end))
    ),

    text_begin: $ => begin_cmd($,
      alias($.text_env_group, $.group)
    ),

    text_end: $ => end_cmd($,
      alias($.text_env_group, $.group)
    ),

    text_env_group: $ => group($, alias($.env_name_text, $.name)),

    env: $ => seq(
      $.begin,
      repeat($._text_mode),
      choice($.exit, $.end)
    ),

    begin: $ => begin_cmd($,
      alias($.env_group, $.group)
    ),

    end: $ => end_cmd($,
      alias($.env_group, $.group)
    ),

    env_group: $ => group($, alias($.env_name, $.name)),

    math_env: $ => seq(
      alias($.math_begin, $.begin),
      repeat($._math_mode),
      choice($.exit, alias($.math_end, $.end))
    ),

    math_begin: $ => begin_cmd($,
      alias($.math_env_group, $.group)
    ),

    math_end: $ => end_cmd($,
      alias($.math_env_group, $.group)
    ),

    math_env_group: $ => group($, alias($.env_name_math, $.name)),

    display_math_env: $ => seq(
      alias($.display_math_begin, $.begin),
      repeat($._math_mode),
      choice($.exit, alias($.display_math_end, $.end))
    ),

    display_math_begin: $ => begin_cmd($,
      alias($.display_math_env_group, $.group)
    ),

    display_math_end: $ => end_cmd($,
      alias($.display_math_env_group, $.group)
    ),

    display_math_env_group: $ => group($, alias($.env_name_display_math, $.name)),

    inline_math_env: $ => seq(
      alias($.inline_math_begin, $.begin),
      repeat($._math_mode),
      // We don't allow exit here since braces are meaningless in verbatim.
      choice($.exit, alias($.inline_math_end, $.end))
    ),

    inline_math_begin: $ => begin_cmd($,
      alias($.inline_math_env_group, $.group)
    ),

    inline_math_end: $ => end_cmd($,
      alias($.inline_math_env_group, $.group)
    ),

    inline_math_env_group: $ => group($, alias($.env_name_inline_math, $.name)),

    begin_cs: $ => cs($, $._begin_word),

    _begin_word: $ => 'begin',

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

    name_group: $ => group($, alias(
      seq(
        optional(
          choice(
            $.l3doc_class_name,
            $.pipe_class_name,
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
