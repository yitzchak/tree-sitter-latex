const fs = require('fs')
const Parser = require('tree-sitter')
const language = require('..')
const readdir = require('readdir-enhanced')
const path = require('path')

const root = process.argv[2]

readdir.stream(root, { deep: true, filter: '**/*.{cls,tex,sty}' })
  .on('data', () => {})
  .on('file', (filePath) => {
    const code = fs.readFileSync(path.join(root, filePath), 'utf8')
    let document = null
    parser = new Parser()
    parser.setLanguage(language)
    document = parser.parse(code)
    if (document.rootNode.hasError()) {
      console.error(`[FAIL] ${filePath}`)
    } else {
      console.log(`[PASS] ${filePath}`)
    }
  })
  // .on('error', function(err) { console.err(err) })
  // .on('close', function() { console.log("close") })
