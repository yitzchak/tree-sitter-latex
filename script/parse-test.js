const fs = require('fs')
const Parser = require('tree-sitter')
const language = require('..')
const readdir = require('readdir-enhanced')
const path = require('path')
const chalk = require('chalk')

const root = process.argv[2]
let failureCount = 0

readdir.stream(root, { deep: true, filter: '**/*.{cls,ltx,tex,sty}' })
  .on('data', () => {})
  .on('file', (filePath) => {
    const code = fs.readFileSync(path.join(root, filePath), 'utf8')
    let document = null
    let parser = new Parser()
    parser.setLanguage(language)
    document = parser.parse(code)
    if (document.rootNode.hasError()) {
      console.log(chalk.red(`\u2717 ${filePath}`))
      failureCount++
    } else {
      console.log(chalk.green(`\u2713 ${filePath}`))
    }
  })
  .on('end', () => {
    if (failureCount === 0) {
      console.log(chalk.green('\nAll files parsed successfully.'))
    } else {
      console.log(chalk.red(`\nParsing failed on ${failureCount} files.`))
      process.exit(1)
    }
  })
