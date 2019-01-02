const readdir = require('readdir-enhanced')
const path = require('path')

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

function cmdOpt ($, cs, ...args) {
  cs = alias(cs, $.cs)

  return (args.length === 0)
    ? cs
    : prec.right(-1, seq(cs, optional(seq(...args))))
}

function beginCmd ($, ...args) {
  const cs = alias($.cs_begin, $.cs)

  return (args.length === 0)
    ? seq(cs, alias($.name_group, $.group))
    : seq(cs, ...args)
}

function endCmd ($, ...args) {
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

function semiSimpleGroup ($, ...contents) {
  return seq($.begingroup, $._scope_begin, ...contents, choice($.endgroup, $.exit), $._scope_end)
}

function brackGroup ($, contents) {
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

let rules = {
  common: [],
  math: [],
  nil: [],
  text: []
}

let g = {
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
    $.cs_lstinline,
    $.cs_lua,
    $.cs_luacode,
    $.cs_make_verb_delim,
    $.cs_MakeShortVerb,
    $.cs_mint,
    $.cs_mintinline,
    $.cs_newcommand,
    $.cs_newenvironment,
    $.cs_tag,
    $.cs_use_209,
    $.cs_use,
    $.cs_verb,
    $.cs,
    $.display_math_shift_end,
    $.display_math_shift,
    $.env_name_alignat,
    $.env_name_comment,
    $.env_name_display_math,
    $.env_name_dmath,
    $.env_name_dseries,
    $.env_name_filecontents,
    $.env_name_inline_math,
    $.env_name_lstlisting,
    $.env_name_luacode,
    $.env_name_luacodestar,
    $.env_name_math,
    $.env_name_minted,
    $.env_name_text,
    $.env_name_verbatim,
    $.env_name_Verbatim,
    $.env_name,
    $.eol,
    $.exit,
    $.ignored_line,
    $.ignored,
    $.invalid,
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
    $.verb_delim_no_lbrack,
    $.verb_delim,
    $.verb_end_delim,
    $.verbatim
  ],

  extras: $ => [
    $._space,
    $.comment_arara,
    $.comment_bib,
    $.comment_tag,
    $.comment_tex,
    $.comment
  ],

  rules: {
    document: $ => repeat($._text_mode),

    _nil_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.cs,
      $.ignored,
      $.invalid,
      $.math_shift,
      $.subscript,
      $.superscript,
      $.text,
      alias($.nil_group, $.group),
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      ...rules.nil.map(name => $[name])
    ),

    _common: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.ignored,
      $.invalid,
      ...rules.common.map(name => $[name])
    ),

    _text_mode: $ => choice(
      $._common,
      $.group,
      $.semi_simple_group,
      $.text,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some packages define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, $.text),
      alias($.superscript, $.text),
      prec(-1, alias($.lbrack, $.text)),
      prec(-1, alias($.rbrack, $.text)),
      ...rules.text.map(name => $[name])
    ),

    _math_mode: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
      alias($.math_group, $.group),
      alias($.text, $.math),
      prec(-1, alias($.lbrack, $.math)),
      prec(-1, alias($.rbrack, $.math)),
      ...rules.math.map(name => $[name])
    ),

    group: $ => group($, repeat($._text_mode)),

    _parameter: $ => choice($.group, $.cs),

    math_group: $ => group($, repeat($._math_mode)),

    _math_parameter: $ => choice(alias($.math_group, $.group), $.cs),

    nil_group: $ => group($, repeat($._nil_mode)),

    _nil_parameter: $ => choice(alias($.nil_group, $.group), $.cs),

    name_group: $ => group($, $.name),

    _name_parameter: $ => choice(alias($.name_group, $.group), $.cs),

    apply_group: $ => group($, $._cmd_apply, repeat($._text_mode)),

    _apply_parameter: $ => choice($.cs, alias($.apply_group, $.group)),

    make_verb_delim_group: $ => group($,
      choice(
        cmd($, $.cs_make_verb_delim),
        repeat($._text_mode)
      )
    ),

    _make_verb_delim_parameter: $ => choice(
      cmd($, $.cs_make_verb_delim),
      $.cs,
      alias($.make_verb_delim_group, $.group)
    ),

    delete_verb_delim_group: $ => group($,
      choice(
        cmd($, $.cs_delete_verb_delim),
        repeat($._text_mode)
      )
    ),

    _delete_verb_delim_parameter: $ => choice(
      cmd($, $.cs_delete_verb_delim),
      $.cs,
      alias($.delete_verb_delim_group, $.group)
    ),

    _cs_parameter: $ => choice($.cs, alias($.cs_group, $.group)),

    cs_group: $ => group($, $.cs),

    brack_group: $ => brackGroup($, repeat($._text_mode)),

    math_brack_group: $ => brackGroup($, repeat($._math_mode)),

    semi_simple_group: $ => semiSimpleGroup($, repeat($._text_mode)),

    lbrack: $ => '[',

    rbrack: $ => ']',

    text: $ => prec.left(-1, repeat1(/[^\][]/)),

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
      $.hexadecimal
      // $.charcode,
      // $.catcode_ref
    ),

    decimal: $ => token(ONE_MORE_DECIMAL_DIGITS),

    octal: $ => /'[0-7]+/,

    hexadecimal: $ => /"[0-9a-fA-F]+/,

    charcode: $ => seq('`', choice(/./, $.cs))
  }
}

