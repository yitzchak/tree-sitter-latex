{
  "targets": [
    {
      "target_name": "tree_sitter_latex_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "src/binding.cc",
        "src/catcode.cc",
        "src/parser.c",
        "src/scanner_control_sequences.cc",
        "src/scanner_environments.cc",
        "src/scanner_keywords.cc",
        "src/scanner_names.cc",
        "src/scanner.cc"
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
