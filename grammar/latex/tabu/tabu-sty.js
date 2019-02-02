module.exports = {
  environments: {
    tabu: {
      name: $ => $.env_name_tabu,
      beginParameters: $ => [
        optional(
          seq(
            choice($.to, $.spread),
            $._dimension
          )
        ),
        optional($.brack_group),
        $._token
      ]
    }
  }
}
