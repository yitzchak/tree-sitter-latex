const DECIMAL_DIGIT = choice('0', '1', '2', '3', '4', '5', '6', '7', '8', '9')
const ONE_MORE_DECIMAL_DIGITS = prec.right(2, repeat1(DECIMAL_DIGIT))
// const ZERO_MORE_DECIMAL_DIGITS = prec.right(2, repeat(DECIMAL_DIGIT))
// const SIGN = choice('+', '-')
// const FIXED_PATTERN = choice(
//   SIGN,
//   seq(optional(SIGN), ONE_MORE_DECIMAL_DIGITS, optional(seq('.', ZERO_MORE_DECIMAL_DIGITS))),
//   seq(optional(SIGN), '.', ONE_MORE_DECIMAL_DIGITS)
// )

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
  const cs = alias($.cs_begin, $.cs)

  return (args.length === 0)
    ? seq(cs, alias($.name_group, $.group))
    : seq(cs, ...args)
}

function end_cmd ($, ...args) {
  const cs = alias($.cs_end, $.cs)

  return (args.length === 0)
    ? seq(cs, alias($.name_group, $.group))
    : seq(cs, ...args)
}

function group ($, ...contents) {
  return seq($.l, $._scope_begin, ...contents, $.r, $._scope_end)
}

// function simple_group ($, ...contents) {
//   return seq(choice($.l, $.bgroup), $._scope_begin, ...contents, choice($.r, $.egroup), $._scope_end)
// }

function semi_simple_group ($, ...contents) {
  return seq($.begingroup, $._scope_begin, ...contents, choice($.endgroup, $.exit), $._scope_end)
}

function brack_group ($, contents) {
  return seq($.lbrack, contents, $.rbrack)
}

// function optional_seq () {
//   var result
//
//   for (var i = arguments.length - 1; i > -1; i--) {
//     result = optional(
//       result
//         ? seq(arguments[i], result)
//         : arguments[i])
//   }
//
//   return result
// }

