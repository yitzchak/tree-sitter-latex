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

function brackGroup ($, ...contents) {
  return seq($.lbrack, ...contents, $.rbrack)
}

function parenGroup ($, ...contents) {
  return seq($.lparen, ...contents, $.rparen)
}

let rules = {
  _: [],
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
    $.comma,
    $.comment_arara,
    $.comment_bib,
    $.comment_tag,
    $.comment_tex,
    $.comment,
    $.cs_author,
    $.cs_begin,
    $.cs_begingroup,
    $.cs_bgroup,
    $.cs_bibitem,
    $.cs_cite,
    $.cs_cites,
    $.cs_code,
    $.cs_date,
    $.cs_def,
    $.cs_delete_verb_delim,
    $.cs_DeleteShortVerb,
    $.cs_display_math_begin,
    $.cs_display_math_end,
    $.cs_egroup,
    $.cs_emph,
    $.cs_end,
    $.cs_endgroup,
    $.cs_endinput,
    $.cs_ensuremath,
    $.cs_expandafter,
    $.cs_frac,
    $.cs_fref,
    $.cs_gls_acr,
    $.cs_glsdisp,
    $.cs_glsentry,
    $.cs_glssee,
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
    $.cs_longnewglossaryentry,
    $.cs_lstinline,
    $.cs_lua,
    $.cs_luacode,
    $.cs_make_verb_delim,
    $.cs_makebox,
    $.cs_MakeShortVerb,
    $.cs_marginpar,
    $.cs_mathaccent,
    $.cs_mathstyle,
    $.cs_mbox,
    $.cs_mint,
    $.cs_mintinline,
    $.cs_multicolumn,
    $.cs_newacronym,
    $.cs_newcommand,
    $.cs_newenvironment,
    $.cs_newglossaryentry,
    $.cs_newline,
    $.cs_newtheorem,
    $.cs_nocite,
    $.cs_parbox,
    $.cs_ref,
    $.cs_refrange,
    $.cs_relax,
    $.cs_section,
    $.cs_setlength,
    $.cs_sqrt,
    $.cs_stackrel,
    $.cs_string,
    $.cs_tag,
    $.cs_textstyle,
    $.cs_thanks,
    $.cs_title,
    $.cs_url,
    $.cs_use_209,
    $.cs_use,
    $.cs_verb,
    $.cs_volcite,
    $.cs_volcites,
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
    $.env_name_minipage,
    $.env_name_minted,
    $.env_name_picture,
    $.env_name_table,
    $.env_name_tabu,
    $.env_name_tabular,
    $.env_name_tabularstar,
    $.env_name_text,
    $.env_name_thebibliography,
    $.env_name_theorem,
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
    $.lparen,
    $.math_shift_end,
    $.math_shift,
    $.minus,
    $.name,
    $.octal,
    $.par,
    $.parameter_ref,
    $.plus_sym,
    $.plus,
    $.r,
    $.rbrack,
    $.rparen,
    $.short_verb_delim,
    $.spread,
    $.star,
    $.subscript,
    $.superscript,
    $.text_non_escape,
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

  rules: {
    document: $ => repeat($._text_mode),

    _nil_mode: $ => choice(
      $._nil_group,
      $.active_char,
      $.alignment_tab,
      $.cs,
      $.display_math_shift,
      $.ignored,
      $.invalid,
      $.math_shift,
      $.parameter_ref,
      $.subscript,
      $.superscript,
      $.text,
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
      $._text_group,
      $.par,
      $.semi_simple_group,
      $.text,
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
      $._math_group,
      $.subscript,
      $.superscript,
      alias($.text, $.math),
      ...rules.math.map(rule => rule($))
    ),

    nil_group: $ => group($, repeat($._nil_mode)),

    _nil_group: $ => alias($.nil_group, $.group),

    text_group: $ => group($, repeat($._text_mode)),

    _text_group: $ => alias($.text_group, $.group),

    math_group: $ => group($, repeat($._math_mode)),

    _math_group: $ => alias($.math_group, $.group),

    name_group: $ => group($, $.name),

    _name_group: $ => alias($.name_group, $.group),

    names_group: $ => group($, $.name, repeat(seq($.comma, $.name))),

    _names_group: $ => alias($.names_group, $.group),

    _nil_token: $ => choice(
      $.cs,
      $._nil_group,
      $.parameter_ref,
      alias($.text_single, $.text)
    ),

    _text_token: $ => choice(
      $.cs,
      $._text_group,
      $.parameter_ref,
      alias($.text_single, $.text)
    ),

    _math_token: $ => choice(
      $.cs,
      $._math_group,
      $.parameter_ref,
      alias($.text_single, $.math)
    ),

    _name_parameter: $ => choice(
      $.cs,
      $._name_group,
      $.parameter_ref
    ),

    _common_expanded_parameter: $ => choice(
      $.parameter_ref,
      ...rules.common.map(rule => rule($))
    ),

    _text_expanded_parameter: $ => choice(
      $._common_expanded_parameter,
      $._text_group,
      alias($.text_single, $.text),
      ...rules.text.map(rule => rule($))
    ),

    _math_expanded_parameter: $ => choice(
      $._common_expanded_parameter,
      $._math_group,
      alias($.text_single, $.math),
      ...rules.math.map(rule => rule($))
    ),

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

    dimension: $ => seq($.fixed, $.unit),

    _dimension: $ => choice(
      $.dimension,
      seq(optional($.fixed), $.cs)
    ),

    dimension_brack_group: $ => brackGroup($, $._dimension),

    _dimension_brack_group: $ => alias($.dimension_brack_group, $.brack_group),

    dimension_group: $ => group($, $._dimension),

    _dimension_parameter: $ => choice(alias($.dimension_group, $.group), $.cs),

    glue: $ => seq(
      $._dimension,
      optional(seq($.minus, $._dimension)),
      optional(seq($.plus, $._dimension))
    ),

    glue_group: $ => group($, $.glue),

    _glue_parameter: $ => choice($.cs, alias($.glue_group, $.group)),

    glue_brack_group: $ => brackGroup($, $.glue),

    _glue_brack_parameter: $ => alias($.glue_brack_group, $.brack_group),

    fixed_pair: $ => parenGroup($, $.fixed, $.comma, $.fixed),

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

    charcode: $ => seq($.backtick, choice(alias($.text_single, $.text), $.cs))
  }
}

