#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 353
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
  sym_document = 57,
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
  aux_sym_document_repeat1 = 145,
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
  [sym_document] = "document",
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
  [aux_sym_document_repeat1] = "document_repeat1",
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
  [sym_document] = {
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
  [aux_sym_document_repeat1] = {
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
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'L')
        ADVANCE(25);
      if (lookahead == 'V')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(47);
      if (lookahead == 'b')
        ADVANCE(65);
      if (lookahead == 'c')
        ADVANCE(70);
      if (lookahead == 'd')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'g')
        ADVANCE(122);
      if (lookahead == 'i')
        ADVANCE(128);
      if (lookahead == 'k')
        ADVANCE(137);
      if (lookahead == 'l')
        ADVANCE(139);
      if (lookahead == 'm')
        ADVANCE(149);
      if (lookahead == 'p')
        ADVANCE(166);
      if (lookahead == 's')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(193);
      if (lookahead == 'v')
        ADVANCE(203);
      if (lookahead == 'x')
        ADVANCE(211);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'T')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'X')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_parameter_char);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_math_shift);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_comment_char);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_alignment_tab);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'V')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'V')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_escape);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(48);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(50);
      if (lookahead == 'p')
        ADVANCE(54);
      if (lookahead == 's')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == 'a')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'h')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '`')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'f')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(99);
      if (lookahead == 'n')
        ADVANCE(100);
      if (lookahead == 'q')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == 'u')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_equation);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(123);
      if (lookahead == 'd')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_gather);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(150);
      if (lookahead == 'i')
        ADVANCE(153);
      if (lookahead == 'u')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_math);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_minted);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_multline);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(169);
      if (lookahead == 't')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'h')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(180);
      if (lookahead == 'u')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_split);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'u')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'k')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'b')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm')
        ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'd')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 215:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == 'B')
        ADVANCE(15);
      if (lookahead == 'L')
        ADVANCE(25);
      if (lookahead == 'V')
        ADVANCE(34);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(47);
      if (lookahead == 'b')
        ADVANCE(65);
      if (lookahead == 'c')
        ADVANCE(70);
      if (lookahead == 'd')
        ADVANCE(83);
      if (lookahead == 'e')
        ADVANCE(98);
      if (lookahead == 'f')
        ADVANCE(115);
      if (lookahead == 'g')
        ADVANCE(122);
      if (lookahead == 'i')
        ADVANCE(128);
      if (lookahead == 'k')
        ADVANCE(137);
      if (lookahead == 'l')
        ADVANCE(139);
      if (lookahead == 'm')
        ADVANCE(149);
      if (lookahead == 'p')
        ADVANCE(166);
      if (lookahead == 's')
        ADVANCE(174);
      if (lookahead == 'u')
        ADVANCE(193);
      if (lookahead == 'v')
        ADVANCE(203);
      if (lookahead == 'x')
        ADVANCE(211);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(216);
      END_STATE();
    case 217:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(218);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 220:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 222:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'b')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(227);
      if (lookahead == 'k')
        ADVANCE(228);
      if (lookahead == 'm')
        ADVANCE(229);
      if (lookahead == 'p')
        ADVANCE(232);
      if (lookahead == 's')
        ADVANCE(233);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(236);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'h')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n')
        ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'u')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 238:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(219);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 240:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '^')
        ADVANCE(45);
      if (lookahead == '_')
        ADVANCE(46);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '~')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(241);
      ADVANCE(219);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(216);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(244);
      if (lookahead == '!')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(244);
      if (lookahead == '!')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(249);
      if (lookahead != 0)
        ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(244);
      if (lookahead == '!')
        ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 253:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        ADVANCE(255);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(255);
      if (lookahead != 0)
        ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_verbatim_token);
      END_STATE();
    case 256:
      if (lookahead == '\n')
        ADVANCE(255);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(255);
      if (lookahead != 0)
        ADVANCE(255);
      END_STATE();
    case 257:
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '}')
        ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(257);
      END_STATE();
    case 258:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'b')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'e')
        ADVANCE(259);
      if (lookahead == 'i')
        ADVANCE(227);
      if (lookahead == 'k')
        ADVANCE(228);
      if (lookahead == 'm')
        ADVANCE(229);
      if (lookahead == 'p')
        ADVANCE(232);
      if (lookahead == 's')
        ADVANCE(233);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(236);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(99);
      if (lookahead == 'n')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 260:
      if (lookahead == 'e')
        ADVANCE(261);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      END_STATE();
    case 261:
      if (lookahead == 'n')
        ADVANCE(262);
      END_STATE();
    case 262:
      if (lookahead == 'd')
        ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 264:
      if (lookahead == 'B')
        ADVANCE(265);
      if (lookahead == 'L')
        ADVANCE(275);
      if (lookahead == 'V')
        ADVANCE(285);
      if (lookahead == 'a')
        ADVANCE(294);
      if (lookahead == 'e')
        ADVANCE(303);
      if (lookahead == 'f')
        ADVANCE(319);
      if (lookahead == 'g')
        ADVANCE(327);
      if (lookahead == 'l')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'v')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(266);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(267);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(270);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(280);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(290);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(296);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(299);
      if (lookahead == 'a')
        ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(304);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(305);
      if (lookahead == 'u')
        ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(308);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(310);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(324);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(332);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(345);
      if (lookahead == 'u')
        ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(349);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(350);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(361);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(367);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B')
        ADVANCE(265);
      if (lookahead == 'L')
        ADVANCE(275);
      if (lookahead == 'V')
        ADVANCE(285);
      if (lookahead == 'a')
        ADVANCE(294);
      if (lookahead == 'e')
        ADVANCE(303);
      if (lookahead == 'f')
        ADVANCE(319);
      if (lookahead == 'g')
        ADVANCE(327);
      if (lookahead == 'l')
        ADVANCE(334);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 's')
        ADVANCE(356);
      if (lookahead == 'v')
        ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
      END_STATE();
    case 371:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(236);
      END_STATE();
    case 372:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(372);
      END_STATE();
    case 373:
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'b')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(227);
      if (lookahead == 'k')
        ADVANCE(228);
      if (lookahead == 'm')
        ADVANCE(229);
      if (lookahead == 'p')
        ADVANCE(232);
      if (lookahead == 's')
        ADVANCE(233);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '['))
        ADVANCE(236);
      END_STATE();
    case 374:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == 'a')
        ADVANCE(223);
      if (lookahead == 'b')
        ADVANCE(224);
      if (lookahead == 'c')
        ADVANCE(225);
      if (lookahead == 'd')
        ADVANCE(226);
      if (lookahead == 'i')
        ADVANCE(227);
      if (lookahead == 'k')
        ADVANCE(228);
      if (lookahead == 'm')
        ADVANCE(229);
      if (lookahead == 'p')
        ADVANCE(232);
      if (lookahead == 's')
        ADVANCE(233);
      if (lookahead == 'u')
        ADVANCE(234);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(236);
      END_STATE();
    case 375:
      if (lookahead == 'B')
        ADVANCE(376);
      if (lookahead == 'L')
        ADVANCE(386);
      if (lookahead == 'V')
        ADVANCE(396);
      if (lookahead == 'a')
        ADVANCE(405);
      if (lookahead == 'e')
        ADVANCE(414);
      if (lookahead == 'f')
        ADVANCE(430);
      if (lookahead == 'g')
        ADVANCE(438);
      if (lookahead == 'l')
        ADVANCE(445);
      if (lookahead == 'm')
        ADVANCE(455);
      if (lookahead == 's')
        ADVANCE(467);
      if (lookahead == 'v')
        ADVANCE(473);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(375);
      END_STATE();
    case 376:
      if (lookahead == 'V')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'e')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'r')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'b')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'a')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 't')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'i')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'm')
        ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      END_STATE();
    case 386:
      if (lookahead == 'V')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'e')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'r')
        ADVANCE(389);
      END_STATE();
    case 389:
      if (lookahead == 'b')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'a')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 't')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'i')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'm')
        ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(395);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      END_STATE();
    case 396:
      if (lookahead == 'e')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'r')
        ADVANCE(398);
      END_STATE();
    case 398:
      if (lookahead == 'b')
        ADVANCE(399);
      END_STATE();
    case 399:
      if (lookahead == 'a')
        ADVANCE(400);
      END_STATE();
    case 400:
      if (lookahead == 't')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'i')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'm')
        ADVANCE(403);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      END_STATE();
    case 405:
      if (lookahead == 'l')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'i')
        ADVANCE(407);
      END_STATE();
    case 407:
      if (lookahead == 'g')
        ADVANCE(408);
      END_STATE();
    case 408:
      if (lookahead == 'n')
        ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(410);
      if (lookahead == 'a')
        ADVANCE(411);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      END_STATE();
    case 411:
      if (lookahead == 't')
        ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      END_STATE();
    case 414:
      if (lookahead == 'q')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 'n')
        ADVANCE(416);
      if (lookahead == 'u')
        ADVANCE(423);
      END_STATE();
    case 416:
      if (lookahead == 'a')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'r')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'r')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'a')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'y')
        ADVANCE(421);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 423:
      if (lookahead == 'a')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 't')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 'i')
        ADVANCE(426);
      END_STATE();
    case 426:
      if (lookahead == 'o')
        ADVANCE(427);
      END_STATE();
    case 427:
      if (lookahead == 'n')
        ADVANCE(428);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(429);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 430:
      if (lookahead == 'l')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'a')
        ADVANCE(432);
      END_STATE();
    case 432:
      if (lookahead == 'l')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'i')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'g')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'n')
        ADVANCE(436);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(437);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 438:
      if (lookahead == 'a')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 't')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'h')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'e')
        ADVANCE(442);
      END_STATE();
    case 442:
      if (lookahead == 'r')
        ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(444);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      END_STATE();
    case 445:
      if (lookahead == 's')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 't')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'l')
        ADVANCE(448);
      END_STATE();
    case 448:
      if (lookahead == 'i')
        ADVANCE(449);
      END_STATE();
    case 449:
      if (lookahead == 's')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 't')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'i')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'n')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 'g')
        ADVANCE(454);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      END_STATE();
    case 455:
      if (lookahead == 'a')
        ADVANCE(456);
      if (lookahead == 'u')
        ADVANCE(459);
      END_STATE();
    case 456:
      if (lookahead == 't')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'h')
        ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 459:
      if (lookahead == 'l')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 't')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'l')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'i')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 'n')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'e')
        ADVANCE(465);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      END_STATE();
    case 467:
      if (lookahead == 'p')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'l')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'i')
        ADVANCE(470);
      END_STATE();
    case 470:
      if (lookahead == 't')
        ADVANCE(471);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    case 473:
      if (lookahead == 'e')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 'r')
        ADVANCE(475);
      END_STATE();
    case 475:
      if (lookahead == 'b')
        ADVANCE(476);
      END_STATE();
    case 476:
      if (lookahead == 'a')
        ADVANCE(477);
      END_STATE();
    case 477:
      if (lookahead == 't')
        ADVANCE(478);
      END_STATE();
    case 478:
      if (lookahead == 'i')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 'm')
        ADVANCE(480);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 481:
      if (lookahead == 'm')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(481);
      END_STATE();
    case 482:
      if (lookahead == 'i')
        ADVANCE(483);
      END_STATE();
    case 483:
      if (lookahead == 'n')
        ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 't')
        ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'e')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'd')
        ADVANCE(487);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_minted);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(255);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(255);
      if (lookahead != 0)
        ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 217},
  [2] = {.lex_state = 220},
  [3] = {.lex_state = 222},
  [4] = {.lex_state = 238},
  [5] = {.lex_state = 217},
  [6] = {.lex_state = 240},
  [7] = {.lex_state = 242},
  [8] = {.lex_state = 243},
  [9] = {.lex_state = 253},
  [10] = {.lex_state = 217},
  [11] = {.lex_state = 217},
  [12] = {.lex_state = 217},
  [13] = {.lex_state = 217},
  [14] = {.lex_state = 217},
  [15] = {.lex_state = 217},
  [16] = {.lex_state = 217},
  [17] = {.lex_state = 217},
  [18] = {.lex_state = 217},
  [19] = {.lex_state = 217},
  [20] = {.lex_state = 217},
  [21] = {.lex_state = 217},
  [22] = {.lex_state = 217},
  [23] = {.lex_state = 217},
  [24] = {.lex_state = 217},
  [25] = {.lex_state = 217},
  [26] = {.lex_state = 217},
  [27] = {.lex_state = 254},
  [28] = {.lex_state = 256},
  [29] = {.lex_state = 256},
  [30] = {.lex_state = 256},
  [31] = {.lex_state = 256},
  [32] = {.lex_state = 256},
  [33] = {.lex_state = 256},
  [34] = {.lex_state = 256},
  [35] = {.lex_state = 257},
  [36] = {.lex_state = 217},
  [37] = {.lex_state = 257},
  [38] = {.lex_state = 240},
  [39] = {.lex_state = 257},
  [40] = {.lex_state = 257},
  [41] = {.lex_state = 257},
  [42] = {.lex_state = 257},
  [43] = {.lex_state = 240},
  [44] = {.lex_state = 257},
  [45] = {.lex_state = 220},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 217},
  [48] = {.lex_state = 217},
  [49] = {.lex_state = 240},
  [50] = {.lex_state = 257},
  [51] = {.lex_state = 257},
  [52] = {.lex_state = 257},
  [53] = {.lex_state = 257},
  [54] = {.lex_state = 257},
  [55] = {.lex_state = 240},
  [56] = {.lex_state = 257},
  [57] = {.lex_state = 240},
  [58] = {.lex_state = 240},
  [59] = {.lex_state = 238},
  [60] = {.lex_state = 222},
  [61] = {.lex_state = 238},
  [62] = {.lex_state = 217},
  [63] = {.lex_state = 240},
  [64] = {.lex_state = 217},
  [65] = {.lex_state = 257},
  [66] = {.lex_state = 220},
  [67] = {.lex_state = 217},
  [68] = {.lex_state = 240},
  [69] = {.lex_state = 240},
  [70] = {.lex_state = 258},
  [71] = {.lex_state = 240},
  [72] = {.lex_state = 257},
  [73] = {.lex_state = 217},
  [74] = {.lex_state = 257},
  [75] = {.lex_state = 217},
  [76] = {.lex_state = 257},
  [77] = {.lex_state = 217},
  [78] = {.lex_state = 257},
  [79] = {.lex_state = 217},
  [80] = {.lex_state = 257},
  [81] = {.lex_state = 217},
  [82] = {.lex_state = 257},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 257},
  [85] = {.lex_state = 217},
  [86] = {.lex_state = 257},
  [87] = {.lex_state = 217},
  [88] = {.lex_state = 257},
  [89] = {.lex_state = 217},
  [90] = {.lex_state = 257},
  [91] = {.lex_state = 217},
  [92] = {.lex_state = 257},
  [93] = {.lex_state = 217},
  [94] = {.lex_state = 257},
  [95] = {.lex_state = 217},
  [96] = {.lex_state = 257},
  [97] = {.lex_state = 217},
  [98] = {.lex_state = 257},
  [99] = {.lex_state = 217},
  [100] = {.lex_state = 257},
  [101] = {.lex_state = 217},
  [102] = {.lex_state = 257},
  [103] = {.lex_state = 217},
  [104] = {.lex_state = 240},
  [105] = {.lex_state = 257},
  [106] = {.lex_state = 217},
  [107] = {.lex_state = 260},
  [108] = {.lex_state = 240},
  [109] = {.lex_state = 257},
  [110] = {.lex_state = 254},
  [111] = {.lex_state = 257},
  [112] = {.lex_state = 254},
  [113] = {.lex_state = 220},
  [114] = {.lex_state = 254},
  [115] = {.lex_state = 257},
  [116] = {.lex_state = 254},
  [117] = {.lex_state = 254},
  [118] = {.lex_state = 257},
  [119] = {.lex_state = 254},
  [120] = {.lex_state = 254},
  [121] = {.lex_state = 257},
  [122] = {.lex_state = 254},
  [123] = {.lex_state = 254},
  [124] = {.lex_state = 257},
  [125] = {.lex_state = 254},
  [126] = {.lex_state = 254},
  [127] = {.lex_state = 257},
  [128] = {.lex_state = 254},
  [129] = {.lex_state = 254},
  [130] = {.lex_state = 257},
  [131] = {.lex_state = 254},
  [132] = {.lex_state = 254},
  [133] = {.lex_state = 238},
  [134] = {.lex_state = 254},
  [135] = {.lex_state = 258},
  [136] = {.lex_state = 240},
  [137] = {.lex_state = 257},
  [138] = {.lex_state = 217},
  [139] = {.lex_state = 264},
  [140] = {.lex_state = 217},
  [141] = {.lex_state = 217},
  [142] = {.lex_state = 240},
  [143] = {.lex_state = 257},
  [144] = {.lex_state = 220},
  [145] = {.lex_state = 240},
  [146] = {.lex_state = 257},
  [147] = {.lex_state = 240},
  [148] = {.lex_state = 240},
  [149] = {.lex_state = 257},
  [150] = {.lex_state = 371},
  [151] = {.lex_state = 372},
  [152] = {.lex_state = 240},
  [153] = {.lex_state = 240},
  [154] = {.lex_state = 220},
  [155] = {.lex_state = 217},
  [156] = {.lex_state = 373},
  [157] = {.lex_state = 217},
  [158] = {.lex_state = 374},
  [159] = {.lex_state = 217},
  [160] = {.lex_state = 240},
  [161] = {.lex_state = 238},
  [162] = {.lex_state = 240},
  [163] = {.lex_state = 238},
  [164] = {.lex_state = 257},
  [165] = {.lex_state = 217},
  [166] = {.lex_state = 240},
  [167] = {.lex_state = 217},
  [168] = {.lex_state = 240},
  [169] = {.lex_state = 220},
  [170] = {.lex_state = 240},
  [171] = {.lex_state = 217},
  [172] = {.lex_state = 257},
  [173] = {.lex_state = 375},
  [174] = {.lex_state = 240},
  [175] = {.lex_state = 217},
  [176] = {.lex_state = 375},
  [177] = {.lex_state = 375},
  [178] = {.lex_state = 375},
  [179] = {.lex_state = 375},
  [180] = {.lex_state = 375},
  [181] = {.lex_state = 375},
  [182] = {.lex_state = 375},
  [183] = {.lex_state = 375},
  [184] = {.lex_state = 375},
  [185] = {.lex_state = 375},
  [186] = {.lex_state = 375},
  [187] = {.lex_state = 375},
  [188] = {.lex_state = 375},
  [189] = {.lex_state = 375},
  [190] = {.lex_state = 375},
  [191] = {.lex_state = 375},
  [192] = {.lex_state = 375},
  [193] = {.lex_state = 240},
  [194] = {.lex_state = 254},
  [195] = {.lex_state = 375},
  [196] = {.lex_state = 254},
  [197] = {.lex_state = 254},
  [198] = {.lex_state = 254},
  [199] = {.lex_state = 220},
  [200] = {.lex_state = 375},
  [201] = {.lex_state = 254},
  [202] = {.lex_state = 375},
  [203] = {.lex_state = 254},
  [204] = {.lex_state = 375},
  [205] = {.lex_state = 254},
  [206] = {.lex_state = 375},
  [207] = {.lex_state = 254},
  [208] = {.lex_state = 375},
  [209] = {.lex_state = 254},
  [210] = {.lex_state = 375},
  [211] = {.lex_state = 254},
  [212] = {.lex_state = 254},
  [213] = {.lex_state = 238},
  [214] = {.lex_state = 257},
  [215] = {.lex_state = 254},
  [216] = {.lex_state = 240},
  [217] = {.lex_state = 240},
  [218] = {.lex_state = 217},
  [219] = {.lex_state = 257},
  [220] = {.lex_state = 257},
  [221] = {.lex_state = 257},
  [222] = {.lex_state = 257},
  [223] = {.lex_state = 257},
  [224] = {.lex_state = 257},
  [225] = {.lex_state = 257},
  [226] = {.lex_state = 257},
  [227] = {.lex_state = 257},
  [228] = {.lex_state = 257},
  [229] = {.lex_state = 257},
  [230] = {.lex_state = 257},
  [231] = {.lex_state = 257},
  [232] = {.lex_state = 257},
  [233] = {.lex_state = 257},
  [234] = {.lex_state = 257},
  [235] = {.lex_state = 257},
  [236] = {.lex_state = 257},
  [237] = {.lex_state = 257},
  [238] = {.lex_state = 257},
  [239] = {.lex_state = 257},
  [240] = {.lex_state = 257},
  [241] = {.lex_state = 257},
  [242] = {.lex_state = 257},
  [243] = {.lex_state = 257},
  [244] = {.lex_state = 257},
  [245] = {.lex_state = 240},
  [246] = {.lex_state = 257},
  [247] = {.lex_state = 257},
  [248] = {.lex_state = 220},
  [249] = {.lex_state = 240},
  [250] = {.lex_state = 240},
  [251] = {.lex_state = 372},
  [252] = {.lex_state = 242},
  [253] = {.lex_state = 240},
  [254] = {.lex_state = 220},
  [255] = {.lex_state = 240},
  [256] = {.lex_state = 373},
  [257] = {.lex_state = 240},
  [258] = {.lex_state = 374},
  [259] = {.lex_state = 240},
  [260] = {.lex_state = 238},
  [261] = {.lex_state = 257},
  [262] = {.lex_state = 240},
  [263] = {.lex_state = 240},
  [264] = {.lex_state = 220},
  [265] = {.lex_state = 257},
  [266] = {.lex_state = 257},
  [267] = {.lex_state = 257},
  [268] = {.lex_state = 257},
  [269] = {.lex_state = 257},
  [270] = {.lex_state = 257},
  [271] = {.lex_state = 257},
  [272] = {.lex_state = 257},
  [273] = {.lex_state = 257},
  [274] = {.lex_state = 257},
  [275] = {.lex_state = 257},
  [276] = {.lex_state = 257},
  [277] = {.lex_state = 257},
  [278] = {.lex_state = 257},
  [279] = {.lex_state = 257},
  [280] = {.lex_state = 257},
  [281] = {.lex_state = 257},
  [282] = {.lex_state = 257},
  [283] = {.lex_state = 257},
  [284] = {.lex_state = 240},
  [285] = {.lex_state = 254},
  [286] = {.lex_state = 257},
  [287] = {.lex_state = 257},
  [288] = {.lex_state = 257},
  [289] = {.lex_state = 257},
  [290] = {.lex_state = 257},
  [291] = {.lex_state = 257},
  [292] = {.lex_state = 254},
  [293] = {.lex_state = 481},
  [294] = {.lex_state = 217},
  [295] = {.lex_state = 217},
  [296] = {.lex_state = 257},
  [297] = {.lex_state = 257},
  [298] = {.lex_state = 217},
  [299] = {.lex_state = 217},
  [300] = {.lex_state = 217},
  [301] = {.lex_state = 217},
  [302] = {.lex_state = 217},
  [303] = {.lex_state = 217},
  [304] = {.lex_state = 217},
  [305] = {.lex_state = 217},
  [306] = {.lex_state = 217},
  [307] = {.lex_state = 217},
  [308] = {.lex_state = 217},
  [309] = {.lex_state = 217},
  [310] = {.lex_state = 217},
  [311] = {.lex_state = 254},
  [312] = {.lex_state = 256},
  [313] = {.lex_state = 256},
  [314] = {.lex_state = 256},
  [315] = {.lex_state = 256},
  [316] = {.lex_state = 256},
  [317] = {.lex_state = 256},
  [318] = {.lex_state = 488},
  [319] = {.lex_state = 240},
  [320] = {.lex_state = 257},
  [321] = {.lex_state = 240},
  [322] = {.lex_state = 240},
  [323] = {.lex_state = 240},
  [324] = {.lex_state = 240},
  [325] = {.lex_state = 240},
  [326] = {.lex_state = 240},
  [327] = {.lex_state = 240},
  [328] = {.lex_state = 240},
  [329] = {.lex_state = 240},
  [330] = {.lex_state = 240},
  [331] = {.lex_state = 240},
  [332] = {.lex_state = 240},
  [333] = {.lex_state = 240},
  [334] = {.lex_state = 240},
  [335] = {.lex_state = 240},
  [336] = {.lex_state = 240},
  [337] = {.lex_state = 240},
  [338] = {.lex_state = 240},
  [339] = {.lex_state = 240},
  [340] = {.lex_state = 240},
  [341] = {.lex_state = 240},
  [342] = {.lex_state = 240},
  [343] = {.lex_state = 240},
  [344] = {.lex_state = 240},
  [345] = {.lex_state = 240},
  [346] = {.lex_state = 240},
  [347] = {.lex_state = 240},
  [348] = {.lex_state = 240},
  [349] = {.lex_state = 257},
  [350] = {.lex_state = 217},
  [351] = {.lex_state = 217},
  [352] = {.lex_state = 240},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(3),
    [anon_sym_alignat] = ACTIONS(3),
    [anon_sym_eqnarray] = ACTIONS(3),
    [anon_sym_equation] = ACTIONS(3),
    [anon_sym_flalign] = ACTIONS(3),
    [anon_sym_gather] = ACTIONS(3),
    [anon_sym_multline] = ACTIONS(3),
    [anon_sym_split] = ACTIONS(3),
    [anon_sym_math] = ACTIONS(3),
    [anon_sym_verbatim] = ACTIONS(3),
    [anon_sym_Verbatim] = ACTIONS(3),
    [anon_sym_BVerbatim] = ACTIONS(3),
    [anon_sym_LVerbatim] = ACTIONS(3),
    [anon_sym_lstlisting] = ACTIONS(3),
    [anon_sym_minted] = ACTIONS(3),
    [anon_sym_begin] = ACTIONS(3),
    [anon_sym_end] = ACTIONS(3),
    [anon_sym_documentclass] = ACTIONS(3),
    [anon_sym_usepackage] = ACTIONS(3),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(3),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(1),
    [sym_escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_name] = ACTIONS(3),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_magic] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(9),
    [sym_text_mode] = STATE(46),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(46),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [sym_escape] = ACTIONS(23),
    [sym_begin_group] = ACTIONS(23),
    [sym_math_shift] = ACTIONS(23),
    [sym_alignment_tab] = ACTIONS(23),
    [sym_parameter_char] = ACTIONS(23),
    [sym_superscript] = ACTIONS(23),
    [sym_subscript] = ACTIONS(23),
    [sym_active_char] = ACTIONS(23),
    [sym_comment_char] = ACTIONS(23),
    [sym_text] = ACTIONS(25),
  },
  [3] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [4] = {
    [sym_text_mode] = STATE(59),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(59),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(49),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [5] = {
    [sym_math_mode] = STATE(67),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(67),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(55),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym_escape] = ACTIONS(63),
    [sym_begin_group] = ACTIONS(63),
    [sym_end_group] = ACTIONS(63),
    [sym_math_shift] = ACTIONS(63),
    [sym_alignment_tab] = ACTIONS(63),
    [sym_parameter_char] = ACTIONS(63),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(63),
    [sym_active_char] = ACTIONS(63),
    [sym_comment_char] = ACTIONS(63),
    [sym_text] = ACTIONS(61),
  },
  [7] = {
    [sym_number] = ACTIONS(65),
  },
  [8] = {
    [sym_magic] = ACTIONS(67),
    [sym_comment_text] = ACTIONS(69),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [10] = {
    [sym_math_mode] = STATE(73),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_align] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [11] = {
    [sym_math_mode] = STATE(75),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_align_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [12] = {
    [sym_math_mode] = STATE(77),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_alignat] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [13] = {
    [sym_math_mode] = STATE(79),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_alignat_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(79),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [14] = {
    [sym_math_mode] = STATE(81),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_eqnarray] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(81),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [15] = {
    [sym_math_mode] = STATE(83),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_eqnarray_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(82),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [16] = {
    [sym_math_mode] = STATE(85),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_equation] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(84),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(85),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [17] = {
    [sym_math_mode] = STATE(87),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_equation_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(86),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [18] = {
    [sym_math_mode] = STATE(89),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_flalign] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [19] = {
    [sym_math_mode] = STATE(91),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_flalign_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(90),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [20] = {
    [sym_math_mode] = STATE(93),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_gather] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(92),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [21] = {
    [sym_math_mode] = STATE(95),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_gather_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(94),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [22] = {
    [sym_math_mode] = STATE(97),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_multline] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(96),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [23] = {
    [sym_math_mode] = STATE(99),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_multline_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [24] = {
    [sym_math_mode] = STATE(101),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_split] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(100),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [25] = {
    [sym_math_mode] = STATE(103),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_split_star] = STATE(71),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(103),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [26] = {
    [sym_math_mode] = STATE(106),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_math] = STATE(104),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(105),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(106),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [27] = {
    [sym_end_verbatim] = STATE(108),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(110),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(77),
  },
  [28] = {
    [sym_end_Verbatim] = STATE(108),
    [sym_end_token] = STATE(111),
    [sym_opt_text_group] = STATE(112),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(79),
  },
  [29] = {
    [sym_end_Verbatim_star] = STATE(108),
    [sym_end_token] = STATE(115),
    [sym_opt_text_group] = STATE(116),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(81),
  },
  [30] = {
    [sym_end_BVerbatim] = STATE(108),
    [sym_end_token] = STATE(118),
    [sym_opt_text_group] = STATE(119),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(83),
  },
  [31] = {
    [sym_end_BVerbatim_star] = STATE(108),
    [sym_end_token] = STATE(121),
    [sym_opt_text_group] = STATE(122),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(85),
  },
  [32] = {
    [sym_end_LVerbatim] = STATE(108),
    [sym_end_token] = STATE(124),
    [sym_opt_text_group] = STATE(125),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(87),
  },
  [33] = {
    [sym_end_LVerbatim_star] = STATE(108),
    [sym_end_token] = STATE(127),
    [sym_opt_text_group] = STATE(128),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(89),
  },
  [34] = {
    [sym_end_lstlisting] = STATE(108),
    [sym_end_token] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(132),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(91),
  },
  [35] = {
    [sym_text_group] = STATE(134),
    [sym_begin_group] = ACTIONS(93),
  },
  [36] = {
    [sym_text_mode] = STATE(138),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_end] = STATE(136),
    [sym_end_token] = STATE(137),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(138),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [37] = {
    [sym_simple_text_group] = STATE(140),
    [sym_begin_group] = ACTIONS(97),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [sym_escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(101),
    [sym_end_group] = ACTIONS(101),
    [sym_math_shift] = ACTIONS(101),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(101),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_comment_char] = ACTIONS(101),
    [sym_text] = ACTIONS(99),
  },
  [39] = {
    [sym_simple_text_group] = STATE(142),
    [sym_opt_text_group] = STATE(143),
    [sym_begin_opt] = STATE(144),
    [anon_sym_LBRACK] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(105),
  },
  [40] = {
    [sym_simple_text_group] = STATE(145),
    [sym_opt_text_group] = STATE(146),
    [sym_begin_opt] = STATE(144),
    [anon_sym_LBRACK] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(105),
  },
  [41] = {
    [sym_text_group] = STATE(147),
    [sym_begin_group] = ACTIONS(107),
  },
  [42] = {
    [sym_text_group] = STATE(148),
    [sym_opt_text_group] = STATE(149),
    [sym_begin_opt] = STATE(144),
    [anon_sym_LBRACK] = ACTIONS(103),
    [sym_begin_group] = ACTIONS(107),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(109),
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
    [sym_text] = ACTIONS(109),
  },
  [44] = {
    [sym_escaped] = STATE(151),
    [sym_escape] = ACTIONS(113),
  },
  [45] = {
    [sym_text_mode] = STATE(154),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [sym_end_opt] = STATE(153),
    [aux_sym_document_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [46] = {
    [sym_text_mode] = STATE(155),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(155),
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [47] = {
    [sym_math_mode] = STATE(157),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [48] = {
    [sym_math_mode] = STATE(159),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(123),
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
    [sym_text] = ACTIONS(123),
  },
  [50] = {
    [sym_begin_group] = ACTIONS(127),
  },
  [51] = {
    [anon_sym_LBRACK] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
  },
  [52] = {
    [anon_sym_LBRACK] = ACTIONS(131),
    [sym_begin_group] = ACTIONS(131),
  },
  [53] = {
    [sym_begin_group] = ACTIONS(133),
  },
  [54] = {
    [anon_sym_LBRACK] = ACTIONS(135),
    [sym_begin_group] = ACTIONS(135),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [sym_escape] = ACTIONS(139),
    [sym_begin_group] = ACTIONS(139),
    [sym_end_group] = ACTIONS(139),
    [sym_math_shift] = ACTIONS(139),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(139),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(139),
    [sym_text] = ACTIONS(137),
  },
  [56] = {
    [sym_escape] = ACTIONS(141),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(143),
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
    [sym_text] = ACTIONS(143),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(147),
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
    [sym_text] = ACTIONS(147),
  },
  [59] = {
    [sym_text_mode] = STATE(161),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [60] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [61] = {
    [sym_math_mode] = STATE(163),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_end_group] = ACTIONS(153),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [62] = {
    [sym_math_mode] = STATE(165),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(155),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [63] = {
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym_escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_end_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_comment_char] = ACTIONS(157),
    [sym_text] = ACTIONS(159),
  },
  [64] = {
    [sym_math_mode] = STATE(167),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end] = STATE(166),
    [sym_end_token] = STATE(137),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [65] = {
    [sym_simple_text_group] = STATE(140),
    [sym_begin_group] = ACTIONS(105),
  },
  [66] = {
    [sym_math_mode] = STATE(169),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [sym_end_opt] = STATE(168),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [67] = {
    [sym_math_mode] = STATE(171),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(171),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(163),
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
    [sym_text] = ACTIONS(163),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym_escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(169),
    [sym_end_group] = ACTIONS(169),
    [sym_math_shift] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(169),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_comment_char] = ACTIONS(169),
    [sym_text] = ACTIONS(167),
  },
  [70] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(171),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [71] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym_escape] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
    [sym_end_group] = ACTIONS(175),
    [sym_math_shift] = ACTIONS(175),
    [sym_alignment_tab] = ACTIONS(175),
    [sym_parameter_char] = ACTIONS(175),
    [sym_superscript] = ACTIONS(175),
    [sym_subscript] = ACTIONS(175),
    [sym_active_char] = ACTIONS(175),
    [sym_comment_char] = ACTIONS(175),
    [sym_text] = ACTIONS(173),
  },
  [72] = {
    [sym_begin_group] = ACTIONS(177),
  },
  [73] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_align] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(72),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [74] = {
    [sym_begin_group] = ACTIONS(179),
  },
  [75] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_align_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(74),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [76] = {
    [sym_begin_group] = ACTIONS(181),
  },
  [77] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_alignat] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(76),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [78] = {
    [sym_begin_group] = ACTIONS(183),
  },
  [79] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_alignat_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(78),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [80] = {
    [sym_begin_group] = ACTIONS(185),
  },
  [81] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_eqnarray] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(80),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [82] = {
    [sym_begin_group] = ACTIONS(187),
  },
  [83] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_eqnarray_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(82),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [84] = {
    [sym_begin_group] = ACTIONS(189),
  },
  [85] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_equation] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(84),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [86] = {
    [sym_begin_group] = ACTIONS(191),
  },
  [87] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_equation_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(86),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [88] = {
    [sym_begin_group] = ACTIONS(193),
  },
  [89] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_flalign] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(88),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [90] = {
    [sym_begin_group] = ACTIONS(195),
  },
  [91] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_flalign_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(90),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [92] = {
    [sym_begin_group] = ACTIONS(197),
  },
  [93] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_gather] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(92),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [94] = {
    [sym_begin_group] = ACTIONS(199),
  },
  [95] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_gather_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(94),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [96] = {
    [sym_begin_group] = ACTIONS(201),
  },
  [97] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_multline] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(96),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [98] = {
    [sym_begin_group] = ACTIONS(203),
  },
  [99] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_multline_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(98),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [100] = {
    [sym_begin_group] = ACTIONS(205),
  },
  [101] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_split] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(100),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [102] = {
    [sym_begin_group] = ACTIONS(207),
  },
  [103] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_split_star] = STATE(174),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(102),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [104] = {
    [ts_builtin_sym_end] = ACTIONS(209),
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
    [sym_text] = ACTIONS(209),
  },
  [105] = {
    [sym_begin_group] = ACTIONS(213),
  },
  [106] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_end_math] = STATE(170),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end_token] = STATE(105),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [107] = {
    [anon_sym_end] = ACTIONS(215),
  },
  [108] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
    [sym_escape] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
    [sym_end_group] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(219),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(219),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_comment_char] = ACTIONS(219),
    [sym_text] = ACTIONS(217),
  },
  [109] = {
    [sym_begin_group] = ACTIONS(221),
  },
  [110] = {
    [sym_end_verbatim] = STATE(193),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [111] = {
    [sym_begin_group] = ACTIONS(225),
  },
  [112] = {
    [sym_end_Verbatim] = STATE(193),
    [sym_end_token] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(227),
  },
  [113] = {
    [sym_text_mode] = STATE(199),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [sym_end_opt] = STATE(198),
    [aux_sym_document_repeat1] = STATE(199),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [114] = {
    [sym_end_Verbatim] = STATE(193),
    [sym_end_token] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [115] = {
    [sym_begin_group] = ACTIONS(231),
  },
  [116] = {
    [sym_end_Verbatim_star] = STATE(193),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_environment_repeat1] = STATE(201),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(233),
  },
  [117] = {
    [sym_end_Verbatim_star] = STATE(193),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [118] = {
    [sym_begin_group] = ACTIONS(235),
  },
  [119] = {
    [sym_end_BVerbatim] = STATE(193),
    [sym_end_token] = STATE(118),
    [aux_sym_verbatim_environment_repeat1] = STATE(203),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [120] = {
    [sym_end_BVerbatim] = STATE(193),
    [sym_end_token] = STATE(118),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [121] = {
    [sym_begin_group] = ACTIONS(239),
  },
  [122] = {
    [sym_end_BVerbatim_star] = STATE(193),
    [sym_end_token] = STATE(121),
    [aux_sym_verbatim_environment_repeat1] = STATE(205),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(241),
  },
  [123] = {
    [sym_end_BVerbatim_star] = STATE(193),
    [sym_end_token] = STATE(121),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [124] = {
    [sym_begin_group] = ACTIONS(243),
  },
  [125] = {
    [sym_end_LVerbatim] = STATE(193),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_environment_repeat1] = STATE(207),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(245),
  },
  [126] = {
    [sym_end_LVerbatim] = STATE(193),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [127] = {
    [sym_begin_group] = ACTIONS(247),
  },
  [128] = {
    [sym_end_LVerbatim_star] = STATE(193),
    [sym_end_token] = STATE(127),
    [aux_sym_verbatim_environment_repeat1] = STATE(209),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(249),
  },
  [129] = {
    [sym_end_LVerbatim_star] = STATE(193),
    [sym_end_token] = STATE(127),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [130] = {
    [sym_begin_group] = ACTIONS(251),
  },
  [131] = {
    [sym_end_lstlisting] = STATE(193),
    [sym_end_token] = STATE(130),
    [aux_sym_verbatim_environment_repeat1] = STATE(211),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(253),
  },
  [132] = {
    [sym_end_lstlisting] = STATE(193),
    [sym_end_token] = STATE(130),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [133] = {
    [sym_text_mode] = STATE(213),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(213),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [134] = {
    [sym_end_minted] = STATE(193),
    [sym_end_token] = STATE(214),
    [aux_sym_verbatim_environment_repeat1] = STATE(215),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(257),
  },
  [135] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(171),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_RBRACK] = ACTIONS(261),
    [sym_escape] = ACTIONS(261),
    [sym_begin_group] = ACTIONS(261),
    [sym_end_group] = ACTIONS(261),
    [sym_math_shift] = ACTIONS(261),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(261),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_comment_char] = ACTIONS(261),
    [sym_text] = ACTIONS(259),
  },
  [137] = {
    [sym_simple_text_group] = STATE(216),
    [sym_begin_group] = ACTIONS(105),
  },
  [138] = {
    [sym_text_mode] = STATE(218),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_end] = STATE(217),
    [sym_end_token] = STATE(137),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(95),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [139] = {
    [anon_sym_align] = ACTIONS(263),
    [anon_sym_align_STAR] = ACTIONS(265),
    [anon_sym_alignat] = ACTIONS(267),
    [anon_sym_alignat_STAR] = ACTIONS(269),
    [anon_sym_eqnarray] = ACTIONS(271),
    [anon_sym_eqnarray_STAR] = ACTIONS(273),
    [anon_sym_equation] = ACTIONS(275),
    [anon_sym_equation_STAR] = ACTIONS(277),
    [anon_sym_flalign] = ACTIONS(279),
    [anon_sym_flalign_STAR] = ACTIONS(281),
    [anon_sym_gather] = ACTIONS(283),
    [anon_sym_gather_STAR] = ACTIONS(285),
    [anon_sym_multline] = ACTIONS(287),
    [anon_sym_multline_STAR] = ACTIONS(289),
    [anon_sym_split] = ACTIONS(291),
    [anon_sym_split_STAR] = ACTIONS(293),
    [anon_sym_math] = ACTIONS(295),
    [anon_sym_verbatim] = ACTIONS(297),
    [anon_sym_Verbatim] = ACTIONS(299),
    [anon_sym_Verbatim_STAR] = ACTIONS(301),
    [anon_sym_BVerbatim] = ACTIONS(303),
    [anon_sym_BVerbatim_STAR] = ACTIONS(305),
    [anon_sym_LVerbatim] = ACTIONS(307),
    [anon_sym_LVerbatim_STAR] = ACTIONS(309),
    [anon_sym_lstlisting] = ACTIONS(311),
    [sym_text] = ACTIONS(313),
  },
  [140] = {
    [anon_sym_LBRACK] = ACTIONS(315),
    [sym_escape] = ACTIONS(315),
    [sym_begin_group] = ACTIONS(315),
    [sym_math_shift] = ACTIONS(315),
    [sym_alignment_tab] = ACTIONS(315),
    [sym_parameter_char] = ACTIONS(315),
    [sym_superscript] = ACTIONS(315),
    [sym_subscript] = ACTIONS(315),
    [sym_active_char] = ACTIONS(315),
    [sym_comment_char] = ACTIONS(315),
    [sym_text] = ACTIONS(317),
  },
  [141] = {
    [sym_text] = ACTIONS(319),
  },
  [142] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym_escape] = ACTIONS(323),
    [sym_begin_group] = ACTIONS(323),
    [sym_end_group] = ACTIONS(323),
    [sym_math_shift] = ACTIONS(323),
    [sym_alignment_tab] = ACTIONS(323),
    [sym_parameter_char] = ACTIONS(323),
    [sym_superscript] = ACTIONS(323),
    [sym_subscript] = ACTIONS(323),
    [sym_active_char] = ACTIONS(323),
    [sym_comment_char] = ACTIONS(323),
    [sym_text] = ACTIONS(321),
  },
  [143] = {
    [sym_simple_text_group] = STATE(245),
    [sym_begin_group] = ACTIONS(105),
  },
  [144] = {
    [sym_text_mode] = STATE(248),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [sym_end_opt] = STATE(247),
    [aux_sym_document_repeat1] = STATE(248),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [sym_escape] = ACTIONS(329),
    [sym_begin_group] = ACTIONS(329),
    [sym_end_group] = ACTIONS(329),
    [sym_math_shift] = ACTIONS(329),
    [sym_alignment_tab] = ACTIONS(329),
    [sym_parameter_char] = ACTIONS(329),
    [sym_superscript] = ACTIONS(329),
    [sym_subscript] = ACTIONS(329),
    [sym_active_char] = ACTIONS(329),
    [sym_comment_char] = ACTIONS(329),
    [sym_text] = ACTIONS(327),
  },
  [146] = {
    [sym_simple_text_group] = STATE(249),
    [sym_begin_group] = ACTIONS(105),
  },
  [147] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym_escape] = ACTIONS(333),
    [sym_begin_group] = ACTIONS(333),
    [sym_end_group] = ACTIONS(333),
    [sym_math_shift] = ACTIONS(333),
    [sym_alignment_tab] = ACTIONS(333),
    [sym_parameter_char] = ACTIONS(333),
    [sym_superscript] = ACTIONS(333),
    [sym_subscript] = ACTIONS(333),
    [sym_active_char] = ACTIONS(333),
    [sym_comment_char] = ACTIONS(333),
    [sym_text] = ACTIONS(331),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [sym_escape] = ACTIONS(337),
    [sym_begin_group] = ACTIONS(337),
    [sym_end_group] = ACTIONS(337),
    [sym_math_shift] = ACTIONS(337),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(337),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_comment_char] = ACTIONS(337),
    [sym_text] = ACTIONS(335),
  },
  [149] = {
    [sym_text_group] = STATE(250),
    [sym_begin_group] = ACTIONS(107),
  },
  [150] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(339),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(341),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(343),
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
    [sym_text] = ACTIONS(343),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(347),
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
    [sym_text] = ACTIONS(347),
  },
  [154] = {
    [sym_text_mode] = STATE(254),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [sym_end_opt] = STATE(253),
    [aux_sym_document_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [155] = {
    [sym_text_mode] = STATE(155),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(155),
    [ts_builtin_sym_end] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(362),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(368),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(371),
    [sym_text] = ACTIONS(374),
  },
  [156] = {
    [anon_sym_RBRACK] = ACTIONS(377),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [157] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(381),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [159] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(383),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym_escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_end_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_comment_char] = ACTIONS(387),
    [sym_text] = ACTIONS(385),
  },
  [161] = {
    [sym_text_mode] = STATE(161),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(389),
    [sym_math_shift] = ACTIONS(362),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(368),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(371),
    [sym_text] = ACTIONS(374),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [sym_escape] = ACTIONS(391),
    [sym_begin_group] = ACTIONS(391),
    [sym_end_group] = ACTIONS(391),
    [sym_math_shift] = ACTIONS(391),
    [sym_alignment_tab] = ACTIONS(391),
    [sym_parameter_char] = ACTIONS(391),
    [sym_superscript] = ACTIONS(391),
    [sym_subscript] = ACTIONS(391),
    [sym_active_char] = ACTIONS(391),
    [sym_comment_char] = ACTIONS(391),
    [sym_text] = ACTIONS(393),
  },
  [163] = {
    [sym_math_mode] = STATE(260),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(260),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_end_group] = ACTIONS(395),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [164] = {
    [sym_math_shift] = ACTIONS(397),
  },
  [165] = {
    [sym_math_mode] = STATE(171),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(171),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(399),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [166] = {
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym_escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_comment_char] = ACTIONS(401),
    [sym_text] = ACTIONS(403),
  },
  [167] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_end] = STATE(262),
    [sym_end_token] = STATE(137),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [168] = {
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_RBRACK] = ACTIONS(405),
    [sym_escape] = ACTIONS(405),
    [sym_begin_group] = ACTIONS(405),
    [sym_end_group] = ACTIONS(405),
    [sym_math_shift] = ACTIONS(405),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(405),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_comment_char] = ACTIONS(405),
    [sym_text] = ACTIONS(407),
  },
  [169] = {
    [sym_math_mode] = STATE(264),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [sym_end_opt] = STATE(263),
    [aux_sym_math_environment_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_escape] = ACTIONS(51),
    [sym_begin_group] = ACTIONS(53),
    [sym_alignment_tab] = ACTIONS(57),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(57),
    [sym_subscript] = ACTIONS(57),
    [sym_active_char] = ACTIONS(57),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(59),
  },
  [170] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(411),
    [anon_sym_RBRACK] = ACTIONS(411),
    [sym_escape] = ACTIONS(411),
    [sym_begin_group] = ACTIONS(411),
    [sym_end_group] = ACTIONS(411),
    [sym_math_shift] = ACTIONS(411),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(411),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(411),
    [sym_active_char] = ACTIONS(411),
    [sym_comment_char] = ACTIONS(411),
    [sym_text] = ACTIONS(409),
  },
  [171] = {
    [sym_math_mode] = STATE(171),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(171),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_math_shift] = ACTIONS(422),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(433),
  },
  [172] = {
    [sym_begin_group] = ACTIONS(436),
  },
  [173] = {
    [anon_sym_align] = ACTIONS(438),
  },
  [174] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_RBRACK] = ACTIONS(442),
    [sym_escape] = ACTIONS(442),
    [sym_begin_group] = ACTIONS(442),
    [sym_end_group] = ACTIONS(442),
    [sym_math_shift] = ACTIONS(442),
    [sym_alignment_tab] = ACTIONS(442),
    [sym_parameter_char] = ACTIONS(442),
    [sym_superscript] = ACTIONS(442),
    [sym_subscript] = ACTIONS(442),
    [sym_active_char] = ACTIONS(442),
    [sym_comment_char] = ACTIONS(442),
    [sym_text] = ACTIONS(440),
  },
  [175] = {
    [sym_math_mode] = STATE(175),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(175),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(433),
  },
  [176] = {
    [anon_sym_align_STAR] = ACTIONS(444),
  },
  [177] = {
    [anon_sym_alignat] = ACTIONS(446),
  },
  [178] = {
    [anon_sym_alignat_STAR] = ACTIONS(448),
  },
  [179] = {
    [anon_sym_eqnarray] = ACTIONS(450),
  },
  [180] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(452),
  },
  [181] = {
    [anon_sym_equation] = ACTIONS(454),
  },
  [182] = {
    [anon_sym_equation_STAR] = ACTIONS(456),
  },
  [183] = {
    [anon_sym_flalign] = ACTIONS(458),
  },
  [184] = {
    [anon_sym_flalign_STAR] = ACTIONS(460),
  },
  [185] = {
    [anon_sym_gather] = ACTIONS(462),
  },
  [186] = {
    [anon_sym_gather_STAR] = ACTIONS(464),
  },
  [187] = {
    [anon_sym_multline] = ACTIONS(466),
  },
  [188] = {
    [anon_sym_multline_STAR] = ACTIONS(468),
  },
  [189] = {
    [anon_sym_split] = ACTIONS(470),
  },
  [190] = {
    [anon_sym_split_STAR] = ACTIONS(472),
  },
  [191] = {
    [anon_sym_math] = ACTIONS(474),
  },
  [192] = {
    [anon_sym_verbatim] = ACTIONS(476),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(478),
    [anon_sym_LBRACK] = ACTIONS(480),
    [anon_sym_RBRACK] = ACTIONS(480),
    [sym_escape] = ACTIONS(480),
    [sym_begin_group] = ACTIONS(480),
    [sym_end_group] = ACTIONS(480),
    [sym_math_shift] = ACTIONS(480),
    [sym_alignment_tab] = ACTIONS(480),
    [sym_parameter_char] = ACTIONS(480),
    [sym_superscript] = ACTIONS(480),
    [sym_subscript] = ACTIONS(480),
    [sym_active_char] = ACTIONS(480),
    [sym_comment_char] = ACTIONS(480),
    [sym_text] = ACTIONS(478),
  },
  [194] = {
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(482),
    [sym_verbatim_token] = ACTIONS(484),
  },
  [195] = {
    [anon_sym_Verbatim] = ACTIONS(487),
  },
  [196] = {
    [sym_end_Verbatim] = STATE(284),
    [sym_end_token] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [197] = {
    [sym_escape] = ACTIONS(345),
    [sym_verbatim_token] = ACTIONS(345),
  },
  [198] = {
    [sym_escape] = ACTIONS(349),
    [sym_verbatim_token] = ACTIONS(349),
  },
  [199] = {
    [sym_text_mode] = STATE(254),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [sym_end_opt] = STATE(285),
    [aux_sym_document_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(229),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [200] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(489),
  },
  [201] = {
    [sym_end_Verbatim_star] = STATE(284),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [202] = {
    [anon_sym_BVerbatim] = ACTIONS(491),
  },
  [203] = {
    [sym_end_BVerbatim] = STATE(284),
    [sym_end_token] = STATE(118),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [204] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(493),
  },
  [205] = {
    [sym_end_BVerbatim_star] = STATE(284),
    [sym_end_token] = STATE(121),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [206] = {
    [anon_sym_LVerbatim] = ACTIONS(495),
  },
  [207] = {
    [sym_end_LVerbatim] = STATE(284),
    [sym_end_token] = STATE(124),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [208] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(497),
  },
  [209] = {
    [sym_end_LVerbatim_star] = STATE(284),
    [sym_end_token] = STATE(127),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [210] = {
    [anon_sym_lstlisting] = ACTIONS(499),
  },
  [211] = {
    [sym_end_lstlisting] = STATE(284),
    [sym_end_token] = STATE(130),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [212] = {
    [sym_escape] = ACTIONS(149),
    [sym_verbatim_token] = ACTIONS(149),
  },
  [213] = {
    [sym_text_mode] = STATE(161),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(501),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [214] = {
    [sym_begin_group] = ACTIONS(503),
  },
  [215] = {
    [sym_end_minted] = STATE(284),
    [sym_end_token] = STATE(214),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym_escape] = ACTIONS(75),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(507),
    [anon_sym_RBRACK] = ACTIONS(507),
    [sym_escape] = ACTIONS(507),
    [sym_begin_group] = ACTIONS(507),
    [sym_end_group] = ACTIONS(507),
    [sym_math_shift] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(507),
    [sym_parameter_char] = ACTIONS(507),
    [sym_superscript] = ACTIONS(507),
    [sym_subscript] = ACTIONS(507),
    [sym_active_char] = ACTIONS(507),
    [sym_comment_char] = ACTIONS(507),
    [sym_text] = ACTIONS(505),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(511),
    [anon_sym_RBRACK] = ACTIONS(511),
    [sym_escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(511),
    [sym_end_group] = ACTIONS(511),
    [sym_math_shift] = ACTIONS(511),
    [sym_alignment_tab] = ACTIONS(511),
    [sym_parameter_char] = ACTIONS(511),
    [sym_superscript] = ACTIONS(511),
    [sym_subscript] = ACTIONS(511),
    [sym_active_char] = ACTIONS(511),
    [sym_comment_char] = ACTIONS(511),
    [sym_text] = ACTIONS(509),
  },
  [218] = {
    [sym_text_mode] = STATE(218),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(218),
    [anon_sym_LBRACK] = ACTIONS(353),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(362),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(368),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(371),
    [sym_text] = ACTIONS(374),
  },
  [219] = {
    [sym_end_group] = ACTIONS(513),
  },
  [220] = {
    [sym_end_group] = ACTIONS(515),
  },
  [221] = {
    [sym_end_group] = ACTIONS(517),
  },
  [222] = {
    [sym_end_group] = ACTIONS(519),
  },
  [223] = {
    [sym_end_group] = ACTIONS(521),
  },
  [224] = {
    [sym_end_group] = ACTIONS(523),
  },
  [225] = {
    [sym_end_group] = ACTIONS(525),
  },
  [226] = {
    [sym_end_group] = ACTIONS(527),
  },
  [227] = {
    [sym_end_group] = ACTIONS(529),
  },
  [228] = {
    [sym_end_group] = ACTIONS(531),
  },
  [229] = {
    [sym_end_group] = ACTIONS(533),
  },
  [230] = {
    [sym_end_group] = ACTIONS(535),
  },
  [231] = {
    [sym_end_group] = ACTIONS(537),
  },
  [232] = {
    [sym_end_group] = ACTIONS(539),
  },
  [233] = {
    [sym_end_group] = ACTIONS(541),
  },
  [234] = {
    [sym_end_group] = ACTIONS(543),
  },
  [235] = {
    [sym_end_group] = ACTIONS(545),
  },
  [236] = {
    [sym_end_group] = ACTIONS(547),
  },
  [237] = {
    [sym_end_group] = ACTIONS(549),
  },
  [238] = {
    [sym_end_group] = ACTIONS(551),
  },
  [239] = {
    [sym_end_group] = ACTIONS(553),
  },
  [240] = {
    [sym_end_group] = ACTIONS(555),
  },
  [241] = {
    [sym_end_group] = ACTIONS(557),
  },
  [242] = {
    [sym_end_group] = ACTIONS(559),
  },
  [243] = {
    [sym_end_group] = ACTIONS(561),
  },
  [244] = {
    [sym_end_group] = ACTIONS(563),
  },
  [245] = {
    [ts_builtin_sym_end] = ACTIONS(565),
    [anon_sym_LBRACK] = ACTIONS(567),
    [anon_sym_RBRACK] = ACTIONS(567),
    [sym_escape] = ACTIONS(567),
    [sym_begin_group] = ACTIONS(567),
    [sym_end_group] = ACTIONS(567),
    [sym_math_shift] = ACTIONS(567),
    [sym_alignment_tab] = ACTIONS(567),
    [sym_parameter_char] = ACTIONS(567),
    [sym_superscript] = ACTIONS(567),
    [sym_subscript] = ACTIONS(567),
    [sym_active_char] = ACTIONS(567),
    [sym_comment_char] = ACTIONS(567),
    [sym_text] = ACTIONS(565),
  },
  [246] = {
    [sym_begin_group] = ACTIONS(343),
  },
  [247] = {
    [sym_begin_group] = ACTIONS(347),
  },
  [248] = {
    [sym_text_mode] = STATE(254),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [sym_end_opt] = STATE(320),
    [aux_sym_document_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(325),
    [sym_escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(15),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(21),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [sym_escape] = ACTIONS(571),
    [sym_begin_group] = ACTIONS(571),
    [sym_end_group] = ACTIONS(571),
    [sym_math_shift] = ACTIONS(571),
    [sym_alignment_tab] = ACTIONS(571),
    [sym_parameter_char] = ACTIONS(571),
    [sym_superscript] = ACTIONS(571),
    [sym_subscript] = ACTIONS(571),
    [sym_active_char] = ACTIONS(571),
    [sym_comment_char] = ACTIONS(571),
    [sym_text] = ACTIONS(569),
  },
  [250] = {
    [ts_builtin_sym_end] = ACTIONS(573),
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
    [sym_text] = ACTIONS(573),
  },
  [251] = {
    [anon_sym_EQ] = ACTIONS(123),
  },
  [252] = {
    [sym_number] = ACTIONS(577),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [sym_escape] = ACTIONS(581),
    [sym_begin_group] = ACTIONS(581),
    [sym_end_group] = ACTIONS(581),
    [sym_math_shift] = ACTIONS(581),
    [sym_alignment_tab] = ACTIONS(581),
    [sym_parameter_char] = ACTIONS(581),
    [sym_superscript] = ACTIONS(581),
    [sym_subscript] = ACTIONS(581),
    [sym_active_char] = ACTIONS(581),
    [sym_comment_char] = ACTIONS(581),
    [sym_text] = ACTIONS(579),
  },
  [254] = {
    [sym_text_mode] = STATE(254),
    [sym_parameter] = STATE(6),
    [sym_text_environment] = STATE(6),
    [sym_display_math] = STATE(6),
    [sym_inline_math] = STATE(6),
    [sym_begin_align] = STATE(10),
    [sym_begin_align_star] = STATE(11),
    [sym_begin_alignat] = STATE(12),
    [sym_begin_alignat_star] = STATE(13),
    [sym_begin_eqnarray] = STATE(14),
    [sym_begin_eqnarray_star] = STATE(15),
    [sym_begin_equation] = STATE(16),
    [sym_begin_equation_star] = STATE(17),
    [sym_begin_flalign] = STATE(18),
    [sym_begin_flalign_star] = STATE(19),
    [sym_begin_gather] = STATE(20),
    [sym_begin_gather_star] = STATE(21),
    [sym_begin_multline] = STATE(22),
    [sym_begin_multline_star] = STATE(23),
    [sym_begin_split] = STATE(24),
    [sym_begin_split_star] = STATE(25),
    [sym_begin_math] = STATE(26),
    [sym_begin_verbatim] = STATE(27),
    [sym_begin_Verbatim] = STATE(28),
    [sym_begin_Verbatim_star] = STATE(29),
    [sym_begin_BVerbatim] = STATE(30),
    [sym_begin_BVerbatim_star] = STATE(31),
    [sym_begin_LVerbatim] = STATE(32),
    [sym_begin_LVerbatim_star] = STATE(33),
    [sym_begin_lstlisting] = STATE(34),
    [sym_begin_minted] = STATE(35),
    [sym_verbatim_environment] = STATE(6),
    [sym_escaped] = STATE(6),
    [sym_command] = STATE(6),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_text_group] = STATE(6),
    [sym_opt_text_group] = STATE(6),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(6),
    [sym_begin_opt] = STATE(45),
    [aux_sym_document_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(353),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym_escape] = ACTIONS(356),
    [sym_begin_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(362),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(368),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(371),
    [sym_text] = ACTIONS(374),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_RBRACK] = ACTIONS(585),
    [sym_escape] = ACTIONS(585),
    [sym_begin_group] = ACTIONS(585),
    [sym_end_group] = ACTIONS(585),
    [sym_math_shift] = ACTIONS(585),
    [sym_alignment_tab] = ACTIONS(585),
    [sym_parameter_char] = ACTIONS(585),
    [sym_superscript] = ACTIONS(585),
    [sym_subscript] = ACTIONS(585),
    [sym_active_char] = ACTIONS(585),
    [sym_comment_char] = ACTIONS(585),
    [sym_text] = ACTIONS(583),
  },
  [256] = {
    [anon_sym_RBRACK] = ACTIONS(587),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [257] = {
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(591),
    [sym_escape] = ACTIONS(591),
    [sym_begin_group] = ACTIONS(591),
    [sym_end_group] = ACTIONS(591),
    [sym_math_shift] = ACTIONS(591),
    [sym_alignment_tab] = ACTIONS(591),
    [sym_parameter_char] = ACTIONS(591),
    [sym_superscript] = ACTIONS(591),
    [sym_subscript] = ACTIONS(591),
    [sym_active_char] = ACTIONS(591),
    [sym_comment_char] = ACTIONS(591),
    [sym_text] = ACTIONS(589),
  },
  [258] = {
    [anon_sym_RPAREN] = ACTIONS(593),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym_name] = ACTIONS(47),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(595),
    [anon_sym_RBRACK] = ACTIONS(595),
    [sym_escape] = ACTIONS(595),
    [sym_begin_group] = ACTIONS(595),
    [sym_end_group] = ACTIONS(595),
    [sym_math_shift] = ACTIONS(595),
    [sym_alignment_tab] = ACTIONS(595),
    [sym_parameter_char] = ACTIONS(595),
    [sym_superscript] = ACTIONS(595),
    [sym_subscript] = ACTIONS(595),
    [sym_active_char] = ACTIONS(595),
    [sym_comment_char] = ACTIONS(595),
    [sym_text] = ACTIONS(597),
  },
  [260] = {
    [sym_math_mode] = STATE(260),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(260),
    [anon_sym_LBRACK] = ACTIONS(413),
    [sym_escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_end_group] = ACTIONS(422),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(433),
  },
  [261] = {
    [sym_math_shift] = ACTIONS(599),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [sym_escape] = ACTIONS(601),
    [sym_begin_group] = ACTIONS(601),
    [sym_end_group] = ACTIONS(601),
    [sym_math_shift] = ACTIONS(601),
    [sym_alignment_tab] = ACTIONS(601),
    [sym_parameter_char] = ACTIONS(601),
    [sym_superscript] = ACTIONS(601),
    [sym_subscript] = ACTIONS(601),
    [sym_active_char] = ACTIONS(601),
    [sym_comment_char] = ACTIONS(601),
    [sym_text] = ACTIONS(603),
  },
  [263] = {
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [sym_escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(605),
    [sym_end_group] = ACTIONS(605),
    [sym_math_shift] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_parameter_char] = ACTIONS(605),
    [sym_superscript] = ACTIONS(605),
    [sym_subscript] = ACTIONS(605),
    [sym_active_char] = ACTIONS(605),
    [sym_comment_char] = ACTIONS(605),
    [sym_text] = ACTIONS(607),
  },
  [264] = {
    [sym_math_mode] = STATE(264),
    [sym_parameter] = STATE(63),
    [sym_math_environment] = STATE(63),
    [sym_escaped] = STATE(63),
    [sym_command] = STATE(63),
    [sym_begin] = STATE(64),
    [sym_begin_token] = STATE(65),
    [sym_documentclass] = STATE(38),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(38),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(38),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(38),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(38),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(38),
    [sym_catcode_token] = STATE(44),
    [sym_math_group] = STATE(63),
    [sym_opt_math_group] = STATE(63),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(63),
    [sym_begin_opt] = STATE(66),
    [aux_sym_math_environment_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(422),
    [sym_escape] = ACTIONS(416),
    [sym_begin_group] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(424),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(424),
    [sym_subscript] = ACTIONS(424),
    [sym_active_char] = ACTIONS(424),
    [sym_comment_char] = ACTIONS(430),
    [sym_text] = ACTIONS(433),
  },
  [265] = {
    [sym_end_group] = ACTIONS(609),
  },
  [266] = {
    [sym_end_group] = ACTIONS(611),
  },
  [267] = {
    [sym_end_group] = ACTIONS(613),
  },
  [268] = {
    [sym_end_group] = ACTIONS(615),
  },
  [269] = {
    [sym_end_group] = ACTIONS(617),
  },
  [270] = {
    [sym_end_group] = ACTIONS(619),
  },
  [271] = {
    [sym_end_group] = ACTIONS(621),
  },
  [272] = {
    [sym_end_group] = ACTIONS(623),
  },
  [273] = {
    [sym_end_group] = ACTIONS(625),
  },
  [274] = {
    [sym_end_group] = ACTIONS(627),
  },
  [275] = {
    [sym_end_group] = ACTIONS(629),
  },
  [276] = {
    [sym_end_group] = ACTIONS(631),
  },
  [277] = {
    [sym_end_group] = ACTIONS(633),
  },
  [278] = {
    [sym_end_group] = ACTIONS(635),
  },
  [279] = {
    [sym_end_group] = ACTIONS(637),
  },
  [280] = {
    [sym_end_group] = ACTIONS(639),
  },
  [281] = {
    [sym_end_group] = ACTIONS(641),
  },
  [282] = {
    [sym_end_group] = ACTIONS(643),
  },
  [283] = {
    [sym_end_group] = ACTIONS(645),
  },
  [284] = {
    [ts_builtin_sym_end] = ACTIONS(647),
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym_escape] = ACTIONS(649),
    [sym_begin_group] = ACTIONS(649),
    [sym_end_group] = ACTIONS(649),
    [sym_math_shift] = ACTIONS(649),
    [sym_alignment_tab] = ACTIONS(649),
    [sym_parameter_char] = ACTIONS(649),
    [sym_superscript] = ACTIONS(649),
    [sym_subscript] = ACTIONS(649),
    [sym_active_char] = ACTIONS(649),
    [sym_comment_char] = ACTIONS(649),
    [sym_text] = ACTIONS(647),
  },
  [285] = {
    [sym_escape] = ACTIONS(581),
    [sym_verbatim_token] = ACTIONS(581),
  },
  [286] = {
    [sym_end_group] = ACTIONS(651),
  },
  [287] = {
    [sym_end_group] = ACTIONS(653),
  },
  [288] = {
    [sym_end_group] = ACTIONS(655),
  },
  [289] = {
    [sym_end_group] = ACTIONS(657),
  },
  [290] = {
    [sym_end_group] = ACTIONS(659),
  },
  [291] = {
    [sym_end_group] = ACTIONS(661),
  },
  [292] = {
    [sym_escape] = ACTIONS(387),
    [sym_verbatim_token] = ACTIONS(387),
  },
  [293] = {
    [anon_sym_minted] = ACTIONS(663),
  },
  [294] = {
    [anon_sym_LBRACK] = ACTIONS(665),
    [sym_escape] = ACTIONS(665),
    [sym_begin_group] = ACTIONS(665),
    [sym_alignment_tab] = ACTIONS(665),
    [sym_parameter_char] = ACTIONS(665),
    [sym_superscript] = ACTIONS(665),
    [sym_subscript] = ACTIONS(665),
    [sym_active_char] = ACTIONS(665),
    [sym_comment_char] = ACTIONS(665),
    [sym_text] = ACTIONS(667),
  },
  [295] = {
    [anon_sym_LBRACK] = ACTIONS(669),
    [sym_escape] = ACTIONS(669),
    [sym_begin_group] = ACTIONS(669),
    [sym_alignment_tab] = ACTIONS(669),
    [sym_parameter_char] = ACTIONS(669),
    [sym_superscript] = ACTIONS(669),
    [sym_subscript] = ACTIONS(669),
    [sym_active_char] = ACTIONS(669),
    [sym_comment_char] = ACTIONS(669),
    [sym_text] = ACTIONS(671),
  },
  [296] = {
    [sym_opt_text_group] = STATE(350),
    [sym_begin_opt] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(103),
  },
  [297] = {
    [sym_text_group] = STATE(351),
    [sym_begin_group] = ACTIONS(107),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_escape] = ACTIONS(673),
    [sym_begin_group] = ACTIONS(673),
    [sym_alignment_tab] = ACTIONS(673),
    [sym_parameter_char] = ACTIONS(673),
    [sym_superscript] = ACTIONS(673),
    [sym_subscript] = ACTIONS(673),
    [sym_active_char] = ACTIONS(673),
    [sym_comment_char] = ACTIONS(673),
    [sym_text] = ACTIONS(675),
  },
  [299] = {
    [anon_sym_LBRACK] = ACTIONS(677),
    [sym_escape] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_active_char] = ACTIONS(677),
    [sym_comment_char] = ACTIONS(677),
    [sym_text] = ACTIONS(679),
  },
  [300] = {
    [anon_sym_LBRACK] = ACTIONS(681),
    [sym_escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_comment_char] = ACTIONS(681),
    [sym_text] = ACTIONS(683),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(685),
    [sym_escape] = ACTIONS(685),
    [sym_begin_group] = ACTIONS(685),
    [sym_alignment_tab] = ACTIONS(685),
    [sym_parameter_char] = ACTIONS(685),
    [sym_superscript] = ACTIONS(685),
    [sym_subscript] = ACTIONS(685),
    [sym_active_char] = ACTIONS(685),
    [sym_comment_char] = ACTIONS(685),
    [sym_text] = ACTIONS(687),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(689),
    [sym_escape] = ACTIONS(689),
    [sym_begin_group] = ACTIONS(689),
    [sym_alignment_tab] = ACTIONS(689),
    [sym_parameter_char] = ACTIONS(689),
    [sym_superscript] = ACTIONS(689),
    [sym_subscript] = ACTIONS(689),
    [sym_active_char] = ACTIONS(689),
    [sym_comment_char] = ACTIONS(689),
    [sym_text] = ACTIONS(691),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(693),
    [sym_escape] = ACTIONS(693),
    [sym_begin_group] = ACTIONS(693),
    [sym_alignment_tab] = ACTIONS(693),
    [sym_parameter_char] = ACTIONS(693),
    [sym_superscript] = ACTIONS(693),
    [sym_subscript] = ACTIONS(693),
    [sym_active_char] = ACTIONS(693),
    [sym_comment_char] = ACTIONS(693),
    [sym_text] = ACTIONS(695),
  },
  [304] = {
    [anon_sym_LBRACK] = ACTIONS(697),
    [sym_escape] = ACTIONS(697),
    [sym_begin_group] = ACTIONS(697),
    [sym_alignment_tab] = ACTIONS(697),
    [sym_parameter_char] = ACTIONS(697),
    [sym_superscript] = ACTIONS(697),
    [sym_subscript] = ACTIONS(697),
    [sym_active_char] = ACTIONS(697),
    [sym_comment_char] = ACTIONS(697),
    [sym_text] = ACTIONS(699),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(701),
    [sym_escape] = ACTIONS(701),
    [sym_begin_group] = ACTIONS(701),
    [sym_alignment_tab] = ACTIONS(701),
    [sym_parameter_char] = ACTIONS(701),
    [sym_superscript] = ACTIONS(701),
    [sym_subscript] = ACTIONS(701),
    [sym_active_char] = ACTIONS(701),
    [sym_comment_char] = ACTIONS(701),
    [sym_text] = ACTIONS(703),
  },
  [306] = {
    [anon_sym_LBRACK] = ACTIONS(705),
    [sym_escape] = ACTIONS(705),
    [sym_begin_group] = ACTIONS(705),
    [sym_alignment_tab] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(705),
    [sym_superscript] = ACTIONS(705),
    [sym_subscript] = ACTIONS(705),
    [sym_active_char] = ACTIONS(705),
    [sym_comment_char] = ACTIONS(705),
    [sym_text] = ACTIONS(707),
  },
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_escape] = ACTIONS(709),
    [sym_begin_group] = ACTIONS(709),
    [sym_alignment_tab] = ACTIONS(709),
    [sym_parameter_char] = ACTIONS(709),
    [sym_superscript] = ACTIONS(709),
    [sym_subscript] = ACTIONS(709),
    [sym_active_char] = ACTIONS(709),
    [sym_comment_char] = ACTIONS(709),
    [sym_text] = ACTIONS(711),
  },
  [308] = {
    [anon_sym_LBRACK] = ACTIONS(713),
    [sym_escape] = ACTIONS(713),
    [sym_begin_group] = ACTIONS(713),
    [sym_alignment_tab] = ACTIONS(713),
    [sym_parameter_char] = ACTIONS(713),
    [sym_superscript] = ACTIONS(713),
    [sym_subscript] = ACTIONS(713),
    [sym_active_char] = ACTIONS(713),
    [sym_comment_char] = ACTIONS(713),
    [sym_text] = ACTIONS(715),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(717),
    [sym_escape] = ACTIONS(717),
    [sym_begin_group] = ACTIONS(717),
    [sym_alignment_tab] = ACTIONS(717),
    [sym_parameter_char] = ACTIONS(717),
    [sym_superscript] = ACTIONS(717),
    [sym_subscript] = ACTIONS(717),
    [sym_active_char] = ACTIONS(717),
    [sym_comment_char] = ACTIONS(717),
    [sym_text] = ACTIONS(719),
  },
  [310] = {
    [anon_sym_LBRACK] = ACTIONS(721),
    [sym_escape] = ACTIONS(721),
    [sym_begin_group] = ACTIONS(721),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(721),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(721),
    [sym_active_char] = ACTIONS(721),
    [sym_comment_char] = ACTIONS(721),
    [sym_text] = ACTIONS(723),
  },
  [311] = {
    [sym_escape] = ACTIONS(725),
    [sym_verbatim_token] = ACTIONS(725),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(727),
    [sym_escape] = ACTIONS(727),
    [sym_verbatim_token] = ACTIONS(727),
  },
  [313] = {
    [anon_sym_LBRACK] = ACTIONS(729),
    [sym_escape] = ACTIONS(729),
    [sym_verbatim_token] = ACTIONS(729),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(731),
    [sym_escape] = ACTIONS(731),
    [sym_verbatim_token] = ACTIONS(731),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(733),
    [sym_escape] = ACTIONS(733),
    [sym_verbatim_token] = ACTIONS(733),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(735),
    [sym_escape] = ACTIONS(735),
    [sym_verbatim_token] = ACTIONS(735),
  },
  [317] = {
    [anon_sym_LBRACK] = ACTIONS(737),
    [sym_escape] = ACTIONS(737),
    [sym_verbatim_token] = ACTIONS(737),
  },
  [318] = {
    [anon_sym_LBRACK] = ACTIONS(739),
    [sym_escape] = ACTIONS(739),
    [sym_begin_group] = ACTIONS(741),
    [sym_verbatim_token] = ACTIONS(739),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(743),
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
    [sym_text] = ACTIONS(743),
  },
  [320] = {
    [sym_begin_group] = ACTIONS(579),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(747),
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
    [sym_text] = ACTIONS(747),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(751),
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
    [sym_text] = ACTIONS(751),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(755),
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
    [sym_text] = ACTIONS(755),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(759),
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
    [sym_text] = ACTIONS(759),
  },
  [325] = {
    [ts_builtin_sym_end] = ACTIONS(763),
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
    [sym_text] = ACTIONS(763),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(767),
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
    [sym_text] = ACTIONS(767),
  },
  [327] = {
    [ts_builtin_sym_end] = ACTIONS(771),
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
    [sym_text] = ACTIONS(771),
  },
  [328] = {
    [ts_builtin_sym_end] = ACTIONS(775),
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
    [sym_text] = ACTIONS(775),
  },
  [329] = {
    [ts_builtin_sym_end] = ACTIONS(779),
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
    [sym_text] = ACTIONS(779),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(783),
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
    [sym_text] = ACTIONS(783),
  },
  [331] = {
    [ts_builtin_sym_end] = ACTIONS(787),
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
    [sym_text] = ACTIONS(787),
  },
  [332] = {
    [ts_builtin_sym_end] = ACTIONS(791),
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
    [sym_text] = ACTIONS(791),
  },
  [333] = {
    [ts_builtin_sym_end] = ACTIONS(795),
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
    [sym_text] = ACTIONS(795),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(799),
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
    [sym_text] = ACTIONS(799),
  },
  [335] = {
    [ts_builtin_sym_end] = ACTIONS(803),
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
    [sym_text] = ACTIONS(803),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(807),
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
    [sym_text] = ACTIONS(807),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(811),
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
    [sym_text] = ACTIONS(811),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(815),
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
    [sym_text] = ACTIONS(815),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(819),
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
    [sym_text] = ACTIONS(819),
  },
  [340] = {
    [ts_builtin_sym_end] = ACTIONS(823),
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
    [sym_text] = ACTIONS(823),
  },
  [341] = {
    [ts_builtin_sym_end] = ACTIONS(827),
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
    [sym_text] = ACTIONS(827),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(831),
    [anon_sym_LBRACK] = ACTIONS(833),
    [anon_sym_RBRACK] = ACTIONS(833),
    [sym_escape] = ACTIONS(833),
    [sym_begin_group] = ACTIONS(833),
    [sym_end_group] = ACTIONS(833),
    [sym_math_shift] = ACTIONS(833),
    [sym_alignment_tab] = ACTIONS(833),
    [sym_parameter_char] = ACTIONS(833),
    [sym_superscript] = ACTIONS(833),
    [sym_subscript] = ACTIONS(833),
    [sym_active_char] = ACTIONS(833),
    [sym_comment_char] = ACTIONS(833),
    [sym_text] = ACTIONS(831),
  },
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [sym_escape] = ACTIONS(837),
    [sym_begin_group] = ACTIONS(837),
    [sym_end_group] = ACTIONS(837),
    [sym_math_shift] = ACTIONS(837),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_parameter_char] = ACTIONS(837),
    [sym_superscript] = ACTIONS(837),
    [sym_subscript] = ACTIONS(837),
    [sym_active_char] = ACTIONS(837),
    [sym_comment_char] = ACTIONS(837),
    [sym_text] = ACTIONS(835),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(839),
    [anon_sym_LBRACK] = ACTIONS(841),
    [anon_sym_RBRACK] = ACTIONS(841),
    [sym_escape] = ACTIONS(841),
    [sym_begin_group] = ACTIONS(841),
    [sym_end_group] = ACTIONS(841),
    [sym_math_shift] = ACTIONS(841),
    [sym_alignment_tab] = ACTIONS(841),
    [sym_parameter_char] = ACTIONS(841),
    [sym_superscript] = ACTIONS(841),
    [sym_subscript] = ACTIONS(841),
    [sym_active_char] = ACTIONS(841),
    [sym_comment_char] = ACTIONS(841),
    [sym_text] = ACTIONS(839),
  },
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(843),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [sym_escape] = ACTIONS(845),
    [sym_begin_group] = ACTIONS(845),
    [sym_end_group] = ACTIONS(845),
    [sym_math_shift] = ACTIONS(845),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_parameter_char] = ACTIONS(845),
    [sym_superscript] = ACTIONS(845),
    [sym_subscript] = ACTIONS(845),
    [sym_active_char] = ACTIONS(845),
    [sym_comment_char] = ACTIONS(845),
    [sym_text] = ACTIONS(843),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(849),
    [anon_sym_RBRACK] = ACTIONS(849),
    [sym_escape] = ACTIONS(849),
    [sym_begin_group] = ACTIONS(849),
    [sym_end_group] = ACTIONS(849),
    [sym_math_shift] = ACTIONS(849),
    [sym_alignment_tab] = ACTIONS(849),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(849),
    [sym_subscript] = ACTIONS(849),
    [sym_active_char] = ACTIONS(849),
    [sym_comment_char] = ACTIONS(849),
    [sym_text] = ACTIONS(847),
  },
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(851),
    [anon_sym_LBRACK] = ACTIONS(853),
    [anon_sym_RBRACK] = ACTIONS(853),
    [sym_escape] = ACTIONS(853),
    [sym_begin_group] = ACTIONS(853),
    [sym_end_group] = ACTIONS(853),
    [sym_math_shift] = ACTIONS(853),
    [sym_alignment_tab] = ACTIONS(853),
    [sym_parameter_char] = ACTIONS(853),
    [sym_superscript] = ACTIONS(853),
    [sym_subscript] = ACTIONS(853),
    [sym_active_char] = ACTIONS(853),
    [sym_comment_char] = ACTIONS(853),
    [sym_text] = ACTIONS(851),
  },
  [348] = {
    [ts_builtin_sym_end] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [sym_escape] = ACTIONS(857),
    [sym_begin_group] = ACTIONS(857),
    [sym_end_group] = ACTIONS(857),
    [sym_math_shift] = ACTIONS(857),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(857),
    [sym_superscript] = ACTIONS(857),
    [sym_subscript] = ACTIONS(857),
    [sym_active_char] = ACTIONS(857),
    [sym_comment_char] = ACTIONS(857),
    [sym_text] = ACTIONS(855),
  },
  [349] = {
    [sym_end_group] = ACTIONS(859),
  },
  [350] = {
    [anon_sym_LBRACK] = ACTIONS(861),
    [sym_escape] = ACTIONS(861),
    [sym_begin_group] = ACTIONS(861),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(861),
    [sym_superscript] = ACTIONS(861),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [sym_comment_char] = ACTIONS(861),
    [sym_text] = ACTIONS(863),
  },
  [351] = {
    [anon_sym_LBRACK] = ACTIONS(865),
    [sym_escape] = ACTIONS(865),
    [sym_begin_group] = ACTIONS(865),
    [sym_alignment_tab] = ACTIONS(865),
    [sym_parameter_char] = ACTIONS(865),
    [sym_superscript] = ACTIONS(865),
    [sym_subscript] = ACTIONS(865),
    [sym_active_char] = ACTIONS(865),
    [sym_comment_char] = ACTIONS(865),
    [sym_text] = ACTIONS(867),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(869),
    [anon_sym_LBRACK] = ACTIONS(871),
    [anon_sym_RBRACK] = ACTIONS(871),
    [sym_escape] = ACTIONS(871),
    [sym_begin_group] = ACTIONS(871),
    [sym_end_group] = ACTIONS(871),
    [sym_math_shift] = ACTIONS(871),
    [sym_alignment_tab] = ACTIONS(871),
    [sym_parameter_char] = ACTIONS(871),
    [sym_superscript] = ACTIONS(871),
    [sym_subscript] = ACTIONS(871),
    [sym_active_char] = ACTIONS(871),
    [sym_comment_char] = ACTIONS(871),
    [sym_text] = ACTIONS(869),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(6),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(47),
  [29] = {.count = 1, .reusable = false}, SHIFT(48),
  [31] = {.count = 1, .reusable = false}, SHIFT(49),
  [33] = {.count = 1, .reusable = false}, SHIFT(50),
  [35] = {.count = 1, .reusable = false}, SHIFT(51),
  [37] = {.count = 1, .reusable = false}, SHIFT(52),
  [39] = {.count = 1, .reusable = false}, SHIFT(53),
  [41] = {.count = 1, .reusable = false}, SHIFT(54),
  [43] = {.count = 1, .reusable = false}, SHIFT(55),
  [45] = {.count = 1, .reusable = false}, SHIFT(56),
  [47] = {.count = 1, .reusable = false}, SHIFT(57),
  [49] = {.count = 1, .reusable = false}, SHIFT(58),
  [51] = {.count = 1, .reusable = false}, SHIFT(60),
  [53] = {.count = 1, .reusable = false}, SHIFT(61),
  [55] = {.count = 1, .reusable = false}, SHIFT(62),
  [57] = {.count = 1, .reusable = false}, SHIFT(63),
  [59] = {.count = 1, .reusable = true}, SHIFT(63),
  [61] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [63] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode, 1),
  [65] = {.count = 1, .reusable = true}, SHIFT(68),
  [67] = {.count = 1, .reusable = true}, SHIFT(69),
  [69] = {.count = 1, .reusable = false}, SHIFT(69),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = false}, SHIFT(70),
  [75] = {.count = 1, .reusable = false}, SHIFT(107),
  [77] = {.count = 1, .reusable = false}, SHIFT(110),
  [79] = {.count = 1, .reusable = false}, SHIFT(114),
  [81] = {.count = 1, .reusable = false}, SHIFT(117),
  [83] = {.count = 1, .reusable = false}, SHIFT(120),
  [85] = {.count = 1, .reusable = false}, SHIFT(123),
  [87] = {.count = 1, .reusable = false}, SHIFT(126),
  [89] = {.count = 1, .reusable = false}, SHIFT(129),
  [91] = {.count = 1, .reusable = false}, SHIFT(132),
  [93] = {.count = 1, .reusable = true}, SHIFT(133),
  [95] = {.count = 1, .reusable = false}, SHIFT(135),
  [97] = {.count = 1, .reusable = true}, SHIFT(139),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [103] = {.count = 1, .reusable = true}, SHIFT(2),
  [105] = {.count = 1, .reusable = true}, SHIFT(141),
  [107] = {.count = 1, .reusable = true}, SHIFT(4),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(150),
  [115] = {.count = 1, .reusable = false}, SHIFT(152),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [119] = {.count = 1, .reusable = false}, SHIFT(156),
  [121] = {.count = 1, .reusable = false}, SHIFT(158),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [151] = {.count = 1, .reusable = false}, SHIFT(160),
  [153] = {.count = 1, .reusable = false}, SHIFT(162),
  [155] = {.count = 1, .reusable = false}, SHIFT(164),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_math_mode, 1),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [161] = {.count = 1, .reusable = false}, SHIFT(170),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [171] = {.count = 1, .reusable = false}, SHIFT(172),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 2),
  [177] = {.count = 1, .reusable = true}, SHIFT(173),
  [179] = {.count = 1, .reusable = true}, SHIFT(176),
  [181] = {.count = 1, .reusable = true}, SHIFT(177),
  [183] = {.count = 1, .reusable = true}, SHIFT(178),
  [185] = {.count = 1, .reusable = true}, SHIFT(179),
  [187] = {.count = 1, .reusable = true}, SHIFT(180),
  [189] = {.count = 1, .reusable = true}, SHIFT(181),
  [191] = {.count = 1, .reusable = true}, SHIFT(182),
  [193] = {.count = 1, .reusable = true}, SHIFT(183),
  [195] = {.count = 1, .reusable = true}, SHIFT(184),
  [197] = {.count = 1, .reusable = true}, SHIFT(185),
  [199] = {.count = 1, .reusable = true}, SHIFT(186),
  [201] = {.count = 1, .reusable = true}, SHIFT(187),
  [203] = {.count = 1, .reusable = true}, SHIFT(188),
  [205] = {.count = 1, .reusable = true}, SHIFT(189),
  [207] = {.count = 1, .reusable = true}, SHIFT(190),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 2),
  [213] = {.count = 1, .reusable = true}, SHIFT(191),
  [215] = {.count = 1, .reusable = true}, SHIFT(172),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(192),
  [223] = {.count = 1, .reusable = false}, SHIFT(194),
  [225] = {.count = 1, .reusable = true}, SHIFT(195),
  [227] = {.count = 1, .reusable = false}, SHIFT(196),
  [229] = {.count = 1, .reusable = false}, SHIFT(197),
  [231] = {.count = 1, .reusable = true}, SHIFT(200),
  [233] = {.count = 1, .reusable = false}, SHIFT(201),
  [235] = {.count = 1, .reusable = true}, SHIFT(202),
  [237] = {.count = 1, .reusable = false}, SHIFT(203),
  [239] = {.count = 1, .reusable = true}, SHIFT(204),
  [241] = {.count = 1, .reusable = false}, SHIFT(205),
  [243] = {.count = 1, .reusable = true}, SHIFT(206),
  [245] = {.count = 1, .reusable = false}, SHIFT(207),
  [247] = {.count = 1, .reusable = true}, SHIFT(208),
  [249] = {.count = 1, .reusable = false}, SHIFT(209),
  [251] = {.count = 1, .reusable = true}, SHIFT(210),
  [253] = {.count = 1, .reusable = false}, SHIFT(211),
  [255] = {.count = 1, .reusable = false}, SHIFT(212),
  [257] = {.count = 1, .reusable = false}, SHIFT(215),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 2),
  [261] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 2),
  [263] = {.count = 1, .reusable = false}, SHIFT(219),
  [265] = {.count = 1, .reusable = false}, SHIFT(220),
  [267] = {.count = 1, .reusable = false}, SHIFT(221),
  [269] = {.count = 1, .reusable = false}, SHIFT(222),
  [271] = {.count = 1, .reusable = false}, SHIFT(223),
  [273] = {.count = 1, .reusable = false}, SHIFT(224),
  [275] = {.count = 1, .reusable = false}, SHIFT(225),
  [277] = {.count = 1, .reusable = false}, SHIFT(226),
  [279] = {.count = 1, .reusable = false}, SHIFT(227),
  [281] = {.count = 1, .reusable = false}, SHIFT(228),
  [283] = {.count = 1, .reusable = false}, SHIFT(229),
  [285] = {.count = 1, .reusable = false}, SHIFT(230),
  [287] = {.count = 1, .reusable = false}, SHIFT(231),
  [289] = {.count = 1, .reusable = false}, SHIFT(232),
  [291] = {.count = 1, .reusable = false}, SHIFT(233),
  [293] = {.count = 1, .reusable = false}, SHIFT(234),
  [295] = {.count = 1, .reusable = false}, SHIFT(235),
  [297] = {.count = 1, .reusable = false}, SHIFT(236),
  [299] = {.count = 1, .reusable = false}, SHIFT(237),
  [301] = {.count = 1, .reusable = false}, SHIFT(238),
  [303] = {.count = 1, .reusable = false}, SHIFT(239),
  [305] = {.count = 1, .reusable = false}, SHIFT(240),
  [307] = {.count = 1, .reusable = false}, SHIFT(241),
  [309] = {.count = 1, .reusable = false}, SHIFT(242),
  [311] = {.count = 1, .reusable = false}, SHIFT(243),
  [313] = {.count = 1, .reusable = false}, SHIFT(244),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2),
  [319] = {.count = 1, .reusable = true}, SHIFT(244),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [325] = {.count = 1, .reusable = false}, SHIFT(246),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [339] = {.count = 1, .reusable = true}, SHIFT(251),
  [341] = {.count = 1, .reusable = true}, SHIFT(252),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [351] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [353] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [356] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [359] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [362] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [365] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [368] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [371] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [374] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [377] = {.count = 1, .reusable = false}, SHIFT(255),
  [379] = {.count = 1, .reusable = false}, SHIFT(256),
  [381] = {.count = 1, .reusable = false}, SHIFT(257),
  [383] = {.count = 1, .reusable = false}, SHIFT(258),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [389] = {.count = 1, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [395] = {.count = 1, .reusable = false}, SHIFT(259),
  [397] = {.count = 1, .reusable = true}, SHIFT(255),
  [399] = {.count = 1, .reusable = false}, SHIFT(261),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 3),
  [411] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 3),
  [413] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [416] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(60),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(61),
  [422] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(63),
  [427] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(8),
  [433] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(63),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [438] = {.count = 1, .reusable = true}, SHIFT(265),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 3),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 3),
  [444] = {.count = 1, .reusable = true}, SHIFT(266),
  [446] = {.count = 1, .reusable = true}, SHIFT(267),
  [448] = {.count = 1, .reusable = true}, SHIFT(268),
  [450] = {.count = 1, .reusable = true}, SHIFT(269),
  [452] = {.count = 1, .reusable = true}, SHIFT(270),
  [454] = {.count = 1, .reusable = true}, SHIFT(271),
  [456] = {.count = 1, .reusable = true}, SHIFT(272),
  [458] = {.count = 1, .reusable = true}, SHIFT(273),
  [460] = {.count = 1, .reusable = true}, SHIFT(274),
  [462] = {.count = 1, .reusable = true}, SHIFT(275),
  [464] = {.count = 1, .reusable = true}, SHIFT(276),
  [466] = {.count = 1, .reusable = true}, SHIFT(277),
  [468] = {.count = 1, .reusable = true}, SHIFT(278),
  [470] = {.count = 1, .reusable = true}, SHIFT(279),
  [472] = {.count = 1, .reusable = true}, SHIFT(280),
  [474] = {.count = 1, .reusable = true}, SHIFT(281),
  [476] = {.count = 1, .reusable = true}, SHIFT(282),
  [478] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 3),
  [480] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 3),
  [482] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2), SHIFT_REPEAT(194),
  [487] = {.count = 1, .reusable = true}, SHIFT(283),
  [489] = {.count = 1, .reusable = true}, SHIFT(286),
  [491] = {.count = 1, .reusable = true}, SHIFT(287),
  [493] = {.count = 1, .reusable = true}, SHIFT(288),
  [495] = {.count = 1, .reusable = true}, SHIFT(289),
  [497] = {.count = 1, .reusable = true}, SHIFT(290),
  [499] = {.count = 1, .reusable = true}, SHIFT(291),
  [501] = {.count = 1, .reusable = false}, SHIFT(292),
  [503] = {.count = 1, .reusable = true}, SHIFT(293),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 3),
  [513] = {.count = 1, .reusable = true}, SHIFT(294),
  [515] = {.count = 1, .reusable = true}, SHIFT(295),
  [517] = {.count = 1, .reusable = true}, SHIFT(296),
  [519] = {.count = 1, .reusable = true}, SHIFT(297),
  [521] = {.count = 1, .reusable = true}, SHIFT(298),
  [523] = {.count = 1, .reusable = true}, SHIFT(299),
  [525] = {.count = 1, .reusable = true}, SHIFT(300),
  [527] = {.count = 1, .reusable = true}, SHIFT(301),
  [529] = {.count = 1, .reusable = true}, SHIFT(302),
  [531] = {.count = 1, .reusable = true}, SHIFT(303),
  [533] = {.count = 1, .reusable = true}, SHIFT(304),
  [535] = {.count = 1, .reusable = true}, SHIFT(305),
  [537] = {.count = 1, .reusable = true}, SHIFT(306),
  [539] = {.count = 1, .reusable = true}, SHIFT(307),
  [541] = {.count = 1, .reusable = true}, SHIFT(308),
  [543] = {.count = 1, .reusable = true}, SHIFT(309),
  [545] = {.count = 1, .reusable = true}, SHIFT(310),
  [547] = {.count = 1, .reusable = true}, SHIFT(311),
  [549] = {.count = 1, .reusable = true}, SHIFT(312),
  [551] = {.count = 1, .reusable = true}, SHIFT(313),
  [553] = {.count = 1, .reusable = true}, SHIFT(314),
  [555] = {.count = 1, .reusable = true}, SHIFT(315),
  [557] = {.count = 1, .reusable = true}, SHIFT(316),
  [559] = {.count = 1, .reusable = true}, SHIFT(317),
  [561] = {.count = 1, .reusable = true}, SHIFT(318),
  [563] = {.count = 1, .reusable = true}, SHIFT(319),
  [565] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [577] = {.count = 1, .reusable = true}, SHIFT(321),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 4),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 4),
  [587] = {.count = 1, .reusable = false}, SHIFT(322),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 4),
  [591] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 4),
  [593] = {.count = 1, .reusable = false}, SHIFT(323),
  [595] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [599] = {.count = 1, .reusable = true}, SHIFT(322),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [609] = {.count = 1, .reusable = true}, SHIFT(324),
  [611] = {.count = 1, .reusable = true}, SHIFT(325),
  [613] = {.count = 1, .reusable = true}, SHIFT(326),
  [615] = {.count = 1, .reusable = true}, SHIFT(327),
  [617] = {.count = 1, .reusable = true}, SHIFT(328),
  [619] = {.count = 1, .reusable = true}, SHIFT(329),
  [621] = {.count = 1, .reusable = true}, SHIFT(330),
  [623] = {.count = 1, .reusable = true}, SHIFT(331),
  [625] = {.count = 1, .reusable = true}, SHIFT(332),
  [627] = {.count = 1, .reusable = true}, SHIFT(333),
  [629] = {.count = 1, .reusable = true}, SHIFT(334),
  [631] = {.count = 1, .reusable = true}, SHIFT(335),
  [633] = {.count = 1, .reusable = true}, SHIFT(336),
  [635] = {.count = 1, .reusable = true}, SHIFT(337),
  [637] = {.count = 1, .reusable = true}, SHIFT(338),
  [639] = {.count = 1, .reusable = true}, SHIFT(339),
  [641] = {.count = 1, .reusable = true}, SHIFT(340),
  [643] = {.count = 1, .reusable = true}, SHIFT(341),
  [645] = {.count = 1, .reusable = true}, SHIFT(342),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 4),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 4),
  [651] = {.count = 1, .reusable = true}, SHIFT(343),
  [653] = {.count = 1, .reusable = true}, SHIFT(344),
  [655] = {.count = 1, .reusable = true}, SHIFT(345),
  [657] = {.count = 1, .reusable = true}, SHIFT(346),
  [659] = {.count = 1, .reusable = true}, SHIFT(347),
  [661] = {.count = 1, .reusable = true}, SHIFT(348),
  [663] = {.count = 1, .reusable = true}, SHIFT(349),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align, 4),
  [667] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align, 4),
  [669] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align_star, 4),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align_star, 4),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray, 4),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray, 4),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation, 4),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation, 4),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation_star, 4),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation_star, 4),
  [689] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign, 4),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign, 4),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign_star, 4),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign_star, 4),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather, 4),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather, 4),
  [701] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather_star, 4),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather_star, 4),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline, 4),
  [707] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline, 4),
  [709] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline_star, 4),
  [711] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline_star, 4),
  [713] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split, 4),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split, 4),
  [717] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split_star, 4),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split_star, 4),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_begin_math, 4),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_begin_math, 4),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_begin_verbatim, 4),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim, 4),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [731] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim, 4),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [735] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim, 4),
  [737] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [739] = {.count = 1, .reusable = false}, REDUCE(sym_begin_lstlisting, 4),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_begin_minted, 4),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [749] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 5),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 5),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 5),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 5),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_end_align, 4),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_end_align, 4),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_end_align_star, 4),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_end_align_star, 4),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat, 4),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat, 4),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat_star, 4),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat_star, 4),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray, 4),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray, 4),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray_star, 4),
  [781] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray_star, 4),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation, 4),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation, 4),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation_star, 4),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation_star, 4),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign, 4),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign, 4),
  [795] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign_star, 4),
  [797] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign_star, 4),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather, 4),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather, 4),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather_star, 4),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather_star, 4),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline, 4),
  [809] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline, 4),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline_star, 4),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline_star, 4),
  [815] = {.count = 1, .reusable = true}, REDUCE(sym_end_split, 4),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym_end_split, 4),
  [819] = {.count = 1, .reusable = true}, REDUCE(sym_end_split_star, 4),
  [821] = {.count = 1, .reusable = false}, REDUCE(sym_end_split_star, 4),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_end_math, 4),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym_end_math, 4),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_end_verbatim, 4),
  [829] = {.count = 1, .reusable = false}, REDUCE(sym_end_verbatim, 4),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim, 4),
  [833] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim, 4),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim_star, 4),
  [837] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim_star, 4),
  [839] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim, 4),
  [841] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim, 4),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [845] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim, 4),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim, 4),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [853] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_end_lstlisting, 4),
  [857] = {.count = 1, .reusable = false}, REDUCE(sym_end_lstlisting, 4),
  [859] = {.count = 1, .reusable = true}, SHIFT(352),
  [861] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat, 5),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat, 5),
  [865] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat_star, 5),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat_star, 5),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_end_minted, 4),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_end_minted, 4),
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
