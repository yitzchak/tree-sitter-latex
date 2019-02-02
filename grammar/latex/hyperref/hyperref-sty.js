module.exports = {
  commands: {
    href: {
      cs: $ => $.cs_href,
      parameters: $ => [
        optional($.brack_group),
        $._token,
        $._token
      ]
    },
    url: {
      cs: $ => $.cs_url,
      parameters: $ => [
        $._token
      ]
    },
    hyperbaseurl: {
      cs: $ => $.cs_hyperbaseurl,
      parameters: $ => [
        $._token
      ]
    },
    hyperimage: {
      cs: $ => $.cs_hyperimage,
      parameters: $ => [
        $._token,
        $._token
      ]
    },
    hyperref: {
      cs: $ => $.cs_hyperref,
      parameters: $ => [
        choice(
          seq(
            $._token,
            $._token,
            $._token,
            $._token
          ),
          seq(
            $.brack_group,
            $._token
          )
        )
      ]
    }
  }
}
