const { Document } = require('tree-sitter')
const concat = require('concat-stream')

const document = new Document()

document.setLanguage(require('../index.js'))

process.stdin.pipe(concat({ encoding: 'string' }, value => {
  document.setInputString(value)
  document.parse()
  console.log(document.rootNode.toString())
}))
