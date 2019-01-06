const readdir = require('readdir-enhanced')
const path = require('path')

function cmd ($, cs, ...args) {
  cs = alias(cs, $.cs)

  return (args.length === 0)
    ? cs
    : seq(cs, ...args)
}

// function cmdOpt ($, cs, ...args) {
//   cs = alias(cs, $.cs)
//
//   return (args.length === 0)
//     ? cs
//     : prec.right(-1, seq(cs, optional(seq(...args))))
// }

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
  return seq(prec.dynamic(-10, $.lbrack), contents, $.rbrack)
}

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
    $.backtick,
    $.comment_arara,
    $.comment_bib,
    $.comment_tag,
    $.comment_tex,
    $.comment,
    $.cs_begin,
    $.cs_begingroup,
    $.cs_bgroup,
    $.cs_bibitem,
    $.cs_code,
    $.cs_def,
    $.cs_delete_verb_delim,
    $.cs_DeleteShortVerb,
    $.cs_display_math_begin,
    $.cs_display_math_end,
    $.cs_egroup,
    $.cs_end,
    $.cs_endgroup,
    $.cs_endinput,
    $.cs_ensuremath,
    $.cs_expandafter,
    $.cs_fref,
    $.cs_href,
    $.cs_hyperbaseurl,
    $.cs_hyperimage,
    $.cs_hyperref,
    $.cs_inline_math_begin,
    $.cs_inline_math_end,
    $.cs_input,
    $.cs_item,
    $.cs_label,
    $.cs_let,
    $.cs_lstinline,
    $.cs_lua,
    $.cs_luacode,
    $.cs_make_verb_delim,
    $.cs_MakeShortVerb,
    $.cs_mint,
    $.cs_mintinline,
    $.cs_newcommand,
    $.cs_newenvironment,
    $.cs_ref,
    $.cs_refrange,
    $.cs_section,
    $.cs_tag,
    $.cs_url,
    $.cs_use_209,
    $.cs_use,
    $.cs_verb,
    $.cs,
    $.decimal,
    $.display_math_shift_end,
    $.display_math_shift,
    $.env_name_alignat,
    $.env_name_array,
    $.env_name_comment,
    $.env_name_display_math,
    $.env_name_dmath,
    $.env_name_document,
    $.env_name_dseries,
    $.env_name_figure,
    $.env_name_filecontents,
    $.env_name_inline_math,
    $.env_name_lstlisting,
    $.env_name_luacode,
    $.env_name_luacodestar,
    $.env_name_math,
    $.env_name_minted,
    $.env_name_tabu,
    $.env_name_tabular,
    $.env_name_tabularstar,
    $.env_name_text,
    $.env_name_thebibliography,
    $.env_name_verbatim,
    $.env_name_Verbatim,
    $.env_name,
    $.eol,
    $.equals,
    $.exit,
    $.fixed,
    $.hexadecimal,
    $.ignored_line,
    $.ignored_rest,
    $.ignored,
    $.invalid,
    $.l,
    $.lbrack,
    $.math_shift_end,
    $.math_shift,
    $.name,
    $.octal,
    $.par,
    $.parameter_ref,
    $.r,
    $.rbrack,
    $.short_verb_delim,
    $.spread,
    $.star,
    $.subscript,
    $.superscript,
    $.text_single,
    $.text,
    $.to,
    $.unit,
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

  conflicts: $ => [
    [$.lbrack, $.text]
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
      $.display_math_shift,
      $.parameter_ref,
      $.subscript,
      $.superscript,
      $.text,
      alias($.nil_group, $.group),
      ...rules.nil.map(rule => rule($))
    ),

    _common: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.ignored,
      $.invalid,
      $.parameter_ref,
      // $.eol,
      ...rules.common.map(rule => rule($))
    ),

    _text_mode: $ => choice(
      $._common,
      $.group,
      $.par,
      $.semi_simple_group,
      prec.dynamic(10, $.text),
      // Underscore produces an error by default in LaTeX text mode. Some
      // some packages define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, $.text),
      alias($.superscript, $.text),
      ...rules.text.map(rule => rule($))
    ),

    _math_mode: $ => choice(
      $._common,
      $.subscript,
      $.superscript,
      alias($.math_group, $.group),
      alias($.text, $.math),
      ...rules.math.map(rule => rule($))
    ),

    group: $ => group($, repeat($._text_mode)),

    _text_token_parameter: $ => choice(
      $.group,
      $.parameter_ref,
      $.text_single,
      $.cs
    ),

    _common_parameter: $ => choice(
      $.parameter_ref,
      ...rules.common.map(rule => rule($))
    ),

    _text_parameter: $ => choice(
      $._common_parameter,
      $.group,
      $.text_single,
      ...rules.text.map(rule => rule($))
    ),

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

    begingroup: $ => cmd($, $.cs_begingroup),

    endgroup: $ => cmd($, $.cs_endgroup),

    bgroup: $ => cmd($, $.cs_bgroup),

    egroup: $ => cmd($, $.cs_egroup),

    dimension: $ => seq($.fixed, $.unit),

    _dimension: $ => choice(
      $.dimension,
      prec.right(-1, seq(optional($.fixed), $.cs))
    ),

    _number: $ => choice(
      $.decimal,
      $.octal,
      $.hexadecimal,
      $.charcode
      // $.parameter_ref,
      // $.cs
      // $.catcode_ref
    ),

    _number_parameter: $ => choice(
      $._number,
      $.parameter_ref,
      $.cs
    ),

    charcode: $ => seq($.backtick, choice($.text_single, $.cs))
  }
}

