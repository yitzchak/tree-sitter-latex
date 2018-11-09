module.exports = grammar({
  name: 'latex',

  rules: {
    document: $ => optional($.text_mode),

    _text_mode: $ => choice(
      $.active_char,
      $.alignment_tab,
      $.parameter,
      $.subscript,
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
      $.comment
    ),

    text_mode: $ => repeat1($._text_mode),

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
        $._escape, '[',
        $.math_mode,
        $._escape, ']'
      ),
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
        $.math_mode,
        $.end_alignat
      ),
      seq( // AMS alignat*
        $.begin_alignat_star,
        $.math_mode,
        $.end_alignat_star
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
      seq( // AMS multline
        $.begin_multline,
        $.math_mode,
        $.end_multline
      ),
      seq( // AMS multline*
        $.begin_multline_star,
        $.math_mode,
        $.end_multline_star
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
      )
    ),

    inline_math: $ => choice(
      seq(
        $.math_shift,
        $.math_mode, // This has to be repeat1 or $$ will not work for display math
        $.math_shift
      ),
      seq(
        $._escape, '(',
        $.math_mode,
        $._escape, ')'
      ),
      seq(
        $.begin_math,
        $.math_mode,
        $.end_math
      )
    ),

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
      $.end_group,
      $.opt_text_group),

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
      $.end_group,
      $.text_group
    ),

    end_alignat_star: $ => seq(
      $.end_token,
      $.begin_group,
      'alignat*',
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

    begin_multline: $ => seq(
      $.begin_token,
      $.begin_group,
      'multline',
      $.end_group
    ),

    end_multline: $ => seq(
      $.end_token,
      $.begin_group,
      'multline',
      $.end_group
    ),

    begin_multline_star: $ => seq(
      $.begin_token,
      $.begin_group,
      'multline*',
      $.end_group
    ),

    end_multline_star: $ => seq(
      $.end_token,
      $.begin_group,
      'multline*',
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
      'lstlisting',
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
        repeat($.verbatim_token),
        $.end_verbatim
      ),
      seq( // Verbatim from fancyvrb package
        $.begin_Verbatim,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_Verbatim
      ),
      seq( // Verbatim* from fancyvrb package
        $.begin_Verbatim_star,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_Verbatim_star
      ),
      seq( // BVerbatim from fancyvrb package
        $.begin_BVerbatim,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_BVerbatim
      ),
      seq( // BVerbatim* from fancyvrb package
        $.begin_BVerbatim_star,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_BVerbatim_star
      ),
      seq( // LVerbatim from fancyvrb package
        $.begin_LVerbatim,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_LVerbatim
      ),
      seq( // LVerbatim* from fancyvrb package
        $.begin_LVerbatim_star,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_LVerbatim_star
      ),
      seq( // lstlisting from listing package
        $.begin_lstlisting,
        optional($.opt_text_group),
        repeat($.verbatim_token),
        $.end_lstlisting
      ),
      seq( // minted from minted package
        $.begin_minted,
        $.text_group,
        repeat($.verbatim_token),
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

    text_group: $ => seq(
      $.begin_group, repeat($._text_mode), $.end_group
    ),

    simple_text_group: $ => seq(
      $.begin_group, $.text, $.end_group
    ),

    opt_text_group: $ => seq(
      $.begin_opt, repeat($._math_mode), $.end_opt
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

    comment: $ => seq(
      $.comment_char,
      choice(
        $.magic,
        $.comment_text
      )
    ),

    _escape: $ => '\\',
    begin_group: $ => '{',
    end_group: $ => '}',
    begin_opt: $ => '[',
    end_opt: $ => ']',
    math_shift: $ => '$',
    alignment_tab: $ => '&',
    end_of_line: $ => '\n',
    parameter_char: $ => '#',
    superscript: $ => '^',
    subscript: $ => '_',
    //ignored_character: //,
    // space: $ => /[ \t]/,
    // letter: $ => /[a-zA-Z]/,
    _name: $ => /[a-zA-Z]+/,
    // other: $ => /[^\\{}$&\n#^_ \ta-zA-Z~%]/,
    active_char: $ => '~',
    comment_char: $ => '%',
    text: $ => /[^\\{}$&#^_~%\[\]]+/,
    number: $ => /[0-9]+/,
    verbatim_token: $ => /(\n|.)/,

    magic: $ => /\s*!T[eE]X\s+.*/,
    comment_text: $ => /.*/
  }
})
