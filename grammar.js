const readdir = require('readdir-enhanced')
const path = require('path')

function cmd ($, cs, ...args) {
  cs = alias(cs, $.cs)

  return (args.length === 0)
    ? cs
    : seq(cs, ...args)
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

function cmdGroup ($, ...contents) {
  return seq($.l, $._scope_begin_cmd, ...contents, $.r, $._scope_end)
}

// function simple_group ($, ...contents) {
//   return seq(choice($.l, $.bgroup), $._scope_begin, ...contents, choice($.r, $.egroup), $._scope_end)
// }

function semiSimpleGroup ($, ...contents) {
  return seq($.begingroup, $._scope_begin, ...contents, choice($.endgroup, $.exit, alias($.exit_math, $.exit)), $._scope_end)
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
    $._mode_math,
    $._mode_text,
    $._scope_begin_cmd,
    $._scope_begin_env,
    $._scope_begin,
    $._scope_end,
    $._space,
    $.active_char,
    $.alignment_tab,
    $.backtick,
    $.char_ref_invalid,
    $.comma,
    $.comment_arara,
    $.comment_bib,
    $.comment_tag,
    $.comment_tex,
    $.comment,
    $.cs_addvspace,
    $.cs_at_ifpackagelater,
    $.cs_At,
    $.cs_author,
    $.cs_begin,
    $.cs_begingroup,
    $.cs_bgroup,
    $.cs_bibitem,
    $.cs_CheckCommand,
    $.cs_cite,
    $.cs_cites,
    $.cs_cline,
    $.cs_code,
    $.cs_csname,
    $.cs_date,
    $.cs_DeclareOption,
    $.cs_def,
    $.cs_delete_verb_delim,
    $.cs_DeleteShortVerb,
    $.cs_discretionary,
    $.cs_display_math_begin,
    $.cs_display_math_end,
    $.cs_DoNotIndex,
    $.cs_egroup,
    $.cs_emph,
    $.cs_end,
    $.cs_endcsname,
    $.cs_endgroup,
    $.cs_endinput,
    $.cs_enlargethispage,
    $.cs_ensuremath,
    $.cs_Error,
    $.cs_ExecuteOptions,
    $.cs_expandafter,
    $.cs_ExplSyntaxOff,
    $.cs_ExplSyntaxOn,
    $.cs_footnote,
    $.cs_footnotemark,
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
    $.cs_hyphenation,
    $.cs_IfFileExists,
    $.cs_inline_math_begin,
    $.cs_inline_math_end,
    $.cs_input,
    $.cs_item,
    $.cs_label,
    $.cs_left,
    $.cs_let,
    $.cs_linebreak,
    $.cs_longnewglossaryentry,
    $.cs_lstinline,
    $.cs_lua,
    $.cs_luacode,
    $.cs_make_verb_delim,
    $.cs_makeatletter,
    $.cs_makeatother,
    $.cs_makebox,
    $.cs_MakeShortVerb,
    $.cs_marginpar,
    $.cs_mathaccent,
    $.cs_mathstyle,
    $.cs_mbox,
    $.cs_mint,
    $.cs_mintinline,
    $.cs_multicolumn,
    $.cs_NeedsTeXFormat,
    $.cs_newacronym,
    $.cs_newcommand,
    $.cs_newcounter,
    $.cs_newenvironment,
    $.cs_newfont,
    $.cs_newglossaryentry,
    $.cs_newlength,
    $.cs_newline,
    $.cs_newsavebox,
    $.cs_newtheorem,
    $.cs_nocite,
    $.cs_obeycr,
    $.cs_pagebreak,
    $.cs_pagenumbering,
    $.cs_pagestyle,
    $.cs_par,
    $.cs_parbox,
    $.cs_PassOptionsTo,
    $.cs_phantom_smash,
    $.cs_printcounter,
    $.cs_ProcessOptions,
    $.cs_protect,
    $.cs_Provides,
    $.cs_ProvidesExpl,
    $.cs_raisebox,
    $.cs_ref,
    $.cs_refrange,
    $.cs_regexp,
    $.cs_relax,
    $.cs_restorecr,
    $.cs_right,
    $.cs_savebox,
    $.cs_sbox,
    $.cs_section,
    $.cs_setcounter,
    $.cs_setlength,
    $.cs_setto,
    $.cs_space,
    $.cs_sqrt,
    $.cs_stackrel,
    $.cs_stepcounter,
    $.cs_string,
    $.cs_tag,
    $.cs_text,
    $.cs_textstyle,
    $.cs_thanks,
    $.cs_title,
    $.cs_url,
    $.cs_use_209,
    $.cs_use,
    $.cs_usebox,
    $.cs_value,
    $.cs_verb,
    $.cs_volcite,
    $.cs_volcites,
    $.cs_WarningInfo,
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
    $.env_name_gnuplot,
    $.env_name_inline_math,
    $.env_name_itemize,
    $.env_name_lrbox,
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
    $.env_name_tikzpicture,
    $.env_name_verbatim,
    $.env_name_Verbatim,
    $.env_name,
    $.eol,
    $.equals,
    $.exit_math,
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
    $.math_non_escape,
    $.math_shift_end,
    $.math_shift,
    $.math_single,
    $.math,
    $.minus,
    $.name,
    $.octal,
    $.par_eol,
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
    document: $ => repeat($._expanded_tokens),

    _nil_tokens: $ => choice(
      $._nil_group,
      $.active_char,
      $.alignment_tab,
      $.char_ref_invalid,
      $.cs,
      $.display_math_shift,
      $.ignored,
      $.invalid,
      $.math_shift,
      $.parameter_ref,
      $.subscript,
      $.superscript,
      $.text
    ),

    _expanded_tokens: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.char_ref_invalid,
      $.group,
      $.ignored,
      $.invalid,
      $.math,
      $.par,
      $.parameter_ref,
      $.semi_simple_group,
      $.subscript,
      $.superscript,
      $.text,
      ...rules.text.map(rule => rule($))
    ),

    nil_group: $ => group($, repeat($._nil_tokens)),

    _nil_group: $ => alias($.nil_group, $.group),

    group: $ => group($, repeat($._expanded_tokens)),

    name_group: $ => group($, $.name),

    _name_group: $ => alias($.name_group, $.group),

    names_group: $ => group($, $.name, repeat(seq($.comma, $.name))),

    _names_group: $ => alias($.names_group, $.group),

    env_name_group: $ => group($, alias($.env_name, $.name)),

    _env_name_group: $ => alias($.env_name_group, $.group),

    _nil_token: $ => choice(
      $.cs,
      $._nil_group,
      $.parameter_ref,
      alias($.text_single, $.text)
    ),

    _token: $ => choice(
      $.cs,
      $.group,
      $.parameter_ref,
      alias($.math_single, $.math),
      alias($.text_single, $.text)
    ),

    _name_token: $ => choice(
      $.cs,
      $._name_group,
      $.parameter_ref
    ),

    _expanded_token: $ => choice(
      $.parameter_ref,
      $.group,
      alias($.math_single, $.math),
      alias($.text_single, $.text),
      ...rules.text.map(rule => rule($))
    ),

    apply_group: $ => cmdGroup($, repeat($._expanded_tokens)),

    _apply_token: $ => choice($.cs, alias($.apply_group, $.group)),

    make_verb_delim_group: $ => group($,
      choice(
        cmd($, $.cs_make_verb_delim),
        repeat($._expanded_tokens)
      )
    ),

    _make_verb_delim_token: $ => choice(
      cmd($, $.cs_make_verb_delim),
      $.cs,
      alias($.make_verb_delim_group, $.group)
    ),

    delete_verb_delim_group: $ => group($,
      choice(
        cmd($, $.cs_delete_verb_delim),
        repeat($._expanded_tokens)
      )
    ),

    _delete_verb_delim_token: $ => choice(
      cmd($, $.cs_delete_verb_delim),
      $.cs,
      alias($.delete_verb_delim_group, $.group)
    ),

    _cs_token: $ => choice($.cs, alias($.cs_group, $.group)),

    cs_group: $ => group($, $.cs),

    brack_group: $ => brackGroup($, repeat($._expanded_tokens)),

    semi_simple_group: $ => semiSimpleGroup($, repeat($._expanded_tokens)),

    dimension: $ => seq($.fixed, $.unit),

    _dimension: $ => choice(
      $.dimension,
      seq(optional($.fixed), $.cs)
    ),

    dimension_brack_group: $ => brackGroup($, $._dimension),

    _dimension_brack_group: $ => alias($.dimension_brack_group, $.brack_group),

    dimension_group: $ => group($, $._dimension),

    _dimension_token: $ => choice(alias($.dimension_group, $.group), $.cs),

    glue: $ => seq(
      $._dimension,
      optional(seq($.minus, $._dimension)),
      optional(seq($.plus, $._dimension))
    ),

    glue_group: $ => group($, $.glue),

    _glue_token: $ => choice($.cs, alias($.glue_group, $.group)),

    glue_brack_group: $ => brackGroup($, $.glue),

    _glue_brack_group: $ => alias($.glue_brack_group, $.brack_group),

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

function defCmd (mode, label, { cs, parameters, apply }) {
  const cmdSym = (label in g.rules) ? `${mode}_${label}` : label

  g.rules[cmdSym] = $ => {
    const head = []
    const body = parameters ? parameters($) : []
    const tail = []
    const exit = [$.exit]

    if (mode !== 'math') {
      exit.push($.par)
    }

    if (mode !== 'text') {
      exit.push(alias($.exit_math, $.exit))
    }

    while (body.length && isOptional(body[body.length - 1])) {
      tail.unshift(body.pop())
    }

    while (body.length && isOptional(body[0])) {
      head.push(body.shift())
    }

    if (apply) {
      tail.unshift($._cmd_apply)
    }

    const bodyAndTail = body.reduceRight((c, p) => choice(...exit, c ? seq(p, c) : p),
      tail.length === 0 ? undefined : (tail.length === 1 ? tail[0] : seq(...tail)))

    return cmd($,
      cs($),
      ...head,
      ...bodyAndTail ? [bodyAndTail] : [])
  }

  rules[mode].push($ => label === cmdSym ? $[cmdSym] : alias($[cmdSym], $[label]))
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

  g.rules[beginRuleSym] = function ($) {
    const body = beginParameters ? beginParameters($) : []
    const tail = []

    while (body.length && isOptional(body[body.length - 1])) {
      tail.unshift(body.pop())
    }

    if (!bare) {
      tail.unshift($._scope_begin_env)
    }

    return beginCmd($,
      alias(name ? $[nameGroupRuleSym] : $.env_name_group, $.group),
      ...body, ...tail
    )
  }

  g.rules[endRuleSym] = $ => endCmd($,
    alias(name ? $[nameGroupRuleSym] : $.env_name_group, $.group),
    ...(endParameters ? endParameters($) : [])
  )

  g.rules[envSym] = $ => seq(
    alias($[beginRuleSym], $.begin),
    // ...(bare ? [] : [$._scope_begin_env]),
    ...(contents ? contents($) : [repeat($._expanded_tokens)]),
    choice(
      alias($[endRuleSym], $.end),
      $.exit
    ),
    ...(bare ? [] : [$._scope_end])
  )

  rules[mode].push($ => $[envSym])
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
