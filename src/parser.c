#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 327
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_align = 5,
  anon_sym_align_STAR = 6,
  anon_sym_alignat = 7,
  anon_sym_alignat_STAR = 8,
  anon_sym_eqnarray = 9,
  anon_sym_eqnarray_STAR = 10,
  anon_sym_equation = 11,
  anon_sym_equation_STAR = 12,
  anon_sym_flalign = 13,
  anon_sym_flalign_STAR = 14,
  anon_sym_gather = 15,
  anon_sym_gather_STAR = 16,
  anon_sym_multline = 17,
  anon_sym_multline_STAR = 18,
  anon_sym_split = 19,
  anon_sym_split_STAR = 20,
  anon_sym_math = 21,
  anon_sym_verbatim = 22,
  anon_sym_Verbatim = 23,
  anon_sym_Verbatim_STAR = 24,
  anon_sym_BVerbatim = 25,
  anon_sym_BVerbatim_STAR = 26,
  anon_sym_LVerbatim = 27,
  anon_sym_LVerbatim_STAR = 28,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 29,
  anon_sym_begin = 30,
  anon_sym_end = 31,
  anon_sym_documentclass = 32,
  anon_sym_usepackage = 33,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 34,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 35,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 36,
  anon_sym_EQ = 37,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 38,
  sym_escape = 39,
  sym_begin_group = 40,
  sym_end_group = 41,
  sym_math_shift = 42,
  sym_alignment_tab = 43,
  sym_parameter_char = 44,
  sym_superscript = 45,
  sym_subscript = 46,
  sym_name = 47,
  sym_active_char = 48,
  sym_comment_char = 49,
  sym_text = 50,
  sym_number = 51,
  sym_verbatim_token = 52,
  sym_magic = 53,
  sym_comment_text = 54,
  sym_program = 55,
  sym_text_mode = 56,
  sym_math_mode = 57,
  sym_parameter = 58,
  sym_text_environment = 59,
  sym_math_environment = 60,
  sym_display_math = 61,
  sym_inline_math = 62,
  sym_begin_align = 63,
  sym_end_align = 64,
  sym_begin_align_star = 65,
  sym_end_align_star = 66,
  sym_begin_alignat = 67,
  sym_end_alignat = 68,
  sym_begin_alignat_star = 69,
  sym_end_alignat_star = 70,
  sym_begin_eqnarray = 71,
  sym_end_eqnarray = 72,
  sym_begin_eqnarray_star = 73,
  sym_end_eqnarray_star = 74,
  sym_begin_equation = 75,
  sym_end_equation = 76,
  sym_begin_equation_star = 77,
  sym_end_equation_star = 78,
  sym_begin_flalign = 79,
  sym_end_flalign = 80,
  sym_begin_flalign_star = 81,
  sym_end_flalign_star = 82,
  sym_begin_gather = 83,
  sym_end_gather = 84,
  sym_begin_gather_star = 85,
  sym_end_gather_star = 86,
  sym_begin_multline = 87,
  sym_end_multline = 88,
  sym_begin_multline_star = 89,
  sym_end_multline_star = 90,
  sym_begin_split = 91,
  sym_end_split = 92,
  sym_begin_split_star = 93,
  sym_end_split_star = 94,
  sym_begin_math = 95,
  sym_end_math = 96,
  sym_begin_verbatim = 97,
  sym_end_verbatim = 98,
  sym_begin_Verbatim = 99,
  sym_end_Verbatim = 100,
  sym_begin_Verbatim_star = 101,
  sym_end_Verbatim_star = 102,
  sym_begin_BVerbatim = 103,
  sym_end_BVerbatim = 104,
  sym_begin_BVerbatim_star = 105,
  sym_end_BVerbatim_star = 106,
  sym_begin_LVerbatim = 107,
  sym_end_LVerbatim = 108,
  sym_begin_LVerbatim_star = 109,
  sym_end_LVerbatim_star = 110,
  sym_verbatim_environment = 111,
  sym_escaped = 112,
  sym_command = 113,
  sym_begin = 114,
  sym_begin_token = 115,
  sym_end = 116,
  sym_end_token = 117,
  sym_documentclass = 118,
  sym_documentclass_token = 119,
  sym_usepackage = 120,
  sym_usepackage_token = 121,
  sym_include = 122,
  sym_include_token = 123,
  sym_section = 124,
  sym_section_token = 125,
  sym_storage = 126,
  sym_storage_token = 127,
  sym_catcode = 128,
  sym_catcode_token = 129,
  sym_text_group = 130,
  sym_opt_text_group = 131,
  sym_math_group = 132,
  sym_opt_math_group = 133,
  sym_token = 134,
  sym_comment = 135,
  sym_begin_opt = 136,
  sym_end_opt = 137,
  aux_sym_program_repeat1 = 138,
  aux_sym_math_environment_repeat1 = 139,
  aux_sym_verbatim_environment_repeat1 = 140,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_align] = "align",
  [anon_sym_align_STAR] = "align*",
  [anon_sym_alignat] = "alignat",
  [anon_sym_alignat_STAR] = "alignat*",
  [anon_sym_eqnarray] = "eqnarray",
  [anon_sym_eqnarray_STAR] = "eqnarray*",
  [anon_sym_equation] = "equation",
  [anon_sym_equation_STAR] = "equation*",
  [anon_sym_flalign] = "flalign",
  [anon_sym_flalign_STAR] = "flalign*",
  [anon_sym_gather] = "gather",
  [anon_sym_gather_STAR] = "gather*",
  [anon_sym_multline] = "multline",
  [anon_sym_multline_STAR] = "multline*",
  [anon_sym_split] = "split",
  [anon_sym_split_STAR] = "split*",
  [anon_sym_math] = "math",
  [anon_sym_verbatim] = "verbatim",
  [anon_sym_Verbatim] = "Verbatim",
  [anon_sym_Verbatim_STAR] = "Verbatim*",
  [anon_sym_BVerbatim] = "BVerbatim",
  [anon_sym_BVerbatim_STAR] = "BVerbatim*",
  [anon_sym_LVerbatim] = "LVerbatim",
  [anon_sym_LVerbatim_STAR] = "LVerbatim*",
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = "/[^()\\[\\]]/",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_documentclass] = "documentclass",
  [anon_sym_usepackage] = "usepackage",
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = "/include|input/",
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = "/section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/",
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = "/[egx]?def/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [sym_escape] = "escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym_name] = "name",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_verbatim_token] = "verbatim_token",
  [sym_magic] = "magic",
  [sym_comment_text] = "comment_text",
  [sym_program] = "program",
  [sym_text_mode] = "text_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_text_environment] = "text_environment",
  [sym_math_environment] = "math_environment",
  [sym_display_math] = "display_math",
  [sym_inline_math] = "inline_math",
  [sym_begin_align] = "begin_align",
  [sym_end_align] = "end_align",
  [sym_begin_align_star] = "begin_align_star",
  [sym_end_align_star] = "end_align_star",
  [sym_begin_alignat] = "begin_alignat",
  [sym_end_alignat] = "end_alignat",
  [sym_begin_alignat_star] = "begin_alignat_star",
  [sym_end_alignat_star] = "end_alignat_star",
  [sym_begin_eqnarray] = "begin_eqnarray",
  [sym_end_eqnarray] = "end_eqnarray",
  [sym_begin_eqnarray_star] = "begin_eqnarray_star",
  [sym_end_eqnarray_star] = "end_eqnarray_star",
  [sym_begin_equation] = "begin_equation",
  [sym_end_equation] = "end_equation",
  [sym_begin_equation_star] = "begin_equation_star",
  [sym_end_equation_star] = "end_equation_star",
  [sym_begin_flalign] = "begin_flalign",
  [sym_end_flalign] = "end_flalign",
  [sym_begin_flalign_star] = "begin_flalign_star",
  [sym_end_flalign_star] = "end_flalign_star",
  [sym_begin_gather] = "begin_gather",
  [sym_end_gather] = "end_gather",
  [sym_begin_gather_star] = "begin_gather_star",
  [sym_end_gather_star] = "end_gather_star",
  [sym_begin_multline] = "begin_multline",
  [sym_end_multline] = "end_multline",
  [sym_begin_multline_star] = "begin_multline_star",
  [sym_end_multline_star] = "end_multline_star",
  [sym_begin_split] = "begin_split",
  [sym_end_split] = "end_split",
  [sym_begin_split_star] = "begin_split_star",
  [sym_end_split_star] = "end_split_star",
  [sym_begin_math] = "begin_math",
  [sym_end_math] = "end_math",
  [sym_begin_verbatim] = "begin_verbatim",
  [sym_end_verbatim] = "end_verbatim",
  [sym_begin_Verbatim] = "begin_Verbatim",
  [sym_end_Verbatim] = "end_Verbatim",
  [sym_begin_Verbatim_star] = "begin_Verbatim_star",
  [sym_end_Verbatim_star] = "end_Verbatim_star",
  [sym_begin_BVerbatim] = "begin_BVerbatim",
  [sym_end_BVerbatim] = "end_BVerbatim",
  [sym_begin_BVerbatim_star] = "begin_BVerbatim_star",
  [sym_end_BVerbatim_star] = "end_BVerbatim_star",
  [sym_begin_LVerbatim] = "begin_LVerbatim",
  [sym_end_LVerbatim] = "end_LVerbatim",
  [sym_begin_LVerbatim_star] = "begin_LVerbatim_star",
  [sym_end_LVerbatim_star] = "end_LVerbatim_star",
  [sym_verbatim_environment] = "verbatim_environment",
  [sym_escaped] = "escaped",
  [sym_command] = "command",
  [sym_begin] = "begin",
  [sym_begin_token] = "begin_token",
  [sym_end] = "end",
  [sym_end_token] = "end_token",
  [sym_documentclass] = "documentclass",
  [sym_documentclass_token] = "documentclass_token",
  [sym_usepackage] = "usepackage",
  [sym_usepackage_token] = "usepackage_token",
  [sym_include] = "include",
  [sym_include_token] = "include_token",
  [sym_section] = "section",
  [sym_section_token] = "section_token",
  [sym_storage] = "storage",
  [sym_storage_token] = "storage_token",
  [sym_catcode] = "catcode",
  [sym_catcode_token] = "catcode_token",
  [sym_text_group] = "text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_math_group] = "math_group",
  [sym_opt_math_group] = "opt_math_group",
  [sym_token] = "token",
  [sym_comment] = "comment",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_math_environment_repeat1] = "math_environment_repeat1",
  [aux_sym_verbatim_environment_repeat1] = "verbatim_environment_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alignat_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqnarray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqnarray_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equation_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flalign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_flalign_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gather] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_gather_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multline_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_split_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_math] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Verbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Verbatim_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BVerbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BVerbatim_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LVerbatim] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LVerbatim_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_documentclass] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_usepackage] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_group] = {
    .visible = true,
    .named = true,
  },
  [sym_end_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_alignment_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_char] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_active_char] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_char] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_token] = {
    .visible = true,
    .named = true,
  },
  [sym_magic] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_text] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_text_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_math_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_text_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_math_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_align] = {
    .visible = true,
    .named = true,
  },
  [sym_end_align] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_align_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_align_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_alignat] = {
    .visible = true,
    .named = true,
  },
  [sym_end_alignat] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_alignat_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_alignat_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_eqnarray] = {
    .visible = true,
    .named = true,
  },
  [sym_end_eqnarray] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_eqnarray_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_eqnarray_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_end_equation] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_equation_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_equation_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_flalign] = {
    .visible = true,
    .named = true,
  },
  [sym_end_flalign] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_flalign_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_flalign_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_gather] = {
    .visible = true,
    .named = true,
  },
  [sym_end_gather] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_gather_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_gather_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_multline] = {
    .visible = true,
    .named = true,
  },
  [sym_end_multline] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_multline_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_multline_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_split] = {
    .visible = true,
    .named = true,
  },
  [sym_end_split] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_split_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_split_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_math] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_Verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_Verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_Verbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_Verbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_BVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_BVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_BVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_BVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_LVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_end_LVerbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_LVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_LVerbatim_star] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_token] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_end_token] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass] = {
    .visible = true,
    .named = true,
  },
  [sym_documentclass_token] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage] = {
    .visible = true,
    .named = true,
  },
  [sym_usepackage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_include_token] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_section_token] = {
    .visible = true,
    .named = true,
  },
  [sym_storage] = {
    .visible = true,
    .named = true,
  },
  [sym_storage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode] = {
    .visible = true,
    .named = true,
  },
  [sym_catcode_token] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_end_opt] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_verbatim_token);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 4:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == '^')
        ADVANCE(11);
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '~')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      ADVANCE(17);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == ')')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == ']')
        ADVANCE(10);
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'i')
        ADVANCE(67);
      if (lookahead == 'k')
        ADVANCE(76);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'p')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == 'u')
        ADVANCE(105);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != 0)
        ADVANCE(117);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(24);
      if (lookahead == 'p')
        ADVANCE(29);
      if (lookahead == 's')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(40);
      if (lookahead == 'h')
        ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '`')
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(53);
      if (lookahead == 'o')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f')
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(69);
      if (lookahead == 'p')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(85);
      if (lookahead == 't')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(98);
      if (lookahead == 's')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 119:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '!')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '!')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(129);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(127);
      if (lookahead != 0)
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(129);
      if (lookahead != 0)
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(122);
      if (lookahead == '!')
        ADVANCE(123);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(132);
      if (lookahead != 0)
        ADVANCE(131);
      END_STATE();
    case 133:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 134:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 135:
      if (lookahead == '(')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == 'a')
        ADVANCE(21);
      if (lookahead == 'b')
        ADVANCE(34);
      if (lookahead == 'c')
        ADVANCE(39);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'e')
        ADVANCE(136);
      if (lookahead == 'i')
        ADVANCE(67);
      if (lookahead == 'k')
        ADVANCE(76);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == 'p')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(90);
      if (lookahead == 'u')
        ADVANCE(105);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(117);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(28);
      END_STATE();
    case 139:
      if (lookahead == '#')
        ADVANCE(5);
      if (lookahead == '$')
        ADVANCE(6);
      if (lookahead == '%')
        ADVANCE(7);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == 'B')
        ADVANCE(140);
      if (lookahead == 'L')
        ADVANCE(150);
      if (lookahead == 'V')
        ADVANCE(160);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '^')
        ADVANCE(11);
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == 'a')
        ADVANCE(169);
      if (lookahead == 'e')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(194);
      if (lookahead == 'g')
        ADVANCE(202);
      if (lookahead == 'm')
        ADVANCE(209);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'v')
        ADVANCE(227);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '}')
        ADVANCE(14);
      if (lookahead == '~')
        ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(17);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(174);
      if (lookahead == 'a')
        ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(180);
      if (lookahead == 'u')
        ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(210);
      if (lookahead == 'u')
        ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(225);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(230);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(234);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B')
        ADVANCE(140);
      if (lookahead == 'L')
        ADVANCE(150);
      if (lookahead == 'V')
        ADVANCE(160);
      if (lookahead == 'a')
        ADVANCE(169);
      if (lookahead == 'e')
        ADVANCE(178);
      if (lookahead == 'f')
        ADVANCE(194);
      if (lookahead == 'g')
        ADVANCE(202);
      if (lookahead == 'm')
        ADVANCE(209);
      if (lookahead == 's')
        ADVANCE(221);
      if (lookahead == 'v')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(117);
      END_STATE();
    case 237:
      if (lookahead == '=')
        ADVANCE(238);
      if (lookahead == 'B')
        ADVANCE(239);
      if (lookahead == 'L')
        ADVANCE(249);
      if (lookahead == 'V')
        ADVANCE(259);
      if (lookahead == 'a')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(277);
      if (lookahead == 'f')
        ADVANCE(293);
      if (lookahead == 'g')
        ADVANCE(301);
      if (lookahead == 'm')
        ADVANCE(308);
      if (lookahead == 's')
        ADVANCE(320);
      if (lookahead == 'v')
        ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 239:
      if (lookahead == 'V')
        ADVANCE(240);
      END_STATE();
    case 240:
      if (lookahead == 'e')
        ADVANCE(241);
      END_STATE();
    case 241:
      if (lookahead == 'r')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'b')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 'a')
        ADVANCE(244);
      END_STATE();
    case 244:
      if (lookahead == 't')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'i')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'm')
        ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      END_STATE();
    case 249:
      if (lookahead == 'V')
        ADVANCE(250);
      END_STATE();
    case 250:
      if (lookahead == 'e')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'r')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'b')
        ADVANCE(253);
      END_STATE();
    case 253:
      if (lookahead == 'a')
        ADVANCE(254);
      END_STATE();
    case 254:
      if (lookahead == 't')
        ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead == 'i')
        ADVANCE(256);
      END_STATE();
    case 256:
      if (lookahead == 'm')
        ADVANCE(257);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      END_STATE();
    case 259:
      if (lookahead == 'e')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'r')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'b')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'a')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 't')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'i')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'm')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      END_STATE();
    case 268:
      if (lookahead == 'l')
        ADVANCE(269);
      END_STATE();
    case 269:
      if (lookahead == 'i')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'g')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'n')
        ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(273);
      if (lookahead == 'a')
        ADVANCE(274);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      END_STATE();
    case 274:
      if (lookahead == 't')
        ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      END_STATE();
    case 277:
      if (lookahead == 'q')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'n')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(286);
      END_STATE();
    case 279:
      if (lookahead == 'a')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'r')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'r')
        ADVANCE(282);
      END_STATE();
    case 282:
      if (lookahead == 'a')
        ADVANCE(283);
      END_STATE();
    case 283:
      if (lookahead == 'y')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 286:
      if (lookahead == 'a')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == 't')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'i')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == 'o')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'n')
        ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 293:
      if (lookahead == 'l')
        ADVANCE(294);
      END_STATE();
    case 294:
      if (lookahead == 'a')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'l')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'i')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'g')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'n')
        ADVANCE(299);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 301:
      if (lookahead == 'a')
        ADVANCE(302);
      END_STATE();
    case 302:
      if (lookahead == 't')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'h')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'e')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'r')
        ADVANCE(306);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(307);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      END_STATE();
    case 308:
      if (lookahead == 'a')
        ADVANCE(309);
      if (lookahead == 'u')
        ADVANCE(312);
      END_STATE();
    case 309:
      if (lookahead == 't')
        ADVANCE(310);
      END_STATE();
    case 310:
      if (lookahead == 'h')
        ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 312:
      if (lookahead == 'l')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 't')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'l')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'i')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'n')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'e')
        ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      END_STATE();
    case 320:
      if (lookahead == 'p')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'l')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 'i')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 't')
        ADVANCE(324);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    case 326:
      if (lookahead == 'e')
        ADVANCE(327);
      END_STATE();
    case 327:
      if (lookahead == 'r')
        ADVANCE(328);
      END_STATE();
    case 328:
      if (lookahead == 'b')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'a')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 't')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'i')
        ADVANCE(332);
      END_STATE();
    case 332:
      if (lookahead == 'm')
        ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 119},
  [8] = {.lex_state = 121},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 133},
  [29] = {.lex_state = 134},
  [30] = {.lex_state = 134},
  [31] = {.lex_state = 134},
  [32] = {.lex_state = 134},
  [33] = {.lex_state = 134},
  [34] = {.lex_state = 134},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 18},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 135},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 4},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 135},
  [108] = {.lex_state = 133},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 133},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 133},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 133},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 133},
  [118] = {.lex_state = 133},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 133},
  [121] = {.lex_state = 133},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 133},
  [124] = {.lex_state = 133},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 133},
  [127] = {.lex_state = 133},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 133},
  [130] = {.lex_state = 133},
  [131] = {.lex_state = 135},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 139},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 236},
  [145] = {.lex_state = 237},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 18},
  [153] = {.lex_state = 4},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 237},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 237},
  [171] = {.lex_state = 237},
  [172] = {.lex_state = 237},
  [173] = {.lex_state = 237},
  [174] = {.lex_state = 237},
  [175] = {.lex_state = 237},
  [176] = {.lex_state = 237},
  [177] = {.lex_state = 237},
  [178] = {.lex_state = 237},
  [179] = {.lex_state = 237},
  [180] = {.lex_state = 237},
  [181] = {.lex_state = 237},
  [182] = {.lex_state = 237},
  [183] = {.lex_state = 237},
  [184] = {.lex_state = 237},
  [185] = {.lex_state = 237},
  [186] = {.lex_state = 237},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 133},
  [189] = {.lex_state = 237},
  [190] = {.lex_state = 133},
  [191] = {.lex_state = 133},
  [192] = {.lex_state = 133},
  [193] = {.lex_state = 4},
  [194] = {.lex_state = 237},
  [195] = {.lex_state = 133},
  [196] = {.lex_state = 237},
  [197] = {.lex_state = 133},
  [198] = {.lex_state = 237},
  [199] = {.lex_state = 133},
  [200] = {.lex_state = 237},
  [201] = {.lex_state = 133},
  [202] = {.lex_state = 237},
  [203] = {.lex_state = 133},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 4},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 4},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 4},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 4},
  [223] = {.lex_state = 4},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 4},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 237},
  [235] = {.lex_state = 119},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 18},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 18},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 4},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 4},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 4},
  [268] = {.lex_state = 133},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 4},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 133},
  [292] = {.lex_state = 134},
  [293] = {.lex_state = 134},
  [294] = {.lex_state = 134},
  [295] = {.lex_state = 134},
  [296] = {.lex_state = 134},
  [297] = {.lex_state = 134},
  [298] = {.lex_state = 4},
  [299] = {.lex_state = 4},
  [300] = {.lex_state = 4},
  [301] = {.lex_state = 4},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 4},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 4},
  [308] = {.lex_state = 4},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 4},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 4},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [sym_verbatim_token] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(9),
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym_escape] = ACTIONS(21),
    [sym_begin_group] = ACTIONS(21),
    [sym_math_shift] = ACTIONS(21),
    [sym_alignment_tab] = ACTIONS(21),
    [sym_parameter_char] = ACTIONS(21),
    [sym_superscript] = ACTIONS(21),
    [sym_subscript] = ACTIONS(21),
    [sym_active_char] = ACTIONS(21),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [3] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [4] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(47),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [5] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(67),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(59),
    [anon_sym_RBRACK] = ACTIONS(59),
    [sym_escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(59),
    [sym_end_group] = ACTIONS(59),
    [sym_math_shift] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(59),
    [sym_parameter_char] = ACTIONS(59),
    [sym_superscript] = ACTIONS(59),
    [sym_subscript] = ACTIONS(59),
    [sym_active_char] = ACTIONS(59),
    [sym_comment_char] = ACTIONS(59),
    [sym_text] = ACTIONS(61),
  },
  [7] = {
    [sym_number] = ACTIONS(63),
  },
  [8] = {
    [sym_magic] = ACTIONS(65),
    [sym_comment_text] = ACTIONS(67),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(69),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym_escape] = ACTIONS(71),
    [sym_begin_group] = ACTIONS(71),
    [sym_end_group] = ACTIONS(71),
    [sym_math_shift] = ACTIONS(71),
    [sym_alignment_tab] = ACTIONS(71),
    [sym_parameter_char] = ACTIONS(71),
    [sym_superscript] = ACTIONS(71),
    [sym_subscript] = ACTIONS(71),
    [sym_active_char] = ACTIONS(71),
    [sym_comment_char] = ACTIONS(71),
    [sym_text] = ACTIONS(73),
  },
  [11] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_align] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [12] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_align_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [13] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_alignat] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [14] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_alignat_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(79),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [15] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_eqnarray] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(81),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [16] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_eqnarray_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(82),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [17] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_equation] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(84),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(85),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [18] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_equation_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(86),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [19] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_flalign] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [20] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_flalign_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(90),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [21] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_gather] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(92),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [22] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_gather_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(94),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [23] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_multline] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(96),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [24] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_multline_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [25] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_split] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(100),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [26] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_split_star] = STATE(71),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [27] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_math] = STATE(104),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(105),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [28] = {
    [sym_end_verbatim] = STATE(109),
    [sym_end_token] = STATE(110),
    [aux_sym_verbatim_environment_repeat1] = STATE(111),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [29] = {
    [sym_end_Verbatim] = STATE(109),
    [sym_end_token] = STATE(112),
    [sym_opt_text_group] = STATE(113),
    [sym_begin_opt] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [30] = {
    [sym_end_Verbatim_star] = STATE(109),
    [sym_end_token] = STATE(116),
    [sym_opt_text_group] = STATE(117),
    [sym_begin_opt] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [31] = {
    [sym_end_BVerbatim] = STATE(109),
    [sym_end_token] = STATE(119),
    [sym_opt_text_group] = STATE(120),
    [sym_begin_opt] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [32] = {
    [sym_end_BVerbatim_star] = STATE(109),
    [sym_end_token] = STATE(122),
    [sym_opt_text_group] = STATE(123),
    [sym_begin_opt] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [33] = {
    [sym_end_LVerbatim] = STATE(109),
    [sym_end_token] = STATE(125),
    [sym_opt_text_group] = STATE(126),
    [sym_begin_opt] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [34] = {
    [sym_end_LVerbatim_star] = STATE(109),
    [sym_end_token] = STATE(128),
    [sym_opt_text_group] = STATE(129),
    [sym_begin_opt] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [35] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_end] = STATE(132),
    [sym_end_token] = STATE(133),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(134),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [36] = {
    [sym_text_group] = STATE(136),
    [sym_begin_group] = ACTIONS(83),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [sym_escape] = ACTIONS(85),
    [sym_begin_group] = ACTIONS(85),
    [sym_end_group] = ACTIONS(85),
    [sym_math_shift] = ACTIONS(85),
    [sym_alignment_tab] = ACTIONS(85),
    [sym_parameter_char] = ACTIONS(85),
    [sym_superscript] = ACTIONS(85),
    [sym_subscript] = ACTIONS(85),
    [sym_active_char] = ACTIONS(85),
    [sym_comment_char] = ACTIONS(85),
    [sym_text] = ACTIONS(87),
  },
  [38] = {
    [sym_text_group] = STATE(137),
    [sym_opt_text_group] = STATE(138),
    [sym_begin_opt] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(91),
  },
  [39] = {
    [sym_text_group] = STATE(139),
    [sym_opt_text_group] = STATE(140),
    [sym_begin_opt] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(91),
  },
  [40] = {
    [sym_text_group] = STATE(141),
    [sym_begin_group] = ACTIONS(91),
  },
  [41] = {
    [sym_text_group] = STATE(142),
    [sym_opt_text_group] = STATE(143),
    [sym_begin_opt] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(89),
    [sym_begin_group] = ACTIONS(91),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [sym_escape] = ACTIONS(93),
    [sym_begin_group] = ACTIONS(93),
    [sym_end_group] = ACTIONS(93),
    [sym_math_shift] = ACTIONS(93),
    [sym_alignment_tab] = ACTIONS(93),
    [sym_parameter_char] = ACTIONS(93),
    [sym_superscript] = ACTIONS(93),
    [sym_subscript] = ACTIONS(93),
    [sym_active_char] = ACTIONS(93),
    [sym_comment_char] = ACTIONS(93),
    [sym_text] = ACTIONS(95),
  },
  [43] = {
    [sym_escaped] = STATE(145),
    [sym_escape] = ACTIONS(97),
  },
  [44] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(147),
    [aux_sym_program_repeat1] = STATE(148),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [45] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [46] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [47] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(105),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(107),
    [sym_end_group] = ACTIONS(107),
    [sym_math_shift] = ACTIONS(107),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(107),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(107),
    [sym_comment_char] = ACTIONS(107),
    [sym_text] = ACTIONS(109),
  },
  [49] = {
    [sym_begin_group] = ACTIONS(111),
  },
  [50] = {
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(113),
  },
  [51] = {
    [anon_sym_LBRACK] = ACTIONS(115),
    [sym_begin_group] = ACTIONS(115),
  },
  [52] = {
    [sym_begin_group] = ACTIONS(117),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym_escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_end_group] = ACTIONS(121),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(121),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(121),
    [sym_active_char] = ACTIONS(121),
    [sym_comment_char] = ACTIONS(121),
    [sym_text] = ACTIONS(123),
  },
  [55] = {
    [sym_escape] = ACTIONS(125),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_escape] = ACTIONS(127),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(127),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(127),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_comment_char] = ACTIONS(127),
    [sym_text] = ACTIONS(129),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
    [sym_escape] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
    [sym_end_group] = ACTIONS(131),
    [sym_math_shift] = ACTIONS(131),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(131),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(131),
    [sym_text] = ACTIONS(133),
  },
  [58] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [59] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [60] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_end_group] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [61] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [62] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(141),
    [sym_escape] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(141),
    [sym_end_group] = ACTIONS(141),
    [sym_math_shift] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(141),
    [sym_parameter_char] = ACTIONS(141),
    [sym_superscript] = ACTIONS(141),
    [sym_subscript] = ACTIONS(141),
    [sym_active_char] = ACTIONS(141),
    [sym_comment_char] = ACTIONS(141),
    [sym_text] = ACTIONS(143),
  },
  [63] = {
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [sym_escape] = ACTIONS(145),
    [sym_begin_group] = ACTIONS(145),
    [sym_end_group] = ACTIONS(145),
    [sym_math_shift] = ACTIONS(145),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(145),
    [sym_superscript] = ACTIONS(145),
    [sym_subscript] = ACTIONS(145),
    [sym_active_char] = ACTIONS(145),
    [sym_comment_char] = ACTIONS(145),
    [sym_text] = ACTIONS(147),
  },
  [64] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end] = STATE(160),
    [sym_end_token] = STATE(133),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [65] = {
    [sym_text_group] = STATE(136),
    [sym_begin_group] = ACTIONS(91),
  },
  [66] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [sym_end_opt] = STATE(162),
    [aux_sym_math_environment_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [67] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym_escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [sym_comment_char] = ACTIONS(151),
    [sym_text] = ACTIONS(153),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(155),
    [anon_sym_RBRACK] = ACTIONS(155),
    [sym_escape] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
    [sym_end_group] = ACTIONS(155),
    [sym_math_shift] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(155),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(155),
    [sym_active_char] = ACTIONS(155),
    [sym_comment_char] = ACTIONS(155),
    [sym_text] = ACTIONS(157),
  },
  [70] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym_escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_comment_char] = ACTIONS(161),
    [sym_text] = ACTIONS(163),
  },
  [72] = {
    [sym_begin_group] = ACTIONS(165),
  },
  [73] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_align] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [74] = {
    [sym_begin_group] = ACTIONS(167),
  },
  [75] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_align_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [76] = {
    [sym_begin_group] = ACTIONS(169),
  },
  [77] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_alignat] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [78] = {
    [sym_begin_group] = ACTIONS(171),
  },
  [79] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_alignat_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [80] = {
    [sym_begin_group] = ACTIONS(173),
  },
  [81] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_eqnarray] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [82] = {
    [sym_begin_group] = ACTIONS(175),
  },
  [83] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_eqnarray_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(82),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [84] = {
    [sym_begin_group] = ACTIONS(177),
  },
  [85] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_equation] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(84),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [86] = {
    [sym_begin_group] = ACTIONS(179),
  },
  [87] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_equation_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(86),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [88] = {
    [sym_begin_group] = ACTIONS(181),
  },
  [89] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_flalign] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [90] = {
    [sym_begin_group] = ACTIONS(183),
  },
  [91] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_flalign_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(90),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [92] = {
    [sym_begin_group] = ACTIONS(185),
  },
  [93] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_gather] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(92),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [94] = {
    [sym_begin_group] = ACTIONS(187),
  },
  [95] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_gather_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(94),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [96] = {
    [sym_begin_group] = ACTIONS(189),
  },
  [97] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_multline] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(96),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [98] = {
    [sym_begin_group] = ACTIONS(191),
  },
  [99] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_multline_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [100] = {
    [sym_begin_group] = ACTIONS(193),
  },
  [101] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_split] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(100),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [102] = {
    [sym_begin_group] = ACTIONS(195),
  },
  [103] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_split_star] = STATE(168),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym_escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(197),
    [sym_end_group] = ACTIONS(197),
    [sym_math_shift] = ACTIONS(197),
    [sym_alignment_tab] = ACTIONS(197),
    [sym_parameter_char] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(197),
    [sym_active_char] = ACTIONS(197),
    [sym_comment_char] = ACTIONS(197),
    [sym_text] = ACTIONS(199),
  },
  [105] = {
    [sym_begin_group] = ACTIONS(201),
  },
  [106] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_end_math] = STATE(164),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(105),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [107] = {
    [anon_sym_end] = ACTIONS(203),
  },
  [108] = {
    [sym_escape] = ACTIONS(205),
    [sym_verbatim_token] = ACTIONS(205),
  },
  [109] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [anon_sym_RBRACK] = ACTIONS(207),
    [sym_escape] = ACTIONS(207),
    [sym_begin_group] = ACTIONS(207),
    [sym_end_group] = ACTIONS(207),
    [sym_math_shift] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(207),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_comment_char] = ACTIONS(207),
    [sym_text] = ACTIONS(209),
  },
  [110] = {
    [sym_begin_group] = ACTIONS(211),
  },
  [111] = {
    [sym_end_verbatim] = STATE(187),
    [sym_end_token] = STATE(110),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [112] = {
    [sym_begin_group] = ACTIONS(213),
  },
  [113] = {
    [sym_end_Verbatim] = STATE(187),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(190),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [114] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(192),
    [aux_sym_program_repeat1] = STATE(193),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [115] = {
    [sym_end_Verbatim] = STATE(187),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [116] = {
    [sym_begin_group] = ACTIONS(217),
  },
  [117] = {
    [sym_end_Verbatim_star] = STATE(187),
    [sym_end_token] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(195),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [118] = {
    [sym_end_Verbatim_star] = STATE(187),
    [sym_end_token] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [119] = {
    [sym_begin_group] = ACTIONS(219),
  },
  [120] = {
    [sym_end_BVerbatim] = STATE(187),
    [sym_end_token] = STATE(119),
    [aux_sym_verbatim_environment_repeat1] = STATE(197),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [121] = {
    [sym_end_BVerbatim] = STATE(187),
    [sym_end_token] = STATE(119),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [122] = {
    [sym_begin_group] = ACTIONS(221),
  },
  [123] = {
    [sym_end_BVerbatim_star] = STATE(187),
    [sym_end_token] = STATE(122),
    [aux_sym_verbatim_environment_repeat1] = STATE(199),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [124] = {
    [sym_end_BVerbatim_star] = STATE(187),
    [sym_end_token] = STATE(122),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [125] = {
    [sym_begin_group] = ACTIONS(223),
  },
  [126] = {
    [sym_end_LVerbatim] = STATE(187),
    [sym_end_token] = STATE(125),
    [aux_sym_verbatim_environment_repeat1] = STATE(201),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [127] = {
    [sym_end_LVerbatim] = STATE(187),
    [sym_end_token] = STATE(125),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [128] = {
    [sym_begin_group] = ACTIONS(225),
  },
  [129] = {
    [sym_end_LVerbatim_star] = STATE(187),
    [sym_end_token] = STATE(128),
    [aux_sym_verbatim_environment_repeat1] = STATE(203),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [130] = {
    [sym_end_LVerbatim_star] = STATE(187),
    [sym_end_token] = STATE(128),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [131] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym_escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(227),
    [sym_text] = ACTIONS(229),
  },
  [133] = {
    [sym_text_group] = STATE(204),
    [sym_begin_group] = ACTIONS(91),
  },
  [134] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_end] = STATE(205),
    [sym_end_token] = STATE(133),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(81),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [135] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_align] = ACTIONS(231),
    [anon_sym_align_STAR] = ACTIONS(233),
    [anon_sym_alignat] = ACTIONS(235),
    [anon_sym_alignat_STAR] = ACTIONS(237),
    [anon_sym_eqnarray] = ACTIONS(239),
    [anon_sym_eqnarray_STAR] = ACTIONS(241),
    [anon_sym_equation] = ACTIONS(243),
    [anon_sym_equation_STAR] = ACTIONS(245),
    [anon_sym_flalign] = ACTIONS(247),
    [anon_sym_flalign_STAR] = ACTIONS(249),
    [anon_sym_gather] = ACTIONS(251),
    [anon_sym_gather_STAR] = ACTIONS(253),
    [anon_sym_multline] = ACTIONS(255),
    [anon_sym_multline_STAR] = ACTIONS(257),
    [anon_sym_split] = ACTIONS(259),
    [anon_sym_split_STAR] = ACTIONS(261),
    [anon_sym_math] = ACTIONS(263),
    [anon_sym_verbatim] = ACTIONS(265),
    [anon_sym_Verbatim] = ACTIONS(267),
    [anon_sym_Verbatim_STAR] = ACTIONS(269),
    [anon_sym_BVerbatim] = ACTIONS(271),
    [anon_sym_BVerbatim_STAR] = ACTIONS(273),
    [anon_sym_LVerbatim] = ACTIONS(275),
    [anon_sym_LVerbatim_STAR] = ACTIONS(277),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(47),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(13),
  },
  [136] = {
    [anon_sym_LBRACK] = ACTIONS(279),
    [sym_escape] = ACTIONS(279),
    [sym_begin_group] = ACTIONS(279),
    [sym_math_shift] = ACTIONS(279),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(279),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(279),
    [sym_active_char] = ACTIONS(279),
    [sym_comment_char] = ACTIONS(279),
    [sym_text] = ACTIONS(281),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym_escape] = ACTIONS(283),
    [sym_begin_group] = ACTIONS(283),
    [sym_end_group] = ACTIONS(283),
    [sym_math_shift] = ACTIONS(283),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(283),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(283),
    [sym_active_char] = ACTIONS(283),
    [sym_comment_char] = ACTIONS(283),
    [sym_text] = ACTIONS(285),
  },
  [138] = {
    [sym_text_group] = STATE(231),
    [sym_begin_group] = ACTIONS(91),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(287),
    [anon_sym_RBRACK] = ACTIONS(287),
    [sym_escape] = ACTIONS(287),
    [sym_begin_group] = ACTIONS(287),
    [sym_end_group] = ACTIONS(287),
    [sym_math_shift] = ACTIONS(287),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(287),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(287),
    [sym_text] = ACTIONS(289),
  },
  [140] = {
    [sym_text_group] = STATE(232),
    [sym_begin_group] = ACTIONS(91),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [sym_escape] = ACTIONS(291),
    [sym_begin_group] = ACTIONS(291),
    [sym_end_group] = ACTIONS(291),
    [sym_math_shift] = ACTIONS(291),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(291),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_comment_char] = ACTIONS(291),
    [sym_text] = ACTIONS(293),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [sym_escape] = ACTIONS(295),
    [sym_begin_group] = ACTIONS(295),
    [sym_end_group] = ACTIONS(295),
    [sym_math_shift] = ACTIONS(295),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(295),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(295),
    [sym_active_char] = ACTIONS(295),
    [sym_comment_char] = ACTIONS(295),
    [sym_text] = ACTIONS(297),
  },
  [143] = {
    [sym_text_group] = STATE(233),
    [sym_begin_group] = ACTIONS(91),
  },
  [144] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(299),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(301),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [sym_escape] = ACTIONS(303),
    [sym_begin_group] = ACTIONS(303),
    [sym_end_group] = ACTIONS(303),
    [sym_math_shift] = ACTIONS(303),
    [sym_alignment_tab] = ACTIONS(303),
    [sym_parameter_char] = ACTIONS(303),
    [sym_superscript] = ACTIONS(303),
    [sym_subscript] = ACTIONS(303),
    [sym_active_char] = ACTIONS(303),
    [sym_comment_char] = ACTIONS(303),
    [sym_text] = ACTIONS(305),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [sym_escape] = ACTIONS(307),
    [sym_begin_group] = ACTIONS(307),
    [sym_end_group] = ACTIONS(307),
    [sym_math_shift] = ACTIONS(307),
    [sym_alignment_tab] = ACTIONS(307),
    [sym_parameter_char] = ACTIONS(307),
    [sym_superscript] = ACTIONS(307),
    [sym_subscript] = ACTIONS(307),
    [sym_active_char] = ACTIONS(307),
    [sym_comment_char] = ACTIONS(307),
    [sym_text] = ACTIONS(309),
  },
  [148] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(236),
    [aux_sym_program_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [149] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(149),
    [ts_builtin_sym_end] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(322),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(328),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(334),
  },
  [150] = {
    [anon_sym_RBRACK] = ACTIONS(337),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [151] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(339),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [152] = {
    [anon_sym_RPAREN] = ACTIONS(341),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [153] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(345),
    [anon_sym_RBRACK] = ACTIONS(345),
    [sym_escape] = ACTIONS(345),
    [sym_begin_group] = ACTIONS(345),
    [sym_end_group] = ACTIONS(345),
    [sym_math_shift] = ACTIONS(345),
    [sym_alignment_tab] = ACTIONS(345),
    [sym_parameter_char] = ACTIONS(345),
    [sym_superscript] = ACTIONS(345),
    [sym_subscript] = ACTIONS(345),
    [sym_active_char] = ACTIONS(345),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(347),
  },
  [155] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_end_group] = ACTIONS(311),
    [sym_math_shift] = ACTIONS(322),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(328),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(334),
  },
  [156] = {
    [anon_sym_LBRACK] = ACTIONS(349),
    [anon_sym_RBRACK] = ACTIONS(349),
    [sym_escape] = ACTIONS(349),
    [sym_begin_group] = ACTIONS(349),
    [sym_end_group] = ACTIONS(349),
    [sym_math_shift] = ACTIONS(349),
    [sym_alignment_tab] = ACTIONS(349),
    [sym_parameter_char] = ACTIONS(349),
    [sym_superscript] = ACTIONS(349),
    [sym_subscript] = ACTIONS(349),
    [sym_active_char] = ACTIONS(349),
    [sym_comment_char] = ACTIONS(349),
    [sym_text] = ACTIONS(351),
  },
  [157] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(243),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_end_group] = ACTIONS(353),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [158] = {
    [sym_math_shift] = ACTIONS(355),
  },
  [159] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(357),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [160] = {
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym_escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_comment_char] = ACTIONS(359),
    [sym_text] = ACTIONS(361),
  },
  [161] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end] = STATE(245),
    [sym_end_token] = STATE(133),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(75),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_RBRACK] = ACTIONS(363),
    [sym_escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_comment_char] = ACTIONS(363),
    [sym_text] = ACTIONS(365),
  },
  [163] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [sym_end_opt] = STATE(246),
    [aux_sym_math_environment_repeat1] = STATE(247),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_RBRACK] = ACTIONS(367),
    [sym_escape] = ACTIONS(367),
    [sym_begin_group] = ACTIONS(367),
    [sym_end_group] = ACTIONS(367),
    [sym_math_shift] = ACTIONS(367),
    [sym_alignment_tab] = ACTIONS(367),
    [sym_parameter_char] = ACTIONS(367),
    [sym_superscript] = ACTIONS(367),
    [sym_subscript] = ACTIONS(367),
    [sym_active_char] = ACTIONS(367),
    [sym_comment_char] = ACTIONS(367),
    [sym_text] = ACTIONS(369),
  },
  [165] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym_escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(382),
    [sym_parameter_char] = ACTIONS(385),
    [sym_superscript] = ACTIONS(382),
    [sym_subscript] = ACTIONS(382),
    [sym_active_char] = ACTIONS(382),
    [sym_comment_char] = ACTIONS(388),
    [sym_text] = ACTIONS(391),
  },
  [166] = {
    [sym_begin_group] = ACTIONS(394),
  },
  [167] = {
    [anon_sym_align] = ACTIONS(396),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [sym_escape] = ACTIONS(398),
    [sym_begin_group] = ACTIONS(398),
    [sym_end_group] = ACTIONS(398),
    [sym_math_shift] = ACTIONS(398),
    [sym_alignment_tab] = ACTIONS(398),
    [sym_parameter_char] = ACTIONS(398),
    [sym_superscript] = ACTIONS(398),
    [sym_subscript] = ACTIONS(398),
    [sym_active_char] = ACTIONS(398),
    [sym_comment_char] = ACTIONS(398),
    [sym_text] = ACTIONS(400),
  },
  [169] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym_escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_alignment_tab] = ACTIONS(382),
    [sym_parameter_char] = ACTIONS(385),
    [sym_superscript] = ACTIONS(382),
    [sym_subscript] = ACTIONS(382),
    [sym_active_char] = ACTIONS(382),
    [sym_comment_char] = ACTIONS(388),
    [sym_text] = ACTIONS(391),
  },
  [170] = {
    [anon_sym_align_STAR] = ACTIONS(402),
  },
  [171] = {
    [anon_sym_alignat] = ACTIONS(404),
  },
  [172] = {
    [anon_sym_alignat_STAR] = ACTIONS(406),
  },
  [173] = {
    [anon_sym_eqnarray] = ACTIONS(408),
  },
  [174] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(410),
  },
  [175] = {
    [anon_sym_equation] = ACTIONS(412),
  },
  [176] = {
    [anon_sym_equation_STAR] = ACTIONS(414),
  },
  [177] = {
    [anon_sym_flalign] = ACTIONS(416),
  },
  [178] = {
    [anon_sym_flalign_STAR] = ACTIONS(418),
  },
  [179] = {
    [anon_sym_gather] = ACTIONS(420),
  },
  [180] = {
    [anon_sym_gather_STAR] = ACTIONS(422),
  },
  [181] = {
    [anon_sym_multline] = ACTIONS(424),
  },
  [182] = {
    [anon_sym_multline_STAR] = ACTIONS(426),
  },
  [183] = {
    [anon_sym_split] = ACTIONS(428),
  },
  [184] = {
    [anon_sym_split_STAR] = ACTIONS(430),
  },
  [185] = {
    [anon_sym_math] = ACTIONS(432),
  },
  [186] = {
    [anon_sym_verbatim] = ACTIONS(434),
  },
  [187] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [anon_sym_LBRACK] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(436),
    [sym_escape] = ACTIONS(436),
    [sym_begin_group] = ACTIONS(436),
    [sym_end_group] = ACTIONS(436),
    [sym_math_shift] = ACTIONS(436),
    [sym_alignment_tab] = ACTIONS(436),
    [sym_parameter_char] = ACTIONS(436),
    [sym_superscript] = ACTIONS(436),
    [sym_subscript] = ACTIONS(436),
    [sym_active_char] = ACTIONS(436),
    [sym_comment_char] = ACTIONS(436),
    [sym_text] = ACTIONS(438),
  },
  [188] = {
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(440),
    [sym_verbatim_token] = ACTIONS(442),
  },
  [189] = {
    [anon_sym_Verbatim] = ACTIONS(445),
  },
  [190] = {
    [sym_end_Verbatim] = STATE(267),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [191] = {
    [sym_escape] = ACTIONS(303),
    [sym_verbatim_token] = ACTIONS(303),
  },
  [192] = {
    [sym_escape] = ACTIONS(307),
    [sym_verbatim_token] = ACTIONS(307),
  },
  [193] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(268),
    [aux_sym_program_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(215),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [194] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(447),
  },
  [195] = {
    [sym_end_Verbatim_star] = STATE(267),
    [sym_end_token] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [196] = {
    [anon_sym_BVerbatim] = ACTIONS(449),
  },
  [197] = {
    [sym_end_BVerbatim] = STATE(267),
    [sym_end_token] = STATE(119),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [198] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(451),
  },
  [199] = {
    [sym_end_BVerbatim_star] = STATE(267),
    [sym_end_token] = STATE(122),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [200] = {
    [anon_sym_LVerbatim] = ACTIONS(453),
  },
  [201] = {
    [sym_end_LVerbatim] = STATE(267),
    [sym_end_token] = STATE(125),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [202] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(455),
  },
  [203] = {
    [sym_end_LVerbatim_star] = STATE(267),
    [sym_end_token] = STATE(128),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [204] = {
    [ts_builtin_sym_end] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym_escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(457),
    [sym_end_group] = ACTIONS(457),
    [sym_math_shift] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(457),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_comment_char] = ACTIONS(457),
    [sym_text] = ACTIONS(459),
  },
  [205] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym_escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(461),
    [sym_end_group] = ACTIONS(461),
    [sym_math_shift] = ACTIONS(461),
    [sym_alignment_tab] = ACTIONS(461),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(461),
    [sym_active_char] = ACTIONS(461),
    [sym_comment_char] = ACTIONS(461),
    [sym_text] = ACTIONS(463),
  },
  [206] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(322),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(328),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(334),
  },
  [207] = {
    [sym_end_group] = ACTIONS(465),
  },
  [208] = {
    [sym_end_group] = ACTIONS(467),
  },
  [209] = {
    [sym_end_group] = ACTIONS(469),
  },
  [210] = {
    [sym_end_group] = ACTIONS(471),
  },
  [211] = {
    [sym_end_group] = ACTIONS(473),
  },
  [212] = {
    [sym_end_group] = ACTIONS(475),
  },
  [213] = {
    [sym_end_group] = ACTIONS(477),
  },
  [214] = {
    [sym_end_group] = ACTIONS(479),
  },
  [215] = {
    [sym_end_group] = ACTIONS(481),
  },
  [216] = {
    [sym_end_group] = ACTIONS(483),
  },
  [217] = {
    [sym_end_group] = ACTIONS(485),
  },
  [218] = {
    [sym_end_group] = ACTIONS(487),
  },
  [219] = {
    [sym_end_group] = ACTIONS(489),
  },
  [220] = {
    [sym_end_group] = ACTIONS(491),
  },
  [221] = {
    [sym_end_group] = ACTIONS(493),
  },
  [222] = {
    [sym_end_group] = ACTIONS(495),
  },
  [223] = {
    [sym_end_group] = ACTIONS(497),
  },
  [224] = {
    [sym_end_group] = ACTIONS(499),
  },
  [225] = {
    [sym_end_group] = ACTIONS(501),
  },
  [226] = {
    [sym_end_group] = ACTIONS(503),
  },
  [227] = {
    [sym_end_group] = ACTIONS(505),
  },
  [228] = {
    [sym_end_group] = ACTIONS(507),
  },
  [229] = {
    [sym_end_group] = ACTIONS(509),
  },
  [230] = {
    [sym_end_group] = ACTIONS(511),
  },
  [231] = {
    [ts_builtin_sym_end] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_RBRACK] = ACTIONS(513),
    [sym_escape] = ACTIONS(513),
    [sym_begin_group] = ACTIONS(513),
    [sym_end_group] = ACTIONS(513),
    [sym_math_shift] = ACTIONS(513),
    [sym_alignment_tab] = ACTIONS(513),
    [sym_parameter_char] = ACTIONS(513),
    [sym_superscript] = ACTIONS(513),
    [sym_subscript] = ACTIONS(513),
    [sym_active_char] = ACTIONS(513),
    [sym_comment_char] = ACTIONS(513),
    [sym_text] = ACTIONS(515),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [sym_escape] = ACTIONS(517),
    [sym_begin_group] = ACTIONS(517),
    [sym_end_group] = ACTIONS(517),
    [sym_math_shift] = ACTIONS(517),
    [sym_alignment_tab] = ACTIONS(517),
    [sym_parameter_char] = ACTIONS(517),
    [sym_superscript] = ACTIONS(517),
    [sym_subscript] = ACTIONS(517),
    [sym_active_char] = ACTIONS(517),
    [sym_comment_char] = ACTIONS(517),
    [sym_text] = ACTIONS(519),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym_escape] = ACTIONS(521),
    [sym_begin_group] = ACTIONS(521),
    [sym_end_group] = ACTIONS(521),
    [sym_math_shift] = ACTIONS(521),
    [sym_alignment_tab] = ACTIONS(521),
    [sym_parameter_char] = ACTIONS(521),
    [sym_superscript] = ACTIONS(521),
    [sym_subscript] = ACTIONS(521),
    [sym_active_char] = ACTIONS(521),
    [sym_comment_char] = ACTIONS(521),
    [sym_text] = ACTIONS(523),
  },
  [234] = {
    [anon_sym_EQ] = ACTIONS(525),
  },
  [235] = {
    [sym_number] = ACTIONS(527),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(529),
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym_escape] = ACTIONS(529),
    [sym_begin_group] = ACTIONS(529),
    [sym_end_group] = ACTIONS(529),
    [sym_math_shift] = ACTIONS(529),
    [sym_alignment_tab] = ACTIONS(529),
    [sym_parameter_char] = ACTIONS(529),
    [sym_superscript] = ACTIONS(529),
    [sym_subscript] = ACTIONS(529),
    [sym_active_char] = ACTIONS(529),
    [sym_comment_char] = ACTIONS(529),
    [sym_text] = ACTIONS(531),
  },
  [237] = {
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(11),
    [sym_begin_align_star] = STATE(12),
    [sym_begin_alignat] = STATE(13),
    [sym_begin_alignat_star] = STATE(14),
    [sym_begin_eqnarray] = STATE(15),
    [sym_begin_eqnarray_star] = STATE(16),
    [sym_begin_equation] = STATE(17),
    [sym_begin_equation_star] = STATE(18),
    [sym_begin_flalign] = STATE(19),
    [sym_begin_flalign_star] = STATE(20),
    [sym_begin_gather] = STATE(21),
    [sym_begin_gather_star] = STATE(22),
    [sym_begin_multline] = STATE(23),
    [sym_begin_multline_star] = STATE(24),
    [sym_begin_split] = STATE(25),
    [sym_begin_split_star] = STATE(26),
    [sym_begin_math] = STATE(27),
    [sym_begin_verbatim] = STATE(28),
    [sym_begin_Verbatim] = STATE(29),
    [sym_begin_Verbatim_star] = STATE(30),
    [sym_begin_BVerbatim] = STATE(31),
    [sym_begin_BVerbatim_star] = STATE(32),
    [sym_begin_LVerbatim] = STATE(33),
    [sym_begin_LVerbatim_star] = STATE(34),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(44),
    [aux_sym_program_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(311),
    [sym_escape] = ACTIONS(316),
    [sym_begin_group] = ACTIONS(319),
    [sym_math_shift] = ACTIONS(322),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(328),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(334),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [sym_escape] = ACTIONS(533),
    [sym_begin_group] = ACTIONS(533),
    [sym_end_group] = ACTIONS(533),
    [sym_math_shift] = ACTIONS(533),
    [sym_alignment_tab] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(533),
    [sym_superscript] = ACTIONS(533),
    [sym_subscript] = ACTIONS(533),
    [sym_active_char] = ACTIONS(533),
    [sym_comment_char] = ACTIONS(533),
    [sym_text] = ACTIONS(535),
  },
  [239] = {
    [anon_sym_RBRACK] = ACTIONS(537),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [240] = {
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_RBRACK] = ACTIONS(539),
    [sym_escape] = ACTIONS(539),
    [sym_begin_group] = ACTIONS(539),
    [sym_end_group] = ACTIONS(539),
    [sym_math_shift] = ACTIONS(539),
    [sym_alignment_tab] = ACTIONS(539),
    [sym_parameter_char] = ACTIONS(539),
    [sym_superscript] = ACTIONS(539),
    [sym_subscript] = ACTIONS(539),
    [sym_active_char] = ACTIONS(539),
    [sym_comment_char] = ACTIONS(539),
    [sym_text] = ACTIONS(541),
  },
  [241] = {
    [anon_sym_RPAREN] = ACTIONS(543),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [242] = {
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [sym_escape] = ACTIONS(545),
    [sym_begin_group] = ACTIONS(545),
    [sym_end_group] = ACTIONS(545),
    [sym_math_shift] = ACTIONS(545),
    [sym_alignment_tab] = ACTIONS(545),
    [sym_parameter_char] = ACTIONS(545),
    [sym_superscript] = ACTIONS(545),
    [sym_subscript] = ACTIONS(545),
    [sym_active_char] = ACTIONS(545),
    [sym_comment_char] = ACTIONS(545),
    [sym_text] = ACTIONS(547),
  },
  [243] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(243),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym_escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_end_group] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(382),
    [sym_parameter_char] = ACTIONS(385),
    [sym_superscript] = ACTIONS(382),
    [sym_subscript] = ACTIONS(382),
    [sym_active_char] = ACTIONS(382),
    [sym_comment_char] = ACTIONS(388),
    [sym_text] = ACTIONS(391),
  },
  [244] = {
    [sym_math_shift] = ACTIONS(549),
  },
  [245] = {
    [anon_sym_LBRACK] = ACTIONS(551),
    [anon_sym_RBRACK] = ACTIONS(551),
    [sym_escape] = ACTIONS(551),
    [sym_begin_group] = ACTIONS(551),
    [sym_end_group] = ACTIONS(551),
    [sym_math_shift] = ACTIONS(551),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(551),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_comment_char] = ACTIONS(551),
    [sym_text] = ACTIONS(553),
  },
  [246] = {
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_RBRACK] = ACTIONS(555),
    [sym_escape] = ACTIONS(555),
    [sym_begin_group] = ACTIONS(555),
    [sym_end_group] = ACTIONS(555),
    [sym_math_shift] = ACTIONS(555),
    [sym_alignment_tab] = ACTIONS(555),
    [sym_parameter_char] = ACTIONS(555),
    [sym_superscript] = ACTIONS(555),
    [sym_subscript] = ACTIONS(555),
    [sym_active_char] = ACTIONS(555),
    [sym_comment_char] = ACTIONS(555),
    [sym_text] = ACTIONS(557),
  },
  [247] = {
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(62),
    [sym_math_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(37),
    [sym_documentclass_token] = STATE(38),
    [sym_usepackage] = STATE(37),
    [sym_usepackage_token] = STATE(39),
    [sym_include] = STATE(37),
    [sym_include_token] = STATE(40),
    [sym_section] = STATE(37),
    [sym_section_token] = STATE(41),
    [sym_storage] = STATE(37),
    [sym_storage_token] = STATE(42),
    [sym_catcode] = STATE(37),
    [sym_catcode_token] = STATE(43),
    [sym_math_group] = STATE(62),
    [sym_opt_math_group] = STATE(62),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(247),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(380),
    [sym_escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_alignment_tab] = ACTIONS(382),
    [sym_parameter_char] = ACTIONS(385),
    [sym_superscript] = ACTIONS(382),
    [sym_subscript] = ACTIONS(382),
    [sym_active_char] = ACTIONS(382),
    [sym_comment_char] = ACTIONS(388),
    [sym_text] = ACTIONS(391),
  },
  [248] = {
    [sym_end_group] = ACTIONS(559),
  },
  [249] = {
    [sym_end_group] = ACTIONS(561),
  },
  [250] = {
    [sym_end_group] = ACTIONS(563),
  },
  [251] = {
    [sym_end_group] = ACTIONS(565),
  },
  [252] = {
    [sym_end_group] = ACTIONS(567),
  },
  [253] = {
    [sym_end_group] = ACTIONS(569),
  },
  [254] = {
    [sym_end_group] = ACTIONS(571),
  },
  [255] = {
    [sym_end_group] = ACTIONS(573),
  },
  [256] = {
    [sym_end_group] = ACTIONS(575),
  },
  [257] = {
    [sym_end_group] = ACTIONS(577),
  },
  [258] = {
    [sym_end_group] = ACTIONS(579),
  },
  [259] = {
    [sym_end_group] = ACTIONS(581),
  },
  [260] = {
    [sym_end_group] = ACTIONS(583),
  },
  [261] = {
    [sym_end_group] = ACTIONS(585),
  },
  [262] = {
    [sym_end_group] = ACTIONS(587),
  },
  [263] = {
    [sym_end_group] = ACTIONS(589),
  },
  [264] = {
    [sym_end_group] = ACTIONS(591),
  },
  [265] = {
    [sym_end_group] = ACTIONS(593),
  },
  [266] = {
    [sym_end_group] = ACTIONS(595),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_RBRACK] = ACTIONS(597),
    [sym_escape] = ACTIONS(597),
    [sym_begin_group] = ACTIONS(597),
    [sym_end_group] = ACTIONS(597),
    [sym_math_shift] = ACTIONS(597),
    [sym_alignment_tab] = ACTIONS(597),
    [sym_parameter_char] = ACTIONS(597),
    [sym_superscript] = ACTIONS(597),
    [sym_subscript] = ACTIONS(597),
    [sym_active_char] = ACTIONS(597),
    [sym_comment_char] = ACTIONS(597),
    [sym_text] = ACTIONS(599),
  },
  [268] = {
    [sym_escape] = ACTIONS(529),
    [sym_verbatim_token] = ACTIONS(529),
  },
  [269] = {
    [sym_end_group] = ACTIONS(601),
  },
  [270] = {
    [sym_end_group] = ACTIONS(603),
  },
  [271] = {
    [sym_end_group] = ACTIONS(605),
  },
  [272] = {
    [sym_end_group] = ACTIONS(607),
  },
  [273] = {
    [sym_end_group] = ACTIONS(609),
  },
  [274] = {
    [anon_sym_LBRACK] = ACTIONS(611),
    [sym_escape] = ACTIONS(611),
    [sym_begin_group] = ACTIONS(611),
    [sym_alignment_tab] = ACTIONS(611),
    [sym_parameter_char] = ACTIONS(611),
    [sym_superscript] = ACTIONS(611),
    [sym_subscript] = ACTIONS(611),
    [sym_active_char] = ACTIONS(611),
    [sym_comment_char] = ACTIONS(611),
    [sym_text] = ACTIONS(613),
  },
  [275] = {
    [anon_sym_LBRACK] = ACTIONS(615),
    [sym_escape] = ACTIONS(615),
    [sym_begin_group] = ACTIONS(615),
    [sym_alignment_tab] = ACTIONS(615),
    [sym_parameter_char] = ACTIONS(615),
    [sym_superscript] = ACTIONS(615),
    [sym_subscript] = ACTIONS(615),
    [sym_active_char] = ACTIONS(615),
    [sym_comment_char] = ACTIONS(615),
    [sym_text] = ACTIONS(617),
  },
  [276] = {
    [sym_opt_text_group] = STATE(325),
    [sym_begin_opt] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(89),
  },
  [277] = {
    [sym_text_group] = STATE(326),
    [sym_begin_group] = ACTIONS(91),
  },
  [278] = {
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_escape] = ACTIONS(619),
    [sym_begin_group] = ACTIONS(619),
    [sym_alignment_tab] = ACTIONS(619),
    [sym_parameter_char] = ACTIONS(619),
    [sym_superscript] = ACTIONS(619),
    [sym_subscript] = ACTIONS(619),
    [sym_active_char] = ACTIONS(619),
    [sym_comment_char] = ACTIONS(619),
    [sym_text] = ACTIONS(621),
  },
  [279] = {
    [anon_sym_LBRACK] = ACTIONS(623),
    [sym_escape] = ACTIONS(623),
    [sym_begin_group] = ACTIONS(623),
    [sym_alignment_tab] = ACTIONS(623),
    [sym_parameter_char] = ACTIONS(623),
    [sym_superscript] = ACTIONS(623),
    [sym_subscript] = ACTIONS(623),
    [sym_active_char] = ACTIONS(623),
    [sym_comment_char] = ACTIONS(623),
    [sym_text] = ACTIONS(625),
  },
  [280] = {
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym_escape] = ACTIONS(627),
    [sym_begin_group] = ACTIONS(627),
    [sym_alignment_tab] = ACTIONS(627),
    [sym_parameter_char] = ACTIONS(627),
    [sym_superscript] = ACTIONS(627),
    [sym_subscript] = ACTIONS(627),
    [sym_active_char] = ACTIONS(627),
    [sym_comment_char] = ACTIONS(627),
    [sym_text] = ACTIONS(629),
  },
  [281] = {
    [anon_sym_LBRACK] = ACTIONS(631),
    [sym_escape] = ACTIONS(631),
    [sym_begin_group] = ACTIONS(631),
    [sym_alignment_tab] = ACTIONS(631),
    [sym_parameter_char] = ACTIONS(631),
    [sym_superscript] = ACTIONS(631),
    [sym_subscript] = ACTIONS(631),
    [sym_active_char] = ACTIONS(631),
    [sym_comment_char] = ACTIONS(631),
    [sym_text] = ACTIONS(633),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(635),
    [sym_escape] = ACTIONS(635),
    [sym_begin_group] = ACTIONS(635),
    [sym_alignment_tab] = ACTIONS(635),
    [sym_parameter_char] = ACTIONS(635),
    [sym_superscript] = ACTIONS(635),
    [sym_subscript] = ACTIONS(635),
    [sym_active_char] = ACTIONS(635),
    [sym_comment_char] = ACTIONS(635),
    [sym_text] = ACTIONS(637),
  },
  [283] = {
    [anon_sym_LBRACK] = ACTIONS(639),
    [sym_escape] = ACTIONS(639),
    [sym_begin_group] = ACTIONS(639),
    [sym_alignment_tab] = ACTIONS(639),
    [sym_parameter_char] = ACTIONS(639),
    [sym_superscript] = ACTIONS(639),
    [sym_subscript] = ACTIONS(639),
    [sym_active_char] = ACTIONS(639),
    [sym_comment_char] = ACTIONS(639),
    [sym_text] = ACTIONS(641),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(643),
    [sym_escape] = ACTIONS(643),
    [sym_begin_group] = ACTIONS(643),
    [sym_alignment_tab] = ACTIONS(643),
    [sym_parameter_char] = ACTIONS(643),
    [sym_superscript] = ACTIONS(643),
    [sym_subscript] = ACTIONS(643),
    [sym_active_char] = ACTIONS(643),
    [sym_comment_char] = ACTIONS(643),
    [sym_text] = ACTIONS(645),
  },
  [285] = {
    [anon_sym_LBRACK] = ACTIONS(647),
    [sym_escape] = ACTIONS(647),
    [sym_begin_group] = ACTIONS(647),
    [sym_alignment_tab] = ACTIONS(647),
    [sym_parameter_char] = ACTIONS(647),
    [sym_superscript] = ACTIONS(647),
    [sym_subscript] = ACTIONS(647),
    [sym_active_char] = ACTIONS(647),
    [sym_comment_char] = ACTIONS(647),
    [sym_text] = ACTIONS(649),
  },
  [286] = {
    [anon_sym_LBRACK] = ACTIONS(651),
    [sym_escape] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_parameter_char] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_active_char] = ACTIONS(651),
    [sym_comment_char] = ACTIONS(651),
    [sym_text] = ACTIONS(653),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(655),
    [sym_escape] = ACTIONS(655),
    [sym_begin_group] = ACTIONS(655),
    [sym_alignment_tab] = ACTIONS(655),
    [sym_parameter_char] = ACTIONS(655),
    [sym_superscript] = ACTIONS(655),
    [sym_subscript] = ACTIONS(655),
    [sym_active_char] = ACTIONS(655),
    [sym_comment_char] = ACTIONS(655),
    [sym_text] = ACTIONS(657),
  },
  [288] = {
    [anon_sym_LBRACK] = ACTIONS(659),
    [sym_escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_comment_char] = ACTIONS(659),
    [sym_text] = ACTIONS(661),
  },
  [289] = {
    [anon_sym_LBRACK] = ACTIONS(663),
    [sym_escape] = ACTIONS(663),
    [sym_begin_group] = ACTIONS(663),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(663),
    [sym_superscript] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_active_char] = ACTIONS(663),
    [sym_comment_char] = ACTIONS(663),
    [sym_text] = ACTIONS(665),
  },
  [290] = {
    [anon_sym_LBRACK] = ACTIONS(667),
    [sym_escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_comment_char] = ACTIONS(667),
    [sym_text] = ACTIONS(669),
  },
  [291] = {
    [sym_escape] = ACTIONS(671),
    [sym_verbatim_token] = ACTIONS(671),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_escape] = ACTIONS(673),
    [sym_verbatim_token] = ACTIONS(673),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_escape] = ACTIONS(675),
    [sym_verbatim_token] = ACTIONS(675),
  },
  [294] = {
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_escape] = ACTIONS(677),
    [sym_verbatim_token] = ACTIONS(677),
  },
  [295] = {
    [anon_sym_LBRACK] = ACTIONS(679),
    [sym_escape] = ACTIONS(679),
    [sym_verbatim_token] = ACTIONS(679),
  },
  [296] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_escape] = ACTIONS(681),
    [sym_verbatim_token] = ACTIONS(681),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(683),
    [sym_escape] = ACTIONS(683),
    [sym_verbatim_token] = ACTIONS(683),
  },
  [298] = {
    [ts_builtin_sym_end] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_RBRACK] = ACTIONS(685),
    [sym_escape] = ACTIONS(685),
    [sym_begin_group] = ACTIONS(685),
    [sym_end_group] = ACTIONS(685),
    [sym_math_shift] = ACTIONS(685),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(685),
    [sym_superscript] = ACTIONS(685),
    [sym_subscript] = ACTIONS(685),
    [sym_active_char] = ACTIONS(685),
    [sym_comment_char] = ACTIONS(685),
    [sym_text] = ACTIONS(687),
  },
  [299] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [anon_sym_LBRACK] = ACTIONS(689),
    [anon_sym_RBRACK] = ACTIONS(689),
    [sym_escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_end_group] = ACTIONS(689),
    [sym_math_shift] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_comment_char] = ACTIONS(689),
    [sym_text] = ACTIONS(691),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(693),
    [anon_sym_RBRACK] = ACTIONS(693),
    [sym_escape] = ACTIONS(693),
    [sym_begin_group] = ACTIONS(693),
    [sym_end_group] = ACTIONS(693),
    [sym_math_shift] = ACTIONS(693),
    [sym_alignment_tab] = ACTIONS(693),
    [sym_parameter_char] = ACTIONS(693),
    [sym_superscript] = ACTIONS(693),
    [sym_subscript] = ACTIONS(693),
    [sym_active_char] = ACTIONS(693),
    [sym_comment_char] = ACTIONS(693),
    [sym_text] = ACTIONS(695),
  },
  [301] = {
    [ts_builtin_sym_end] = ACTIONS(697),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_RBRACK] = ACTIONS(697),
    [sym_escape] = ACTIONS(697),
    [sym_begin_group] = ACTIONS(697),
    [sym_end_group] = ACTIONS(697),
    [sym_math_shift] = ACTIONS(697),
    [sym_alignment_tab] = ACTIONS(697),
    [sym_parameter_char] = ACTIONS(697),
    [sym_superscript] = ACTIONS(697),
    [sym_subscript] = ACTIONS(697),
    [sym_active_char] = ACTIONS(697),
    [sym_comment_char] = ACTIONS(697),
    [sym_text] = ACTIONS(699),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_RBRACK] = ACTIONS(701),
    [sym_escape] = ACTIONS(701),
    [sym_begin_group] = ACTIONS(701),
    [sym_end_group] = ACTIONS(701),
    [sym_math_shift] = ACTIONS(701),
    [sym_alignment_tab] = ACTIONS(701),
    [sym_parameter_char] = ACTIONS(701),
    [sym_superscript] = ACTIONS(701),
    [sym_subscript] = ACTIONS(701),
    [sym_active_char] = ACTIONS(701),
    [sym_comment_char] = ACTIONS(701),
    [sym_text] = ACTIONS(703),
  },
  [303] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(705),
    [anon_sym_RBRACK] = ACTIONS(705),
    [sym_escape] = ACTIONS(705),
    [sym_begin_group] = ACTIONS(705),
    [sym_end_group] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(705),
    [sym_alignment_tab] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(705),
    [sym_superscript] = ACTIONS(705),
    [sym_subscript] = ACTIONS(705),
    [sym_active_char] = ACTIONS(705),
    [sym_comment_char] = ACTIONS(705),
    [sym_text] = ACTIONS(707),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(709),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(709),
    [sym_escape] = ACTIONS(709),
    [sym_begin_group] = ACTIONS(709),
    [sym_end_group] = ACTIONS(709),
    [sym_math_shift] = ACTIONS(709),
    [sym_alignment_tab] = ACTIONS(709),
    [sym_parameter_char] = ACTIONS(709),
    [sym_superscript] = ACTIONS(709),
    [sym_subscript] = ACTIONS(709),
    [sym_active_char] = ACTIONS(709),
    [sym_comment_char] = ACTIONS(709),
    [sym_text] = ACTIONS(711),
  },
  [305] = {
    [ts_builtin_sym_end] = ACTIONS(713),
    [anon_sym_LBRACK] = ACTIONS(713),
    [anon_sym_RBRACK] = ACTIONS(713),
    [sym_escape] = ACTIONS(713),
    [sym_begin_group] = ACTIONS(713),
    [sym_end_group] = ACTIONS(713),
    [sym_math_shift] = ACTIONS(713),
    [sym_alignment_tab] = ACTIONS(713),
    [sym_parameter_char] = ACTIONS(713),
    [sym_superscript] = ACTIONS(713),
    [sym_subscript] = ACTIONS(713),
    [sym_active_char] = ACTIONS(713),
    [sym_comment_char] = ACTIONS(713),
    [sym_text] = ACTIONS(715),
  },
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [anon_sym_RBRACK] = ACTIONS(717),
    [sym_escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_end_group] = ACTIONS(717),
    [sym_math_shift] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_comment_char] = ACTIONS(717),
    [sym_text] = ACTIONS(719),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(721),
    [anon_sym_LBRACK] = ACTIONS(721),
    [anon_sym_RBRACK] = ACTIONS(721),
    [sym_escape] = ACTIONS(721),
    [sym_begin_group] = ACTIONS(721),
    [sym_end_group] = ACTIONS(721),
    [sym_math_shift] = ACTIONS(721),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(721),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(721),
    [sym_active_char] = ACTIONS(721),
    [sym_comment_char] = ACTIONS(721),
    [sym_text] = ACTIONS(723),
  },
  [308] = {
    [ts_builtin_sym_end] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [sym_escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(725),
    [sym_end_group] = ACTIONS(725),
    [sym_math_shift] = ACTIONS(725),
    [sym_alignment_tab] = ACTIONS(725),
    [sym_parameter_char] = ACTIONS(725),
    [sym_superscript] = ACTIONS(725),
    [sym_subscript] = ACTIONS(725),
    [sym_active_char] = ACTIONS(725),
    [sym_comment_char] = ACTIONS(725),
    [sym_text] = ACTIONS(727),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [sym_escape] = ACTIONS(729),
    [sym_begin_group] = ACTIONS(729),
    [sym_end_group] = ACTIONS(729),
    [sym_math_shift] = ACTIONS(729),
    [sym_alignment_tab] = ACTIONS(729),
    [sym_parameter_char] = ACTIONS(729),
    [sym_superscript] = ACTIONS(729),
    [sym_subscript] = ACTIONS(729),
    [sym_active_char] = ACTIONS(729),
    [sym_comment_char] = ACTIONS(729),
    [sym_text] = ACTIONS(731),
  },
  [310] = {
    [ts_builtin_sym_end] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym_escape] = ACTIONS(733),
    [sym_begin_group] = ACTIONS(733),
    [sym_end_group] = ACTIONS(733),
    [sym_math_shift] = ACTIONS(733),
    [sym_alignment_tab] = ACTIONS(733),
    [sym_parameter_char] = ACTIONS(733),
    [sym_superscript] = ACTIONS(733),
    [sym_subscript] = ACTIONS(733),
    [sym_active_char] = ACTIONS(733),
    [sym_comment_char] = ACTIONS(733),
    [sym_text] = ACTIONS(735),
  },
  [311] = {
    [ts_builtin_sym_end] = ACTIONS(737),
    [anon_sym_LBRACK] = ACTIONS(737),
    [anon_sym_RBRACK] = ACTIONS(737),
    [sym_escape] = ACTIONS(737),
    [sym_begin_group] = ACTIONS(737),
    [sym_end_group] = ACTIONS(737),
    [sym_math_shift] = ACTIONS(737),
    [sym_alignment_tab] = ACTIONS(737),
    [sym_parameter_char] = ACTIONS(737),
    [sym_superscript] = ACTIONS(737),
    [sym_subscript] = ACTIONS(737),
    [sym_active_char] = ACTIONS(737),
    [sym_comment_char] = ACTIONS(737),
    [sym_text] = ACTIONS(739),
  },
  [312] = {
    [ts_builtin_sym_end] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [sym_escape] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_end_group] = ACTIONS(741),
    [sym_math_shift] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_active_char] = ACTIONS(741),
    [sym_comment_char] = ACTIONS(741),
    [sym_text] = ACTIONS(743),
  },
  [313] = {
    [ts_builtin_sym_end] = ACTIONS(745),
    [anon_sym_LBRACK] = ACTIONS(745),
    [anon_sym_RBRACK] = ACTIONS(745),
    [sym_escape] = ACTIONS(745),
    [sym_begin_group] = ACTIONS(745),
    [sym_end_group] = ACTIONS(745),
    [sym_math_shift] = ACTIONS(745),
    [sym_alignment_tab] = ACTIONS(745),
    [sym_parameter_char] = ACTIONS(745),
    [sym_superscript] = ACTIONS(745),
    [sym_subscript] = ACTIONS(745),
    [sym_active_char] = ACTIONS(745),
    [sym_comment_char] = ACTIONS(745),
    [sym_text] = ACTIONS(747),
  },
  [314] = {
    [ts_builtin_sym_end] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [sym_escape] = ACTIONS(749),
    [sym_begin_group] = ACTIONS(749),
    [sym_end_group] = ACTIONS(749),
    [sym_math_shift] = ACTIONS(749),
    [sym_alignment_tab] = ACTIONS(749),
    [sym_parameter_char] = ACTIONS(749),
    [sym_superscript] = ACTIONS(749),
    [sym_subscript] = ACTIONS(749),
    [sym_active_char] = ACTIONS(749),
    [sym_comment_char] = ACTIONS(749),
    [sym_text] = ACTIONS(751),
  },
  [315] = {
    [ts_builtin_sym_end] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_RBRACK] = ACTIONS(753),
    [sym_escape] = ACTIONS(753),
    [sym_begin_group] = ACTIONS(753),
    [sym_end_group] = ACTIONS(753),
    [sym_math_shift] = ACTIONS(753),
    [sym_alignment_tab] = ACTIONS(753),
    [sym_parameter_char] = ACTIONS(753),
    [sym_superscript] = ACTIONS(753),
    [sym_subscript] = ACTIONS(753),
    [sym_active_char] = ACTIONS(753),
    [sym_comment_char] = ACTIONS(753),
    [sym_text] = ACTIONS(755),
  },
  [316] = {
    [ts_builtin_sym_end] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym_escape] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_end_group] = ACTIONS(757),
    [sym_math_shift] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_active_char] = ACTIONS(757),
    [sym_comment_char] = ACTIONS(757),
    [sym_text] = ACTIONS(759),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(761),
    [anon_sym_LBRACK] = ACTIONS(761),
    [anon_sym_RBRACK] = ACTIONS(761),
    [sym_escape] = ACTIONS(761),
    [sym_begin_group] = ACTIONS(761),
    [sym_end_group] = ACTIONS(761),
    [sym_math_shift] = ACTIONS(761),
    [sym_alignment_tab] = ACTIONS(761),
    [sym_parameter_char] = ACTIONS(761),
    [sym_superscript] = ACTIONS(761),
    [sym_subscript] = ACTIONS(761),
    [sym_active_char] = ACTIONS(761),
    [sym_comment_char] = ACTIONS(761),
    [sym_text] = ACTIONS(763),
  },
  [318] = {
    [ts_builtin_sym_end] = ACTIONS(765),
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym_escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(765),
    [sym_end_group] = ACTIONS(765),
    [sym_math_shift] = ACTIONS(765),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(765),
    [sym_superscript] = ACTIONS(765),
    [sym_subscript] = ACTIONS(765),
    [sym_active_char] = ACTIONS(765),
    [sym_comment_char] = ACTIONS(765),
    [sym_text] = ACTIONS(767),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(769),
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(769),
    [sym_escape] = ACTIONS(769),
    [sym_begin_group] = ACTIONS(769),
    [sym_end_group] = ACTIONS(769),
    [sym_math_shift] = ACTIONS(769),
    [sym_alignment_tab] = ACTIONS(769),
    [sym_parameter_char] = ACTIONS(769),
    [sym_superscript] = ACTIONS(769),
    [sym_subscript] = ACTIONS(769),
    [sym_active_char] = ACTIONS(769),
    [sym_comment_char] = ACTIONS(769),
    [sym_text] = ACTIONS(771),
  },
  [320] = {
    [ts_builtin_sym_end] = ACTIONS(773),
    [anon_sym_LBRACK] = ACTIONS(773),
    [anon_sym_RBRACK] = ACTIONS(773),
    [sym_escape] = ACTIONS(773),
    [sym_begin_group] = ACTIONS(773),
    [sym_end_group] = ACTIONS(773),
    [sym_math_shift] = ACTIONS(773),
    [sym_alignment_tab] = ACTIONS(773),
    [sym_parameter_char] = ACTIONS(773),
    [sym_superscript] = ACTIONS(773),
    [sym_subscript] = ACTIONS(773),
    [sym_active_char] = ACTIONS(773),
    [sym_comment_char] = ACTIONS(773),
    [sym_text] = ACTIONS(775),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(777),
    [sym_escape] = ACTIONS(777),
    [sym_begin_group] = ACTIONS(777),
    [sym_end_group] = ACTIONS(777),
    [sym_math_shift] = ACTIONS(777),
    [sym_alignment_tab] = ACTIONS(777),
    [sym_parameter_char] = ACTIONS(777),
    [sym_superscript] = ACTIONS(777),
    [sym_subscript] = ACTIONS(777),
    [sym_active_char] = ACTIONS(777),
    [sym_comment_char] = ACTIONS(777),
    [sym_text] = ACTIONS(779),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(781),
    [anon_sym_LBRACK] = ACTIONS(781),
    [anon_sym_RBRACK] = ACTIONS(781),
    [sym_escape] = ACTIONS(781),
    [sym_begin_group] = ACTIONS(781),
    [sym_end_group] = ACTIONS(781),
    [sym_math_shift] = ACTIONS(781),
    [sym_alignment_tab] = ACTIONS(781),
    [sym_parameter_char] = ACTIONS(781),
    [sym_superscript] = ACTIONS(781),
    [sym_subscript] = ACTIONS(781),
    [sym_active_char] = ACTIONS(781),
    [sym_comment_char] = ACTIONS(781),
    [sym_text] = ACTIONS(783),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(785),
    [anon_sym_LBRACK] = ACTIONS(785),
    [anon_sym_RBRACK] = ACTIONS(785),
    [sym_escape] = ACTIONS(785),
    [sym_begin_group] = ACTIONS(785),
    [sym_end_group] = ACTIONS(785),
    [sym_math_shift] = ACTIONS(785),
    [sym_alignment_tab] = ACTIONS(785),
    [sym_parameter_char] = ACTIONS(785),
    [sym_superscript] = ACTIONS(785),
    [sym_subscript] = ACTIONS(785),
    [sym_active_char] = ACTIONS(785),
    [sym_comment_char] = ACTIONS(785),
    [sym_text] = ACTIONS(787),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(789),
    [sym_escape] = ACTIONS(789),
    [sym_begin_group] = ACTIONS(789),
    [sym_end_group] = ACTIONS(789),
    [sym_math_shift] = ACTIONS(789),
    [sym_alignment_tab] = ACTIONS(789),
    [sym_parameter_char] = ACTIONS(789),
    [sym_superscript] = ACTIONS(789),
    [sym_subscript] = ACTIONS(789),
    [sym_active_char] = ACTIONS(789),
    [sym_comment_char] = ACTIONS(789),
    [sym_text] = ACTIONS(791),
  },
  [325] = {
    [anon_sym_LBRACK] = ACTIONS(793),
    [sym_escape] = ACTIONS(793),
    [sym_begin_group] = ACTIONS(793),
    [sym_alignment_tab] = ACTIONS(793),
    [sym_parameter_char] = ACTIONS(793),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(793),
    [sym_active_char] = ACTIONS(793),
    [sym_comment_char] = ACTIONS(793),
    [sym_text] = ACTIONS(795),
  },
  [326] = {
    [anon_sym_LBRACK] = ACTIONS(797),
    [sym_escape] = ACTIONS(797),
    [sym_begin_group] = ACTIONS(797),
    [sym_alignment_tab] = ACTIONS(797),
    [sym_parameter_char] = ACTIONS(797),
    [sym_superscript] = ACTIONS(797),
    [sym_subscript] = ACTIONS(797),
    [sym_active_char] = ACTIONS(797),
    [sym_comment_char] = ACTIONS(797),
    [sym_text] = ACTIONS(799),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(6),
  [15] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [19] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [21] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_opt, 1),
  [23] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_opt, 1),
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(62),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_mode, 1),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(68),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(69),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(107),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(108),
  [81] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(131),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(135),
  [85] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 1),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage, 1),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage, 1),
  [97] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(146),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(150),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(152),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [109] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [111] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_begin_token, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_documentclass_token, 2),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_usepackage_token, 2),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_token, 2),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_section_token, 2),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage_token, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage_token, 2),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catcode_token, 2),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_token, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_token, 2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 2),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [137] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_mode, 1),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 2),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 2),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(171),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(177),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [197] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 2),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [205] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 1),
  [207] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_verbatim_environment, 2),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_verbatim_environment, 2),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(196),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(198),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(200),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 2),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 2),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(213),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(214),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(217),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin, 2),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin, 2),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 2),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 2),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 2),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 2),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include, 2),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_include, 2),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 2),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 2),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(234),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(235),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_opt, 1),
  [305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_opt, 1),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 2),
  [309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 2),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [313] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [316] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [319] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [322] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [325] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [328] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [331] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [334] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(238),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(239),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 2),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 2),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(242),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(244),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 2),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 2),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 2),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [371] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [374] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(59),
  [377] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(60),
  [380] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [382] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(62),
  [385] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [388] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(8),
  [391] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(62),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_end_token, 2),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(248),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 3),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 3),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(250),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(252),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(255),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(256),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(257),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(258),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(259),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(260),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(261),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(262),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(263),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [436] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_verbatim_environment, 3),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_verbatim_environment, 3),
  [440] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2),
  [442] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2), SHIFT_REPEAT(108),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end, 2),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end, 2),
  [461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 3),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 3),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(284),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(291),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 3),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 3),
  [517] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 3),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 3),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 3),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [529] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 3),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 3),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 4),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 4),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(299),
  [539] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 4),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(300),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 3),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 3),
  [555] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 3),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 3),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(319),
  [597] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_verbatim_environment, 4),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_verbatim_environment, 4),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(321),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [611] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align, 4),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align, 4),
  [615] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align_star, 4),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align_star, 4),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray, 4),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray, 4),
  [623] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation, 4),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation, 4),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation_star, 4),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation_star, 4),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign, 4),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign, 4),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign_star, 4),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign_star, 4),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather, 4),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather, 4),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather_star, 4),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather_star, 4),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline, 4),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline, 4),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline_star, 4),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline_star, 4),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split, 4),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split, 4),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split_star, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split_star, 4),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_math, 4),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_math, 4),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_verbatim, 4),
  [673] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_Verbatim, 4),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [677] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_BVerbatim, 4),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_LVerbatim, 4),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catcode, 4),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 4),
  [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
  [693] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 5),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 5),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align, 4),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align, 4),
  [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align_star, 4),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align_star, 4),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat, 4),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat, 4),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat_star, 4),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat_star, 4),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray, 4),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray, 4),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray_star, 4),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray_star, 4),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation, 4),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation, 4),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation_star, 4),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation_star, 4),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign, 4),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign, 4),
  [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign_star, 4),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign_star, 4),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather, 4),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather, 4),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather_star, 4),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather_star, 4),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline, 4),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline, 4),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline_star, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline_star, 4),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split, 4),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split, 4),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split_star, 4),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split_star, 4),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_math, 4),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_math, 4),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_verbatim, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_verbatim, 4),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_Verbatim, 4),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_Verbatim, 4),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_Verbatim_star, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_Verbatim_star, 4),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_BVerbatim, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_BVerbatim, 4),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_LVerbatim, 4),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_LVerbatim, 4),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat, 5),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat, 5),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat_star, 5),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat_star, 5),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_latex() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