function defRule (mode, label, rule) {
  g.rules[label] = rule

  rules[mode].push(label)
}

function defCmd (mode, label, { cs, parameters, local }) {
  g.rules[label] = $ => cmdOpt($,
    cs($),
    ...(parameters ? parameters($) : []),
    ...(local ? [] : [$._cmd_apply]))

  rules[mode].push(label)
}

function defEnv (mode, label, { name, beginParameters, endParameters, contents, bare }) {
  const envSym = `${label}_env`
  const nameGroupRuleSym = `${label}_name_group`
  const beginRuleSym = `${label}_begin`
  const endRuleSym = `${label}_end`

  if (name) {
    g.rules[nameGroupRuleSym] = $ => group($,
      alias(name($), $.name)
    )
  }

  g.rules[beginRuleSym] = $ => beginCmd($,
    alias(name ? $[nameGroupRuleSym] : $.name_group, $.group),
    ...(beginParameters ? beginParameters($) : [])
  )

  g.rules[endRuleSym] = $ => endCmd($,
    alias(name ? $[nameGroupRuleSym] : $.name_group, $.group),
    ...(endParameters ? endParameters($) : [])
  )

  g.rules[envSym] = $ => seq(
    alias($[beginRuleSym], $.begin),
    ...(bare ? [] : [$._env_begin]),
    ...(contents ? contents($) : [repeat(mode === 'text' ? $._text_mode : $._math_mode)]),
    choice(
      alias($[endRuleSym], $.end),
      $.exit
    ),
    ...(bare ? [] : [$._env_end])
  )

  rules[mode].push(envSym)
}

const root = 'grammar'

console.log(`Loading grammar definitions...`)

for (const filePath of readdir.sync(root, { deep: true, filter: '**/*.js' })) {
  console.log(`  ${path.join(root, filePath)}`)
  const m = require(path.join(__dirname, root, filePath))

  for (const mode in m) {
    const obj = m[mode]

    if (obj.commands) {
      for (const label in obj.commands) {
        defCmd(mode, label, obj.commands[label])
      }
    }

    if (obj.environments) {
      for (const label in obj.environments) {
        defEnv(mode, label, obj.environments[label])
      }
    }

    if (obj.rules) {
      for (const label in obj.rules) {
        defRule(mode, label, obj.rules[label])
      }
    }
  }
}

module.exports = grammar(g)
