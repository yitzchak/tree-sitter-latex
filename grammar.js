module.exports = grammar({
  name: 'latex',

  rules: {
    document: $ => optional($.text_mode),

    _text_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, 'text'),
      $.superscript,
      $.text,
      $.display_math,
      $.inline_math,
      $.verbatim_environment,
      $.text_environment,
      $.command,
      $.escaped,
      $.text_group,
      $.opt_text_group,
      $.at_group,
      $.comment
    ),

    text_mode: $ => repeat1($._text_mode),

    _at_text_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      // Underscore produces an error by default in LaTeX text mode. Some
      // some package define underscore to produce \tex­tun­der­score. We assume
      // that this has been done since underscore is never actually subscript
      // in text mode.
      alias($.subscript, 'text'),
      $.superscript,
      $.text,
      $.display_math,
      $.inline_math,
      $.verbatim_environment,
      $.text_environment,
      $.at_command,
      $.escaped,
      $.at_text_group,
      $.opt_at_text_group,
      $.comment
    ),

    at_group: $ => seq($.makeatletter, repeat($._at_text_mode), $.makeatother),

    _math_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      $.subscript,
      $.superscript,
      $.text,
      $.math_environment,
      $.command,
      $.escaped,
      $.math_group,
      $.opt_math_group,
      $.tag,
      $.comment
    ),

    math_mode: $ => prec.left(2, repeat1($._math_mode)),

    parameter: $ => seq(
      $.parameter_char, $.number
    ),

    text_environment: $ => seq(
      $.begin, repeat($._text_mode), $.end
    ),

    math_environment: $ => seq(
      $.begin, repeat($._math_mode), $.end
    ),

    display_math: $ => choice(
      seq(
        $.math_shift, $.math_shift,
        $.math_mode,
        $.math_shift, $.math_shift
      ),
      seq(
        $.begin_display_math,
        $.math_mode,
        $.end_display_math
      ),
      seq(
        $.begin_displaymath,
        $.math_mode,
        $.end_displaymath
      ),
      seq(
        $.begin_eqnarray,
        $.math_mode,
        $.end_eqnarray
      ),
      seq(
        $.begin_eqnarray_star,
        $.math_mode,
        $.end_eqnarray_star
      ),
      // amsmath
      seq( // AMS align
        $.begin_align,
        $.math_mode,
        $.end_align
      ),
      seq( // AMS align*
        $.begin_align_star,
        $.math_mode,
        $.end_align_star
      ),
      seq( // AMS alignat
        $.begin_alignat,
        $.text_group,
        $.math_mode,
        $.end_alignat
      ),
      seq( // AMS alignat*
        $.begin_alignat_star,
        $.text_group,
        $.math_mode,
        $.end_alignat_star
      ),
      seq(
        $.begin_equation,
        $.math_mode,
        $.end_equation
      ),
      seq(
        $.begin_equation_star,
        $.math_mode,
        $.end_equation_star
      ),
      seq(
        $.begin_flalign,
        $.math_mode,
        $.end_flalign
      ),
      seq(
        $.begin_flalign_star,
        $.math_mode,
        $.end_flalign_star
      ),
      seq( // AMS gather
        $.begin_gather,
        $.math_mode,
        $.end_gather
      ),
      seq( // AMS gather*
        $.begin_gather_star,
        $.math_mode,
        $.end_gather_star
      ),
      seq( // AMS multiline
        $.begin_multiline,
        $.math_mode,
        $.end_multiline
      ),
      seq( // AMS multiline*
        $.begin_multiline_star,
        $.math_mode,
        $.end_multiline_star
      ),
      seq( // AMS split
        $.begin_split,
        $.math_mode,
        $.end_split
      ),
      seq( // AMS split*
        $.begin_split_star,
        $.math_mode,
        $.end_split_star
      ),
      // breqn environments
      seq(
        $.begin_dmath,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_dmath
      ),
      seq(
        $.begin_dmath_star,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_dmath_star
      ),
      seq(
        $.begin_dseries,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_dseries
      ),
      seq(
        $.begin_dseries_star,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_dseries_star
      ),
      seq(
        $.begin_dgroup,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_dgroup
      ),
      seq(
        $.begin_dgroup_star,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_dgroup_star
      ),
      seq(
        $.begin_darray,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_darray
      ),
      seq(
        $.begin_darray_star,
        optional($.opt_text_group),
        $._end_of_line,
        $.math_mode,
        $.end_darray_star
      )
    ),

    inline_math: $ => choice(
      seq(
        $.math_shift,
        $.math_mode, // This has to be repeat1 or $$ will not work for display math
        $.math_shift
      ),
      seq(
        $.begin_inline_math,
        $.math_mode,
        $.end_inline_math
      ),
      seq(
        $.begin_math,
        $.math_mode,
        $.end_math
      )
    ),

    begin_display_math: $ => seq($._escape, '['),

    end_display_math: $ => seq($._escape, ']'),

    begin_inline_math: $ => seq($._escape, '('),

    end_inline_math: $ => seq($._escape, ')'),

    begin_align: $ => seq(
      $.begin_token,
      $.begin_group,
      'align',
      $.end_group
    ),

    end_align: $ => seq(
      $.end_token,
      $.begin_group,
      'align',
      $.end_group
    ),

    begin_align_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'align*',
      $.end_group
    ),

    end_align_star: $ => seq(
      $.end_token,
      $.begin_group,
      'align*',
      $.end_group
    ),

    begin_alignat: $ => seq(
      $.begin_token,
      $.begin_group,
      'alignat',
      $.end_group),

    end_alignat: $ => seq(
      $.end_token,
      $.begin_group,
      'alignat',
      $.end_group
    ),

    begin_alignat_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'alignat*',
      $.end_group
    ),

    end_alignat_star: $ => seq(
      $.end_token,
      $.begin_group,
      'alignat*',
      $.end_group
    ),

    begin_displaymath: $ => seq(
      $.begin_token,
      $.begin_group,
      'displaymath',
      $.end_group
    ),

    end_displaymath: $ => seq(
      $.end_token,
      $.begin_group,
      'displaymath',
      $.end_group
    ),

    begin_dmath: $ => seq(
      $.begin_token,
      $.begin_group,
      'dmath',
      $.end_group
    ),

    end_dmath: $ => seq(
      $.end_token,
      $.begin_group,
      'dmath',
      $.end_group
    ),

    begin_dmath_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'dmath*',
      $.end_group
    ),

    end_dmath_star: $ => seq(
      $.end_token,
      $.begin_group,
      'dmath*',
      $.end_group
    ),

    begin_dseries: $ => seq(
      $.begin_token,
      $.begin_group,
      'dseries',
      $.end_group
    ),

    end_dseries: $ => seq(
      $.end_token,
      $.begin_group,
      'dseries',
      $.end_group
    ),

    begin_dseries_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'dseries*',
      $.end_group
    ),

    end_dseries_star: $ => seq(
      $.end_token,
      $.begin_group,
      'dseries*',
      $.end_group
    ),

    begin_dgroup: $ => seq(
      $.begin_token,
      $.begin_group,
      'dgroup',
      $.end_group
    ),

    end_dgroup: $ => seq(
      $.end_token,
      $.begin_group,
      'dgroup',
      $.end_group
    ),

    begin_dgroup_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'dgroup*',
      $.end_group
    ),

    end_dgroup_star: $ => seq(
      $.end_token,
      $.begin_group,
      'dgroup*',
      $.end_group
    ),

    begin_darray: $ => seq(
      $.begin_token,
      $.begin_group,
      'darray',
      $.end_group
    ),

    end_darray: $ => seq(
      $.end_token,
      $.begin_group,
      'darray',
      $.end_group
    ),

    begin_darray_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'darray*',
      $.end_group
    ),

    end_darray_star: $ => seq(
      $.end_token,
      $.begin_group,
      'darray*',
      $.end_group
    ),

    begin_eqnarray: $ => seq(
      $.begin_token,
      $.begin_group,
      'eqnarray',
      $.end_group
    ),

    end_eqnarray: $ => seq(
      $.end_token,
      $.begin_group,
      'eqnarray',
      $.end_group
    ),

    begin_eqnarray_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'eqnarray*',
      $.end_group
    ),

    end_eqnarray_star: $ => seq(
      $.end_token,
      $.begin_group,
      'eqnarray*',
      $.end_group
    ),

    begin_equation: $ => seq(
      $.begin_token,
      $.begin_group,
      'equation',
      $.end_group
    ),

    end_equation: $ => seq(
      $.end_token,
      $.begin_group,
      'equation',
      $.end_group
    ),

    begin_equation_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'equation*',
      $.end_group
    ),

    end_equation_star: $ => seq(
      $.end_token,
      $.begin_group,
      'equation*',
      $.end_group
    ),

    begin_flalign: $ => seq(
      $.begin_token,
      $.begin_group,
      'flalign',
      $.end_group
    ),

    end_flalign: $ => seq(
      $.end_token,
      $.begin_group,
      'flalign',
      $.end_group
    ),

    begin_flalign_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'flalign*',
      $.end_group
    ),

    end_flalign_star: $ => seq(
      $.end_token,
      $.begin_group,
      'flalign*',
      $.end_group
    ),

    begin_gather: $ => seq(
      $.begin_token,
      $.begin_group,
      'gather',
      $.end_group
    ),

    end_gather: $ => seq(
      $.end_token,
      $.begin_group,
      'gather',
      $.end_group
    ),

    begin_gather_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'gather*',
      $.end_group
    ),

    end_gather_star: $ => seq(
      $.end_token,
      $.begin_group,
      'gather*',
      $.end_group
    ),

    begin_multiline: $ => seq(
      $.begin_token,
      $.begin_group,
      'multiline',
      $.end_group
    ),

    end_multiline: $ => seq(
      $.end_token,
      $.begin_group,
      'multiline',
      $.end_group
    ),

    begin_multiline_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'multiline*',
      $.end_group
    ),

    end_multiline_star: $ => seq(
      $.end_token,
      $.begin_group,
      'multiline*',
      $.end_group
    ),

    begin_split: $ => seq(
      $.begin_token,
      $.begin_group,
      'split',
      $.end_group
    ),

    end_split: $ => seq(
      $.end_token,
      $.begin_group,
      'split',
      $.end_group
    ),

    begin_split_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'split*',
      $.end_group
    ),

    end_split_star: $ => seq(
      $.end_token,
      $.begin_group,
      'split*',
      $.end_group
    ),

    begin_math: $ => seq(
      $.begin_token,
      $.begin_group,
      'math',
      $.end_group
    ),

    end_math: $ => seq(
      $.end_token,
      $.begin_group,
      'math',
      $.end_group
    ),

    begin_verbatim: $ => seq(
      $.begin_token,
      $.begin_group,
      'verbatim',
      $.end_group
    ),

    end_verbatim: $ => seq(
      $.end_token,
      $.begin_group,
      'verbatim',
      $.end_group
    ),

    begin_Verbatim: $ => seq( // Verbatim from fancyvrb package
      $.begin_token,
      $.begin_group,
      'Verbatim',
      $.end_group
    ),

    end_Verbatim: $ => seq( // Verbatim from fancyvrb package
      $.end_token,
      $.begin_group,
      'Verbatim',
      $.end_group
    ),

    begin_Verbatim_star: $ => seq( // Verbatim* from fancyvrb package
      $.begin_token,
      $.begin_group,
      'Verbatim*',
      $.end_group
    ),

    end_Verbatim_star: $ => seq( // Verbatim* from fancyvrb package
      $.end_token,
      $.begin_group,
      'Verbatim*',
      $.end_group
    ),

    begin_BVerbatim: $ => seq( // BVerbatim from fancyvrb package
      $.begin_token,
      $.begin_group,
      'BVerbatim',
      $.end_group
    ),

    end_BVerbatim: $ => seq( // BVerbatim from fancyvrb package
      $.end_token,
      $.begin_group,
      'BVerbatim',
      $.end_group
    ),

    begin_BVerbatim_star: $ => seq( // BVerbatim* from fancyvrb package
      $.begin_token,
      $.begin_group,
      'BVerbatim*',
      $.end_group
    ),

    end_BVerbatim_star: $ => seq( // BVerbatim* from fancyvrb package
      $.end_token,
      $.begin_group,
      'BVerbatim*',
      $.end_group
    ),

    begin_LVerbatim: $ => seq( // LVerbatim from fancyvrb package
      $.begin_token,
      $.begin_group,
      'LVerbatim',
      $.end_group
    ),

    end_LVerbatim: $ => seq( // LVerbatim from fancyvrb package
      $.end_token,
      $.begin_group,
      'LVerbatim',
      $.end_group
    ),

    begin_LVerbatim_star: $ => seq( // LVerbatim* from fancyvrb package
      $.begin_token,
      $.begin_group,
      'LVerbatim*',
      $.end_group
    ),

    end_LVerbatim_star: $ => seq( // LVerbatim* from fancyvrb package
      $.end_token,
      $.begin_group,
      'LVerbatim*',
      $.end_group
    ),

    begin_lstlisting: $ => seq( // lstlisting from listing package
      $.begin_token,
      $.begin_group,
      'lstlisting',
      $.end_group
    ),

    end_lstlisting: $ => seq( // lstlisting from listing package
      $.end_token,
      $.begin_group,
      'lstlisting',
      $.end_group
    ),

    begin_minted: $ => seq( // minted from minted package
      $.begin_token,
      $.begin_group,
      'minted',
      $.end_group
    ),

    end_minted: $ => seq( // minted from minted package
      $.end_token,
      $.begin_group,
      'minted',
      $.end_group
    ),

    tag: $ => seq($.tag_token, $.math_text_group),

    tag_token: $ => seq($._escape, 'tag'),

    verbatim_environment: $ => choice(
      seq(
        $.begin_verbatim,
        $.verbatim_text,
        $.end_verbatim
      ),
      seq( // Verbatim from fancyvrb package
        $.begin_Verbatim,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_Verbatim
      ),
      seq( // Verbatim* from fancyvrb package
        $.begin_Verbatim_star,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_Verbatim_star
      ),
      seq( // BVerbatim from fancyvrb package
        $.begin_BVerbatim,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_BVerbatim
      ),
      seq( // BVerbatim* from fancyvrb package
        $.begin_BVerbatim_star,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_BVerbatim_star
      ),
      seq( // LVerbatim from fancyvrb package
        $.begin_LVerbatim,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_LVerbatim
      ),
      seq( // LVerbatim* from fancyvrb package
        $.begin_LVerbatim_star,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_LVerbatim_star
      ),
      seq( // lstlisting from listing package
        $.begin_lstlisting,
        optional($.opt_text_group),
        $.verbatim_text,
        $.end_lstlisting
      ),
      seq( // minted from minted package
        $.begin_minted,
        $.text_group,
        $.verbatim_text,
        $.end_minted
      )
    ),

    escaped: $ => seq(
      $._escape,
      /[^()\[\]]/
    ),

    command: $ => choice(
      $.catcode,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      $.token
    ),

    at_command: $ => choice(
      $.catcode,
      $.documentclass,
      $.include,
      $.section,
      $.storage,
      $.usepackage,
      $.at_token
    ),

    begin: $ => seq($.begin_token, $.simple_text_group),

    begin_token: $ => seq($._escape, "begin"),

    end: $ => seq($.end_token, $.simple_text_group),

    end_token: $ => seq($._escape, "end"),

    documentclass: $ => seq(
      $.documentclass_token,
      optional($.opt_text_group),
      $.simple_text_group
    ),

    documentclass_token: $ => seq($._escape, "documentclass"),

    usepackage: $ => seq(
      $.usepackage_token,
      optional($.opt_text_group),
      $.simple_text_group
    ),

    usepackage_token: $ => seq($._escape, "usepackage"),

    include: $ => seq($.include_token, $.text_group),

    include_token: $ => seq($._escape, /include|input/),

    section: $ => seq($.section_token, optional($.opt_text_group), $.text_group),

    section_token: $ => seq(
      $._escape,
      /section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/
    ),

    storage: $ => $.storage_token,

    storage_token: $ => seq($._escape, /[egx]?def/),

    catcode: $ => seq(
      $.catcode_token, $.escaped, '=', $.number
    ),

    catcode_token: $ => seq($._escape, /k?catcode`/),

    makeatletter: $ => $.makeatletter_token,

    makeatletter_token: $ => seq($._escape, 'makeatletter'),

    makeatother: $ => $.makeatother_token,

    makeatother_token: $ => seq($._escape, 'makeatother'),

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    at_text_group: $ => seq(
      $.begin_group, repeat($._at_text_mode), $.end_group
    ),

    simple_text_group: $ => seq(
      $.begin_group, $.text, $.end_group
    ),

    opt_text_group: $ => seq(
      $.begin_opt, repeat($._text_mode), $.end_opt
    ),

    opt_at_text_group: $ => seq(
      $.begin_opt, repeat($._at_text_mode), $.end_opt
    ),

    math_group: $ => seq(
      $.begin_group, repeat($._math_mode), $.end_group
    ),

    opt_math_group: $ => seq(
      $.begin_opt, repeat($._math_mode), $.end_opt
    ),

    math_text_group: $ => seq(
      $.begin_group, optional($.text_mode), $.end_group
    ),

    token: $ => seq($._escape, $._name),

    at_token: $ => seq($._escape, $._at_name),

    comment: $ => seq(
      $.comment_char,
      choice(
        $.magic,
        $.comment_text
      )
    ),

    verbatim_text: $ => repeat1($._verbatim_token),

    _escape: $ => '\\',
    begin_group: $ => '{',
    end_group: $ => '}',
    begin_opt: $ => '[',
    end_opt: $ => ']',
    math_shift: $ => '$',
    alignment_tab: $ => '&',
    _end_of_line: $ => '\n',
    parameter_char: $ => '#',
    superscript: $ => '^',
    subscript: $ => '_',
    //ignored_character: //,
    // space: $ => /[ \t]/,
    // letter: $ => /[a-zA-Z]/,
    _name: $ => /[a-zA-Z]+/,
    _at_name: $ => /[a-zA-Z@]+/,
    // other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    comment_char: $ => '%',
    text: $ => /[^\\{}$&#^_~%\[\]]+/,
    number: $ => /[0-9]+/,
    _verbatim_token: $ => /(\n|.)/,

    magic: $ => /\s*!T[eE]X\s+.*/,
    comment_text: $ => /.*/
  }
})
