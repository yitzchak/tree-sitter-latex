module.exports.env = [{
  label: 'luacode',
  text: true,
  math: true,
  name: $ => 'luacode',
  contents: $ => [
    $.__ccc_luacode,
    repeat($._text_mode)
  ]
}, {
  label: 'luacodestar',
  text: true,
  math: true,
  name: $ => 'luacode*',
  parameters: $ => [
    $.eol
  ],
  contents: $ => [
    alias($.luacodestar_body, $.text)
  ]
}]
