#!/usr/bin/env node

// This file is based on the benchmark script from tree-sitter-javascript
//
// The MIT License (MIT)
//
// Copyright (c) 2014 Max Brunsfeld
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

const fs = require('fs')
const Parser = require('tree-sitter')
const language = require('..')

const ITERATION_COUNT = 100

if (process.argv.length < 3) {
  console.log('Usage: script/benchmark.js <file>')
  process.exit(1)
}

const fileName = process.argv[2]
const code = fs.readFileSync(fileName, 'utf8')

profile('Tree-sitter', () => {
  let parser = new Parser()

  parser.setLanguage(language)
  parser.parse(code)
})

function profile (name, action) {
  console.log(name + ':')
  let durations = []

  for (let i = 0; i < ITERATION_COUNT; i++) {
    let startTime = Date.now()
    try {
      action()
    } catch (e) {
      console.log('FAILED', e.message)
      return
    }
    let endTime = Date.now()
    durations.push(endTime - startTime)
  }

  durations.sort((a, b) => a - b)
  const average = durations.reduce((sum, term) => sum + term) / ITERATION_COUNT
  const min = durations[0]
  const max = durations[durations.length - 1]

  console.log('Average:', average, 'Min:', min, 'Max:', max)
}
