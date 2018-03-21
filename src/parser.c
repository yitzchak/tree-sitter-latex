#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 5
#define STATE_COUNT 351
#define SYMBOL_COUNT 148
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
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
  anon_sym_lstlisting = 29,
  anon_sym_minted = 30,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 31,
  anon_sym_begin = 32,
  anon_sym_end = 33,
  anon_sym_documentclass = 34,
  anon_sym_usepackage = 35,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 36,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 37,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 38,
  anon_sym_EQ = 39,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 40,
  sym_escape = 41,
  sym_begin_group = 42,
  sym_end_group = 43,
  sym_math_shift = 44,
  sym_alignment_tab = 45,
  sym_parameter_char = 46,
  sym_superscript = 47,
  sym_subscript = 48,
  sym_name = 49,
  sym_active_char = 50,
  sym_comment_char = 51,
  sym_text = 52,
  sym_number = 53,
  sym_verbatim_token = 54,
  sym_magic = 55,
  sym_comment_text = 56,
  sym_program = 57,
  sym_text_mode = 58,
  sym_math_mode = 59,
  sym_parameter = 60,
  sym_text_environment = 61,
  sym_math_environment = 62,
  sym_display_math = 63,
  sym_inline_math = 64,
  sym_begin_align = 65,
  sym_end_align = 66,
  sym_begin_align_star = 67,
  sym_end_align_star = 68,
  sym_begin_alignat = 69,
  sym_end_alignat = 70,
  sym_begin_alignat_star = 71,
  sym_end_alignat_star = 72,
  sym_begin_eqnarray = 73,
  sym_end_eqnarray = 74,
  sym_begin_eqnarray_star = 75,
  sym_end_eqnarray_star = 76,
  sym_begin_equation = 77,
  sym_end_equation = 78,
  sym_begin_equation_star = 79,
  sym_end_equation_star = 80,
  sym_begin_flalign = 81,
  sym_end_flalign = 82,
  sym_begin_flalign_star = 83,
  sym_end_flalign_star = 84,
  sym_begin_gather = 85,
  sym_end_gather = 86,
  sym_begin_gather_star = 87,
  sym_end_gather_star = 88,
  sym_begin_multline = 89,
  sym_end_multline = 90,
  sym_begin_multline_star = 91,
  sym_end_multline_star = 92,
  sym_begin_split = 93,
  sym_end_split = 94,
  sym_begin_split_star = 95,
  sym_end_split_star = 96,
  sym_begin_math = 97,
  sym_end_math = 98,
  sym_begin_verbatim = 99,
  sym_end_verbatim = 100,
  sym_begin_Verbatim = 101,
  sym_end_Verbatim = 102,
  sym_begin_Verbatim_star = 103,
  sym_end_Verbatim_star = 104,
  sym_begin_BVerbatim = 105,
  sym_end_BVerbatim = 106,
  sym_begin_BVerbatim_star = 107,
  sym_end_BVerbatim_star = 108,
  sym_begin_LVerbatim = 109,
  sym_end_LVerbatim = 110,
  sym_begin_LVerbatim_star = 111,
  sym_end_LVerbatim_star = 112,
  sym_begin_lstlisting = 113,
  sym_end_lstlisting = 114,
  sym_begin_minted = 115,
  sym_end_minted = 116,
  sym_verbatim_environment = 117,
  sym_escaped = 118,
  sym_command = 119,
  sym_begin = 120,
  sym_begin_token = 121,
  sym_end = 122,
  sym_end_token = 123,
  sym_documentclass = 124,
  sym_documentclass_token = 125,
  sym_usepackage = 126,
  sym_usepackage_token = 127,
  sym_include = 128,
  sym_include_token = 129,
  sym_section = 130,
  sym_section_token = 131,
  sym_storage = 132,
  sym_storage_token = 133,
  sym_catcode = 134,
  sym_catcode_token = 135,
  sym_text_group = 136,
  sym_simple_text_group = 137,
  sym_opt_text_group = 138,
  sym_math_group = 139,
  sym_opt_math_group = 140,
  sym_token = 141,
  sym_comment = 142,
  sym_begin_opt = 143,
  sym_end_opt = 144,
  aux_sym_program_repeat1 = 145,
  aux_sym_math_environment_repeat1 = 146,
  aux_sym_verbatim_environment_repeat1 = 147,
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
  [anon_sym_lstlisting] = "lstlisting",
  [anon_sym_minted] = "minted",
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
  [sym_begin_lstlisting] = "begin_lstlisting",
  [sym_end_lstlisting] = "end_lstlisting",
  [sym_begin_minted] = "begin_minted",
  [sym_end_minted] = "end_minted",
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
  [sym_simple_text_group] = "simple_text_group",
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
  [anon_sym_lstlisting] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minted] = {
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
  [sym_begin_lstlisting] = {
    .visible = true,
    .named = true,
  },
  [sym_end_lstlisting] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_minted] = {
    .visible = true,
    .named = true,
  },
  [sym_end_minted] = {
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
  [sym_simple_text_group] = {
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
      if (lookahead == 'l')
        ADVANCE(209);
      if (lookahead == 'm')
        ADVANCE(219);
      if (lookahead == 's')
        ADVANCE(231);
      if (lookahead == 'v')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
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
      if (lookahead == 's')
        ADVANCE(210);
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(213);
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
      if (lookahead == 's')
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
      if (lookahead == 'i')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
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
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(220);
      if (lookahead == 'u')
        ADVANCE(223);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(221);
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(anon_sym_math);
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
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(227);
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
      if (lookahead == 'n')
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
      if (lookahead == 'e')
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
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
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
      ACCEPT_TOKEN(anon_sym_multline_STAR);
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
      if (lookahead == 'p')
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
      if (lookahead == 'l')
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
      if (lookahead == 'i')
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
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(235);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(236);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 245:
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
      if (lookahead == 'l')
        ADVANCE(209);
      if (lookahead == 'm')
        ADVANCE(219);
      if (lookahead == 's')
        ADVANCE(231);
      if (lookahead == 'v')
        ADVANCE(237);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(17);
      END_STATE();
    case 246:
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
    case 247:
      if (lookahead == '=')
        ADVANCE(248);
      if (lookahead == 'B')
        ADVANCE(249);
      if (lookahead == 'L')
        ADVANCE(259);
      if (lookahead == 'V')
        ADVANCE(269);
      if (lookahead == 'a')
        ADVANCE(278);
      if (lookahead == 'e')
        ADVANCE(287);
      if (lookahead == 'f')
        ADVANCE(303);
      if (lookahead == 'g')
        ADVANCE(311);
      if (lookahead == 'l')
        ADVANCE(318);
      if (lookahead == 'm')
        ADVANCE(328);
      if (lookahead == 's')
        ADVANCE(345);
      if (lookahead == 'v')
        ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ);
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
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      END_STATE();
    case 259:
      if (lookahead == 'V')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'r')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'b')
        ADVANCE(263);
      END_STATE();
    case 263:
      if (lookahead == 'a')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 't')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'i')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'm')
        ADVANCE(267);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      END_STATE();
    case 269:
      if (lookahead == 'e')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'r')
        ADVANCE(271);
      END_STATE();
    case 271:
      if (lookahead == 'b')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'a')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 't')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'i')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'm')
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      END_STATE();
    case 278:
      if (lookahead == 'l')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'i')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'g')
        ADVANCE(281);
      END_STATE();
    case 281:
      if (lookahead == 'n')
        ADVANCE(282);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(283);
      if (lookahead == 'a')
        ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      END_STATE();
    case 284:
      if (lookahead == 't')
        ADVANCE(285);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      END_STATE();
    case 287:
      if (lookahead == 'q')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == 'n')
        ADVANCE(289);
      if (lookahead == 'u')
        ADVANCE(296);
      END_STATE();
    case 289:
      if (lookahead == 'a')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == 'r')
        ADVANCE(291);
      END_STATE();
    case 291:
      if (lookahead == 'r')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'a')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'y')
        ADVANCE(294);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 296:
      if (lookahead == 'a')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 't')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'i')
        ADVANCE(299);
      END_STATE();
    case 299:
      if (lookahead == 'o')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 'n')
        ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 303:
      if (lookahead == 'l')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'a')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'l')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'i')
        ADVANCE(307);
      END_STATE();
    case 307:
      if (lookahead == 'g')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'n')
        ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 311:
      if (lookahead == 'a')
        ADVANCE(312);
      END_STATE();
    case 312:
      if (lookahead == 't')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 'h')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'e')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'r')
        ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(317);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      END_STATE();
    case 318:
      if (lookahead == 's')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 't')
        ADVANCE(320);
      END_STATE();
    case 320:
      if (lookahead == 'l')
        ADVANCE(321);
      END_STATE();
    case 321:
      if (lookahead == 'i')
        ADVANCE(322);
      END_STATE();
    case 322:
      if (lookahead == 's')
        ADVANCE(323);
      END_STATE();
    case 323:
      if (lookahead == 't')
        ADVANCE(324);
      END_STATE();
    case 324:
      if (lookahead == 'i')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'n')
        ADVANCE(326);
      END_STATE();
    case 326:
      if (lookahead == 'g')
        ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      END_STATE();
    case 328:
      if (lookahead == 'a')
        ADVANCE(329);
      if (lookahead == 'i')
        ADVANCE(332);
      if (lookahead == 'u')
        ADVANCE(337);
      END_STATE();
    case 329:
      if (lookahead == 't')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'h')
        ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 332:
      if (lookahead == 'n')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 't')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'e')
        ADVANCE(335);
      END_STATE();
    case 335:
      if (lookahead == 'd')
        ADVANCE(336);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_minted);
      END_STATE();
    case 337:
      if (lookahead == 'l')
        ADVANCE(338);
      END_STATE();
    case 338:
      if (lookahead == 't')
        ADVANCE(339);
      END_STATE();
    case 339:
      if (lookahead == 'l')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'i')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'n')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'e')
        ADVANCE(343);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(344);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      END_STATE();
    case 345:
      if (lookahead == 'p')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'l')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'i')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 't')
        ADVANCE(349);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(350);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    case 351:
      if (lookahead == 'e')
        ADVANCE(352);
      END_STATE();
    case 352:
      if (lookahead == 'r')
        ADVANCE(353);
      END_STATE();
    case 353:
      if (lookahead == 'b')
        ADVANCE(354);
      END_STATE();
    case 354:
      if (lookahead == 'a')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 't')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'i')
        ADVANCE(357);
      END_STATE();
    case 357:
      if (lookahead == 'm')
        ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 359:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == '[')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(9);
      if (lookahead == '{')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
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
  [35] = {.lex_state = 134},
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
  [59] = {.lex_state = 4},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 18},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 135},
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
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 135},
  [110] = {.lex_state = 133},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 133},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 133},
  [116] = {.lex_state = 4},
  [117] = {.lex_state = 133},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 133},
  [120] = {.lex_state = 133},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 133},
  [123] = {.lex_state = 133},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 133},
  [126] = {.lex_state = 133},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 133},
  [129] = {.lex_state = 133},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 133},
  [132] = {.lex_state = 133},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 133},
  [135] = {.lex_state = 133},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 133},
  [138] = {.lex_state = 135},
  [139] = {.lex_state = 4},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 4},
  [142] = {.lex_state = 139},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 4},
  [149] = {.lex_state = 4},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 246},
  [153] = {.lex_state = 247},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 4},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 18},
  [159] = {.lex_state = 4},
  [160] = {.lex_state = 18},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 4},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 247},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 4},
  [178] = {.lex_state = 247},
  [179] = {.lex_state = 247},
  [180] = {.lex_state = 247},
  [181] = {.lex_state = 247},
  [182] = {.lex_state = 247},
  [183] = {.lex_state = 247},
  [184] = {.lex_state = 247},
  [185] = {.lex_state = 247},
  [186] = {.lex_state = 247},
  [187] = {.lex_state = 247},
  [188] = {.lex_state = 247},
  [189] = {.lex_state = 247},
  [190] = {.lex_state = 247},
  [191] = {.lex_state = 247},
  [192] = {.lex_state = 247},
  [193] = {.lex_state = 247},
  [194] = {.lex_state = 247},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 133},
  [197] = {.lex_state = 247},
  [198] = {.lex_state = 133},
  [199] = {.lex_state = 133},
  [200] = {.lex_state = 133},
  [201] = {.lex_state = 4},
  [202] = {.lex_state = 247},
  [203] = {.lex_state = 133},
  [204] = {.lex_state = 247},
  [205] = {.lex_state = 133},
  [206] = {.lex_state = 247},
  [207] = {.lex_state = 133},
  [208] = {.lex_state = 247},
  [209] = {.lex_state = 133},
  [210] = {.lex_state = 247},
  [211] = {.lex_state = 133},
  [212] = {.lex_state = 247},
  [213] = {.lex_state = 133},
  [214] = {.lex_state = 133},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 133},
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
  [234] = {.lex_state = 4},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 4},
  [237] = {.lex_state = 4},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 4},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 247},
  [251] = {.lex_state = 119},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 18},
  [256] = {.lex_state = 4},
  [257] = {.lex_state = 18},
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
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 4},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 4},
  [284] = {.lex_state = 133},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 4},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 4},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 133},
  [292] = {.lex_state = 247},
  [293] = {.lex_state = 4},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 4},
  [297] = {.lex_state = 4},
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
  [310] = {.lex_state = 133},
  [311] = {.lex_state = 134},
  [312] = {.lex_state = 134},
  [313] = {.lex_state = 134},
  [314] = {.lex_state = 134},
  [315] = {.lex_state = 134},
  [316] = {.lex_state = 134},
  [317] = {.lex_state = 359},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 4},
  [320] = {.lex_state = 4},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 4},
  [323] = {.lex_state = 4},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 4},
  [326] = {.lex_state = 4},
  [327] = {.lex_state = 4},
  [328] = {.lex_state = 4},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 4},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 4},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 4},
  [336] = {.lex_state = 4},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 4},
  [339] = {.lex_state = 4},
  [340] = {.lex_state = 4},
  [341] = {.lex_state = 4},
  [342] = {.lex_state = 4},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 4},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 4},
  [347] = {.lex_state = 4},
  [348] = {.lex_state = 4},
  [349] = {.lex_state = 4},
  [350] = {.lex_state = 4},
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(47),
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(60),
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
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(69),
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
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_align] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [12] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_align_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [13] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_alignat] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [14] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_alignat_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [15] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_eqnarray] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(82),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [16] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_eqnarray_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(84),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [17] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_equation] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(86),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [18] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_equation_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [19] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_flalign] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(90),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [20] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_flalign_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(92),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [21] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_gather] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(94),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [22] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_gather_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(96),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [23] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_multline] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [24] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_multline_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(100),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [25] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_split] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [26] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_split_star] = STATE(73),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(104),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(105),
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
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_math] = STATE(106),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(107),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(108),
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
    [sym_end_verbatim] = STATE(111),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(113),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [29] = {
    [sym_end_Verbatim] = STATE(111),
    [sym_end_token] = STATE(114),
    [sym_opt_text_group] = STATE(115),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [30] = {
    [sym_end_Verbatim_star] = STATE(111),
    [sym_end_token] = STATE(118),
    [sym_opt_text_group] = STATE(119),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [31] = {
    [sym_end_BVerbatim] = STATE(111),
    [sym_end_token] = STATE(121),
    [sym_opt_text_group] = STATE(122),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [32] = {
    [sym_end_BVerbatim_star] = STATE(111),
    [sym_end_token] = STATE(124),
    [sym_opt_text_group] = STATE(125),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [33] = {
    [sym_end_LVerbatim] = STATE(111),
    [sym_end_token] = STATE(127),
    [sym_opt_text_group] = STATE(128),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [34] = {
    [sym_end_LVerbatim_star] = STATE(111),
    [sym_end_token] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [35] = {
    [sym_end_lstlisting] = STATE(111),
    [sym_end_token] = STATE(133),
    [sym_opt_text_group] = STATE(134),
    [sym_begin_opt] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(135),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [36] = {
    [sym_text_group] = STATE(137),
    [sym_begin_group] = ACTIONS(81),
  },
  [37] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_end] = STATE(139),
    [sym_end_token] = STATE(140),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(83),
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
  [38] = {
    [sym_simple_text_group] = STATE(143),
    [sym_begin_group] = ACTIONS(85),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_escape] = ACTIONS(87),
    [sym_begin_group] = ACTIONS(87),
    [sym_end_group] = ACTIONS(87),
    [sym_math_shift] = ACTIONS(87),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(87),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [sym_comment_char] = ACTIONS(87),
    [sym_text] = ACTIONS(89),
  },
  [40] = {
    [sym_simple_text_group] = STATE(145),
    [sym_opt_text_group] = STATE(146),
    [sym_begin_opt] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
  },
  [41] = {
    [sym_simple_text_group] = STATE(147),
    [sym_opt_text_group] = STATE(148),
    [sym_begin_opt] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(93),
  },
  [42] = {
    [sym_text_group] = STATE(149),
    [sym_begin_group] = ACTIONS(95),
  },
  [43] = {
    [sym_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(151),
    [sym_begin_opt] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(91),
    [sym_begin_group] = ACTIONS(95),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [sym_escape] = ACTIONS(97),
    [sym_begin_group] = ACTIONS(97),
    [sym_end_group] = ACTIONS(97),
    [sym_math_shift] = ACTIONS(97),
    [sym_alignment_tab] = ACTIONS(97),
    [sym_parameter_char] = ACTIONS(97),
    [sym_superscript] = ACTIONS(97),
    [sym_subscript] = ACTIONS(97),
    [sym_active_char] = ACTIONS(97),
    [sym_comment_char] = ACTIONS(97),
    [sym_text] = ACTIONS(99),
  },
  [45] = {
    [sym_escaped] = STATE(153),
    [sym_escape] = ACTIONS(101),
  },
  [46] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [sym_end_opt] = STATE(155),
    [aux_sym_program_repeat1] = STATE(156),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(103),
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
  [47] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(105),
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
  [48] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(107),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [49] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(111),
    [sym_end_group] = ACTIONS(111),
    [sym_math_shift] = ACTIONS(111),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(111),
    [sym_superscript] = ACTIONS(111),
    [sym_subscript] = ACTIONS(111),
    [sym_active_char] = ACTIONS(111),
    [sym_comment_char] = ACTIONS(111),
    [sym_text] = ACTIONS(113),
  },
  [51] = {
    [sym_begin_group] = ACTIONS(115),
  },
  [52] = {
    [anon_sym_LBRACK] = ACTIONS(117),
    [sym_begin_group] = ACTIONS(117),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
  },
  [54] = {
    [sym_begin_group] = ACTIONS(121),
  },
  [55] = {
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(123),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [sym_escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(125),
    [sym_end_group] = ACTIONS(125),
    [sym_math_shift] = ACTIONS(125),
    [sym_alignment_tab] = ACTIONS(125),
    [sym_parameter_char] = ACTIONS(125),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(125),
    [sym_active_char] = ACTIONS(125),
    [sym_comment_char] = ACTIONS(125),
    [sym_text] = ACTIONS(127),
  },
  [57] = {
    [sym_escape] = ACTIONS(129),
  },
  [58] = {
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
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [sym_escape] = ACTIONS(135),
    [sym_begin_group] = ACTIONS(135),
    [sym_end_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(135),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(135),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(135),
    [sym_active_char] = ACTIONS(135),
    [sym_comment_char] = ACTIONS(135),
    [sym_text] = ACTIONS(137),
  },
  [60] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(139),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [61] = {
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
  [62] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_end_group] = ACTIONS(141),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [63] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [64] = {
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
  [65] = {
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [sym_escape] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_end_group] = ACTIONS(149),
    [sym_math_shift] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_active_char] = ACTIONS(149),
    [sym_comment_char] = ACTIONS(149),
    [sym_text] = ACTIONS(151),
  },
  [66] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end] = STATE(168),
    [sym_end_token] = STATE(140),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
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
  [67] = {
    [sym_simple_text_group] = STATE(143),
    [sym_begin_group] = ACTIONS(93),
  },
  [68] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [sym_end_opt] = STATE(170),
    [aux_sym_math_environment_repeat1] = STATE(171),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(103),
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
  [69] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [70] = {
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
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(159),
    [anon_sym_RBRACK] = ACTIONS(159),
    [sym_escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_end_group] = ACTIONS(159),
    [sym_math_shift] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_comment_char] = ACTIONS(159),
    [sym_text] = ACTIONS(161),
  },
  [72] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(163),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym_escape] = ACTIONS(165),
    [sym_begin_group] = ACTIONS(165),
    [sym_end_group] = ACTIONS(165),
    [sym_math_shift] = ACTIONS(165),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(165),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(165),
    [sym_text] = ACTIONS(167),
  },
  [74] = {
    [sym_begin_group] = ACTIONS(169),
  },
  [75] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_align] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(171),
  },
  [77] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_align_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(173),
  },
  [79] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_alignat] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(175),
  },
  [81] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_alignat_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(177),
  },
  [83] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_eqnarray] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(82),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(179),
  },
  [85] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_eqnarray_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(84),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(181),
  },
  [87] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_equation] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(86),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(183),
  },
  [89] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_equation_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(185),
  },
  [91] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_flalign] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(90),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(187),
  },
  [93] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_flalign_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(92),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(189),
  },
  [95] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_gather] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(94),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(191),
  },
  [97] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_gather_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(96),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(193),
  },
  [99] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_multline] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(195),
  },
  [101] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_multline_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(100),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(197),
  },
  [103] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_split] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
    [sym_begin_group] = ACTIONS(199),
  },
  [105] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_split_star] = STATE(176),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(104),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_escape] = ACTIONS(201),
    [sym_begin_group] = ACTIONS(201),
    [sym_end_group] = ACTIONS(201),
    [sym_math_shift] = ACTIONS(201),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(201),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(201),
    [sym_active_char] = ACTIONS(201),
    [sym_comment_char] = ACTIONS(201),
    [sym_text] = ACTIONS(203),
  },
  [107] = {
    [sym_begin_group] = ACTIONS(205),
  },
  [108] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_end_math] = STATE(172),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end_token] = STATE(107),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
  [109] = {
    [anon_sym_end] = ACTIONS(207),
  },
  [110] = {
    [sym_escape] = ACTIONS(209),
    [sym_verbatim_token] = ACTIONS(209),
  },
  [111] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(211),
    [anon_sym_RBRACK] = ACTIONS(211),
    [sym_escape] = ACTIONS(211),
    [sym_begin_group] = ACTIONS(211),
    [sym_end_group] = ACTIONS(211),
    [sym_math_shift] = ACTIONS(211),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(211),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(211),
    [sym_active_char] = ACTIONS(211),
    [sym_comment_char] = ACTIONS(211),
    [sym_text] = ACTIONS(213),
  },
  [112] = {
    [sym_begin_group] = ACTIONS(215),
  },
  [113] = {
    [sym_end_verbatim] = STATE(195),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [114] = {
    [sym_begin_group] = ACTIONS(217),
  },
  [115] = {
    [sym_end_Verbatim] = STATE(195),
    [sym_end_token] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(198),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [116] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [sym_end_opt] = STATE(200),
    [aux_sym_program_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(219),
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
  [117] = {
    [sym_end_Verbatim] = STATE(195),
    [sym_end_token] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [118] = {
    [sym_begin_group] = ACTIONS(221),
  },
  [119] = {
    [sym_end_Verbatim_star] = STATE(195),
    [sym_end_token] = STATE(118),
    [aux_sym_verbatim_environment_repeat1] = STATE(203),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [120] = {
    [sym_end_Verbatim_star] = STATE(195),
    [sym_end_token] = STATE(118),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [121] = {
    [sym_begin_group] = ACTIONS(223),
  },
  [122] = {
    [sym_end_BVerbatim] = STATE(195),
    [sym_end_token] = STATE(121),
    [aux_sym_verbatim_environment_repeat1] = STATE(205),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [123] = {
    [sym_end_BVerbatim] = STATE(195),
    [sym_end_token] = STATE(121),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [124] = {
    [sym_begin_group] = ACTIONS(225),
  },
  [125] = {
    [sym_end_BVerbatim_star] = STATE(195),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_environment_repeat1] = STATE(207),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [126] = {
    [sym_end_BVerbatim_star] = STATE(195),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [127] = {
    [sym_begin_group] = ACTIONS(227),
  },
  [128] = {
    [sym_end_LVerbatim] = STATE(195),
    [sym_end_token] = STATE(127),
    [aux_sym_verbatim_environment_repeat1] = STATE(209),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [129] = {
    [sym_end_LVerbatim] = STATE(195),
    [sym_end_token] = STATE(127),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [130] = {
    [sym_begin_group] = ACTIONS(229),
  },
  [131] = {
    [sym_end_LVerbatim_star] = STATE(195),
    [sym_end_token] = STATE(130),
    [aux_sym_verbatim_environment_repeat1] = STATE(211),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [132] = {
    [sym_end_LVerbatim_star] = STATE(195),
    [sym_end_token] = STATE(130),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [133] = {
    [sym_begin_group] = ACTIONS(231),
  },
  [134] = {
    [sym_end_lstlisting] = STATE(195),
    [sym_end_token] = STATE(133),
    [aux_sym_verbatim_environment_repeat1] = STATE(213),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [135] = {
    [sym_end_lstlisting] = STATE(195),
    [sym_end_token] = STATE(133),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [136] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(215),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(233),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [137] = {
    [sym_end_minted] = STATE(195),
    [sym_end_token] = STATE(216),
    [aux_sym_verbatim_environment_repeat1] = STATE(217),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(29),
    [anon_sym_begin] = ACTIONS(31),
    [anon_sym_end] = ACTIONS(163),
    [anon_sym_documentclass] = ACTIONS(33),
    [anon_sym_usepackage] = ACTIONS(35),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(37),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(39),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(41),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(43),
    [sym_name] = ACTIONS(45),
  },
  [139] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym_escape] = ACTIONS(235),
    [sym_begin_group] = ACTIONS(235),
    [sym_end_group] = ACTIONS(235),
    [sym_math_shift] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(235),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_comment_char] = ACTIONS(235),
    [sym_text] = ACTIONS(237),
  },
  [140] = {
    [sym_simple_text_group] = STATE(218),
    [sym_begin_group] = ACTIONS(93),
  },
  [141] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_end] = STATE(219),
    [sym_end_token] = STATE(140),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(83),
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
  [142] = {
    [anon_sym_align] = ACTIONS(239),
    [anon_sym_align_STAR] = ACTIONS(241),
    [anon_sym_alignat] = ACTIONS(243),
    [anon_sym_alignat_STAR] = ACTIONS(245),
    [anon_sym_eqnarray] = ACTIONS(247),
    [anon_sym_eqnarray_STAR] = ACTIONS(249),
    [anon_sym_equation] = ACTIONS(251),
    [anon_sym_equation_STAR] = ACTIONS(253),
    [anon_sym_flalign] = ACTIONS(255),
    [anon_sym_flalign_STAR] = ACTIONS(257),
    [anon_sym_gather] = ACTIONS(259),
    [anon_sym_gather_STAR] = ACTIONS(261),
    [anon_sym_multline] = ACTIONS(263),
    [anon_sym_multline_STAR] = ACTIONS(265),
    [anon_sym_split] = ACTIONS(267),
    [anon_sym_split_STAR] = ACTIONS(269),
    [anon_sym_math] = ACTIONS(271),
    [anon_sym_verbatim] = ACTIONS(273),
    [anon_sym_Verbatim] = ACTIONS(275),
    [anon_sym_Verbatim_STAR] = ACTIONS(277),
    [anon_sym_BVerbatim] = ACTIONS(279),
    [anon_sym_BVerbatim_STAR] = ACTIONS(281),
    [anon_sym_LVerbatim] = ACTIONS(283),
    [anon_sym_LVerbatim_STAR] = ACTIONS(285),
    [anon_sym_lstlisting] = ACTIONS(287),
    [sym_text] = ACTIONS(289),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_escape] = ACTIONS(291),
    [sym_begin_group] = ACTIONS(291),
    [sym_math_shift] = ACTIONS(291),
    [sym_alignment_tab] = ACTIONS(291),
    [sym_parameter_char] = ACTIONS(291),
    [sym_superscript] = ACTIONS(291),
    [sym_subscript] = ACTIONS(291),
    [sym_active_char] = ACTIONS(291),
    [sym_comment_char] = ACTIONS(291),
    [sym_text] = ACTIONS(293),
  },
  [144] = {
    [sym_text] = ACTIONS(295),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [sym_escape] = ACTIONS(297),
    [sym_begin_group] = ACTIONS(297),
    [sym_end_group] = ACTIONS(297),
    [sym_math_shift] = ACTIONS(297),
    [sym_alignment_tab] = ACTIONS(297),
    [sym_parameter_char] = ACTIONS(297),
    [sym_superscript] = ACTIONS(297),
    [sym_subscript] = ACTIONS(297),
    [sym_active_char] = ACTIONS(297),
    [sym_comment_char] = ACTIONS(297),
    [sym_text] = ACTIONS(299),
  },
  [146] = {
    [sym_simple_text_group] = STATE(247),
    [sym_begin_group] = ACTIONS(93),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [sym_escape] = ACTIONS(301),
    [sym_begin_group] = ACTIONS(301),
    [sym_end_group] = ACTIONS(301),
    [sym_math_shift] = ACTIONS(301),
    [sym_alignment_tab] = ACTIONS(301),
    [sym_parameter_char] = ACTIONS(301),
    [sym_superscript] = ACTIONS(301),
    [sym_subscript] = ACTIONS(301),
    [sym_active_char] = ACTIONS(301),
    [sym_comment_char] = ACTIONS(301),
    [sym_text] = ACTIONS(303),
  },
  [148] = {
    [sym_simple_text_group] = STATE(248),
    [sym_begin_group] = ACTIONS(93),
  },
  [149] = {
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [sym_escape] = ACTIONS(305),
    [sym_begin_group] = ACTIONS(305),
    [sym_end_group] = ACTIONS(305),
    [sym_math_shift] = ACTIONS(305),
    [sym_alignment_tab] = ACTIONS(305),
    [sym_parameter_char] = ACTIONS(305),
    [sym_superscript] = ACTIONS(305),
    [sym_subscript] = ACTIONS(305),
    [sym_active_char] = ACTIONS(305),
    [sym_comment_char] = ACTIONS(305),
    [sym_text] = ACTIONS(307),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(309),
    [anon_sym_LBRACK] = ACTIONS(309),
    [anon_sym_RBRACK] = ACTIONS(309),
    [sym_escape] = ACTIONS(309),
    [sym_begin_group] = ACTIONS(309),
    [sym_end_group] = ACTIONS(309),
    [sym_math_shift] = ACTIONS(309),
    [sym_alignment_tab] = ACTIONS(309),
    [sym_parameter_char] = ACTIONS(309),
    [sym_superscript] = ACTIONS(309),
    [sym_subscript] = ACTIONS(309),
    [sym_active_char] = ACTIONS(309),
    [sym_comment_char] = ACTIONS(309),
    [sym_text] = ACTIONS(311),
  },
  [151] = {
    [sym_text_group] = STATE(249),
    [sym_begin_group] = ACTIONS(95),
  },
  [152] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(313),
  },
  [153] = {
    [anon_sym_EQ] = ACTIONS(315),
  },
  [154] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [sym_escape] = ACTIONS(317),
    [sym_begin_group] = ACTIONS(317),
    [sym_end_group] = ACTIONS(317),
    [sym_math_shift] = ACTIONS(317),
    [sym_alignment_tab] = ACTIONS(317),
    [sym_parameter_char] = ACTIONS(317),
    [sym_superscript] = ACTIONS(317),
    [sym_subscript] = ACTIONS(317),
    [sym_active_char] = ACTIONS(317),
    [sym_comment_char] = ACTIONS(317),
    [sym_text] = ACTIONS(319),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [sym_escape] = ACTIONS(321),
    [sym_begin_group] = ACTIONS(321),
    [sym_end_group] = ACTIONS(321),
    [sym_math_shift] = ACTIONS(321),
    [sym_alignment_tab] = ACTIONS(321),
    [sym_parameter_char] = ACTIONS(321),
    [sym_superscript] = ACTIONS(321),
    [sym_subscript] = ACTIONS(321),
    [sym_active_char] = ACTIONS(321),
    [sym_comment_char] = ACTIONS(321),
    [sym_text] = ACTIONS(323),
  },
  [156] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [sym_end_opt] = STATE(252),
    [aux_sym_program_repeat1] = STATE(253),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(103),
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
  [157] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(157),
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym_escape] = ACTIONS(330),
    [sym_begin_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(336),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(342),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(348),
  },
  [158] = {
    [anon_sym_RBRACK] = ACTIONS(351),
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
  [159] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(353),
    [sym_begin_group] = ACTIONS(51),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [160] = {
    [anon_sym_RPAREN] = ACTIONS(355),
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
  [161] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(357),
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
    [ts_builtin_sym_end] = ACTIONS(359),
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
  [163] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym_escape] = ACTIONS(330),
    [sym_begin_group] = ACTIONS(333),
    [sym_end_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(336),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(342),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(348),
  },
  [164] = {
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
  [165] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_end_group] = ACTIONS(367),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [166] = {
    [sym_math_shift] = ACTIONS(369),
  },
  [167] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(49),
    [sym_begin_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(371),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(55),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(57),
  },
  [168] = {
    [anon_sym_LBRACK] = ACTIONS(373),
    [anon_sym_RBRACK] = ACTIONS(373),
    [sym_escape] = ACTIONS(373),
    [sym_begin_group] = ACTIONS(373),
    [sym_end_group] = ACTIONS(373),
    [sym_math_shift] = ACTIONS(373),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(373),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_comment_char] = ACTIONS(373),
    [sym_text] = ACTIONS(375),
  },
  [169] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_end] = STATE(261),
    [sym_end_token] = STATE(140),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
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
  [170] = {
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [sym_escape] = ACTIONS(377),
    [sym_begin_group] = ACTIONS(377),
    [sym_end_group] = ACTIONS(377),
    [sym_math_shift] = ACTIONS(377),
    [sym_alignment_tab] = ACTIONS(377),
    [sym_parameter_char] = ACTIONS(377),
    [sym_superscript] = ACTIONS(377),
    [sym_subscript] = ACTIONS(377),
    [sym_active_char] = ACTIONS(377),
    [sym_comment_char] = ACTIONS(377),
    [sym_text] = ACTIONS(379),
  },
  [171] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [sym_end_opt] = STATE(262),
    [aux_sym_math_environment_repeat1] = STATE(263),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(103),
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
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym_escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_comment_char] = ACTIONS(381),
    [sym_text] = ACTIONS(383),
  },
  [173] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(385),
    [sym_escape] = ACTIONS(388),
    [sym_begin_group] = ACTIONS(391),
    [sym_math_shift] = ACTIONS(394),
    [sym_alignment_tab] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_comment_char] = ACTIONS(402),
    [sym_text] = ACTIONS(405),
  },
  [174] = {
    [sym_begin_group] = ACTIONS(408),
  },
  [175] = {
    [anon_sym_align] = ACTIONS(410),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_RBRACK] = ACTIONS(412),
    [sym_escape] = ACTIONS(412),
    [sym_begin_group] = ACTIONS(412),
    [sym_end_group] = ACTIONS(412),
    [sym_math_shift] = ACTIONS(412),
    [sym_alignment_tab] = ACTIONS(412),
    [sym_parameter_char] = ACTIONS(412),
    [sym_superscript] = ACTIONS(412),
    [sym_subscript] = ACTIONS(412),
    [sym_active_char] = ACTIONS(412),
    [sym_comment_char] = ACTIONS(412),
    [sym_text] = ACTIONS(414),
  },
  [177] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(177),
    [anon_sym_LBRACK] = ACTIONS(385),
    [sym_escape] = ACTIONS(388),
    [sym_begin_group] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_comment_char] = ACTIONS(402),
    [sym_text] = ACTIONS(405),
  },
  [178] = {
    [anon_sym_align_STAR] = ACTIONS(416),
  },
  [179] = {
    [anon_sym_alignat] = ACTIONS(418),
  },
  [180] = {
    [anon_sym_alignat_STAR] = ACTIONS(420),
  },
  [181] = {
    [anon_sym_eqnarray] = ACTIONS(422),
  },
  [182] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(424),
  },
  [183] = {
    [anon_sym_equation] = ACTIONS(426),
  },
  [184] = {
    [anon_sym_equation_STAR] = ACTIONS(428),
  },
  [185] = {
    [anon_sym_flalign] = ACTIONS(430),
  },
  [186] = {
    [anon_sym_flalign_STAR] = ACTIONS(432),
  },
  [187] = {
    [anon_sym_gather] = ACTIONS(434),
  },
  [188] = {
    [anon_sym_gather_STAR] = ACTIONS(436),
  },
  [189] = {
    [anon_sym_multline] = ACTIONS(438),
  },
  [190] = {
    [anon_sym_multline_STAR] = ACTIONS(440),
  },
  [191] = {
    [anon_sym_split] = ACTIONS(442),
  },
  [192] = {
    [anon_sym_split_STAR] = ACTIONS(444),
  },
  [193] = {
    [anon_sym_math] = ACTIONS(446),
  },
  [194] = {
    [anon_sym_verbatim] = ACTIONS(448),
  },
  [195] = {
    [ts_builtin_sym_end] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [sym_escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(450),
    [sym_end_group] = ACTIONS(450),
    [sym_math_shift] = ACTIONS(450),
    [sym_alignment_tab] = ACTIONS(450),
    [sym_parameter_char] = ACTIONS(450),
    [sym_superscript] = ACTIONS(450),
    [sym_subscript] = ACTIONS(450),
    [sym_active_char] = ACTIONS(450),
    [sym_comment_char] = ACTIONS(450),
    [sym_text] = ACTIONS(452),
  },
  [196] = {
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(454),
    [sym_verbatim_token] = ACTIONS(456),
  },
  [197] = {
    [anon_sym_Verbatim] = ACTIONS(459),
  },
  [198] = {
    [sym_end_Verbatim] = STATE(283),
    [sym_end_token] = STATE(114),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [199] = {
    [sym_escape] = ACTIONS(317),
    [sym_verbatim_token] = ACTIONS(317),
  },
  [200] = {
    [sym_escape] = ACTIONS(321),
    [sym_verbatim_token] = ACTIONS(321),
  },
  [201] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [sym_end_opt] = STATE(284),
    [aux_sym_program_repeat1] = STATE(253),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(219),
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
  [202] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(461),
  },
  [203] = {
    [sym_end_Verbatim_star] = STATE(283),
    [sym_end_token] = STATE(118),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [204] = {
    [anon_sym_BVerbatim] = ACTIONS(463),
  },
  [205] = {
    [sym_end_BVerbatim] = STATE(283),
    [sym_end_token] = STATE(121),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [206] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(465),
  },
  [207] = {
    [sym_end_BVerbatim_star] = STATE(283),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [208] = {
    [anon_sym_LVerbatim] = ACTIONS(467),
  },
  [209] = {
    [sym_end_LVerbatim] = STATE(283),
    [sym_end_token] = STATE(127),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [210] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(469),
  },
  [211] = {
    [sym_end_LVerbatim_star] = STATE(283),
    [sym_end_token] = STATE(130),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [212] = {
    [anon_sym_lstlisting] = ACTIONS(471),
  },
  [213] = {
    [sym_end_lstlisting] = STATE(283),
    [sym_end_token] = STATE(133),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [214] = {
    [sym_escape] = ACTIONS(135),
    [sym_verbatim_token] = ACTIONS(135),
  },
  [215] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(5),
    [sym_escape] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(9),
    [sym_end_group] = ACTIONS(473),
    [sym_math_shift] = ACTIONS(11),
    [sym_alignment_tab] = ACTIONS(13),
    [sym_parameter_char] = ACTIONS(15),
    [sym_superscript] = ACTIONS(13),
    [sym_subscript] = ACTIONS(13),
    [sym_active_char] = ACTIONS(13),
    [sym_comment_char] = ACTIONS(17),
    [sym_text] = ACTIONS(19),
  },
  [216] = {
    [sym_begin_group] = ACTIONS(475),
  },
  [217] = {
    [sym_end_minted] = STATE(283),
    [sym_end_token] = STATE(216),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(77),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [218] = {
    [ts_builtin_sym_end] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym_escape] = ACTIONS(477),
    [sym_begin_group] = ACTIONS(477),
    [sym_end_group] = ACTIONS(477),
    [sym_math_shift] = ACTIONS(477),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(477),
    [sym_superscript] = ACTIONS(477),
    [sym_subscript] = ACTIONS(477),
    [sym_active_char] = ACTIONS(477),
    [sym_comment_char] = ACTIONS(477),
    [sym_text] = ACTIONS(479),
  },
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(481),
    [anon_sym_LBRACK] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(481),
    [sym_escape] = ACTIONS(481),
    [sym_begin_group] = ACTIONS(481),
    [sym_end_group] = ACTIONS(481),
    [sym_math_shift] = ACTIONS(481),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(481),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_comment_char] = ACTIONS(481),
    [sym_text] = ACTIONS(483),
  },
  [220] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(220),
    [anon_sym_LBRACK] = ACTIONS(327),
    [sym_escape] = ACTIONS(330),
    [sym_begin_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(336),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(342),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(348),
  },
  [221] = {
    [sym_end_group] = ACTIONS(485),
  },
  [222] = {
    [sym_end_group] = ACTIONS(487),
  },
  [223] = {
    [sym_end_group] = ACTIONS(489),
  },
  [224] = {
    [sym_end_group] = ACTIONS(491),
  },
  [225] = {
    [sym_end_group] = ACTIONS(493),
  },
  [226] = {
    [sym_end_group] = ACTIONS(495),
  },
  [227] = {
    [sym_end_group] = ACTIONS(497),
  },
  [228] = {
    [sym_end_group] = ACTIONS(499),
  },
  [229] = {
    [sym_end_group] = ACTIONS(501),
  },
  [230] = {
    [sym_end_group] = ACTIONS(503),
  },
  [231] = {
    [sym_end_group] = ACTIONS(505),
  },
  [232] = {
    [sym_end_group] = ACTIONS(507),
  },
  [233] = {
    [sym_end_group] = ACTIONS(509),
  },
  [234] = {
    [sym_end_group] = ACTIONS(511),
  },
  [235] = {
    [sym_end_group] = ACTIONS(513),
  },
  [236] = {
    [sym_end_group] = ACTIONS(515),
  },
  [237] = {
    [sym_end_group] = ACTIONS(517),
  },
  [238] = {
    [sym_end_group] = ACTIONS(519),
  },
  [239] = {
    [sym_end_group] = ACTIONS(521),
  },
  [240] = {
    [sym_end_group] = ACTIONS(523),
  },
  [241] = {
    [sym_end_group] = ACTIONS(525),
  },
  [242] = {
    [sym_end_group] = ACTIONS(527),
  },
  [243] = {
    [sym_end_group] = ACTIONS(529),
  },
  [244] = {
    [sym_end_group] = ACTIONS(531),
  },
  [245] = {
    [sym_end_group] = ACTIONS(533),
  },
  [246] = {
    [sym_end_group] = ACTIONS(535),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(537),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [sym_escape] = ACTIONS(537),
    [sym_begin_group] = ACTIONS(537),
    [sym_end_group] = ACTIONS(537),
    [sym_math_shift] = ACTIONS(537),
    [sym_alignment_tab] = ACTIONS(537),
    [sym_parameter_char] = ACTIONS(537),
    [sym_superscript] = ACTIONS(537),
    [sym_subscript] = ACTIONS(537),
    [sym_active_char] = ACTIONS(537),
    [sym_comment_char] = ACTIONS(537),
    [sym_text] = ACTIONS(539),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [anon_sym_RBRACK] = ACTIONS(541),
    [sym_escape] = ACTIONS(541),
    [sym_begin_group] = ACTIONS(541),
    [sym_end_group] = ACTIONS(541),
    [sym_math_shift] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(541),
    [sym_parameter_char] = ACTIONS(541),
    [sym_superscript] = ACTIONS(541),
    [sym_subscript] = ACTIONS(541),
    [sym_active_char] = ACTIONS(541),
    [sym_comment_char] = ACTIONS(541),
    [sym_text] = ACTIONS(543),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(545),
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
  [250] = {
    [anon_sym_EQ] = ACTIONS(549),
  },
  [251] = {
    [sym_number] = ACTIONS(551),
  },
  [252] = {
    [ts_builtin_sym_end] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(553),
    [anon_sym_RBRACK] = ACTIONS(553),
    [sym_escape] = ACTIONS(553),
    [sym_begin_group] = ACTIONS(553),
    [sym_end_group] = ACTIONS(553),
    [sym_math_shift] = ACTIONS(553),
    [sym_alignment_tab] = ACTIONS(553),
    [sym_parameter_char] = ACTIONS(553),
    [sym_superscript] = ACTIONS(553),
    [sym_subscript] = ACTIONS(553),
    [sym_active_char] = ACTIONS(553),
    [sym_comment_char] = ACTIONS(553),
    [sym_text] = ACTIONS(555),
  },
  [253] = {
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
    [sym_begin_lstlisting] = STATE(35),
    [sym_begin_minted] = STATE(36),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(37),
    [sym_begin_token] = STATE(38),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(46),
    [aux_sym_program_repeat1] = STATE(253),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_escape] = ACTIONS(330),
    [sym_begin_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(336),
    [sym_alignment_tab] = ACTIONS(339),
    [sym_parameter_char] = ACTIONS(342),
    [sym_superscript] = ACTIONS(339),
    [sym_subscript] = ACTIONS(339),
    [sym_active_char] = ACTIONS(339),
    [sym_comment_char] = ACTIONS(345),
    [sym_text] = ACTIONS(348),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [sym_escape] = ACTIONS(557),
    [sym_begin_group] = ACTIONS(557),
    [sym_end_group] = ACTIONS(557),
    [sym_math_shift] = ACTIONS(557),
    [sym_alignment_tab] = ACTIONS(557),
    [sym_parameter_char] = ACTIONS(557),
    [sym_superscript] = ACTIONS(557),
    [sym_subscript] = ACTIONS(557),
    [sym_active_char] = ACTIONS(557),
    [sym_comment_char] = ACTIONS(557),
    [sym_text] = ACTIONS(559),
  },
  [255] = {
    [anon_sym_RBRACK] = ACTIONS(561),
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
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(563),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [sym_escape] = ACTIONS(563),
    [sym_begin_group] = ACTIONS(563),
    [sym_end_group] = ACTIONS(563),
    [sym_math_shift] = ACTIONS(563),
    [sym_alignment_tab] = ACTIONS(563),
    [sym_parameter_char] = ACTIONS(563),
    [sym_superscript] = ACTIONS(563),
    [sym_subscript] = ACTIONS(563),
    [sym_active_char] = ACTIONS(563),
    [sym_comment_char] = ACTIONS(563),
    [sym_text] = ACTIONS(565),
  },
  [257] = {
    [anon_sym_RPAREN] = ACTIONS(567),
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
  [258] = {
    [anon_sym_LBRACK] = ACTIONS(569),
    [anon_sym_RBRACK] = ACTIONS(569),
    [sym_escape] = ACTIONS(569),
    [sym_begin_group] = ACTIONS(569),
    [sym_end_group] = ACTIONS(569),
    [sym_math_shift] = ACTIONS(569),
    [sym_alignment_tab] = ACTIONS(569),
    [sym_parameter_char] = ACTIONS(569),
    [sym_superscript] = ACTIONS(569),
    [sym_subscript] = ACTIONS(569),
    [sym_active_char] = ACTIONS(569),
    [sym_comment_char] = ACTIONS(569),
    [sym_text] = ACTIONS(571),
  },
  [259] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(259),
    [anon_sym_LBRACK] = ACTIONS(385),
    [sym_escape] = ACTIONS(388),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(394),
    [sym_alignment_tab] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_comment_char] = ACTIONS(402),
    [sym_text] = ACTIONS(405),
  },
  [260] = {
    [sym_math_shift] = ACTIONS(573),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [sym_escape] = ACTIONS(575),
    [sym_begin_group] = ACTIONS(575),
    [sym_end_group] = ACTIONS(575),
    [sym_math_shift] = ACTIONS(575),
    [sym_alignment_tab] = ACTIONS(575),
    [sym_parameter_char] = ACTIONS(575),
    [sym_superscript] = ACTIONS(575),
    [sym_subscript] = ACTIONS(575),
    [sym_active_char] = ACTIONS(575),
    [sym_comment_char] = ACTIONS(575),
    [sym_text] = ACTIONS(577),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_RBRACK] = ACTIONS(579),
    [sym_escape] = ACTIONS(579),
    [sym_begin_group] = ACTIONS(579),
    [sym_end_group] = ACTIONS(579),
    [sym_math_shift] = ACTIONS(579),
    [sym_alignment_tab] = ACTIONS(579),
    [sym_parameter_char] = ACTIONS(579),
    [sym_superscript] = ACTIONS(579),
    [sym_subscript] = ACTIONS(579),
    [sym_active_char] = ACTIONS(579),
    [sym_comment_char] = ACTIONS(579),
    [sym_text] = ACTIONS(581),
  },
  [263] = {
    [sym_math_mode] = STATE(65),
    [sym_parameter] = STATE(64),
    [sym_math_environment] = STATE(64),
    [sym_escaped] = STATE(64),
    [sym_command] = STATE(64),
    [sym_begin] = STATE(66),
    [sym_begin_token] = STATE(67),
    [sym_documentclass] = STATE(39),
    [sym_documentclass_token] = STATE(40),
    [sym_usepackage] = STATE(39),
    [sym_usepackage_token] = STATE(41),
    [sym_include] = STATE(39),
    [sym_include_token] = STATE(42),
    [sym_section] = STATE(39),
    [sym_section_token] = STATE(43),
    [sym_storage] = STATE(39),
    [sym_storage_token] = STATE(44),
    [sym_catcode] = STATE(39),
    [sym_catcode_token] = STATE(45),
    [sym_math_group] = STATE(64),
    [sym_opt_math_group] = STATE(64),
    [sym_token] = STATE(39),
    [sym_comment] = STATE(64),
    [sym_begin_opt] = STATE(68),
    [aux_sym_math_environment_repeat1] = STATE(263),
    [anon_sym_LBRACK] = ACTIONS(385),
    [anon_sym_RBRACK] = ACTIONS(394),
    [sym_escape] = ACTIONS(388),
    [sym_begin_group] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(396),
    [sym_parameter_char] = ACTIONS(399),
    [sym_superscript] = ACTIONS(396),
    [sym_subscript] = ACTIONS(396),
    [sym_active_char] = ACTIONS(396),
    [sym_comment_char] = ACTIONS(402),
    [sym_text] = ACTIONS(405),
  },
  [264] = {
    [sym_end_group] = ACTIONS(583),
  },
  [265] = {
    [sym_end_group] = ACTIONS(585),
  },
  [266] = {
    [sym_end_group] = ACTIONS(587),
  },
  [267] = {
    [sym_end_group] = ACTIONS(589),
  },
  [268] = {
    [sym_end_group] = ACTIONS(591),
  },
  [269] = {
    [sym_end_group] = ACTIONS(593),
  },
  [270] = {
    [sym_end_group] = ACTIONS(595),
  },
  [271] = {
    [sym_end_group] = ACTIONS(597),
  },
  [272] = {
    [sym_end_group] = ACTIONS(599),
  },
  [273] = {
    [sym_end_group] = ACTIONS(601),
  },
  [274] = {
    [sym_end_group] = ACTIONS(603),
  },
  [275] = {
    [sym_end_group] = ACTIONS(605),
  },
  [276] = {
    [sym_end_group] = ACTIONS(607),
  },
  [277] = {
    [sym_end_group] = ACTIONS(609),
  },
  [278] = {
    [sym_end_group] = ACTIONS(611),
  },
  [279] = {
    [sym_end_group] = ACTIONS(613),
  },
  [280] = {
    [sym_end_group] = ACTIONS(615),
  },
  [281] = {
    [sym_end_group] = ACTIONS(617),
  },
  [282] = {
    [sym_end_group] = ACTIONS(619),
  },
  [283] = {
    [ts_builtin_sym_end] = ACTIONS(621),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [sym_escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_end_group] = ACTIONS(621),
    [sym_math_shift] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_comment_char] = ACTIONS(621),
    [sym_text] = ACTIONS(623),
  },
  [284] = {
    [sym_escape] = ACTIONS(553),
    [sym_verbatim_token] = ACTIONS(553),
  },
  [285] = {
    [sym_end_group] = ACTIONS(625),
  },
  [286] = {
    [sym_end_group] = ACTIONS(627),
  },
  [287] = {
    [sym_end_group] = ACTIONS(629),
  },
  [288] = {
    [sym_end_group] = ACTIONS(631),
  },
  [289] = {
    [sym_end_group] = ACTIONS(633),
  },
  [290] = {
    [sym_end_group] = ACTIONS(635),
  },
  [291] = {
    [sym_escape] = ACTIONS(359),
    [sym_verbatim_token] = ACTIONS(359),
  },
  [292] = {
    [anon_sym_minted] = ACTIONS(637),
  },
  [293] = {
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
  [294] = {
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
  [295] = {
    [sym_opt_text_group] = STATE(348),
    [sym_begin_opt] = STATE(46),
    [anon_sym_LBRACK] = ACTIONS(91),
  },
  [296] = {
    [sym_text_group] = STATE(349),
    [sym_begin_group] = ACTIONS(95),
  },
  [297] = {
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
  [298] = {
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
  [299] = {
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
  [300] = {
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
  [301] = {
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
  [302] = {
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
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(671),
    [sym_escape] = ACTIONS(671),
    [sym_begin_group] = ACTIONS(671),
    [sym_alignment_tab] = ACTIONS(671),
    [sym_parameter_char] = ACTIONS(671),
    [sym_superscript] = ACTIONS(671),
    [sym_subscript] = ACTIONS(671),
    [sym_active_char] = ACTIONS(671),
    [sym_comment_char] = ACTIONS(671),
    [sym_text] = ACTIONS(673),
  },
  [304] = {
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_escape] = ACTIONS(675),
    [sym_begin_group] = ACTIONS(675),
    [sym_alignment_tab] = ACTIONS(675),
    [sym_parameter_char] = ACTIONS(675),
    [sym_superscript] = ACTIONS(675),
    [sym_subscript] = ACTIONS(675),
    [sym_active_char] = ACTIONS(675),
    [sym_comment_char] = ACTIONS(675),
    [sym_text] = ACTIONS(677),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(679),
    [sym_escape] = ACTIONS(679),
    [sym_begin_group] = ACTIONS(679),
    [sym_alignment_tab] = ACTIONS(679),
    [sym_parameter_char] = ACTIONS(679),
    [sym_superscript] = ACTIONS(679),
    [sym_subscript] = ACTIONS(679),
    [sym_active_char] = ACTIONS(679),
    [sym_comment_char] = ACTIONS(679),
    [sym_text] = ACTIONS(681),
  },
  [306] = {
    [anon_sym_LBRACK] = ACTIONS(683),
    [sym_escape] = ACTIONS(683),
    [sym_begin_group] = ACTIONS(683),
    [sym_alignment_tab] = ACTIONS(683),
    [sym_parameter_char] = ACTIONS(683),
    [sym_superscript] = ACTIONS(683),
    [sym_subscript] = ACTIONS(683),
    [sym_active_char] = ACTIONS(683),
    [sym_comment_char] = ACTIONS(683),
    [sym_text] = ACTIONS(685),
  },
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(687),
    [sym_escape] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_active_char] = ACTIONS(687),
    [sym_comment_char] = ACTIONS(687),
    [sym_text] = ACTIONS(689),
  },
  [308] = {
    [anon_sym_LBRACK] = ACTIONS(691),
    [sym_escape] = ACTIONS(691),
    [sym_begin_group] = ACTIONS(691),
    [sym_alignment_tab] = ACTIONS(691),
    [sym_parameter_char] = ACTIONS(691),
    [sym_superscript] = ACTIONS(691),
    [sym_subscript] = ACTIONS(691),
    [sym_active_char] = ACTIONS(691),
    [sym_comment_char] = ACTIONS(691),
    [sym_text] = ACTIONS(693),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(695),
    [sym_escape] = ACTIONS(695),
    [sym_begin_group] = ACTIONS(695),
    [sym_alignment_tab] = ACTIONS(695),
    [sym_parameter_char] = ACTIONS(695),
    [sym_superscript] = ACTIONS(695),
    [sym_subscript] = ACTIONS(695),
    [sym_active_char] = ACTIONS(695),
    [sym_comment_char] = ACTIONS(695),
    [sym_text] = ACTIONS(697),
  },
  [310] = {
    [sym_escape] = ACTIONS(699),
    [sym_verbatim_token] = ACTIONS(699),
  },
  [311] = {
    [anon_sym_LBRACK] = ACTIONS(701),
    [sym_escape] = ACTIONS(701),
    [sym_verbatim_token] = ACTIONS(701),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(703),
    [sym_escape] = ACTIONS(703),
    [sym_verbatim_token] = ACTIONS(703),
  },
  [313] = {
    [anon_sym_LBRACK] = ACTIONS(705),
    [sym_escape] = ACTIONS(705),
    [sym_verbatim_token] = ACTIONS(705),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(707),
    [sym_escape] = ACTIONS(707),
    [sym_verbatim_token] = ACTIONS(707),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_escape] = ACTIONS(709),
    [sym_verbatim_token] = ACTIONS(709),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(711),
    [sym_escape] = ACTIONS(711),
    [sym_verbatim_token] = ACTIONS(711),
  },
  [317] = {
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_escape] = ACTIONS(713),
    [sym_begin_group] = ACTIONS(715),
    [sym_verbatim_token] = ACTIONS(713),
  },
  [318] = {
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
  [319] = {
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
  [320] = {
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
  [321] = {
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
  [322] = {
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
  [323] = {
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
  [324] = {
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
  [325] = {
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
  [326] = {
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
  [327] = {
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
  [328] = {
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
  [329] = {
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
  [330] = {
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
  [331] = {
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
  [332] = {
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
  [333] = {
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
  [334] = {
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
  [335] = {
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
  [336] = {
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
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(793),
    [anon_sym_LBRACK] = ACTIONS(793),
    [anon_sym_RBRACK] = ACTIONS(793),
    [sym_escape] = ACTIONS(793),
    [sym_begin_group] = ACTIONS(793),
    [sym_end_group] = ACTIONS(793),
    [sym_math_shift] = ACTIONS(793),
    [sym_alignment_tab] = ACTIONS(793),
    [sym_parameter_char] = ACTIONS(793),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(793),
    [sym_active_char] = ACTIONS(793),
    [sym_comment_char] = ACTIONS(793),
    [sym_text] = ACTIONS(795),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(797),
    [anon_sym_LBRACK] = ACTIONS(797),
    [anon_sym_RBRACK] = ACTIONS(797),
    [sym_escape] = ACTIONS(797),
    [sym_begin_group] = ACTIONS(797),
    [sym_end_group] = ACTIONS(797),
    [sym_math_shift] = ACTIONS(797),
    [sym_alignment_tab] = ACTIONS(797),
    [sym_parameter_char] = ACTIONS(797),
    [sym_superscript] = ACTIONS(797),
    [sym_subscript] = ACTIONS(797),
    [sym_active_char] = ACTIONS(797),
    [sym_comment_char] = ACTIONS(797),
    [sym_text] = ACTIONS(799),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(801),
    [anon_sym_LBRACK] = ACTIONS(801),
    [anon_sym_RBRACK] = ACTIONS(801),
    [sym_escape] = ACTIONS(801),
    [sym_begin_group] = ACTIONS(801),
    [sym_end_group] = ACTIONS(801),
    [sym_math_shift] = ACTIONS(801),
    [sym_alignment_tab] = ACTIONS(801),
    [sym_parameter_char] = ACTIONS(801),
    [sym_superscript] = ACTIONS(801),
    [sym_subscript] = ACTIONS(801),
    [sym_active_char] = ACTIONS(801),
    [sym_comment_char] = ACTIONS(801),
    [sym_text] = ACTIONS(803),
  },
  [340] = {
    [ts_builtin_sym_end] = ACTIONS(805),
    [anon_sym_LBRACK] = ACTIONS(805),
    [anon_sym_RBRACK] = ACTIONS(805),
    [sym_escape] = ACTIONS(805),
    [sym_begin_group] = ACTIONS(805),
    [sym_end_group] = ACTIONS(805),
    [sym_math_shift] = ACTIONS(805),
    [sym_alignment_tab] = ACTIONS(805),
    [sym_parameter_char] = ACTIONS(805),
    [sym_superscript] = ACTIONS(805),
    [sym_subscript] = ACTIONS(805),
    [sym_active_char] = ACTIONS(805),
    [sym_comment_char] = ACTIONS(805),
    [sym_text] = ACTIONS(807),
  },
  [341] = {
    [ts_builtin_sym_end] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(809),
    [anon_sym_RBRACK] = ACTIONS(809),
    [sym_escape] = ACTIONS(809),
    [sym_begin_group] = ACTIONS(809),
    [sym_end_group] = ACTIONS(809),
    [sym_math_shift] = ACTIONS(809),
    [sym_alignment_tab] = ACTIONS(809),
    [sym_parameter_char] = ACTIONS(809),
    [sym_superscript] = ACTIONS(809),
    [sym_subscript] = ACTIONS(809),
    [sym_active_char] = ACTIONS(809),
    [sym_comment_char] = ACTIONS(809),
    [sym_text] = ACTIONS(811),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(813),
    [anon_sym_LBRACK] = ACTIONS(813),
    [anon_sym_RBRACK] = ACTIONS(813),
    [sym_escape] = ACTIONS(813),
    [sym_begin_group] = ACTIONS(813),
    [sym_end_group] = ACTIONS(813),
    [sym_math_shift] = ACTIONS(813),
    [sym_alignment_tab] = ACTIONS(813),
    [sym_parameter_char] = ACTIONS(813),
    [sym_superscript] = ACTIONS(813),
    [sym_subscript] = ACTIONS(813),
    [sym_active_char] = ACTIONS(813),
    [sym_comment_char] = ACTIONS(813),
    [sym_text] = ACTIONS(815),
  },
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(817),
    [anon_sym_RBRACK] = ACTIONS(817),
    [sym_escape] = ACTIONS(817),
    [sym_begin_group] = ACTIONS(817),
    [sym_end_group] = ACTIONS(817),
    [sym_math_shift] = ACTIONS(817),
    [sym_alignment_tab] = ACTIONS(817),
    [sym_parameter_char] = ACTIONS(817),
    [sym_superscript] = ACTIONS(817),
    [sym_subscript] = ACTIONS(817),
    [sym_active_char] = ACTIONS(817),
    [sym_comment_char] = ACTIONS(817),
    [sym_text] = ACTIONS(819),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_RBRACK] = ACTIONS(821),
    [sym_escape] = ACTIONS(821),
    [sym_begin_group] = ACTIONS(821),
    [sym_end_group] = ACTIONS(821),
    [sym_math_shift] = ACTIONS(821),
    [sym_alignment_tab] = ACTIONS(821),
    [sym_parameter_char] = ACTIONS(821),
    [sym_superscript] = ACTIONS(821),
    [sym_subscript] = ACTIONS(821),
    [sym_active_char] = ACTIONS(821),
    [sym_comment_char] = ACTIONS(821),
    [sym_text] = ACTIONS(823),
  },
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(825),
    [anon_sym_RBRACK] = ACTIONS(825),
    [sym_escape] = ACTIONS(825),
    [sym_begin_group] = ACTIONS(825),
    [sym_end_group] = ACTIONS(825),
    [sym_math_shift] = ACTIONS(825),
    [sym_alignment_tab] = ACTIONS(825),
    [sym_parameter_char] = ACTIONS(825),
    [sym_superscript] = ACTIONS(825),
    [sym_subscript] = ACTIONS(825),
    [sym_active_char] = ACTIONS(825),
    [sym_comment_char] = ACTIONS(825),
    [sym_text] = ACTIONS(827),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(829),
    [anon_sym_LBRACK] = ACTIONS(829),
    [anon_sym_RBRACK] = ACTIONS(829),
    [sym_escape] = ACTIONS(829),
    [sym_begin_group] = ACTIONS(829),
    [sym_end_group] = ACTIONS(829),
    [sym_math_shift] = ACTIONS(829),
    [sym_alignment_tab] = ACTIONS(829),
    [sym_parameter_char] = ACTIONS(829),
    [sym_superscript] = ACTIONS(829),
    [sym_subscript] = ACTIONS(829),
    [sym_active_char] = ACTIONS(829),
    [sym_comment_char] = ACTIONS(829),
    [sym_text] = ACTIONS(831),
  },
  [347] = {
    [sym_end_group] = ACTIONS(833),
  },
  [348] = {
    [anon_sym_LBRACK] = ACTIONS(835),
    [sym_escape] = ACTIONS(835),
    [sym_begin_group] = ACTIONS(835),
    [sym_alignment_tab] = ACTIONS(835),
    [sym_parameter_char] = ACTIONS(835),
    [sym_superscript] = ACTIONS(835),
    [sym_subscript] = ACTIONS(835),
    [sym_active_char] = ACTIONS(835),
    [sym_comment_char] = ACTIONS(835),
    [sym_text] = ACTIONS(837),
  },
  [349] = {
    [anon_sym_LBRACK] = ACTIONS(839),
    [sym_escape] = ACTIONS(839),
    [sym_begin_group] = ACTIONS(839),
    [sym_alignment_tab] = ACTIONS(839),
    [sym_parameter_char] = ACTIONS(839),
    [sym_superscript] = ACTIONS(839),
    [sym_subscript] = ACTIONS(839),
    [sym_active_char] = ACTIONS(839),
    [sym_comment_char] = ACTIONS(839),
    [sym_text] = ACTIONS(841),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(843),
    [anon_sym_LBRACK] = ACTIONS(843),
    [anon_sym_RBRACK] = ACTIONS(843),
    [sym_escape] = ACTIONS(843),
    [sym_begin_group] = ACTIONS(843),
    [sym_end_group] = ACTIONS(843),
    [sym_math_shift] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(843),
    [sym_parameter_char] = ACTIONS(843),
    [sym_superscript] = ACTIONS(843),
    [sym_subscript] = ACTIONS(843),
    [sym_active_char] = ACTIONS(843),
    [sym_comment_char] = ACTIONS(843),
    [sym_text] = ACTIONS(845),
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
  [25] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(48),
  [27] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [29] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [37] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [39] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(55),
  [41] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(56),
  [43] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(57),
  [45] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [47] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(59),
  [49] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [51] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [53] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [55] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [57] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(64),
  [59] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_mode, 1),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_mode, 1),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(70),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(71),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [69] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [79] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(136),
  [83] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(138),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(142),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_command, 1),
  [89] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_command, 1),
  [91] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(2),
  [93] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [95] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage, 1),
  [99] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage, 1),
  [101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(152),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_escaped, 2),
  [115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_begin_token, 2),
  [117] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_documentclass_token, 2),
  [119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_usepackage_token, 2),
  [121] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_include_token, 2),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_section_token, 2),
  [125] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_storage_token, 2),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_storage_token, 2),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_catcode_token, 2),
  [131] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_token, 2),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_token, 2),
  [135] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 2),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 2),
  [139] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [141] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [145] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_mode, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_mode, 1),
  [149] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 1),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parameter, 2),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parameter, 2),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_comment, 2),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_comment, 2),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 2),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 2),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(180),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(186),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(187),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(189),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(191),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(192),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 2),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 2),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(193),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 1),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_verbatim_environment, 2),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_verbatim_environment, 2),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(194),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(197),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(204),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(206),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(212),
  [233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(214),
  [235] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 2),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(241),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(246),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin, 2),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin, 2),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 2),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 2),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 2),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_include, 2),
  [307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_include, 2),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 2),
  [311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 2),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(250),
  [315] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_opt, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_opt, 1),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 2),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 2),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [327] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [330] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(3),
  [333] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(4),
  [336] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(5),
  [339] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [342] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [345] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [348] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(6),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(254),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(255),
  [355] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(256),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(257),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_group, 3),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_group, 3),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 2),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(258),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(254),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(260),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 2),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 2),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 2),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 2),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 3),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 3),
  [385] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [388] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(61),
  [391] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(62),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [396] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(64),
  [399] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [402] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(8),
  [405] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(64),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_end_token, 2),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(264),
  [412] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 3),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 3),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(265),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(266),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(267),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(268),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(269),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(271),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(272),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(273),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(274),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(275),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(276),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(277),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(278),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(279),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(280),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(281),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_verbatim_environment, 3),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_verbatim_environment, 3),
  [454] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2),
  [456] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2), SHIFT_REPEAT(110),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(282),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(285),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(286),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(288),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(289),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(292),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end, 2),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end, 2),
  [481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_text_environment, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_text_environment, 3),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(293),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(294),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(295),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(296),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(297),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(298),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(299),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(300),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(301),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(302),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(303),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(304),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(305),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(306),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(307),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(308),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(309),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(310),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(311),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(312),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(313),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(314),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(315),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(316),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(317),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(318),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_documentclass, 3),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_documentclass, 3),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_usepackage, 3),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_usepackage, 3),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_section, 3),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_section, 3),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_escaped, 2),
  [551] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [553] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_text_group, 3),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_text_group, 3),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 4),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 4),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(320),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 4),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 4),
  [567] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(321),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_group, 3),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_group, 3),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(320),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_math_environment, 3),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_math_environment, 3),
  [579] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_opt_math_group, 3),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_opt_math_group, 3),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(322),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(323),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(324),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(325),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(326),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(327),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(328),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(329),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(330),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(331),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(332),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(333),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(334),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(335),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(336),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(337),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(338),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(339),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(340),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_verbatim_environment, 4),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_verbatim_environment, 4),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(341),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(342),
  [629] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(343),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(344),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(345),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(347),
  [639] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align, 4),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align, 4),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_align_star, 4),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_align_star, 4),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray, 4),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray, 4),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation, 4),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation, 4),
  [659] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_equation_star, 4),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_equation_star, 4),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign, 4),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign, 4),
  [667] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_flalign_star, 4),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_flalign_star, 4),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather, 4),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather, 4),
  [675] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_gather_star, 4),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_gather_star, 4),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline, 4),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline, 4),
  [683] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_multline_star, 4),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_multline_star, 4),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split, 4),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split, 4),
  [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_split_star, 4),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_split_star, 4),
  [695] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_math, 4),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_math, 4),
  [699] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_verbatim, 4),
  [701] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_Verbatim, 4),
  [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [705] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_BVerbatim, 4),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_LVerbatim, 4),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_lstlisting, 4),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_minted, 4),
  [717] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_text_group, 3),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_text_group, 3),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_catcode, 4),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_catcode, 4),
  [725] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_display_math, 5),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_display_math, 5),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_inline_math, 5),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inline_math, 5),
  [733] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align, 4),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align, 4),
  [737] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_align_star, 4),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_align_star, 4),
  [741] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat, 4),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat, 4),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_alignat_star, 4),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_alignat_star, 4),
  [749] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray, 4),
  [753] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_eqnarray_star, 4),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_eqnarray_star, 4),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation, 4),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation, 4),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_equation_star, 4),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_equation_star, 4),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign, 4),
  [769] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_flalign_star, 4),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_flalign_star, 4),
  [773] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather, 4),
  [777] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_gather_star, 4),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_gather_star, 4),
  [781] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline, 4),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline, 4),
  [785] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_multline_star, 4),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_multline_star, 4),
  [789] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split, 4),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split, 4),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_split_star, 4),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_split_star, 4),
  [797] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_math, 4),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_math, 4),
  [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_verbatim, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_verbatim, 4),
  [805] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_Verbatim, 4),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_Verbatim, 4),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_Verbatim_star, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_Verbatim_star, 4),
  [813] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_BVerbatim, 4),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_BVerbatim, 4),
  [817] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_LVerbatim, 4),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_LVerbatim, 4),
  [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_lstlisting, 4),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_lstlisting, 4),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(350),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat, 5),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat, 5),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_begin_alignat_star, 5),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_begin_alignat_star, 5),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_end_minted, 4),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_end_minted, 4),
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
