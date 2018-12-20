module.exports.env = [{
  label: 'tabu',
  // tabu behaves like array in math mode and tabular in text mode
  text: true,
  math: true,
  name: $ => /(long)?tabu/,
  parameters: $ => [
    optional(seq(choice('to', 'spread'), $._dimension)),
    optional($.brack_group),
    $.group
  ]
}]