function defRule (mode, label, rule) {
  g.rules[label] = rule

  rules[mode].push($ => $[label])
}

function isOptional (p) {
  return p.type === 'CHOICE' && p.members.length === 2 && p.members[1].type === 'BLANK'
}

function defCmd (mode, label, { cs, parameters, local, alt }) {
  g.rules[label] = function ($) {
    const head = []
    const body = parameters ? parameters($) : []
    const tail = []

    while (body.length && isOptional(body[body.length - 1])) {
      tail.unshift(body.pop())
    }

    while (body.length && isOptional(body[0])) {
      head.push(body.shift())
    }

    if (!local) {
      tail.unshift($._cmd_apply)
    }

    return cmd($,
      cs($),
      ...head,
      ...[body.reduceRight((c, p) => choice($.exit, $.par, c ? seq(p, c) : p),
        tail.length === 0 ? undefined : (tail.length === 1 ? tail[0] : seq(...tail)))])
  }

  rules[mode].push($ => $[label])
}

function defEnv (mode, label, { name, beginParameters, endParameters, contents, bare }) {
  const envSym = `${label}_env`
  const envMathSym = `${label}_math_env`
  const envTextSym = `${label}_text_env`
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

  if (mode === 'common' && !contents) {
    g.rules[envMathSym] = $ => seq(
      alias($[beginRuleSym], $.begin),
      ...(bare ? [] : [$._env_begin]),
      repeat($._math_mode),
      choice(
        alias($[endRuleSym], $.end),
        $.exit
      ),
      ...(bare ? [] : [$._env_end])
    )

    g.rules[envTextSym] = $ => seq(
      alias($[beginRuleSym], $.begin),
      ...(bare ? [] : [$._env_begin]),
      repeat($._text_mode),
      choice(
        alias($[endRuleSym], $.end),
        $.exit
      ),
      ...(bare ? [] : [$._env_end])
    )

    rules.math.push($ => alias($[envMathSym], $[envSym]))
    rules.text.push($ => alias($[envTextSym], $[envSym]))
  } else {
    g.rules[envSym] = $ => seq(
      alias($[beginRuleSym], $.begin),
      ...(bare ? [] : [$._env_begin]),
      ...(contents ? contents($) : [repeat(mode === 'math' ? $._math_mode : $._text_mode)]),
      choice(
        alias($[endRuleSym], $.end),
        $.exit
      ),
      ...(bare ? [] : [$._env_end])
    )

    rules[mode].push($ => $[envSym])
  }
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