function defRule (mode, label, rule) {
  g.rules[label] = rule

  rules[mode].push($ => $[label])
}

function isOptional (p) {
  return p.type === 'REPEAT' ||
    (p.type === 'CHOICE' && p.members.some(member => member.type === 'BLANK'))
}

function defCmd (mode, label, { cs, parameters, local }) {
  const cmdSym = (label in g.rules) ? `${mode}_${label}` : label

  g.rules[cmdSym] = function ($) {
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

  rules[mode].push($ => label === cmdSym ? $[cmdSym] : alias($[cmdSym], $[label]))
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

  g.rules[beginRuleSym] = function ($) {
    const body = beginParameters ? beginParameters($) : []
    const tail = []

    while (body.length && isOptional(body[body.length - 1])) {
      tail.unshift(body.pop())
    }

    if (!bare) {
      tail.unshift($._env_begin)
    }

    return beginCmd($,
      alias(name ? $[nameGroupRuleSym] : $.name_group, $.group),
      ...body, ...tail
    )
  }

  g.rules[endRuleSym] = $ => endCmd($,
    alias(name ? $[nameGroupRuleSym] : $.name_group, $.group),
    ...(endParameters ? endParameters($) : [])
  )

  if (mode === 'common' && !contents) {
    g.rules[envMathSym] = $ => seq(
      alias($[beginRuleSym], $.begin),
      // ...(bare ? [] : [$._env_begin]),
      repeat($._math_mode),
      choice(
        alias($[endRuleSym], $.end),
        $.exit
      ),
      ...(bare ? [] : [$._env_end])
    )

    g.rules[envTextSym] = $ => seq(
      alias($[beginRuleSym], $.begin),
      // ...(bare ? [] : [$._env_begin]),
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
      // ...(bare ? [] : [$._env_begin]),
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
