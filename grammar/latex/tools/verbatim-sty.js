module.exports = {
  environments: {
    comment: {
      name: $ => $.env_name_comment,
      bare: true,
      endParameters: $ => [
        optional(alias($.ignored_line, $.ignored))
      ],
      contents: $ => [alias($.verbatim, $.comment_block)]
    },
    verbatim: {
      name: $ => $.env_name_verbatim,
      bare: true,
      endParameters: $ => [
        optional(alias($.ignored_line, $.ignored))
      ],
      contents: $ => [$.verbatim]
    }
  }
}