module.exports = grammar({
  name: 'latex',

  externals: $ => [
    $._cmd_apply,
    $._env_begin,
    $._env_end,
    $._scope_begin,
    $._scope_end,
    $._space,
    $.active_char,
    $.alignment_tab,
    $.comment_arara,
    $.comment_bib,
    $.comment_tag,
    $.comment_tex,
    $.comment,
    $.cs_begin,
    $.cs_begingroup,
    $.cs_bgroup,
    $.cs_def,
    $.cs_delete_verb_delim,
    $.cs_DeleteShortVerb,
    $.cs_display_math_begin,
    $.cs_display_math_end,
    $.cs_egroup,
    $.cs_end,
    $.cs_endgroup,
    $.cs_ensuremath,
    $.cs_inline_math_begin,
    $.cs_inline_math_end,
    $.cs_lua,
    $.cs_luacode,
    $.cs_make_verb_delim,
    $.cs_MakeShortVerb,
    $.cs_tag,
    $.cs_use_209,
    $.cs_use,
    $.cs_verb,
    $.cs,
    $.display_math_shift_end,
    $.display_math_shift,
    $.env_name_comment,
    $.env_name_display_math,
    $.env_name_inline_math,
    $.env_name_math,
    $.env_name_text,
    $.env_name_verbatim,
    $.env_name,
    $.eol,
    $.exit,
    $.l,
    $.math_shift_end,
    $.math_shift,
    $.name,
    $.parameter_char,
    $.r,
    $.short_verb_delim,
    $.subscript,
    $.superscript,
    $.verb_body,
    $.verb_delim,
    $.verb_end_delim,
    $.verbatim,
  ],

  extras: $ => [
    $._space,
    $.comment_arara,
    $.comment_bib,
    $.comment,
    $.comment_tex,
    $.comment_tag,
  ],

  rules: {
    document: $ => repeat($._text_mode),

    _no_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.math_shift,
      $.parameter_ref,
      $.subscript,
      $.superscript,
      $.text,
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      seq($.cs, $._cmd_apply),
      alias($.no_group, $.group),
    ),

    _common: $ => choice(
      $.active_char,
      $.alignment_tab,
      // $.catcode,
      seq($.cs, $._cmd_apply),
      $.def,
      $.lua,
      $.luacode,
      $.ensuremath,
      $.parameter_ref,
    ),

    verb: $ => choice(
      cmd($,
        $.cs_verb,
        $.verb_delim,
        alias($.verb_body, $.verbatim),
        alias($.verb_end_delim, $.verb_delim)
      ),
      seq(
        alias($.short_verb_delim, $.verb_delim),
        alias($.verb_body, $.verbatim),
        alias($.verb_end_delim, $.verb_delim)
      )
    ),

    _text_mode: $ => choice(
      $._common,
      $.text,
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, $.text),
      alias($.superscript, $.text),
      alias($.comment_env, $.env),
      alias($.verbatim_env, $.env),
      $.verb,
      $.use_209,
      $.use,
      $.MakeShortVerb,
      $.DeleteShortVerb,
      $.tex_display_math,
      $.latex_display_math,
      alias($.display_math_env, $.env),
      $.tex_inline_math,
      $.latex_inline_math,
      alias($.inline_math_env, $.env),
      $.env,
      $.group,
      $.semi_simple_group,
    ),

    _math_mode: $ => choice(
      $._common,
      alias($.text, $.math),
      prec(-1, alias($.lbrack, $.math)),
      prec(-1, alias($.rbrack, $.math)),
      $.subscript,
      $.superscript,
      alias($.math_env, $.env),
      $.tag,
      alias($.text_env, $.env),
      alias($.math_group, $.group),
    ),

    parameter_ref: $ => seq(
      $.parameter_char,
      optional(/[1-9]/)
    ),

    tex_display_math: $ => seq(
      $.display_math_shift,
      repeat($._math_mode),
      choice(
        alias($.display_math_shift_end, $.display_math_shift),
        seq($.math_shift, $.exit),
        $.exit
      )
    ),

    latex_display_math: $ => seq(
      alias($.cs_display_math_begin, $.cs),
      repeat($._math_mode),
      choice(alias($.cs_display_math_end, $.cs), $.exit)
    ),

    tex_inline_math: $ => seq(
      $.math_shift,
      repeat1($._math_mode),
      choice(alias($.math_shift_end, $.math_shift), $.exit)
    ),

    latex_inline_math: $ => seq(
      alias($.cs_inline_math_begin, $.cs),
      repeat($._math_mode),
      choice(alias($.cs_inline_math_end, $.cs), $.exit)
    ),

    comment_env: $ => seq(
      alias($.comment_begin, $.begin),
      alias($.verbatim, $.comment_block),
      choice(alias($.comment_end, $.end), $.exit)
    ),

    comment_begin: $ => begin_cmd($,
      alias($.comment_env_group, $.group),
      repeat(
        choice(
          $.text,
          $.brack_group,
          $.group
        )
      ),
      $.eol
    ),

    comment_end: $ => end_cmd($,
      alias($.comment_env_group, $.group)
    ),

    comment_env_group: $ => group($, alias($.env_name_comment, $.name)),

    verbatim_env: $ => seq(
      alias($.verbatim_begin, $.begin),
      $.verbatim,
      choice(alias($.verbatim_end, $.end), $.exit)
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
      $._env_begin,
      repeat($._text_mode),
      choice($.exit, alias($.text_end, $.end)),
      $._env_end,
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
      $._env_begin,
      repeat($._text_mode),
      choice($.exit, $.end),
      $._env_end
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
      $._env_begin,
      repeat($._math_mode),
      choice($.exit, alias($.math_end, $.end)),
      $._env_end
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
      $._env_begin,
      repeat($._math_mode),
      choice($.exit, alias($.display_math_end, $.end)),
      $._env_end
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
      $._env_begin,
      repeat($._math_mode),
      // We don't allow exit here since braces are meaningless in verbatim.
      choice($.exit, alias($.inline_math_end, $.end)),
      $._env_end
    ),

    inline_math_begin: $ => begin_cmd($,
      alias($.inline_math_env_group, $.group)
    ),

    inline_math_end: $ => end_cmd($,
      alias($.inline_math_env_group, $.group)
    ),

    inline_math_env_group: $ => group($, alias($.env_name_inline_math, $.name)),

    // catcode: $ => prec.right(-1, cmd($,
    //   $.catcode_cs,
    //   optional(choice($._number, $.cs, $.parameter_ref)),
    //   optional('='),
    //   optional(choice($._number, $.cs, $.parameter_ref))
    // )),
    //
    // catcode_cs: $ => cs($, $._catcode_word),
    //
    // _catcode_word: $ => /(cat|del|kcat|lc|math|sf|uc)code/,

    luacode: $ => cmd_opt($,
      $.cs_luacode,
      $._apply_parameter
    ),

    lua: $ => cmd_opt($,
      $.cs_lua,
      optional($._number),
      $._apply_parameter
    ),

    ensuremath: $ => cmd_opt($,
      $.cs_ensuremath,
      alias($.math_group, $.group),
      $._cmd_apply
    ),

    tag: $ => cmd_opt($,
      $.cs_tag,
      $.group,
      $._cmd_apply
    ),

    use_209: $ => cmd_opt($,
      $.cs_use_209,
      optional($.brack_group),
      alias($.name_group, $.group),
      $._cmd_apply
    ),

    use: $ => cmd_opt($,
      $.cs_use,
      optional($.brack_group),
      alias($.name_group, $.group),
      $._cmd_apply,
      optional($.brack_group)
    ),

    MakeShortVerb: $ => cmd_opt($,
      $.cs_MakeShortVerb,
      optional('*'),
      choice(
        alias($.cs_make_verb_delim, $.cs),
        alias($.make_verb_delim_group, $.group)
      ),
      $._cmd_apply
    ),

    DeleteShortVerb: $ => cmd_opt($,
      $.cs_DeleteShortVerb,
      choice(
        alias($.cs_delete_verb_delim, $.cs),
        alias($.delete_verb_delim_group, $.group)
      ),
      $._cmd_apply
    ),

    def: $ => cmd($,
      $.cs_def,
      $.cs,
      repeat(
        choice(
          $.parameter_ref,
          $.text,
          alias($.lbrack, $.text),
          alias($.rbrack, $.text),
          $.text
        )
      ),
      $._no_parameter
    ),

    _apply_parameter: $ => choice($.cs, alias($.apply_group, $.group)),

    apply_group: $ => group($, $._cmd_apply, repeat($._text_mode)),

    make_verb_delim_group: $ => group($,
      choice(
        alias($.cs_make_verb_delim, $.cs),
        repeat($._text_mode)
      )
    ),

    delete_verb_delim_group: $ => group($,
      choice(
        alias($.cs_delete_verb_delim, $.cs),
        repeat($._text_mode)
      )
    ),

    group: $ => group($, repeat($._text_mode)),

    no_group: $ => group($, repeat($._no_mode)),

    semi_simple_group: $ => semi_simple_group($, repeat($._text_mode)),

    _no_parameter: $ => choice(alias($.no_group, $.group), $.cs),

    _parameter: $ => choice($.group, $.cs),

    name_group: $ => group($, $.name),

    _name_parameter: $ => choice(alias($.name_group, $.group), $.cs),

    brack_group: $ => brack_group($, repeat($._text_mode)),

    math_group: $ => group($, repeat($._math_mode)),

    math_brack_group: $ => brack_group($, repeat($._math_mode)),

    lbrack: $ => '[',

    rbrack: $ => ']',

    text: $ => prec.left(-1,repeat1(/[^\]\[]/)),

    begingroup: $ => cmd($, $.cs_begingroup),

    endgroup: $ => cmd($, $.cs_endgroup),

    bgroup: $ => cmd($, $.cs_bgroup),

    egroup: $ => cmd($, $.cs_egroup),

    // dimension: $ => token(
    //     seq(
    //       FIXED_PATTERN,
    //       // fi introduced by LuaTeX
    //       /bp|cc|cm|dd|em|ex|fil{0,3}|in|mm|mu|nc|nd|pc|pt|sp/
    //   )
    // ),

    // fixed: $ => FIXED_PATTERN,

    _number: $ => choice(
      $.decimal,
      $.octal,
      $.hexadecimal,
      // $.charcode,
      // $.catcode_ref
    ),

    decimal: $ => token(ONE_MORE_DECIMAL_DIGITS),

    octal: $ => /'[0-7]+/,

    hexadecimal: $ => /"[0-9a-fA-F]+/,

    charcode: $ => seq('`', choice(/./, $.cs))
  }
})
