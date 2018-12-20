module.exports.env = [{
  label: 'alltt',
  text: true,
  name: $ => 'alltt',
  contents: $ => [
    $.__ccc_alltt,
    repeat($._text_mode)
  ]
}]
