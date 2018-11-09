#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
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
  sym__escape = 41,
  sym_begin_group = 42,
  sym_end_group = 43,
  sym_math_shift = 44,
  sym_alignment_tab = 45,
  sym_parameter_char = 46,
  sym_superscript = 47,
  sym_subscript = 48,
  sym__name = 49,
  sym_active_char = 50,
  sym_comment_char = 51,
  sym_text = 52,
  sym_number = 53,
  sym_verbatim_token = 54,
  sym_magic = 55,
  sym_comment_text = 56,
  sym_document = 57,
  sym__text_mode = 58,
  sym__math_mode = 59,
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
  [sym__escape] = "_escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym__name] = "_name",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym_verbatim_token] = "verbatim_token",
  [sym_magic] = "magic",
  [sym_comment_text] = "comment_text",
  [sym_document] = "document",
  [sym__text_mode] = "_text_mode",
  [sym__math_mode] = "_math_mode",
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
  [sym__escape] = {
    .visible = false,
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
  [sym__name] = {
    .visible = false,
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
  [sym__text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym__math_mode] = {
    .visible = false,
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'V')
        ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'V')
        ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__escape);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(48);
      if (lookahead == 'l')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'h')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(103);
      if (lookahead == 'u')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(123);
      if (lookahead == 'd')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(130);
      if (lookahead == 'p')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(169);
      if (lookahead == 't')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(186);
      if (lookahead == 's')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'u')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
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
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(216);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(242);
      if (lookahead == '!')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(249);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(242);
      if (lookahead == '!')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(249);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(249);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(249);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(249);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(247);
      if (lookahead != 0)
        ADVANCE(249);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(247);
      if (lookahead != 0)
        ADVANCE(248);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(242);
      if (lookahead == '!')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(249);
      END_STATE();
    case 251:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(251);
      END_STATE();
    case 252:
      if (lookahead == '\n')
        ADVANCE(253);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_verbatim_token);
      END_STATE();
    case 254:
      if (lookahead == '\n')
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(253);
      END_STATE();
    case 255:
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
        SKIP(255);
      END_STATE();
    case 256:
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
        ADVANCE(257);
      ADVANCE(219);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(257);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(219);
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
        ADVANCE(253);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(253);
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
  [7] = {.lex_state = 241},
  [8] = {.lex_state = 251},
  [9] = {.lex_state = 217},
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
  [26] = {.lex_state = 252},
  [27] = {.lex_state = 254},
  [28] = {.lex_state = 254},
  [29] = {.lex_state = 254},
  [30] = {.lex_state = 254},
  [31] = {.lex_state = 254},
  [32] = {.lex_state = 254},
  [33] = {.lex_state = 254},
  [34] = {.lex_state = 255},
  [35] = {.lex_state = 217},
  [36] = {.lex_state = 255},
  [37] = {.lex_state = 256},
  [38] = {.lex_state = 255},
  [39] = {.lex_state = 255},
  [40] = {.lex_state = 255},
  [41] = {.lex_state = 255},
  [42] = {.lex_state = 256},
  [43] = {.lex_state = 255},
  [44] = {.lex_state = 220},
  [45] = {.lex_state = 217},
  [46] = {.lex_state = 217},
  [47] = {.lex_state = 217},
  [48] = {.lex_state = 256},
  [49] = {.lex_state = 255},
  [50] = {.lex_state = 255},
  [51] = {.lex_state = 255},
  [52] = {.lex_state = 255},
  [53] = {.lex_state = 255},
  [54] = {.lex_state = 256},
  [55] = {.lex_state = 255},
  [56] = {.lex_state = 256},
  [57] = {.lex_state = 256},
  [58] = {.lex_state = 238},
  [59] = {.lex_state = 222},
  [60] = {.lex_state = 238},
  [61] = {.lex_state = 217},
  [62] = {.lex_state = 217},
  [63] = {.lex_state = 255},
  [64] = {.lex_state = 220},
  [65] = {.lex_state = 217},
  [66] = {.lex_state = 256},
  [67] = {.lex_state = 256},
  [68] = {.lex_state = 258},
  [69] = {.lex_state = 256},
  [70] = {.lex_state = 255},
  [71] = {.lex_state = 217},
  [72] = {.lex_state = 255},
  [73] = {.lex_state = 217},
  [74] = {.lex_state = 255},
  [75] = {.lex_state = 217},
  [76] = {.lex_state = 255},
  [77] = {.lex_state = 217},
  [78] = {.lex_state = 255},
  [79] = {.lex_state = 217},
  [80] = {.lex_state = 255},
  [81] = {.lex_state = 217},
  [82] = {.lex_state = 255},
  [83] = {.lex_state = 217},
  [84] = {.lex_state = 255},
  [85] = {.lex_state = 217},
  [86] = {.lex_state = 255},
  [87] = {.lex_state = 217},
  [88] = {.lex_state = 255},
  [89] = {.lex_state = 217},
  [90] = {.lex_state = 255},
  [91] = {.lex_state = 217},
  [92] = {.lex_state = 255},
  [93] = {.lex_state = 217},
  [94] = {.lex_state = 255},
  [95] = {.lex_state = 217},
  [96] = {.lex_state = 255},
  [97] = {.lex_state = 217},
  [98] = {.lex_state = 255},
  [99] = {.lex_state = 217},
  [100] = {.lex_state = 255},
  [101] = {.lex_state = 217},
  [102] = {.lex_state = 256},
  [103] = {.lex_state = 255},
  [104] = {.lex_state = 217},
  [105] = {.lex_state = 260},
  [106] = {.lex_state = 256},
  [107] = {.lex_state = 255},
  [108] = {.lex_state = 252},
  [109] = {.lex_state = 255},
  [110] = {.lex_state = 252},
  [111] = {.lex_state = 220},
  [112] = {.lex_state = 252},
  [113] = {.lex_state = 255},
  [114] = {.lex_state = 252},
  [115] = {.lex_state = 252},
  [116] = {.lex_state = 255},
  [117] = {.lex_state = 252},
  [118] = {.lex_state = 252},
  [119] = {.lex_state = 255},
  [120] = {.lex_state = 252},
  [121] = {.lex_state = 252},
  [122] = {.lex_state = 255},
  [123] = {.lex_state = 252},
  [124] = {.lex_state = 252},
  [125] = {.lex_state = 255},
  [126] = {.lex_state = 252},
  [127] = {.lex_state = 252},
  [128] = {.lex_state = 255},
  [129] = {.lex_state = 252},
  [130] = {.lex_state = 252},
  [131] = {.lex_state = 238},
  [132] = {.lex_state = 252},
  [133] = {.lex_state = 258},
  [134] = {.lex_state = 256},
  [135] = {.lex_state = 255},
  [136] = {.lex_state = 217},
  [137] = {.lex_state = 264},
  [138] = {.lex_state = 217},
  [139] = {.lex_state = 217},
  [140] = {.lex_state = 256},
  [141] = {.lex_state = 255},
  [142] = {.lex_state = 220},
  [143] = {.lex_state = 256},
  [144] = {.lex_state = 255},
  [145] = {.lex_state = 256},
  [146] = {.lex_state = 256},
  [147] = {.lex_state = 255},
  [148] = {.lex_state = 371},
  [149] = {.lex_state = 372},
  [150] = {.lex_state = 256},
  [151] = {.lex_state = 256},
  [152] = {.lex_state = 220},
  [153] = {.lex_state = 217},
  [154] = {.lex_state = 373},
  [155] = {.lex_state = 217},
  [156] = {.lex_state = 374},
  [157] = {.lex_state = 217},
  [158] = {.lex_state = 256},
  [159] = {.lex_state = 238},
  [160] = {.lex_state = 256},
  [161] = {.lex_state = 238},
  [162] = {.lex_state = 255},
  [163] = {.lex_state = 217},
  [164] = {.lex_state = 256},
  [165] = {.lex_state = 217},
  [166] = {.lex_state = 256},
  [167] = {.lex_state = 220},
  [168] = {.lex_state = 256},
  [169] = {.lex_state = 217},
  [170] = {.lex_state = 255},
  [171] = {.lex_state = 375},
  [172] = {.lex_state = 256},
  [173] = {.lex_state = 217},
  [174] = {.lex_state = 375},
  [175] = {.lex_state = 375},
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
  [191] = {.lex_state = 256},
  [192] = {.lex_state = 252},
  [193] = {.lex_state = 375},
  [194] = {.lex_state = 252},
  [195] = {.lex_state = 252},
  [196] = {.lex_state = 252},
  [197] = {.lex_state = 220},
  [198] = {.lex_state = 375},
  [199] = {.lex_state = 252},
  [200] = {.lex_state = 375},
  [201] = {.lex_state = 252},
  [202] = {.lex_state = 375},
  [203] = {.lex_state = 252},
  [204] = {.lex_state = 375},
  [205] = {.lex_state = 252},
  [206] = {.lex_state = 375},
  [207] = {.lex_state = 252},
  [208] = {.lex_state = 375},
  [209] = {.lex_state = 252},
  [210] = {.lex_state = 252},
  [211] = {.lex_state = 238},
  [212] = {.lex_state = 255},
  [213] = {.lex_state = 252},
  [214] = {.lex_state = 256},
  [215] = {.lex_state = 256},
  [216] = {.lex_state = 217},
  [217] = {.lex_state = 255},
  [218] = {.lex_state = 255},
  [219] = {.lex_state = 255},
  [220] = {.lex_state = 255},
  [221] = {.lex_state = 255},
  [222] = {.lex_state = 255},
  [223] = {.lex_state = 255},
  [224] = {.lex_state = 255},
  [225] = {.lex_state = 255},
  [226] = {.lex_state = 255},
  [227] = {.lex_state = 255},
  [228] = {.lex_state = 255},
  [229] = {.lex_state = 255},
  [230] = {.lex_state = 255},
  [231] = {.lex_state = 255},
  [232] = {.lex_state = 255},
  [233] = {.lex_state = 255},
  [234] = {.lex_state = 255},
  [235] = {.lex_state = 255},
  [236] = {.lex_state = 255},
  [237] = {.lex_state = 255},
  [238] = {.lex_state = 255},
  [239] = {.lex_state = 255},
  [240] = {.lex_state = 255},
  [241] = {.lex_state = 255},
  [242] = {.lex_state = 255},
  [243] = {.lex_state = 256},
  [244] = {.lex_state = 255},
  [245] = {.lex_state = 255},
  [246] = {.lex_state = 220},
  [247] = {.lex_state = 256},
  [248] = {.lex_state = 256},
  [249] = {.lex_state = 372},
  [250] = {.lex_state = 240},
  [251] = {.lex_state = 256},
  [252] = {.lex_state = 220},
  [253] = {.lex_state = 256},
  [254] = {.lex_state = 373},
  [255] = {.lex_state = 256},
  [256] = {.lex_state = 374},
  [257] = {.lex_state = 256},
  [258] = {.lex_state = 238},
  [259] = {.lex_state = 255},
  [260] = {.lex_state = 256},
  [261] = {.lex_state = 256},
  [262] = {.lex_state = 220},
  [263] = {.lex_state = 255},
  [264] = {.lex_state = 255},
  [265] = {.lex_state = 255},
  [266] = {.lex_state = 255},
  [267] = {.lex_state = 255},
  [268] = {.lex_state = 255},
  [269] = {.lex_state = 255},
  [270] = {.lex_state = 255},
  [271] = {.lex_state = 255},
  [272] = {.lex_state = 255},
  [273] = {.lex_state = 255},
  [274] = {.lex_state = 255},
  [275] = {.lex_state = 255},
  [276] = {.lex_state = 255},
  [277] = {.lex_state = 255},
  [278] = {.lex_state = 255},
  [279] = {.lex_state = 255},
  [280] = {.lex_state = 255},
  [281] = {.lex_state = 255},
  [282] = {.lex_state = 256},
  [283] = {.lex_state = 252},
  [284] = {.lex_state = 255},
  [285] = {.lex_state = 255},
  [286] = {.lex_state = 255},
  [287] = {.lex_state = 255},
  [288] = {.lex_state = 255},
  [289] = {.lex_state = 255},
  [290] = {.lex_state = 252},
  [291] = {.lex_state = 481},
  [292] = {.lex_state = 217},
  [293] = {.lex_state = 217},
  [294] = {.lex_state = 255},
  [295] = {.lex_state = 255},
  [296] = {.lex_state = 217},
  [297] = {.lex_state = 217},
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
  [309] = {.lex_state = 252},
  [310] = {.lex_state = 254},
  [311] = {.lex_state = 254},
  [312] = {.lex_state = 254},
  [313] = {.lex_state = 254},
  [314] = {.lex_state = 254},
  [315] = {.lex_state = 254},
  [316] = {.lex_state = 488},
  [317] = {.lex_state = 256},
  [318] = {.lex_state = 255},
  [319] = {.lex_state = 256},
  [320] = {.lex_state = 256},
  [321] = {.lex_state = 256},
  [322] = {.lex_state = 256},
  [323] = {.lex_state = 256},
  [324] = {.lex_state = 256},
  [325] = {.lex_state = 256},
  [326] = {.lex_state = 256},
  [327] = {.lex_state = 256},
  [328] = {.lex_state = 256},
  [329] = {.lex_state = 256},
  [330] = {.lex_state = 256},
  [331] = {.lex_state = 256},
  [332] = {.lex_state = 256},
  [333] = {.lex_state = 256},
  [334] = {.lex_state = 256},
  [335] = {.lex_state = 256},
  [336] = {.lex_state = 256},
  [337] = {.lex_state = 256},
  [338] = {.lex_state = 256},
  [339] = {.lex_state = 256},
  [340] = {.lex_state = 256},
  [341] = {.lex_state = 256},
  [342] = {.lex_state = 256},
  [343] = {.lex_state = 256},
  [344] = {.lex_state = 256},
  [345] = {.lex_state = 256},
  [346] = {.lex_state = 256},
  [347] = {.lex_state = 255},
  [348] = {.lex_state = 217},
  [349] = {.lex_state = 217},
  [350] = {.lex_state = 256},
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
    [sym__escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym__name] = ACTIONS(3),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_magic] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(8),
    [sym__text_mode] = STATE(45),
    [sym_parameter] = STATE(45),
    [sym_text_environment] = STATE(45),
    [sym_display_math] = STATE(45),
    [sym_inline_math] = STATE(45),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(45),
    [sym_escaped] = STATE(45),
    [sym_command] = STATE(45),
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
    [sym_text_group] = STATE(45),
    [sym_opt_text_group] = STATE(45),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(45),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(45),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
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
    [sym__escape] = ACTIONS(23),
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
    [sym__name] = ACTIONS(47),
  },
  [4] = {
    [sym__text_mode] = STATE(58),
    [sym_parameter] = STATE(58),
    [sym_text_environment] = STATE(58),
    [sym_display_math] = STATE(58),
    [sym_inline_math] = STATE(58),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(58),
    [sym_escaped] = STATE(58),
    [sym_command] = STATE(58),
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
    [sym_text_group] = STATE(58),
    [sym_opt_text_group] = STATE(58),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(58),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(58),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(49),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(51),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(51),
    [sym_subscript] = ACTIONS(51),
    [sym_active_char] = ACTIONS(51),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(53),
  },
  [5] = {
    [sym__math_mode] = STATE(65),
    [sym_parameter] = STATE(65),
    [sym_math_environment] = STATE(65),
    [sym_escaped] = STATE(65),
    [sym_command] = STATE(65),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(65),
    [sym_opt_math_group] = STATE(65),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(65),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(65),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(61),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(61),
    [sym_active_char] = ACTIONS(61),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(63),
  },
  [6] = {
    [sym_number] = ACTIONS(65),
  },
  [7] = {
    [sym_magic] = ACTIONS(67),
    [sym_comment_text] = ACTIONS(69),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(71),
  },
  [9] = {
    [sym__math_mode] = STATE(71),
    [sym_parameter] = STATE(71),
    [sym_math_environment] = STATE(71),
    [sym_end_align] = STATE(69),
    [sym_escaped] = STATE(71),
    [sym_command] = STATE(71),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end_token] = STATE(70),
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
    [sym_math_group] = STATE(71),
    [sym_opt_math_group] = STATE(71),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(71),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [10] = {
    [sym__math_mode] = STATE(73),
    [sym_parameter] = STATE(73),
    [sym_math_environment] = STATE(73),
    [sym_end_align_star] = STATE(69),
    [sym_escaped] = STATE(73),
    [sym_command] = STATE(73),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(73),
    [sym_opt_math_group] = STATE(73),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(73),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(73),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(79),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(79),
    [sym_subscript] = ACTIONS(79),
    [sym_active_char] = ACTIONS(79),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(81),
  },
  [11] = {
    [sym__math_mode] = STATE(75),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_end_alignat] = STATE(69),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(85),
  },
  [12] = {
    [sym__math_mode] = STATE(77),
    [sym_parameter] = STATE(77),
    [sym_math_environment] = STATE(77),
    [sym_end_alignat_star] = STATE(69),
    [sym_escaped] = STATE(77),
    [sym_command] = STATE(77),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(77),
    [sym_opt_math_group] = STATE(77),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(77),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(77),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(87),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(87),
    [sym_subscript] = ACTIONS(87),
    [sym_active_char] = ACTIONS(87),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(89),
  },
  [13] = {
    [sym__math_mode] = STATE(79),
    [sym_parameter] = STATE(79),
    [sym_math_environment] = STATE(79),
    [sym_end_eqnarray] = STATE(69),
    [sym_escaped] = STATE(79),
    [sym_command] = STATE(79),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(79),
    [sym_opt_math_group] = STATE(79),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(79),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(79),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(91),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(91),
    [sym_subscript] = ACTIONS(91),
    [sym_active_char] = ACTIONS(91),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(93),
  },
  [14] = {
    [sym__math_mode] = STATE(81),
    [sym_parameter] = STATE(81),
    [sym_math_environment] = STATE(81),
    [sym_end_eqnarray_star] = STATE(69),
    [sym_escaped] = STATE(81),
    [sym_command] = STATE(81),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(81),
    [sym_opt_math_group] = STATE(81),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(81),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(81),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(95),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(95),
    [sym_subscript] = ACTIONS(95),
    [sym_active_char] = ACTIONS(95),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(97),
  },
  [15] = {
    [sym__math_mode] = STATE(83),
    [sym_parameter] = STATE(83),
    [sym_math_environment] = STATE(83),
    [sym_end_equation] = STATE(69),
    [sym_escaped] = STATE(83),
    [sym_command] = STATE(83),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(83),
    [sym_opt_math_group] = STATE(83),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(83),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(99),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(99),
    [sym_subscript] = ACTIONS(99),
    [sym_active_char] = ACTIONS(99),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(101),
  },
  [16] = {
    [sym__math_mode] = STATE(85),
    [sym_parameter] = STATE(85),
    [sym_math_environment] = STATE(85),
    [sym_end_equation_star] = STATE(69),
    [sym_escaped] = STATE(85),
    [sym_command] = STATE(85),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(85),
    [sym_opt_math_group] = STATE(85),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(85),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(85),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(105),
  },
  [17] = {
    [sym__math_mode] = STATE(87),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_end_flalign] = STATE(69),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(107),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(107),
    [sym_subscript] = ACTIONS(107),
    [sym_active_char] = ACTIONS(107),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(109),
  },
  [18] = {
    [sym__math_mode] = STATE(89),
    [sym_parameter] = STATE(89),
    [sym_math_environment] = STATE(89),
    [sym_end_flalign_star] = STATE(69),
    [sym_escaped] = STATE(89),
    [sym_command] = STATE(89),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(89),
    [sym_opt_math_group] = STATE(89),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(89),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(89),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(111),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(111),
    [sym_subscript] = ACTIONS(111),
    [sym_active_char] = ACTIONS(111),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(113),
  },
  [19] = {
    [sym__math_mode] = STATE(91),
    [sym_parameter] = STATE(91),
    [sym_math_environment] = STATE(91),
    [sym_end_gather] = STATE(69),
    [sym_escaped] = STATE(91),
    [sym_command] = STATE(91),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(91),
    [sym_opt_math_group] = STATE(91),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(91),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(91),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(115),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(115),
    [sym_subscript] = ACTIONS(115),
    [sym_active_char] = ACTIONS(115),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(117),
  },
  [20] = {
    [sym__math_mode] = STATE(93),
    [sym_parameter] = STATE(93),
    [sym_math_environment] = STATE(93),
    [sym_end_gather_star] = STATE(69),
    [sym_escaped] = STATE(93),
    [sym_command] = STATE(93),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(93),
    [sym_opt_math_group] = STATE(93),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(93),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(93),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(119),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(119),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(121),
  },
  [21] = {
    [sym__math_mode] = STATE(95),
    [sym_parameter] = STATE(95),
    [sym_math_environment] = STATE(95),
    [sym_end_multline] = STATE(69),
    [sym_escaped] = STATE(95),
    [sym_command] = STATE(95),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(95),
    [sym_opt_math_group] = STATE(95),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(95),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(95),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(123),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(123),
    [sym_subscript] = ACTIONS(123),
    [sym_active_char] = ACTIONS(123),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(125),
  },
  [22] = {
    [sym__math_mode] = STATE(97),
    [sym_parameter] = STATE(97),
    [sym_math_environment] = STATE(97),
    [sym_end_multline_star] = STATE(69),
    [sym_escaped] = STATE(97),
    [sym_command] = STATE(97),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(97),
    [sym_opt_math_group] = STATE(97),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(97),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(97),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(127),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(127),
    [sym_subscript] = ACTIONS(127),
    [sym_active_char] = ACTIONS(127),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(129),
  },
  [23] = {
    [sym__math_mode] = STATE(99),
    [sym_parameter] = STATE(99),
    [sym_math_environment] = STATE(99),
    [sym_end_split] = STATE(69),
    [sym_escaped] = STATE(99),
    [sym_command] = STATE(99),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(99),
    [sym_opt_math_group] = STATE(99),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(99),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(133),
  },
  [24] = {
    [sym__math_mode] = STATE(101),
    [sym_parameter] = STATE(101),
    [sym_math_environment] = STATE(101),
    [sym_end_split_star] = STATE(69),
    [sym_escaped] = STATE(101),
    [sym_command] = STATE(101),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(101),
    [sym_opt_math_group] = STATE(101),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(101),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(101),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(135),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(135),
    [sym_subscript] = ACTIONS(135),
    [sym_active_char] = ACTIONS(135),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(137),
  },
  [25] = {
    [sym__math_mode] = STATE(104),
    [sym_parameter] = STATE(104),
    [sym_math_environment] = STATE(104),
    [sym_end_math] = STATE(102),
    [sym_escaped] = STATE(104),
    [sym_command] = STATE(104),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end_token] = STATE(103),
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
    [sym_math_group] = STATE(104),
    [sym_opt_math_group] = STATE(104),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(104),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(104),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(141),
  },
  [26] = {
    [sym_end_verbatim] = STATE(106),
    [sym_end_token] = STATE(107),
    [aux_sym_verbatim_environment_repeat1] = STATE(108),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(145),
  },
  [27] = {
    [sym_end_Verbatim] = STATE(106),
    [sym_end_token] = STATE(109),
    [sym_opt_text_group] = STATE(110),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(112),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(147),
  },
  [28] = {
    [sym_end_Verbatim_star] = STATE(106),
    [sym_end_token] = STATE(113),
    [sym_opt_text_group] = STATE(114),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(115),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(149),
  },
  [29] = {
    [sym_end_BVerbatim] = STATE(106),
    [sym_end_token] = STATE(116),
    [sym_opt_text_group] = STATE(117),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(118),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(151),
  },
  [30] = {
    [sym_end_BVerbatim_star] = STATE(106),
    [sym_end_token] = STATE(119),
    [sym_opt_text_group] = STATE(120),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(121),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(153),
  },
  [31] = {
    [sym_end_LVerbatim] = STATE(106),
    [sym_end_token] = STATE(122),
    [sym_opt_text_group] = STATE(123),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(124),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(155),
  },
  [32] = {
    [sym_end_LVerbatim_star] = STATE(106),
    [sym_end_token] = STATE(125),
    [sym_opt_text_group] = STATE(126),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(127),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(157),
  },
  [33] = {
    [sym_end_lstlisting] = STATE(106),
    [sym_end_token] = STATE(128),
    [sym_opt_text_group] = STATE(129),
    [sym_begin_opt] = STATE(111),
    [aux_sym_verbatim_environment_repeat1] = STATE(130),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(159),
  },
  [34] = {
    [sym_text_group] = STATE(132),
    [sym_begin_group] = ACTIONS(161),
  },
  [35] = {
    [sym__text_mode] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_text_environment] = STATE(136),
    [sym_display_math] = STATE(136),
    [sym_inline_math] = STATE(136),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(136),
    [sym_escaped] = STATE(136),
    [sym_command] = STATE(136),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_end] = STATE(134),
    [sym_end_token] = STATE(135),
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
    [sym_text_group] = STATE(136),
    [sym_opt_text_group] = STATE(136),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(136),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(167),
  },
  [36] = {
    [sym_simple_text_group] = STATE(138),
    [sym_begin_group] = ACTIONS(169),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [sym__escape] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(173),
    [sym_end_group] = ACTIONS(173),
    [sym_math_shift] = ACTIONS(173),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(173),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_comment_char] = ACTIONS(173),
    [sym_text] = ACTIONS(171),
  },
  [38] = {
    [sym_simple_text_group] = STATE(140),
    [sym_opt_text_group] = STATE(141),
    [sym_begin_opt] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(177),
  },
  [39] = {
    [sym_simple_text_group] = STATE(143),
    [sym_opt_text_group] = STATE(144),
    [sym_begin_opt] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(177),
  },
  [40] = {
    [sym_text_group] = STATE(145),
    [sym_begin_group] = ACTIONS(179),
  },
  [41] = {
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(147),
    [sym_begin_opt] = STATE(142),
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(179),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [sym__escape] = ACTIONS(183),
    [sym_begin_group] = ACTIONS(183),
    [sym_end_group] = ACTIONS(183),
    [sym_math_shift] = ACTIONS(183),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(183),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(183),
    [sym_text] = ACTIONS(181),
  },
  [43] = {
    [sym_escaped] = STATE(149),
    [sym__escape] = ACTIONS(185),
  },
  [44] = {
    [sym__text_mode] = STATE(152),
    [sym_parameter] = STATE(152),
    [sym_text_environment] = STATE(152),
    [sym_display_math] = STATE(152),
    [sym_inline_math] = STATE(152),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(152),
    [sym_escaped] = STATE(152),
    [sym_command] = STATE(152),
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
    [sym_text_group] = STATE(152),
    [sym_opt_text_group] = STATE(152),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(152),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(151),
    [aux_sym_document_repeat1] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(187),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(189),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(189),
    [sym_subscript] = ACTIONS(189),
    [sym_active_char] = ACTIONS(189),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(191),
  },
  [45] = {
    [sym__text_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_text_environment] = STATE(153),
    [sym_display_math] = STATE(153),
    [sym_inline_math] = STATE(153),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(153),
    [sym_escaped] = STATE(153),
    [sym_command] = STATE(153),
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
    [sym_text_group] = STATE(153),
    [sym_opt_text_group] = STATE(153),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(195),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(195),
    [sym_subscript] = ACTIONS(195),
    [sym_active_char] = ACTIONS(195),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(197),
  },
  [46] = {
    [sym__math_mode] = STATE(155),
    [sym_parameter] = STATE(155),
    [sym_math_environment] = STATE(155),
    [sym_escaped] = STATE(155),
    [sym_command] = STATE(155),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(155),
    [sym_opt_math_group] = STATE(155),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(155),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(155),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(201),
    [sym_active_char] = ACTIONS(201),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(203),
  },
  [47] = {
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_environment] = STATE(157),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(209),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(211),
    [anon_sym_LBRACK] = ACTIONS(213),
    [anon_sym_RBRACK] = ACTIONS(213),
    [sym__escape] = ACTIONS(213),
    [sym_begin_group] = ACTIONS(213),
    [sym_end_group] = ACTIONS(213),
    [sym_math_shift] = ACTIONS(213),
    [sym_alignment_tab] = ACTIONS(213),
    [sym_parameter_char] = ACTIONS(213),
    [sym_superscript] = ACTIONS(213),
    [sym_subscript] = ACTIONS(213),
    [sym_active_char] = ACTIONS(213),
    [sym_comment_char] = ACTIONS(213),
    [sym_text] = ACTIONS(211),
  },
  [49] = {
    [sym_begin_group] = ACTIONS(215),
  },
  [50] = {
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
  },
  [51] = {
    [anon_sym_LBRACK] = ACTIONS(219),
    [sym_begin_group] = ACTIONS(219),
  },
  [52] = {
    [sym_begin_group] = ACTIONS(221),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym_begin_group] = ACTIONS(223),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_end_group] = ACTIONS(227),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(227),
    [sym_text] = ACTIONS(225),
  },
  [55] = {
    [sym__escape] = ACTIONS(229),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_RBRACK] = ACTIONS(233),
    [sym__escape] = ACTIONS(233),
    [sym_begin_group] = ACTIONS(233),
    [sym_end_group] = ACTIONS(233),
    [sym_math_shift] = ACTIONS(233),
    [sym_alignment_tab] = ACTIONS(233),
    [sym_parameter_char] = ACTIONS(233),
    [sym_superscript] = ACTIONS(233),
    [sym_subscript] = ACTIONS(233),
    [sym_active_char] = ACTIONS(233),
    [sym_comment_char] = ACTIONS(233),
    [sym_text] = ACTIONS(231),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [sym__escape] = ACTIONS(237),
    [sym_begin_group] = ACTIONS(237),
    [sym_end_group] = ACTIONS(237),
    [sym_math_shift] = ACTIONS(237),
    [sym_alignment_tab] = ACTIONS(237),
    [sym_parameter_char] = ACTIONS(237),
    [sym_superscript] = ACTIONS(237),
    [sym_subscript] = ACTIONS(237),
    [sym_active_char] = ACTIONS(237),
    [sym_comment_char] = ACTIONS(237),
    [sym_text] = ACTIONS(235),
  },
  [58] = {
    [sym__text_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_text_environment] = STATE(159),
    [sym_display_math] = STATE(159),
    [sym_inline_math] = STATE(159),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(159),
    [sym_escaped] = STATE(159),
    [sym_command] = STATE(159),
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
    [sym_text_group] = STATE(159),
    [sym_opt_text_group] = STATE(159),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(159),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(239),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(243),
  },
  [59] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [60] = {
    [sym__math_mode] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_math_environment] = STATE(161),
    [sym_escaped] = STATE(161),
    [sym_command] = STATE(161),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(161),
    [sym_opt_math_group] = STATE(161),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(161),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(245),
    [sym_alignment_tab] = ACTIONS(247),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(247),
    [sym_subscript] = ACTIONS(247),
    [sym_active_char] = ACTIONS(247),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(249),
  },
  [61] = {
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_environment] = STATE(163),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(163),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(251),
    [sym_alignment_tab] = ACTIONS(253),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(253),
    [sym_subscript] = ACTIONS(253),
    [sym_active_char] = ACTIONS(253),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(255),
  },
  [62] = {
    [sym__math_mode] = STATE(165),
    [sym_parameter] = STATE(165),
    [sym_math_environment] = STATE(165),
    [sym_escaped] = STATE(165),
    [sym_command] = STATE(165),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end] = STATE(164),
    [sym_end_token] = STATE(135),
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
    [sym_math_group] = STATE(165),
    [sym_opt_math_group] = STATE(165),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(165),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(165),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(257),
    [sym_active_char] = ACTIONS(257),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(259),
  },
  [63] = {
    [sym_simple_text_group] = STATE(138),
    [sym_begin_group] = ACTIONS(177),
  },
  [64] = {
    [sym__math_mode] = STATE(167),
    [sym_parameter] = STATE(167),
    [sym_math_environment] = STATE(167),
    [sym_escaped] = STATE(167),
    [sym_command] = STATE(167),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(167),
    [sym_opt_math_group] = STATE(167),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(167),
    [sym_begin_opt] = STATE(64),
    [sym_end_opt] = STATE(166),
    [aux_sym_math_environment_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(187),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(261),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(261),
    [sym_subscript] = ACTIONS(261),
    [sym_active_char] = ACTIONS(261),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(263),
  },
  [65] = {
    [sym__math_mode] = STATE(169),
    [sym_parameter] = STATE(169),
    [sym_math_environment] = STATE(169),
    [sym_escaped] = STATE(169),
    [sym_command] = STATE(169),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(169),
    [sym_opt_math_group] = STATE(169),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(169),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(265),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(269),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [anon_sym_RBRACK] = ACTIONS(273),
    [sym__escape] = ACTIONS(273),
    [sym_begin_group] = ACTIONS(273),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(273),
    [sym_alignment_tab] = ACTIONS(273),
    [sym_parameter_char] = ACTIONS(273),
    [sym_superscript] = ACTIONS(273),
    [sym_subscript] = ACTIONS(273),
    [sym_active_char] = ACTIONS(273),
    [sym_comment_char] = ACTIONS(273),
    [sym_text] = ACTIONS(271),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(277),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym__escape] = ACTIONS(277),
    [sym_begin_group] = ACTIONS(277),
    [sym_end_group] = ACTIONS(277),
    [sym_math_shift] = ACTIONS(277),
    [sym_alignment_tab] = ACTIONS(277),
    [sym_parameter_char] = ACTIONS(277),
    [sym_superscript] = ACTIONS(277),
    [sym_subscript] = ACTIONS(277),
    [sym_active_char] = ACTIONS(277),
    [sym_comment_char] = ACTIONS(277),
    [sym_text] = ACTIONS(275),
  },
  [68] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_RBRACK] = ACTIONS(283),
    [sym__escape] = ACTIONS(283),
    [sym_begin_group] = ACTIONS(283),
    [sym_end_group] = ACTIONS(283),
    [sym_math_shift] = ACTIONS(283),
    [sym_alignment_tab] = ACTIONS(283),
    [sym_parameter_char] = ACTIONS(283),
    [sym_superscript] = ACTIONS(283),
    [sym_subscript] = ACTIONS(283),
    [sym_active_char] = ACTIONS(283),
    [sym_comment_char] = ACTIONS(283),
    [sym_text] = ACTIONS(281),
  },
  [70] = {
    [sym_begin_group] = ACTIONS(285),
  },
  [71] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_align] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end_token] = STATE(70),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [72] = {
    [sym_begin_group] = ACTIONS(291),
  },
  [73] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_align_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [74] = {
    [sym_begin_group] = ACTIONS(293),
  },
  [75] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_alignat] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [76] = {
    [sym_begin_group] = ACTIONS(295),
  },
  [77] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_alignat_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [78] = {
    [sym_begin_group] = ACTIONS(297),
  },
  [79] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_eqnarray] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [80] = {
    [sym_begin_group] = ACTIONS(299),
  },
  [81] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_eqnarray_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [82] = {
    [sym_begin_group] = ACTIONS(301),
  },
  [83] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_equation] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [84] = {
    [sym_begin_group] = ACTIONS(303),
  },
  [85] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_equation_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [86] = {
    [sym_begin_group] = ACTIONS(305),
  },
  [87] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_flalign] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [88] = {
    [sym_begin_group] = ACTIONS(307),
  },
  [89] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_flalign_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [90] = {
    [sym_begin_group] = ACTIONS(309),
  },
  [91] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_gather] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [92] = {
    [sym_begin_group] = ACTIONS(311),
  },
  [93] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_gather_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [94] = {
    [sym_begin_group] = ACTIONS(313),
  },
  [95] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_multline] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [96] = {
    [sym_begin_group] = ACTIONS(315),
  },
  [97] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_multline_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [98] = {
    [sym_begin_group] = ACTIONS(317),
  },
  [99] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_split] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [100] = {
    [sym_begin_group] = ACTIONS(319),
  },
  [101] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_split_star] = STATE(172),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [sym__escape] = ACTIONS(323),
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
  [103] = {
    [sym_begin_group] = ACTIONS(325),
  },
  [104] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_end_math] = STATE(168),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end_token] = STATE(103),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [105] = {
    [anon_sym_end] = ACTIONS(327),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [sym__escape] = ACTIONS(331),
    [sym_begin_group] = ACTIONS(331),
    [sym_end_group] = ACTIONS(331),
    [sym_math_shift] = ACTIONS(331),
    [sym_alignment_tab] = ACTIONS(331),
    [sym_parameter_char] = ACTIONS(331),
    [sym_superscript] = ACTIONS(331),
    [sym_subscript] = ACTIONS(331),
    [sym_active_char] = ACTIONS(331),
    [sym_comment_char] = ACTIONS(331),
    [sym_text] = ACTIONS(329),
  },
  [107] = {
    [sym_begin_group] = ACTIONS(333),
  },
  [108] = {
    [sym_end_verbatim] = STATE(191),
    [sym_end_token] = STATE(107),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [109] = {
    [sym_begin_group] = ACTIONS(337),
  },
  [110] = {
    [sym_end_Verbatim] = STATE(191),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(339),
  },
  [111] = {
    [sym__text_mode] = STATE(197),
    [sym_parameter] = STATE(197),
    [sym_text_environment] = STATE(197),
    [sym_display_math] = STATE(197),
    [sym_inline_math] = STATE(197),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(197),
    [sym_escaped] = STATE(197),
    [sym_command] = STATE(197),
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
    [sym_text_group] = STATE(197),
    [sym_opt_text_group] = STATE(197),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(197),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(196),
    [aux_sym_document_repeat1] = STATE(197),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(343),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(345),
  },
  [112] = {
    [sym_end_Verbatim] = STATE(191),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [113] = {
    [sym_begin_group] = ACTIONS(347),
  },
  [114] = {
    [sym_end_Verbatim_star] = STATE(191),
    [sym_end_token] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(199),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(349),
  },
  [115] = {
    [sym_end_Verbatim_star] = STATE(191),
    [sym_end_token] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [116] = {
    [sym_begin_group] = ACTIONS(351),
  },
  [117] = {
    [sym_end_BVerbatim] = STATE(191),
    [sym_end_token] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(201),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(353),
  },
  [118] = {
    [sym_end_BVerbatim] = STATE(191),
    [sym_end_token] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [119] = {
    [sym_begin_group] = ACTIONS(355),
  },
  [120] = {
    [sym_end_BVerbatim_star] = STATE(191),
    [sym_end_token] = STATE(119),
    [aux_sym_verbatim_environment_repeat1] = STATE(203),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(357),
  },
  [121] = {
    [sym_end_BVerbatim_star] = STATE(191),
    [sym_end_token] = STATE(119),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [122] = {
    [sym_begin_group] = ACTIONS(359),
  },
  [123] = {
    [sym_end_LVerbatim] = STATE(191),
    [sym_end_token] = STATE(122),
    [aux_sym_verbatim_environment_repeat1] = STATE(205),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(361),
  },
  [124] = {
    [sym_end_LVerbatim] = STATE(191),
    [sym_end_token] = STATE(122),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [125] = {
    [sym_begin_group] = ACTIONS(363),
  },
  [126] = {
    [sym_end_LVerbatim_star] = STATE(191),
    [sym_end_token] = STATE(125),
    [aux_sym_verbatim_environment_repeat1] = STATE(207),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(365),
  },
  [127] = {
    [sym_end_LVerbatim_star] = STATE(191),
    [sym_end_token] = STATE(125),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [128] = {
    [sym_begin_group] = ACTIONS(367),
  },
  [129] = {
    [sym_end_lstlisting] = STATE(191),
    [sym_end_token] = STATE(128),
    [aux_sym_verbatim_environment_repeat1] = STATE(209),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(369),
  },
  [130] = {
    [sym_end_lstlisting] = STATE(191),
    [sym_end_token] = STATE(128),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [131] = {
    [sym__text_mode] = STATE(211),
    [sym_parameter] = STATE(211),
    [sym_text_environment] = STATE(211),
    [sym_display_math] = STATE(211),
    [sym_inline_math] = STATE(211),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(211),
    [sym_escaped] = STATE(211),
    [sym_command] = STATE(211),
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
    [sym_text_group] = STATE(211),
    [sym_opt_text_group] = STATE(211),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(211),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(211),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(371),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(373),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(373),
    [sym_subscript] = ACTIONS(373),
    [sym_active_char] = ACTIONS(373),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(375),
  },
  [132] = {
    [sym_end_minted] = STATE(191),
    [sym_end_token] = STATE(212),
    [aux_sym_verbatim_environment_repeat1] = STATE(213),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(377),
  },
  [133] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(279),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym__escape] = ACTIONS(381),
    [sym_begin_group] = ACTIONS(381),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(381),
    [sym_alignment_tab] = ACTIONS(381),
    [sym_parameter_char] = ACTIONS(381),
    [sym_superscript] = ACTIONS(381),
    [sym_subscript] = ACTIONS(381),
    [sym_active_char] = ACTIONS(381),
    [sym_comment_char] = ACTIONS(381),
    [sym_text] = ACTIONS(379),
  },
  [135] = {
    [sym_simple_text_group] = STATE(214),
    [sym_begin_group] = ACTIONS(177),
  },
  [136] = {
    [sym__text_mode] = STATE(216),
    [sym_parameter] = STATE(216),
    [sym_text_environment] = STATE(216),
    [sym_display_math] = STATE(216),
    [sym_inline_math] = STATE(216),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(216),
    [sym_escaped] = STATE(216),
    [sym_command] = STATE(216),
    [sym_begin] = STATE(35),
    [sym_begin_token] = STATE(36),
    [sym_end] = STATE(215),
    [sym_end_token] = STATE(135),
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
    [sym_text_group] = STATE(216),
    [sym_opt_text_group] = STATE(216),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(216),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(216),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(385),
  },
  [137] = {
    [anon_sym_align] = ACTIONS(387),
    [anon_sym_align_STAR] = ACTIONS(389),
    [anon_sym_alignat] = ACTIONS(391),
    [anon_sym_alignat_STAR] = ACTIONS(393),
    [anon_sym_eqnarray] = ACTIONS(395),
    [anon_sym_eqnarray_STAR] = ACTIONS(397),
    [anon_sym_equation] = ACTIONS(399),
    [anon_sym_equation_STAR] = ACTIONS(401),
    [anon_sym_flalign] = ACTIONS(403),
    [anon_sym_flalign_STAR] = ACTIONS(405),
    [anon_sym_gather] = ACTIONS(407),
    [anon_sym_gather_STAR] = ACTIONS(409),
    [anon_sym_multline] = ACTIONS(411),
    [anon_sym_multline_STAR] = ACTIONS(413),
    [anon_sym_split] = ACTIONS(415),
    [anon_sym_split_STAR] = ACTIONS(417),
    [anon_sym_math] = ACTIONS(419),
    [anon_sym_verbatim] = ACTIONS(421),
    [anon_sym_Verbatim] = ACTIONS(423),
    [anon_sym_Verbatim_STAR] = ACTIONS(425),
    [anon_sym_BVerbatim] = ACTIONS(427),
    [anon_sym_BVerbatim_STAR] = ACTIONS(429),
    [anon_sym_LVerbatim] = ACTIONS(431),
    [anon_sym_LVerbatim_STAR] = ACTIONS(433),
    [anon_sym_lstlisting] = ACTIONS(435),
    [sym_text] = ACTIONS(437),
  },
  [138] = {
    [anon_sym_LBRACK] = ACTIONS(439),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(439),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(439),
    [sym_active_char] = ACTIONS(439),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(441),
  },
  [139] = {
    [sym_text] = ACTIONS(443),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(445),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(447),
    [sym__escape] = ACTIONS(447),
    [sym_begin_group] = ACTIONS(447),
    [sym_end_group] = ACTIONS(447),
    [sym_math_shift] = ACTIONS(447),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(447),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(447),
    [sym_active_char] = ACTIONS(447),
    [sym_comment_char] = ACTIONS(447),
    [sym_text] = ACTIONS(445),
  },
  [141] = {
    [sym_simple_text_group] = STATE(243),
    [sym_begin_group] = ACTIONS(177),
  },
  [142] = {
    [sym__text_mode] = STATE(246),
    [sym_parameter] = STATE(246),
    [sym_text_environment] = STATE(246),
    [sym_display_math] = STATE(246),
    [sym_inline_math] = STATE(246),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(246),
    [sym_escaped] = STATE(246),
    [sym_command] = STATE(246),
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
    [sym_text_group] = STATE(246),
    [sym_opt_text_group] = STATE(246),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(246),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(245),
    [aux_sym_document_repeat1] = STATE(246),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(451),
    [sym_subscript] = ACTIONS(451),
    [sym_active_char] = ACTIONS(451),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(453),
  },
  [143] = {
    [ts_builtin_sym_end] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [sym__escape] = ACTIONS(457),
    [sym_begin_group] = ACTIONS(457),
    [sym_end_group] = ACTIONS(457),
    [sym_math_shift] = ACTIONS(457),
    [sym_alignment_tab] = ACTIONS(457),
    [sym_parameter_char] = ACTIONS(457),
    [sym_superscript] = ACTIONS(457),
    [sym_subscript] = ACTIONS(457),
    [sym_active_char] = ACTIONS(457),
    [sym_comment_char] = ACTIONS(457),
    [sym_text] = ACTIONS(455),
  },
  [144] = {
    [sym_simple_text_group] = STATE(247),
    [sym_begin_group] = ACTIONS(177),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_RBRACK] = ACTIONS(461),
    [sym__escape] = ACTIONS(461),
    [sym_begin_group] = ACTIONS(461),
    [sym_end_group] = ACTIONS(461),
    [sym_math_shift] = ACTIONS(461),
    [sym_alignment_tab] = ACTIONS(461),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(461),
    [sym_subscript] = ACTIONS(461),
    [sym_active_char] = ACTIONS(461),
    [sym_comment_char] = ACTIONS(461),
    [sym_text] = ACTIONS(459),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [sym__escape] = ACTIONS(465),
    [sym_begin_group] = ACTIONS(465),
    [sym_end_group] = ACTIONS(465),
    [sym_math_shift] = ACTIONS(465),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(465),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(465),
    [sym_active_char] = ACTIONS(465),
    [sym_comment_char] = ACTIONS(465),
    [sym_text] = ACTIONS(463),
  },
  [147] = {
    [sym_text_group] = STATE(248),
    [sym_begin_group] = ACTIONS(179),
  },
  [148] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(467),
  },
  [149] = {
    [anon_sym_EQ] = ACTIONS(469),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_RBRACK] = ACTIONS(473),
    [sym__escape] = ACTIONS(473),
    [sym_begin_group] = ACTIONS(473),
    [sym_end_group] = ACTIONS(473),
    [sym_math_shift] = ACTIONS(473),
    [sym_alignment_tab] = ACTIONS(473),
    [sym_parameter_char] = ACTIONS(473),
    [sym_superscript] = ACTIONS(473),
    [sym_subscript] = ACTIONS(473),
    [sym_active_char] = ACTIONS(473),
    [sym_comment_char] = ACTIONS(473),
    [sym_text] = ACTIONS(471),
  },
  [151] = {
    [ts_builtin_sym_end] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_RBRACK] = ACTIONS(477),
    [sym__escape] = ACTIONS(477),
    [sym_begin_group] = ACTIONS(477),
    [sym_end_group] = ACTIONS(477),
    [sym_math_shift] = ACTIONS(477),
    [sym_alignment_tab] = ACTIONS(477),
    [sym_parameter_char] = ACTIONS(477),
    [sym_superscript] = ACTIONS(477),
    [sym_subscript] = ACTIONS(477),
    [sym_active_char] = ACTIONS(477),
    [sym_comment_char] = ACTIONS(477),
    [sym_text] = ACTIONS(475),
  },
  [152] = {
    [sym__text_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_environment] = STATE(252),
    [sym_display_math] = STATE(252),
    [sym_inline_math] = STATE(252),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(252),
    [sym_escaped] = STATE(252),
    [sym_command] = STATE(252),
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
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(252),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(251),
    [aux_sym_document_repeat1] = STATE(252),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(187),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(479),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(481),
  },
  [153] = {
    [sym__text_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_text_environment] = STATE(153),
    [sym_display_math] = STATE(153),
    [sym_inline_math] = STATE(153),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(153),
    [sym_escaped] = STATE(153),
    [sym_command] = STATE(153),
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
    [sym_text_group] = STATE(153),
    [sym_opt_text_group] = STATE(153),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(153),
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(485),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(491),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(500),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_comment_char] = ACTIONS(503),
    [sym_text] = ACTIONS(506),
  },
  [154] = {
    [anon_sym_RBRACK] = ACTIONS(509),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [155] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(511),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(513),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [157] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(515),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(519),
    [anon_sym_RBRACK] = ACTIONS(519),
    [sym__escape] = ACTIONS(519),
    [sym_begin_group] = ACTIONS(519),
    [sym_end_group] = ACTIONS(519),
    [sym_math_shift] = ACTIONS(519),
    [sym_alignment_tab] = ACTIONS(519),
    [sym_parameter_char] = ACTIONS(519),
    [sym_superscript] = ACTIONS(519),
    [sym_subscript] = ACTIONS(519),
    [sym_active_char] = ACTIONS(519),
    [sym_comment_char] = ACTIONS(519),
    [sym_text] = ACTIONS(517),
  },
  [159] = {
    [sym__text_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_text_environment] = STATE(159),
    [sym_display_math] = STATE(159),
    [sym_inline_math] = STATE(159),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(159),
    [sym_escaped] = STATE(159),
    [sym_command] = STATE(159),
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
    [sym_text_group] = STATE(159),
    [sym_opt_text_group] = STATE(159),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(159),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(485),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(491),
    [sym_end_group] = ACTIONS(521),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(523),
    [sym_parameter_char] = ACTIONS(500),
    [sym_superscript] = ACTIONS(523),
    [sym_subscript] = ACTIONS(523),
    [sym_active_char] = ACTIONS(523),
    [sym_comment_char] = ACTIONS(503),
    [sym_text] = ACTIONS(526),
  },
  [160] = {
    [anon_sym_LBRACK] = ACTIONS(529),
    [anon_sym_RBRACK] = ACTIONS(529),
    [sym__escape] = ACTIONS(529),
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
  [161] = {
    [sym__math_mode] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_environment] = STATE(258),
    [sym_escaped] = STATE(258),
    [sym_command] = STATE(258),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(258),
    [sym_opt_math_group] = STATE(258),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(258),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(258),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(533),
    [sym_alignment_tab] = ACTIONS(535),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(535),
    [sym_subscript] = ACTIONS(535),
    [sym_active_char] = ACTIONS(535),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(537),
  },
  [162] = {
    [sym_math_shift] = ACTIONS(539),
  },
  [163] = {
    [sym__math_mode] = STATE(169),
    [sym_parameter] = STATE(169),
    [sym_math_environment] = STATE(169),
    [sym_escaped] = STATE(169),
    [sym_command] = STATE(169),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(169),
    [sym_opt_math_group] = STATE(169),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(169),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(269),
  },
  [164] = {
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [sym__escape] = ACTIONS(543),
    [sym_begin_group] = ACTIONS(543),
    [sym_end_group] = ACTIONS(543),
    [sym_math_shift] = ACTIONS(543),
    [sym_alignment_tab] = ACTIONS(543),
    [sym_parameter_char] = ACTIONS(543),
    [sym_superscript] = ACTIONS(543),
    [sym_subscript] = ACTIONS(543),
    [sym_active_char] = ACTIONS(543),
    [sym_comment_char] = ACTIONS(543),
    [sym_text] = ACTIONS(545),
  },
  [165] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
    [sym_end] = STATE(260),
    [sym_end_token] = STATE(135),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [166] = {
    [anon_sym_LBRACK] = ACTIONS(547),
    [anon_sym_RBRACK] = ACTIONS(547),
    [sym__escape] = ACTIONS(547),
    [sym_begin_group] = ACTIONS(547),
    [sym_end_group] = ACTIONS(547),
    [sym_math_shift] = ACTIONS(547),
    [sym_alignment_tab] = ACTIONS(547),
    [sym_parameter_char] = ACTIONS(547),
    [sym_superscript] = ACTIONS(547),
    [sym_subscript] = ACTIONS(547),
    [sym_active_char] = ACTIONS(547),
    [sym_comment_char] = ACTIONS(547),
    [sym_text] = ACTIONS(549),
  },
  [167] = {
    [sym__math_mode] = STATE(262),
    [sym_parameter] = STATE(262),
    [sym_math_environment] = STATE(262),
    [sym_escaped] = STATE(262),
    [sym_command] = STATE(262),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(262),
    [sym_opt_math_group] = STATE(262),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(262),
    [sym_begin_opt] = STATE(64),
    [sym_end_opt] = STATE(261),
    [aux_sym_math_environment_repeat1] = STATE(262),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(187),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(553),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_RBRACK] = ACTIONS(557),
    [sym__escape] = ACTIONS(557),
    [sym_begin_group] = ACTIONS(557),
    [sym_end_group] = ACTIONS(557),
    [sym_math_shift] = ACTIONS(557),
    [sym_alignment_tab] = ACTIONS(557),
    [sym_parameter_char] = ACTIONS(557),
    [sym_superscript] = ACTIONS(557),
    [sym_subscript] = ACTIONS(557),
    [sym_active_char] = ACTIONS(557),
    [sym_comment_char] = ACTIONS(557),
    [sym_text] = ACTIONS(555),
  },
  [169] = {
    [sym__math_mode] = STATE(169),
    [sym_parameter] = STATE(169),
    [sym_math_environment] = STATE(169),
    [sym_escaped] = STATE(169),
    [sym_command] = STATE(169),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(169),
    [sym_opt_math_group] = STATE(169),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(169),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(169),
    [anon_sym_LBRACK] = ACTIONS(559),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(565),
    [sym_math_shift] = ACTIONS(568),
    [sym_alignment_tab] = ACTIONS(570),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(570),
    [sym_subscript] = ACTIONS(570),
    [sym_active_char] = ACTIONS(570),
    [sym_comment_char] = ACTIONS(576),
    [sym_text] = ACTIONS(579),
  },
  [170] = {
    [sym_begin_group] = ACTIONS(582),
  },
  [171] = {
    [anon_sym_align] = ACTIONS(584),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(586),
    [anon_sym_LBRACK] = ACTIONS(588),
    [anon_sym_RBRACK] = ACTIONS(588),
    [sym__escape] = ACTIONS(588),
    [sym_begin_group] = ACTIONS(588),
    [sym_end_group] = ACTIONS(588),
    [sym_math_shift] = ACTIONS(588),
    [sym_alignment_tab] = ACTIONS(588),
    [sym_parameter_char] = ACTIONS(588),
    [sym_superscript] = ACTIONS(588),
    [sym_subscript] = ACTIONS(588),
    [sym_active_char] = ACTIONS(588),
    [sym_comment_char] = ACTIONS(588),
    [sym_text] = ACTIONS(586),
  },
  [173] = {
    [sym__math_mode] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_math_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(173),
    [sym_opt_math_group] = STATE(173),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(559),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(565),
    [sym_alignment_tab] = ACTIONS(590),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(590),
    [sym_subscript] = ACTIONS(590),
    [sym_active_char] = ACTIONS(590),
    [sym_comment_char] = ACTIONS(576),
    [sym_text] = ACTIONS(593),
  },
  [174] = {
    [anon_sym_align_STAR] = ACTIONS(596),
  },
  [175] = {
    [anon_sym_alignat] = ACTIONS(598),
  },
  [176] = {
    [anon_sym_alignat_STAR] = ACTIONS(600),
  },
  [177] = {
    [anon_sym_eqnarray] = ACTIONS(602),
  },
  [178] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(604),
  },
  [179] = {
    [anon_sym_equation] = ACTIONS(606),
  },
  [180] = {
    [anon_sym_equation_STAR] = ACTIONS(608),
  },
  [181] = {
    [anon_sym_flalign] = ACTIONS(610),
  },
  [182] = {
    [anon_sym_flalign_STAR] = ACTIONS(612),
  },
  [183] = {
    [anon_sym_gather] = ACTIONS(614),
  },
  [184] = {
    [anon_sym_gather_STAR] = ACTIONS(616),
  },
  [185] = {
    [anon_sym_multline] = ACTIONS(618),
  },
  [186] = {
    [anon_sym_multline_STAR] = ACTIONS(620),
  },
  [187] = {
    [anon_sym_split] = ACTIONS(622),
  },
  [188] = {
    [anon_sym_split_STAR] = ACTIONS(624),
  },
  [189] = {
    [anon_sym_math] = ACTIONS(626),
  },
  [190] = {
    [anon_sym_verbatim] = ACTIONS(628),
  },
  [191] = {
    [ts_builtin_sym_end] = ACTIONS(630),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_RBRACK] = ACTIONS(632),
    [sym__escape] = ACTIONS(632),
    [sym_begin_group] = ACTIONS(632),
    [sym_end_group] = ACTIONS(632),
    [sym_math_shift] = ACTIONS(632),
    [sym_alignment_tab] = ACTIONS(632),
    [sym_parameter_char] = ACTIONS(632),
    [sym_superscript] = ACTIONS(632),
    [sym_subscript] = ACTIONS(632),
    [sym_active_char] = ACTIONS(632),
    [sym_comment_char] = ACTIONS(632),
    [sym_text] = ACTIONS(630),
  },
  [192] = {
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(634),
    [sym_verbatim_token] = ACTIONS(636),
  },
  [193] = {
    [anon_sym_Verbatim] = ACTIONS(639),
  },
  [194] = {
    [sym_end_Verbatim] = STATE(282),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [195] = {
    [sym__escape] = ACTIONS(473),
    [sym_verbatim_token] = ACTIONS(473),
  },
  [196] = {
    [sym__escape] = ACTIONS(477),
    [sym_verbatim_token] = ACTIONS(477),
  },
  [197] = {
    [sym__text_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_environment] = STATE(252),
    [sym_display_math] = STATE(252),
    [sym_inline_math] = STATE(252),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(252),
    [sym_escaped] = STATE(252),
    [sym_command] = STATE(252),
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
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(252),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(283),
    [aux_sym_document_repeat1] = STATE(252),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(341),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(479),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(481),
  },
  [198] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(641),
  },
  [199] = {
    [sym_end_Verbatim_star] = STATE(282),
    [sym_end_token] = STATE(113),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [200] = {
    [anon_sym_BVerbatim] = ACTIONS(643),
  },
  [201] = {
    [sym_end_BVerbatim] = STATE(282),
    [sym_end_token] = STATE(116),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [202] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(645),
  },
  [203] = {
    [sym_end_BVerbatim_star] = STATE(282),
    [sym_end_token] = STATE(119),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [204] = {
    [anon_sym_LVerbatim] = ACTIONS(647),
  },
  [205] = {
    [sym_end_LVerbatim] = STATE(282),
    [sym_end_token] = STATE(122),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [206] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(649),
  },
  [207] = {
    [sym_end_LVerbatim_star] = STATE(282),
    [sym_end_token] = STATE(125),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [208] = {
    [anon_sym_lstlisting] = ACTIONS(651),
  },
  [209] = {
    [sym_end_lstlisting] = STATE(282),
    [sym_end_token] = STATE(128),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [210] = {
    [sym__escape] = ACTIONS(237),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [211] = {
    [sym__text_mode] = STATE(159),
    [sym_parameter] = STATE(159),
    [sym_text_environment] = STATE(159),
    [sym_display_math] = STATE(159),
    [sym_inline_math] = STATE(159),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(159),
    [sym_escaped] = STATE(159),
    [sym_command] = STATE(159),
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
    [sym_text_group] = STATE(159),
    [sym_opt_text_group] = STATE(159),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(159),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(159),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(653),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(241),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(241),
    [sym_subscript] = ACTIONS(241),
    [sym_active_char] = ACTIONS(241),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(243),
  },
  [212] = {
    [sym_begin_group] = ACTIONS(655),
  },
  [213] = {
    [sym_end_minted] = STATE(282),
    [sym_end_token] = STATE(212),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(143),
    [sym_verbatim_token] = ACTIONS(335),
  },
  [214] = {
    [ts_builtin_sym_end] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [sym__escape] = ACTIONS(659),
    [sym_begin_group] = ACTIONS(659),
    [sym_end_group] = ACTIONS(659),
    [sym_math_shift] = ACTIONS(659),
    [sym_alignment_tab] = ACTIONS(659),
    [sym_parameter_char] = ACTIONS(659),
    [sym_superscript] = ACTIONS(659),
    [sym_subscript] = ACTIONS(659),
    [sym_active_char] = ACTIONS(659),
    [sym_comment_char] = ACTIONS(659),
    [sym_text] = ACTIONS(657),
  },
  [215] = {
    [ts_builtin_sym_end] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [sym__escape] = ACTIONS(663),
    [sym_begin_group] = ACTIONS(663),
    [sym_end_group] = ACTIONS(663),
    [sym_math_shift] = ACTIONS(663),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(663),
    [sym_superscript] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_active_char] = ACTIONS(663),
    [sym_comment_char] = ACTIONS(663),
    [sym_text] = ACTIONS(661),
  },
  [216] = {
    [sym__text_mode] = STATE(216),
    [sym_parameter] = STATE(216),
    [sym_text_environment] = STATE(216),
    [sym_display_math] = STATE(216),
    [sym_inline_math] = STATE(216),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(216),
    [sym_escaped] = STATE(216),
    [sym_command] = STATE(216),
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
    [sym_text_group] = STATE(216),
    [sym_opt_text_group] = STATE(216),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(216),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(216),
    [anon_sym_LBRACK] = ACTIONS(485),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(491),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(665),
    [sym_parameter_char] = ACTIONS(500),
    [sym_superscript] = ACTIONS(665),
    [sym_subscript] = ACTIONS(665),
    [sym_active_char] = ACTIONS(665),
    [sym_comment_char] = ACTIONS(503),
    [sym_text] = ACTIONS(668),
  },
  [217] = {
    [sym_end_group] = ACTIONS(671),
  },
  [218] = {
    [sym_end_group] = ACTIONS(673),
  },
  [219] = {
    [sym_end_group] = ACTIONS(675),
  },
  [220] = {
    [sym_end_group] = ACTIONS(677),
  },
  [221] = {
    [sym_end_group] = ACTIONS(679),
  },
  [222] = {
    [sym_end_group] = ACTIONS(681),
  },
  [223] = {
    [sym_end_group] = ACTIONS(683),
  },
  [224] = {
    [sym_end_group] = ACTIONS(685),
  },
  [225] = {
    [sym_end_group] = ACTIONS(687),
  },
  [226] = {
    [sym_end_group] = ACTIONS(689),
  },
  [227] = {
    [sym_end_group] = ACTIONS(691),
  },
  [228] = {
    [sym_end_group] = ACTIONS(693),
  },
  [229] = {
    [sym_end_group] = ACTIONS(695),
  },
  [230] = {
    [sym_end_group] = ACTIONS(697),
  },
  [231] = {
    [sym_end_group] = ACTIONS(699),
  },
  [232] = {
    [sym_end_group] = ACTIONS(701),
  },
  [233] = {
    [sym_end_group] = ACTIONS(703),
  },
  [234] = {
    [sym_end_group] = ACTIONS(705),
  },
  [235] = {
    [sym_end_group] = ACTIONS(707),
  },
  [236] = {
    [sym_end_group] = ACTIONS(709),
  },
  [237] = {
    [sym_end_group] = ACTIONS(711),
  },
  [238] = {
    [sym_end_group] = ACTIONS(713),
  },
  [239] = {
    [sym_end_group] = ACTIONS(715),
  },
  [240] = {
    [sym_end_group] = ACTIONS(717),
  },
  [241] = {
    [sym_end_group] = ACTIONS(719),
  },
  [242] = {
    [sym_end_group] = ACTIONS(721),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(723),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(725),
    [sym_end_group] = ACTIONS(725),
    [sym_math_shift] = ACTIONS(725),
    [sym_alignment_tab] = ACTIONS(725),
    [sym_parameter_char] = ACTIONS(725),
    [sym_superscript] = ACTIONS(725),
    [sym_subscript] = ACTIONS(725),
    [sym_active_char] = ACTIONS(725),
    [sym_comment_char] = ACTIONS(725),
    [sym_text] = ACTIONS(723),
  },
  [244] = {
    [sym_begin_group] = ACTIONS(471),
  },
  [245] = {
    [sym_begin_group] = ACTIONS(475),
  },
  [246] = {
    [sym__text_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_environment] = STATE(252),
    [sym_display_math] = STATE(252),
    [sym_inline_math] = STATE(252),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(252),
    [sym_escaped] = STATE(252),
    [sym_command] = STATE(252),
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
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(252),
    [sym_begin_opt] = STATE(44),
    [sym_end_opt] = STATE(318),
    [aux_sym_document_repeat1] = STATE(252),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(449),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(479),
    [sym_subscript] = ACTIONS(479),
    [sym_active_char] = ACTIONS(479),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(481),
  },
  [247] = {
    [ts_builtin_sym_end] = ACTIONS(727),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [sym__escape] = ACTIONS(729),
    [sym_begin_group] = ACTIONS(729),
    [sym_end_group] = ACTIONS(729),
    [sym_math_shift] = ACTIONS(729),
    [sym_alignment_tab] = ACTIONS(729),
    [sym_parameter_char] = ACTIONS(729),
    [sym_superscript] = ACTIONS(729),
    [sym_subscript] = ACTIONS(729),
    [sym_active_char] = ACTIONS(729),
    [sym_comment_char] = ACTIONS(729),
    [sym_text] = ACTIONS(727),
  },
  [248] = {
    [ts_builtin_sym_end] = ACTIONS(731),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_RBRACK] = ACTIONS(733),
    [sym__escape] = ACTIONS(733),
    [sym_begin_group] = ACTIONS(733),
    [sym_end_group] = ACTIONS(733),
    [sym_math_shift] = ACTIONS(733),
    [sym_alignment_tab] = ACTIONS(733),
    [sym_parameter_char] = ACTIONS(733),
    [sym_superscript] = ACTIONS(733),
    [sym_subscript] = ACTIONS(733),
    [sym_active_char] = ACTIONS(733),
    [sym_comment_char] = ACTIONS(733),
    [sym_text] = ACTIONS(731),
  },
  [249] = {
    [anon_sym_EQ] = ACTIONS(211),
  },
  [250] = {
    [sym_number] = ACTIONS(735),
  },
  [251] = {
    [ts_builtin_sym_end] = ACTIONS(737),
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_RBRACK] = ACTIONS(739),
    [sym__escape] = ACTIONS(739),
    [sym_begin_group] = ACTIONS(739),
    [sym_end_group] = ACTIONS(739),
    [sym_math_shift] = ACTIONS(739),
    [sym_alignment_tab] = ACTIONS(739),
    [sym_parameter_char] = ACTIONS(739),
    [sym_superscript] = ACTIONS(739),
    [sym_subscript] = ACTIONS(739),
    [sym_active_char] = ACTIONS(739),
    [sym_comment_char] = ACTIONS(739),
    [sym_text] = ACTIONS(737),
  },
  [252] = {
    [sym__text_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_environment] = STATE(252),
    [sym_display_math] = STATE(252),
    [sym_inline_math] = STATE(252),
    [sym_begin_align] = STATE(9),
    [sym_begin_align_star] = STATE(10),
    [sym_begin_alignat] = STATE(11),
    [sym_begin_alignat_star] = STATE(12),
    [sym_begin_eqnarray] = STATE(13),
    [sym_begin_eqnarray_star] = STATE(14),
    [sym_begin_equation] = STATE(15),
    [sym_begin_equation_star] = STATE(16),
    [sym_begin_flalign] = STATE(17),
    [sym_begin_flalign_star] = STATE(18),
    [sym_begin_gather] = STATE(19),
    [sym_begin_gather_star] = STATE(20),
    [sym_begin_multline] = STATE(21),
    [sym_begin_multline_star] = STATE(22),
    [sym_begin_split] = STATE(23),
    [sym_begin_split_star] = STATE(24),
    [sym_begin_math] = STATE(25),
    [sym_begin_verbatim] = STATE(26),
    [sym_begin_Verbatim] = STATE(27),
    [sym_begin_Verbatim_star] = STATE(28),
    [sym_begin_BVerbatim] = STATE(29),
    [sym_begin_BVerbatim_star] = STATE(30),
    [sym_begin_LVerbatim] = STATE(31),
    [sym_begin_LVerbatim_star] = STATE(32),
    [sym_begin_lstlisting] = STATE(33),
    [sym_begin_minted] = STATE(34),
    [sym_verbatim_environment] = STATE(252),
    [sym_escaped] = STATE(252),
    [sym_command] = STATE(252),
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
    [sym_text_group] = STATE(252),
    [sym_opt_text_group] = STATE(252),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(252),
    [sym_begin_opt] = STATE(44),
    [aux_sym_document_repeat1] = STATE(252),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(521),
    [sym__escape] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(491),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(500),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_active_char] = ACTIONS(741),
    [sym_comment_char] = ACTIONS(503),
    [sym_text] = ACTIONS(744),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(747),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [sym__escape] = ACTIONS(749),
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
  [254] = {
    [anon_sym_RBRACK] = ACTIONS(751),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(755),
    [sym__escape] = ACTIONS(755),
    [sym_begin_group] = ACTIONS(755),
    [sym_end_group] = ACTIONS(755),
    [sym_math_shift] = ACTIONS(755),
    [sym_alignment_tab] = ACTIONS(755),
    [sym_parameter_char] = ACTIONS(755),
    [sym_superscript] = ACTIONS(755),
    [sym_subscript] = ACTIONS(755),
    [sym_active_char] = ACTIONS(755),
    [sym_comment_char] = ACTIONS(755),
    [sym_text] = ACTIONS(753),
  },
  [256] = {
    [anon_sym_RPAREN] = ACTIONS(757),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [257] = {
    [anon_sym_LBRACK] = ACTIONS(759),
    [anon_sym_RBRACK] = ACTIONS(759),
    [sym__escape] = ACTIONS(759),
    [sym_begin_group] = ACTIONS(759),
    [sym_end_group] = ACTIONS(759),
    [sym_math_shift] = ACTIONS(759),
    [sym_alignment_tab] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(759),
    [sym_superscript] = ACTIONS(759),
    [sym_subscript] = ACTIONS(759),
    [sym_active_char] = ACTIONS(759),
    [sym_comment_char] = ACTIONS(759),
    [sym_text] = ACTIONS(761),
  },
  [258] = {
    [sym__math_mode] = STATE(258),
    [sym_parameter] = STATE(258),
    [sym_math_environment] = STATE(258),
    [sym_escaped] = STATE(258),
    [sym_command] = STATE(258),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(258),
    [sym_opt_math_group] = STATE(258),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(258),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(258),
    [anon_sym_LBRACK] = ACTIONS(559),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(565),
    [sym_end_group] = ACTIONS(568),
    [sym_alignment_tab] = ACTIONS(763),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(763),
    [sym_subscript] = ACTIONS(763),
    [sym_active_char] = ACTIONS(763),
    [sym_comment_char] = ACTIONS(576),
    [sym_text] = ACTIONS(766),
  },
  [259] = {
    [sym_math_shift] = ACTIONS(769),
  },
  [260] = {
    [anon_sym_LBRACK] = ACTIONS(771),
    [anon_sym_RBRACK] = ACTIONS(771),
    [sym__escape] = ACTIONS(771),
    [sym_begin_group] = ACTIONS(771),
    [sym_end_group] = ACTIONS(771),
    [sym_math_shift] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(771),
    [sym_parameter_char] = ACTIONS(771),
    [sym_superscript] = ACTIONS(771),
    [sym_subscript] = ACTIONS(771),
    [sym_active_char] = ACTIONS(771),
    [sym_comment_char] = ACTIONS(771),
    [sym_text] = ACTIONS(773),
  },
  [261] = {
    [anon_sym_LBRACK] = ACTIONS(775),
    [anon_sym_RBRACK] = ACTIONS(775),
    [sym__escape] = ACTIONS(775),
    [sym_begin_group] = ACTIONS(775),
    [sym_end_group] = ACTIONS(775),
    [sym_math_shift] = ACTIONS(775),
    [sym_alignment_tab] = ACTIONS(775),
    [sym_parameter_char] = ACTIONS(775),
    [sym_superscript] = ACTIONS(775),
    [sym_subscript] = ACTIONS(775),
    [sym_active_char] = ACTIONS(775),
    [sym_comment_char] = ACTIONS(775),
    [sym_text] = ACTIONS(777),
  },
  [262] = {
    [sym__math_mode] = STATE(262),
    [sym_parameter] = STATE(262),
    [sym_math_environment] = STATE(262),
    [sym_escaped] = STATE(262),
    [sym_command] = STATE(262),
    [sym_begin] = STATE(62),
    [sym_begin_token] = STATE(63),
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
    [sym_math_group] = STATE(262),
    [sym_opt_math_group] = STATE(262),
    [sym_token] = STATE(37),
    [sym_comment] = STATE(262),
    [sym_begin_opt] = STATE(64),
    [aux_sym_math_environment_repeat1] = STATE(262),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(568),
    [sym__escape] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(565),
    [sym_alignment_tab] = ACTIONS(779),
    [sym_parameter_char] = ACTIONS(573),
    [sym_superscript] = ACTIONS(779),
    [sym_subscript] = ACTIONS(779),
    [sym_active_char] = ACTIONS(779),
    [sym_comment_char] = ACTIONS(576),
    [sym_text] = ACTIONS(782),
  },
  [263] = {
    [sym_end_group] = ACTIONS(785),
  },
  [264] = {
    [sym_end_group] = ACTIONS(787),
  },
  [265] = {
    [sym_end_group] = ACTIONS(789),
  },
  [266] = {
    [sym_end_group] = ACTIONS(791),
  },
  [267] = {
    [sym_end_group] = ACTIONS(793),
  },
  [268] = {
    [sym_end_group] = ACTIONS(795),
  },
  [269] = {
    [sym_end_group] = ACTIONS(797),
  },
  [270] = {
    [sym_end_group] = ACTIONS(799),
  },
  [271] = {
    [sym_end_group] = ACTIONS(801),
  },
  [272] = {
    [sym_end_group] = ACTIONS(803),
  },
  [273] = {
    [sym_end_group] = ACTIONS(805),
  },
  [274] = {
    [sym_end_group] = ACTIONS(807),
  },
  [275] = {
    [sym_end_group] = ACTIONS(809),
  },
  [276] = {
    [sym_end_group] = ACTIONS(811),
  },
  [277] = {
    [sym_end_group] = ACTIONS(813),
  },
  [278] = {
    [sym_end_group] = ACTIONS(815),
  },
  [279] = {
    [sym_end_group] = ACTIONS(817),
  },
  [280] = {
    [sym_end_group] = ACTIONS(819),
  },
  [281] = {
    [sym_end_group] = ACTIONS(821),
  },
  [282] = {
    [ts_builtin_sym_end] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(825),
    [anon_sym_RBRACK] = ACTIONS(825),
    [sym__escape] = ACTIONS(825),
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
  [283] = {
    [sym__escape] = ACTIONS(739),
    [sym_verbatim_token] = ACTIONS(739),
  },
  [284] = {
    [sym_end_group] = ACTIONS(827),
  },
  [285] = {
    [sym_end_group] = ACTIONS(829),
  },
  [286] = {
    [sym_end_group] = ACTIONS(831),
  },
  [287] = {
    [sym_end_group] = ACTIONS(833),
  },
  [288] = {
    [sym_end_group] = ACTIONS(835),
  },
  [289] = {
    [sym_end_group] = ACTIONS(837),
  },
  [290] = {
    [sym__escape] = ACTIONS(519),
    [sym_verbatim_token] = ACTIONS(519),
  },
  [291] = {
    [anon_sym_minted] = ACTIONS(839),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(841),
    [sym__escape] = ACTIONS(841),
    [sym_begin_group] = ACTIONS(841),
    [sym_alignment_tab] = ACTIONS(841),
    [sym_parameter_char] = ACTIONS(841),
    [sym_superscript] = ACTIONS(841),
    [sym_subscript] = ACTIONS(841),
    [sym_active_char] = ACTIONS(841),
    [sym_comment_char] = ACTIONS(841),
    [sym_text] = ACTIONS(843),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(845),
    [sym__escape] = ACTIONS(845),
    [sym_begin_group] = ACTIONS(845),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_parameter_char] = ACTIONS(845),
    [sym_superscript] = ACTIONS(845),
    [sym_subscript] = ACTIONS(845),
    [sym_active_char] = ACTIONS(845),
    [sym_comment_char] = ACTIONS(845),
    [sym_text] = ACTIONS(847),
  },
  [294] = {
    [sym_opt_text_group] = STATE(348),
    [sym_begin_opt] = STATE(44),
    [anon_sym_LBRACK] = ACTIONS(175),
  },
  [295] = {
    [sym_text_group] = STATE(349),
    [sym_begin_group] = ACTIONS(179),
  },
  [296] = {
    [anon_sym_LBRACK] = ACTIONS(849),
    [sym__escape] = ACTIONS(849),
    [sym_begin_group] = ACTIONS(849),
    [sym_alignment_tab] = ACTIONS(849),
    [sym_parameter_char] = ACTIONS(849),
    [sym_superscript] = ACTIONS(849),
    [sym_subscript] = ACTIONS(849),
    [sym_active_char] = ACTIONS(849),
    [sym_comment_char] = ACTIONS(849),
    [sym_text] = ACTIONS(851),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(853),
    [sym__escape] = ACTIONS(853),
    [sym_begin_group] = ACTIONS(853),
    [sym_alignment_tab] = ACTIONS(853),
    [sym_parameter_char] = ACTIONS(853),
    [sym_superscript] = ACTIONS(853),
    [sym_subscript] = ACTIONS(853),
    [sym_active_char] = ACTIONS(853),
    [sym_comment_char] = ACTIONS(853),
    [sym_text] = ACTIONS(855),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(857),
    [sym__escape] = ACTIONS(857),
    [sym_begin_group] = ACTIONS(857),
    [sym_alignment_tab] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(857),
    [sym_superscript] = ACTIONS(857),
    [sym_subscript] = ACTIONS(857),
    [sym_active_char] = ACTIONS(857),
    [sym_comment_char] = ACTIONS(857),
    [sym_text] = ACTIONS(859),
  },
  [299] = {
    [anon_sym_LBRACK] = ACTIONS(861),
    [sym__escape] = ACTIONS(861),
    [sym_begin_group] = ACTIONS(861),
    [sym_alignment_tab] = ACTIONS(861),
    [sym_parameter_char] = ACTIONS(861),
    [sym_superscript] = ACTIONS(861),
    [sym_subscript] = ACTIONS(861),
    [sym_active_char] = ACTIONS(861),
    [sym_comment_char] = ACTIONS(861),
    [sym_text] = ACTIONS(863),
  },
  [300] = {
    [anon_sym_LBRACK] = ACTIONS(865),
    [sym__escape] = ACTIONS(865),
    [sym_begin_group] = ACTIONS(865),
    [sym_alignment_tab] = ACTIONS(865),
    [sym_parameter_char] = ACTIONS(865),
    [sym_superscript] = ACTIONS(865),
    [sym_subscript] = ACTIONS(865),
    [sym_active_char] = ACTIONS(865),
    [sym_comment_char] = ACTIONS(865),
    [sym_text] = ACTIONS(867),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(869),
    [sym__escape] = ACTIONS(869),
    [sym_begin_group] = ACTIONS(869),
    [sym_alignment_tab] = ACTIONS(869),
    [sym_parameter_char] = ACTIONS(869),
    [sym_superscript] = ACTIONS(869),
    [sym_subscript] = ACTIONS(869),
    [sym_active_char] = ACTIONS(869),
    [sym_comment_char] = ACTIONS(869),
    [sym_text] = ACTIONS(871),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(873),
    [sym__escape] = ACTIONS(873),
    [sym_begin_group] = ACTIONS(873),
    [sym_alignment_tab] = ACTIONS(873),
    [sym_parameter_char] = ACTIONS(873),
    [sym_superscript] = ACTIONS(873),
    [sym_subscript] = ACTIONS(873),
    [sym_active_char] = ACTIONS(873),
    [sym_comment_char] = ACTIONS(873),
    [sym_text] = ACTIONS(875),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(877),
    [sym__escape] = ACTIONS(877),
    [sym_begin_group] = ACTIONS(877),
    [sym_alignment_tab] = ACTIONS(877),
    [sym_parameter_char] = ACTIONS(877),
    [sym_superscript] = ACTIONS(877),
    [sym_subscript] = ACTIONS(877),
    [sym_active_char] = ACTIONS(877),
    [sym_comment_char] = ACTIONS(877),
    [sym_text] = ACTIONS(879),
  },
  [304] = {
    [anon_sym_LBRACK] = ACTIONS(881),
    [sym__escape] = ACTIONS(881),
    [sym_begin_group] = ACTIONS(881),
    [sym_alignment_tab] = ACTIONS(881),
    [sym_parameter_char] = ACTIONS(881),
    [sym_superscript] = ACTIONS(881),
    [sym_subscript] = ACTIONS(881),
    [sym_active_char] = ACTIONS(881),
    [sym_comment_char] = ACTIONS(881),
    [sym_text] = ACTIONS(883),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(885),
    [sym__escape] = ACTIONS(885),
    [sym_begin_group] = ACTIONS(885),
    [sym_alignment_tab] = ACTIONS(885),
    [sym_parameter_char] = ACTIONS(885),
    [sym_superscript] = ACTIONS(885),
    [sym_subscript] = ACTIONS(885),
    [sym_active_char] = ACTIONS(885),
    [sym_comment_char] = ACTIONS(885),
    [sym_text] = ACTIONS(887),
  },
  [306] = {
    [anon_sym_LBRACK] = ACTIONS(889),
    [sym__escape] = ACTIONS(889),
    [sym_begin_group] = ACTIONS(889),
    [sym_alignment_tab] = ACTIONS(889),
    [sym_parameter_char] = ACTIONS(889),
    [sym_superscript] = ACTIONS(889),
    [sym_subscript] = ACTIONS(889),
    [sym_active_char] = ACTIONS(889),
    [sym_comment_char] = ACTIONS(889),
    [sym_text] = ACTIONS(891),
  },
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(893),
    [sym__escape] = ACTIONS(893),
    [sym_begin_group] = ACTIONS(893),
    [sym_alignment_tab] = ACTIONS(893),
    [sym_parameter_char] = ACTIONS(893),
    [sym_superscript] = ACTIONS(893),
    [sym_subscript] = ACTIONS(893),
    [sym_active_char] = ACTIONS(893),
    [sym_comment_char] = ACTIONS(893),
    [sym_text] = ACTIONS(895),
  },
  [308] = {
    [anon_sym_LBRACK] = ACTIONS(897),
    [sym__escape] = ACTIONS(897),
    [sym_begin_group] = ACTIONS(897),
    [sym_alignment_tab] = ACTIONS(897),
    [sym_parameter_char] = ACTIONS(897),
    [sym_superscript] = ACTIONS(897),
    [sym_subscript] = ACTIONS(897),
    [sym_active_char] = ACTIONS(897),
    [sym_comment_char] = ACTIONS(897),
    [sym_text] = ACTIONS(899),
  },
  [309] = {
    [sym__escape] = ACTIONS(901),
    [sym_verbatim_token] = ACTIONS(901),
  },
  [310] = {
    [anon_sym_LBRACK] = ACTIONS(903),
    [sym__escape] = ACTIONS(903),
    [sym_verbatim_token] = ACTIONS(903),
  },
  [311] = {
    [anon_sym_LBRACK] = ACTIONS(905),
    [sym__escape] = ACTIONS(905),
    [sym_verbatim_token] = ACTIONS(905),
  },
  [312] = {
    [anon_sym_LBRACK] = ACTIONS(907),
    [sym__escape] = ACTIONS(907),
    [sym_verbatim_token] = ACTIONS(907),
  },
  [313] = {
    [anon_sym_LBRACK] = ACTIONS(909),
    [sym__escape] = ACTIONS(909),
    [sym_verbatim_token] = ACTIONS(909),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(911),
    [sym__escape] = ACTIONS(911),
    [sym_verbatim_token] = ACTIONS(911),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(913),
    [sym__escape] = ACTIONS(913),
    [sym_verbatim_token] = ACTIONS(913),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(915),
    [sym__escape] = ACTIONS(915),
    [sym_begin_group] = ACTIONS(917),
    [sym_verbatim_token] = ACTIONS(915),
  },
  [317] = {
    [ts_builtin_sym_end] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(921),
    [anon_sym_RBRACK] = ACTIONS(921),
    [sym__escape] = ACTIONS(921),
    [sym_begin_group] = ACTIONS(921),
    [sym_end_group] = ACTIONS(921),
    [sym_math_shift] = ACTIONS(921),
    [sym_alignment_tab] = ACTIONS(921),
    [sym_parameter_char] = ACTIONS(921),
    [sym_superscript] = ACTIONS(921),
    [sym_subscript] = ACTIONS(921),
    [sym_active_char] = ACTIONS(921),
    [sym_comment_char] = ACTIONS(921),
    [sym_text] = ACTIONS(919),
  },
  [318] = {
    [sym_begin_group] = ACTIONS(737),
  },
  [319] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [anon_sym_LBRACK] = ACTIONS(925),
    [anon_sym_RBRACK] = ACTIONS(925),
    [sym__escape] = ACTIONS(925),
    [sym_begin_group] = ACTIONS(925),
    [sym_end_group] = ACTIONS(925),
    [sym_math_shift] = ACTIONS(925),
    [sym_alignment_tab] = ACTIONS(925),
    [sym_parameter_char] = ACTIONS(925),
    [sym_superscript] = ACTIONS(925),
    [sym_subscript] = ACTIONS(925),
    [sym_active_char] = ACTIONS(925),
    [sym_comment_char] = ACTIONS(925),
    [sym_text] = ACTIONS(923),
  },
  [320] = {
    [ts_builtin_sym_end] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(929),
    [anon_sym_RBRACK] = ACTIONS(929),
    [sym__escape] = ACTIONS(929),
    [sym_begin_group] = ACTIONS(929),
    [sym_end_group] = ACTIONS(929),
    [sym_math_shift] = ACTIONS(929),
    [sym_alignment_tab] = ACTIONS(929),
    [sym_parameter_char] = ACTIONS(929),
    [sym_superscript] = ACTIONS(929),
    [sym_subscript] = ACTIONS(929),
    [sym_active_char] = ACTIONS(929),
    [sym_comment_char] = ACTIONS(929),
    [sym_text] = ACTIONS(927),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [sym__escape] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_end_group] = ACTIONS(933),
    [sym_math_shift] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_active_char] = ACTIONS(933),
    [sym_comment_char] = ACTIONS(933),
    [sym_text] = ACTIONS(931),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(937),
    [anon_sym_RBRACK] = ACTIONS(937),
    [sym__escape] = ACTIONS(937),
    [sym_begin_group] = ACTIONS(937),
    [sym_end_group] = ACTIONS(937),
    [sym_math_shift] = ACTIONS(937),
    [sym_alignment_tab] = ACTIONS(937),
    [sym_parameter_char] = ACTIONS(937),
    [sym_superscript] = ACTIONS(937),
    [sym_subscript] = ACTIONS(937),
    [sym_active_char] = ACTIONS(937),
    [sym_comment_char] = ACTIONS(937),
    [sym_text] = ACTIONS(935),
  },
  [323] = {
    [ts_builtin_sym_end] = ACTIONS(939),
    [anon_sym_LBRACK] = ACTIONS(941),
    [anon_sym_RBRACK] = ACTIONS(941),
    [sym__escape] = ACTIONS(941),
    [sym_begin_group] = ACTIONS(941),
    [sym_end_group] = ACTIONS(941),
    [sym_math_shift] = ACTIONS(941),
    [sym_alignment_tab] = ACTIONS(941),
    [sym_parameter_char] = ACTIONS(941),
    [sym_superscript] = ACTIONS(941),
    [sym_subscript] = ACTIONS(941),
    [sym_active_char] = ACTIONS(941),
    [sym_comment_char] = ACTIONS(941),
    [sym_text] = ACTIONS(939),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(945),
    [anon_sym_RBRACK] = ACTIONS(945),
    [sym__escape] = ACTIONS(945),
    [sym_begin_group] = ACTIONS(945),
    [sym_end_group] = ACTIONS(945),
    [sym_math_shift] = ACTIONS(945),
    [sym_alignment_tab] = ACTIONS(945),
    [sym_parameter_char] = ACTIONS(945),
    [sym_superscript] = ACTIONS(945),
    [sym_subscript] = ACTIONS(945),
    [sym_active_char] = ACTIONS(945),
    [sym_comment_char] = ACTIONS(945),
    [sym_text] = ACTIONS(943),
  },
  [325] = {
    [ts_builtin_sym_end] = ACTIONS(947),
    [anon_sym_LBRACK] = ACTIONS(949),
    [anon_sym_RBRACK] = ACTIONS(949),
    [sym__escape] = ACTIONS(949),
    [sym_begin_group] = ACTIONS(949),
    [sym_end_group] = ACTIONS(949),
    [sym_math_shift] = ACTIONS(949),
    [sym_alignment_tab] = ACTIONS(949),
    [sym_parameter_char] = ACTIONS(949),
    [sym_superscript] = ACTIONS(949),
    [sym_subscript] = ACTIONS(949),
    [sym_active_char] = ACTIONS(949),
    [sym_comment_char] = ACTIONS(949),
    [sym_text] = ACTIONS(947),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(951),
    [anon_sym_LBRACK] = ACTIONS(953),
    [anon_sym_RBRACK] = ACTIONS(953),
    [sym__escape] = ACTIONS(953),
    [sym_begin_group] = ACTIONS(953),
    [sym_end_group] = ACTIONS(953),
    [sym_math_shift] = ACTIONS(953),
    [sym_alignment_tab] = ACTIONS(953),
    [sym_parameter_char] = ACTIONS(953),
    [sym_superscript] = ACTIONS(953),
    [sym_subscript] = ACTIONS(953),
    [sym_active_char] = ACTIONS(953),
    [sym_comment_char] = ACTIONS(953),
    [sym_text] = ACTIONS(951),
  },
  [327] = {
    [ts_builtin_sym_end] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(957),
    [anon_sym_RBRACK] = ACTIONS(957),
    [sym__escape] = ACTIONS(957),
    [sym_begin_group] = ACTIONS(957),
    [sym_end_group] = ACTIONS(957),
    [sym_math_shift] = ACTIONS(957),
    [sym_alignment_tab] = ACTIONS(957),
    [sym_parameter_char] = ACTIONS(957),
    [sym_superscript] = ACTIONS(957),
    [sym_subscript] = ACTIONS(957),
    [sym_active_char] = ACTIONS(957),
    [sym_comment_char] = ACTIONS(957),
    [sym_text] = ACTIONS(955),
  },
  [328] = {
    [ts_builtin_sym_end] = ACTIONS(959),
    [anon_sym_LBRACK] = ACTIONS(961),
    [anon_sym_RBRACK] = ACTIONS(961),
    [sym__escape] = ACTIONS(961),
    [sym_begin_group] = ACTIONS(961),
    [sym_end_group] = ACTIONS(961),
    [sym_math_shift] = ACTIONS(961),
    [sym_alignment_tab] = ACTIONS(961),
    [sym_parameter_char] = ACTIONS(961),
    [sym_superscript] = ACTIONS(961),
    [sym_subscript] = ACTIONS(961),
    [sym_active_char] = ACTIONS(961),
    [sym_comment_char] = ACTIONS(961),
    [sym_text] = ACTIONS(959),
  },
  [329] = {
    [ts_builtin_sym_end] = ACTIONS(963),
    [anon_sym_LBRACK] = ACTIONS(965),
    [anon_sym_RBRACK] = ACTIONS(965),
    [sym__escape] = ACTIONS(965),
    [sym_begin_group] = ACTIONS(965),
    [sym_end_group] = ACTIONS(965),
    [sym_math_shift] = ACTIONS(965),
    [sym_alignment_tab] = ACTIONS(965),
    [sym_parameter_char] = ACTIONS(965),
    [sym_superscript] = ACTIONS(965),
    [sym_subscript] = ACTIONS(965),
    [sym_active_char] = ACTIONS(965),
    [sym_comment_char] = ACTIONS(965),
    [sym_text] = ACTIONS(963),
  },
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(967),
    [anon_sym_LBRACK] = ACTIONS(969),
    [anon_sym_RBRACK] = ACTIONS(969),
    [sym__escape] = ACTIONS(969),
    [sym_begin_group] = ACTIONS(969),
    [sym_end_group] = ACTIONS(969),
    [sym_math_shift] = ACTIONS(969),
    [sym_alignment_tab] = ACTIONS(969),
    [sym_parameter_char] = ACTIONS(969),
    [sym_superscript] = ACTIONS(969),
    [sym_subscript] = ACTIONS(969),
    [sym_active_char] = ACTIONS(969),
    [sym_comment_char] = ACTIONS(969),
    [sym_text] = ACTIONS(967),
  },
  [331] = {
    [ts_builtin_sym_end] = ACTIONS(971),
    [anon_sym_LBRACK] = ACTIONS(973),
    [anon_sym_RBRACK] = ACTIONS(973),
    [sym__escape] = ACTIONS(973),
    [sym_begin_group] = ACTIONS(973),
    [sym_end_group] = ACTIONS(973),
    [sym_math_shift] = ACTIONS(973),
    [sym_alignment_tab] = ACTIONS(973),
    [sym_parameter_char] = ACTIONS(973),
    [sym_superscript] = ACTIONS(973),
    [sym_subscript] = ACTIONS(973),
    [sym_active_char] = ACTIONS(973),
    [sym_comment_char] = ACTIONS(973),
    [sym_text] = ACTIONS(971),
  },
  [332] = {
    [ts_builtin_sym_end] = ACTIONS(975),
    [anon_sym_LBRACK] = ACTIONS(977),
    [anon_sym_RBRACK] = ACTIONS(977),
    [sym__escape] = ACTIONS(977),
    [sym_begin_group] = ACTIONS(977),
    [sym_end_group] = ACTIONS(977),
    [sym_math_shift] = ACTIONS(977),
    [sym_alignment_tab] = ACTIONS(977),
    [sym_parameter_char] = ACTIONS(977),
    [sym_superscript] = ACTIONS(977),
    [sym_subscript] = ACTIONS(977),
    [sym_active_char] = ACTIONS(977),
    [sym_comment_char] = ACTIONS(977),
    [sym_text] = ACTIONS(975),
  },
  [333] = {
    [ts_builtin_sym_end] = ACTIONS(979),
    [anon_sym_LBRACK] = ACTIONS(981),
    [anon_sym_RBRACK] = ACTIONS(981),
    [sym__escape] = ACTIONS(981),
    [sym_begin_group] = ACTIONS(981),
    [sym_end_group] = ACTIONS(981),
    [sym_math_shift] = ACTIONS(981),
    [sym_alignment_tab] = ACTIONS(981),
    [sym_parameter_char] = ACTIONS(981),
    [sym_superscript] = ACTIONS(981),
    [sym_subscript] = ACTIONS(981),
    [sym_active_char] = ACTIONS(981),
    [sym_comment_char] = ACTIONS(981),
    [sym_text] = ACTIONS(979),
  },
  [334] = {
    [ts_builtin_sym_end] = ACTIONS(983),
    [anon_sym_LBRACK] = ACTIONS(985),
    [anon_sym_RBRACK] = ACTIONS(985),
    [sym__escape] = ACTIONS(985),
    [sym_begin_group] = ACTIONS(985),
    [sym_end_group] = ACTIONS(985),
    [sym_math_shift] = ACTIONS(985),
    [sym_alignment_tab] = ACTIONS(985),
    [sym_parameter_char] = ACTIONS(985),
    [sym_superscript] = ACTIONS(985),
    [sym_subscript] = ACTIONS(985),
    [sym_active_char] = ACTIONS(985),
    [sym_comment_char] = ACTIONS(985),
    [sym_text] = ACTIONS(983),
  },
  [335] = {
    [ts_builtin_sym_end] = ACTIONS(987),
    [anon_sym_LBRACK] = ACTIONS(989),
    [anon_sym_RBRACK] = ACTIONS(989),
    [sym__escape] = ACTIONS(989),
    [sym_begin_group] = ACTIONS(989),
    [sym_end_group] = ACTIONS(989),
    [sym_math_shift] = ACTIONS(989),
    [sym_alignment_tab] = ACTIONS(989),
    [sym_parameter_char] = ACTIONS(989),
    [sym_superscript] = ACTIONS(989),
    [sym_subscript] = ACTIONS(989),
    [sym_active_char] = ACTIONS(989),
    [sym_comment_char] = ACTIONS(989),
    [sym_text] = ACTIONS(987),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(991),
    [anon_sym_LBRACK] = ACTIONS(993),
    [anon_sym_RBRACK] = ACTIONS(993),
    [sym__escape] = ACTIONS(993),
    [sym_begin_group] = ACTIONS(993),
    [sym_end_group] = ACTIONS(993),
    [sym_math_shift] = ACTIONS(993),
    [sym_alignment_tab] = ACTIONS(993),
    [sym_parameter_char] = ACTIONS(993),
    [sym_superscript] = ACTIONS(993),
    [sym_subscript] = ACTIONS(993),
    [sym_active_char] = ACTIONS(993),
    [sym_comment_char] = ACTIONS(993),
    [sym_text] = ACTIONS(991),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(995),
    [anon_sym_LBRACK] = ACTIONS(997),
    [anon_sym_RBRACK] = ACTIONS(997),
    [sym__escape] = ACTIONS(997),
    [sym_begin_group] = ACTIONS(997),
    [sym_end_group] = ACTIONS(997),
    [sym_math_shift] = ACTIONS(997),
    [sym_alignment_tab] = ACTIONS(997),
    [sym_parameter_char] = ACTIONS(997),
    [sym_superscript] = ACTIONS(997),
    [sym_subscript] = ACTIONS(997),
    [sym_active_char] = ACTIONS(997),
    [sym_comment_char] = ACTIONS(997),
    [sym_text] = ACTIONS(995),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(999),
    [anon_sym_LBRACK] = ACTIONS(1001),
    [anon_sym_RBRACK] = ACTIONS(1001),
    [sym__escape] = ACTIONS(1001),
    [sym_begin_group] = ACTIONS(1001),
    [sym_end_group] = ACTIONS(1001),
    [sym_math_shift] = ACTIONS(1001),
    [sym_alignment_tab] = ACTIONS(1001),
    [sym_parameter_char] = ACTIONS(1001),
    [sym_superscript] = ACTIONS(1001),
    [sym_subscript] = ACTIONS(1001),
    [sym_active_char] = ACTIONS(1001),
    [sym_comment_char] = ACTIONS(1001),
    [sym_text] = ACTIONS(999),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1005),
    [anon_sym_RBRACK] = ACTIONS(1005),
    [sym__escape] = ACTIONS(1005),
    [sym_begin_group] = ACTIONS(1005),
    [sym_end_group] = ACTIONS(1005),
    [sym_math_shift] = ACTIONS(1005),
    [sym_alignment_tab] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1005),
    [sym_superscript] = ACTIONS(1005),
    [sym_subscript] = ACTIONS(1005),
    [sym_active_char] = ACTIONS(1005),
    [sym_comment_char] = ACTIONS(1005),
    [sym_text] = ACTIONS(1003),
  },
  [340] = {
    [ts_builtin_sym_end] = ACTIONS(1007),
    [anon_sym_LBRACK] = ACTIONS(1009),
    [anon_sym_RBRACK] = ACTIONS(1009),
    [sym__escape] = ACTIONS(1009),
    [sym_begin_group] = ACTIONS(1009),
    [sym_end_group] = ACTIONS(1009),
    [sym_math_shift] = ACTIONS(1009),
    [sym_alignment_tab] = ACTIONS(1009),
    [sym_parameter_char] = ACTIONS(1009),
    [sym_superscript] = ACTIONS(1009),
    [sym_subscript] = ACTIONS(1009),
    [sym_active_char] = ACTIONS(1009),
    [sym_comment_char] = ACTIONS(1009),
    [sym_text] = ACTIONS(1007),
  },
  [341] = {
    [ts_builtin_sym_end] = ACTIONS(1011),
    [anon_sym_LBRACK] = ACTIONS(1013),
    [anon_sym_RBRACK] = ACTIONS(1013),
    [sym__escape] = ACTIONS(1013),
    [sym_begin_group] = ACTIONS(1013),
    [sym_end_group] = ACTIONS(1013),
    [sym_math_shift] = ACTIONS(1013),
    [sym_alignment_tab] = ACTIONS(1013),
    [sym_parameter_char] = ACTIONS(1013),
    [sym_superscript] = ACTIONS(1013),
    [sym_subscript] = ACTIONS(1013),
    [sym_active_char] = ACTIONS(1013),
    [sym_comment_char] = ACTIONS(1013),
    [sym_text] = ACTIONS(1011),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(1015),
    [anon_sym_LBRACK] = ACTIONS(1017),
    [anon_sym_RBRACK] = ACTIONS(1017),
    [sym__escape] = ACTIONS(1017),
    [sym_begin_group] = ACTIONS(1017),
    [sym_end_group] = ACTIONS(1017),
    [sym_math_shift] = ACTIONS(1017),
    [sym_alignment_tab] = ACTIONS(1017),
    [sym_parameter_char] = ACTIONS(1017),
    [sym_superscript] = ACTIONS(1017),
    [sym_subscript] = ACTIONS(1017),
    [sym_active_char] = ACTIONS(1017),
    [sym_comment_char] = ACTIONS(1017),
    [sym_text] = ACTIONS(1015),
  },
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(1019),
    [anon_sym_LBRACK] = ACTIONS(1021),
    [anon_sym_RBRACK] = ACTIONS(1021),
    [sym__escape] = ACTIONS(1021),
    [sym_begin_group] = ACTIONS(1021),
    [sym_end_group] = ACTIONS(1021),
    [sym_math_shift] = ACTIONS(1021),
    [sym_alignment_tab] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(1021),
    [sym_superscript] = ACTIONS(1021),
    [sym_subscript] = ACTIONS(1021),
    [sym_active_char] = ACTIONS(1021),
    [sym_comment_char] = ACTIONS(1021),
    [sym_text] = ACTIONS(1019),
  },
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(1023),
    [anon_sym_LBRACK] = ACTIONS(1025),
    [anon_sym_RBRACK] = ACTIONS(1025),
    [sym__escape] = ACTIONS(1025),
    [sym_begin_group] = ACTIONS(1025),
    [sym_end_group] = ACTIONS(1025),
    [sym_math_shift] = ACTIONS(1025),
    [sym_alignment_tab] = ACTIONS(1025),
    [sym_parameter_char] = ACTIONS(1025),
    [sym_superscript] = ACTIONS(1025),
    [sym_subscript] = ACTIONS(1025),
    [sym_active_char] = ACTIONS(1025),
    [sym_comment_char] = ACTIONS(1025),
    [sym_text] = ACTIONS(1023),
  },
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(1027),
    [anon_sym_LBRACK] = ACTIONS(1029),
    [anon_sym_RBRACK] = ACTIONS(1029),
    [sym__escape] = ACTIONS(1029),
    [sym_begin_group] = ACTIONS(1029),
    [sym_end_group] = ACTIONS(1029),
    [sym_math_shift] = ACTIONS(1029),
    [sym_alignment_tab] = ACTIONS(1029),
    [sym_parameter_char] = ACTIONS(1029),
    [sym_superscript] = ACTIONS(1029),
    [sym_subscript] = ACTIONS(1029),
    [sym_active_char] = ACTIONS(1029),
    [sym_comment_char] = ACTIONS(1029),
    [sym_text] = ACTIONS(1027),
  },
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(1031),
    [anon_sym_LBRACK] = ACTIONS(1033),
    [anon_sym_RBRACK] = ACTIONS(1033),
    [sym__escape] = ACTIONS(1033),
    [sym_begin_group] = ACTIONS(1033),
    [sym_end_group] = ACTIONS(1033),
    [sym_math_shift] = ACTIONS(1033),
    [sym_alignment_tab] = ACTIONS(1033),
    [sym_parameter_char] = ACTIONS(1033),
    [sym_superscript] = ACTIONS(1033),
    [sym_subscript] = ACTIONS(1033),
    [sym_active_char] = ACTIONS(1033),
    [sym_comment_char] = ACTIONS(1033),
    [sym_text] = ACTIONS(1031),
  },
  [347] = {
    [sym_end_group] = ACTIONS(1035),
  },
  [348] = {
    [anon_sym_LBRACK] = ACTIONS(1037),
    [sym__escape] = ACTIONS(1037),
    [sym_begin_group] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1037),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_comment_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1039),
  },
  [349] = {
    [anon_sym_LBRACK] = ACTIONS(1041),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_comment_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1043),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(1045),
    [anon_sym_LBRACK] = ACTIONS(1047),
    [anon_sym_RBRACK] = ACTIONS(1047),
    [sym__escape] = ACTIONS(1047),
    [sym_begin_group] = ACTIONS(1047),
    [sym_end_group] = ACTIONS(1047),
    [sym_math_shift] = ACTIONS(1047),
    [sym_alignment_tab] = ACTIONS(1047),
    [sym_parameter_char] = ACTIONS(1047),
    [sym_superscript] = ACTIONS(1047),
    [sym_subscript] = ACTIONS(1047),
    [sym_active_char] = ACTIONS(1047),
    [sym_comment_char] = ACTIONS(1047),
    [sym_text] = ACTIONS(1045),
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
  [15] = {.count = 1, .reusable = false}, SHIFT(45),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(45),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(46),
  [29] = {.count = 1, .reusable = false}, SHIFT(47),
  [31] = {.count = 1, .reusable = false}, SHIFT(48),
  [33] = {.count = 1, .reusable = false}, SHIFT(49),
  [35] = {.count = 1, .reusable = false}, SHIFT(50),
  [37] = {.count = 1, .reusable = false}, SHIFT(51),
  [39] = {.count = 1, .reusable = false}, SHIFT(52),
  [41] = {.count = 1, .reusable = false}, SHIFT(53),
  [43] = {.count = 1, .reusable = false}, SHIFT(54),
  [45] = {.count = 1, .reusable = false}, SHIFT(55),
  [47] = {.count = 1, .reusable = false}, SHIFT(56),
  [49] = {.count = 1, .reusable = false}, SHIFT(57),
  [51] = {.count = 1, .reusable = false}, SHIFT(58),
  [53] = {.count = 1, .reusable = true}, SHIFT(58),
  [55] = {.count = 1, .reusable = false}, SHIFT(59),
  [57] = {.count = 1, .reusable = false}, SHIFT(60),
  [59] = {.count = 1, .reusable = false}, SHIFT(61),
  [61] = {.count = 1, .reusable = false}, SHIFT(65),
  [63] = {.count = 1, .reusable = true}, SHIFT(65),
  [65] = {.count = 1, .reusable = true}, SHIFT(66),
  [67] = {.count = 1, .reusable = true}, SHIFT(67),
  [69] = {.count = 1, .reusable = false}, SHIFT(67),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = false}, SHIFT(68),
  [75] = {.count = 1, .reusable = false}, SHIFT(71),
  [77] = {.count = 1, .reusable = true}, SHIFT(71),
  [79] = {.count = 1, .reusable = false}, SHIFT(73),
  [81] = {.count = 1, .reusable = true}, SHIFT(73),
  [83] = {.count = 1, .reusable = false}, SHIFT(75),
  [85] = {.count = 1, .reusable = true}, SHIFT(75),
  [87] = {.count = 1, .reusable = false}, SHIFT(77),
  [89] = {.count = 1, .reusable = true}, SHIFT(77),
  [91] = {.count = 1, .reusable = false}, SHIFT(79),
  [93] = {.count = 1, .reusable = true}, SHIFT(79),
  [95] = {.count = 1, .reusable = false}, SHIFT(81),
  [97] = {.count = 1, .reusable = true}, SHIFT(81),
  [99] = {.count = 1, .reusable = false}, SHIFT(83),
  [101] = {.count = 1, .reusable = true}, SHIFT(83),
  [103] = {.count = 1, .reusable = false}, SHIFT(85),
  [105] = {.count = 1, .reusable = true}, SHIFT(85),
  [107] = {.count = 1, .reusable = false}, SHIFT(87),
  [109] = {.count = 1, .reusable = true}, SHIFT(87),
  [111] = {.count = 1, .reusable = false}, SHIFT(89),
  [113] = {.count = 1, .reusable = true}, SHIFT(89),
  [115] = {.count = 1, .reusable = false}, SHIFT(91),
  [117] = {.count = 1, .reusable = true}, SHIFT(91),
  [119] = {.count = 1, .reusable = false}, SHIFT(93),
  [121] = {.count = 1, .reusable = true}, SHIFT(93),
  [123] = {.count = 1, .reusable = false}, SHIFT(95),
  [125] = {.count = 1, .reusable = true}, SHIFT(95),
  [127] = {.count = 1, .reusable = false}, SHIFT(97),
  [129] = {.count = 1, .reusable = true}, SHIFT(97),
  [131] = {.count = 1, .reusable = false}, SHIFT(99),
  [133] = {.count = 1, .reusable = true}, SHIFT(99),
  [135] = {.count = 1, .reusable = false}, SHIFT(101),
  [137] = {.count = 1, .reusable = true}, SHIFT(101),
  [139] = {.count = 1, .reusable = false}, SHIFT(104),
  [141] = {.count = 1, .reusable = true}, SHIFT(104),
  [143] = {.count = 1, .reusable = false}, SHIFT(105),
  [145] = {.count = 1, .reusable = false}, SHIFT(108),
  [147] = {.count = 1, .reusable = false}, SHIFT(112),
  [149] = {.count = 1, .reusable = false}, SHIFT(115),
  [151] = {.count = 1, .reusable = false}, SHIFT(118),
  [153] = {.count = 1, .reusable = false}, SHIFT(121),
  [155] = {.count = 1, .reusable = false}, SHIFT(124),
  [157] = {.count = 1, .reusable = false}, SHIFT(127),
  [159] = {.count = 1, .reusable = false}, SHIFT(130),
  [161] = {.count = 1, .reusable = true}, SHIFT(131),
  [163] = {.count = 1, .reusable = false}, SHIFT(133),
  [165] = {.count = 1, .reusable = false}, SHIFT(136),
  [167] = {.count = 1, .reusable = true}, SHIFT(136),
  [169] = {.count = 1, .reusable = true}, SHIFT(137),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [175] = {.count = 1, .reusable = true}, SHIFT(2),
  [177] = {.count = 1, .reusable = true}, SHIFT(139),
  [179] = {.count = 1, .reusable = true}, SHIFT(4),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [185] = {.count = 1, .reusable = true}, SHIFT(148),
  [187] = {.count = 1, .reusable = false}, SHIFT(150),
  [189] = {.count = 1, .reusable = false}, SHIFT(152),
  [191] = {.count = 1, .reusable = true}, SHIFT(152),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [195] = {.count = 1, .reusable = false}, SHIFT(153),
  [197] = {.count = 1, .reusable = true}, SHIFT(153),
  [199] = {.count = 1, .reusable = false}, SHIFT(154),
  [201] = {.count = 1, .reusable = false}, SHIFT(155),
  [203] = {.count = 1, .reusable = true}, SHIFT(155),
  [205] = {.count = 1, .reusable = false}, SHIFT(156),
  [207] = {.count = 1, .reusable = false}, SHIFT(157),
  [209] = {.count = 1, .reusable = true}, SHIFT(157),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [213] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [237] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [239] = {.count = 1, .reusable = false}, SHIFT(158),
  [241] = {.count = 1, .reusable = false}, SHIFT(159),
  [243] = {.count = 1, .reusable = true}, SHIFT(159),
  [245] = {.count = 1, .reusable = false}, SHIFT(160),
  [247] = {.count = 1, .reusable = false}, SHIFT(161),
  [249] = {.count = 1, .reusable = true}, SHIFT(161),
  [251] = {.count = 1, .reusable = false}, SHIFT(162),
  [253] = {.count = 1, .reusable = false}, SHIFT(163),
  [255] = {.count = 1, .reusable = true}, SHIFT(163),
  [257] = {.count = 1, .reusable = false}, SHIFT(165),
  [259] = {.count = 1, .reusable = true}, SHIFT(165),
  [261] = {.count = 1, .reusable = false}, SHIFT(167),
  [263] = {.count = 1, .reusable = true}, SHIFT(167),
  [265] = {.count = 1, .reusable = false}, SHIFT(168),
  [267] = {.count = 1, .reusable = false}, SHIFT(169),
  [269] = {.count = 1, .reusable = true}, SHIFT(169),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [275] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [277] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [279] = {.count = 1, .reusable = false}, SHIFT(170),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 2),
  [283] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 2),
  [285] = {.count = 1, .reusable = true}, SHIFT(171),
  [287] = {.count = 1, .reusable = false}, SHIFT(173),
  [289] = {.count = 1, .reusable = true}, SHIFT(173),
  [291] = {.count = 1, .reusable = true}, SHIFT(174),
  [293] = {.count = 1, .reusable = true}, SHIFT(175),
  [295] = {.count = 1, .reusable = true}, SHIFT(176),
  [297] = {.count = 1, .reusable = true}, SHIFT(177),
  [299] = {.count = 1, .reusable = true}, SHIFT(178),
  [301] = {.count = 1, .reusable = true}, SHIFT(179),
  [303] = {.count = 1, .reusable = true}, SHIFT(180),
  [305] = {.count = 1, .reusable = true}, SHIFT(181),
  [307] = {.count = 1, .reusable = true}, SHIFT(182),
  [309] = {.count = 1, .reusable = true}, SHIFT(183),
  [311] = {.count = 1, .reusable = true}, SHIFT(184),
  [313] = {.count = 1, .reusable = true}, SHIFT(185),
  [315] = {.count = 1, .reusable = true}, SHIFT(186),
  [317] = {.count = 1, .reusable = true}, SHIFT(187),
  [319] = {.count = 1, .reusable = true}, SHIFT(188),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 2),
  [323] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 2),
  [325] = {.count = 1, .reusable = true}, SHIFT(189),
  [327] = {.count = 1, .reusable = true}, SHIFT(170),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 2),
  [331] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 2),
  [333] = {.count = 1, .reusable = true}, SHIFT(190),
  [335] = {.count = 1, .reusable = false}, SHIFT(192),
  [337] = {.count = 1, .reusable = true}, SHIFT(193),
  [339] = {.count = 1, .reusable = false}, SHIFT(194),
  [341] = {.count = 1, .reusable = false}, SHIFT(195),
  [343] = {.count = 1, .reusable = false}, SHIFT(197),
  [345] = {.count = 1, .reusable = true}, SHIFT(197),
  [347] = {.count = 1, .reusable = true}, SHIFT(198),
  [349] = {.count = 1, .reusable = false}, SHIFT(199),
  [351] = {.count = 1, .reusable = true}, SHIFT(200),
  [353] = {.count = 1, .reusable = false}, SHIFT(201),
  [355] = {.count = 1, .reusable = true}, SHIFT(202),
  [357] = {.count = 1, .reusable = false}, SHIFT(203),
  [359] = {.count = 1, .reusable = true}, SHIFT(204),
  [361] = {.count = 1, .reusable = false}, SHIFT(205),
  [363] = {.count = 1, .reusable = true}, SHIFT(206),
  [365] = {.count = 1, .reusable = false}, SHIFT(207),
  [367] = {.count = 1, .reusable = true}, SHIFT(208),
  [369] = {.count = 1, .reusable = false}, SHIFT(209),
  [371] = {.count = 1, .reusable = false}, SHIFT(210),
  [373] = {.count = 1, .reusable = false}, SHIFT(211),
  [375] = {.count = 1, .reusable = true}, SHIFT(211),
  [377] = {.count = 1, .reusable = false}, SHIFT(213),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 2),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 2),
  [383] = {.count = 1, .reusable = false}, SHIFT(216),
  [385] = {.count = 1, .reusable = true}, SHIFT(216),
  [387] = {.count = 1, .reusable = false}, SHIFT(217),
  [389] = {.count = 1, .reusable = false}, SHIFT(218),
  [391] = {.count = 1, .reusable = false}, SHIFT(219),
  [393] = {.count = 1, .reusable = false}, SHIFT(220),
  [395] = {.count = 1, .reusable = false}, SHIFT(221),
  [397] = {.count = 1, .reusable = false}, SHIFT(222),
  [399] = {.count = 1, .reusable = false}, SHIFT(223),
  [401] = {.count = 1, .reusable = false}, SHIFT(224),
  [403] = {.count = 1, .reusable = false}, SHIFT(225),
  [405] = {.count = 1, .reusable = false}, SHIFT(226),
  [407] = {.count = 1, .reusable = false}, SHIFT(227),
  [409] = {.count = 1, .reusable = false}, SHIFT(228),
  [411] = {.count = 1, .reusable = false}, SHIFT(229),
  [413] = {.count = 1, .reusable = false}, SHIFT(230),
  [415] = {.count = 1, .reusable = false}, SHIFT(231),
  [417] = {.count = 1, .reusable = false}, SHIFT(232),
  [419] = {.count = 1, .reusable = false}, SHIFT(233),
  [421] = {.count = 1, .reusable = false}, SHIFT(234),
  [423] = {.count = 1, .reusable = false}, SHIFT(235),
  [425] = {.count = 1, .reusable = false}, SHIFT(236),
  [427] = {.count = 1, .reusable = false}, SHIFT(237),
  [429] = {.count = 1, .reusable = false}, SHIFT(238),
  [431] = {.count = 1, .reusable = false}, SHIFT(239),
  [433] = {.count = 1, .reusable = false}, SHIFT(240),
  [435] = {.count = 1, .reusable = false}, SHIFT(241),
  [437] = {.count = 1, .reusable = false}, SHIFT(242),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2),
  [443] = {.count = 1, .reusable = true}, SHIFT(242),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [449] = {.count = 1, .reusable = false}, SHIFT(244),
  [451] = {.count = 1, .reusable = false}, SHIFT(246),
  [453] = {.count = 1, .reusable = true}, SHIFT(246),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [467] = {.count = 1, .reusable = true}, SHIFT(249),
  [469] = {.count = 1, .reusable = true}, SHIFT(250),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [479] = {.count = 1, .reusable = false}, SHIFT(252),
  [481] = {.count = 1, .reusable = true}, SHIFT(252),
  [483] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [485] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [488] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [491] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [494] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [497] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [500] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [503] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(153),
  [509] = {.count = 1, .reusable = false}, SHIFT(253),
  [511] = {.count = 1, .reusable = false}, SHIFT(254),
  [513] = {.count = 1, .reusable = false}, SHIFT(255),
  [515] = {.count = 1, .reusable = false}, SHIFT(256),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [519] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [521] = {.count = 1, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2),
  [523] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [526] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(159),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [533] = {.count = 1, .reusable = false}, SHIFT(257),
  [535] = {.count = 1, .reusable = false}, SHIFT(258),
  [537] = {.count = 1, .reusable = true}, SHIFT(258),
  [539] = {.count = 1, .reusable = true}, SHIFT(253),
  [541] = {.count = 1, .reusable = false}, SHIFT(259),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [551] = {.count = 1, .reusable = false}, SHIFT(262),
  [553] = {.count = 1, .reusable = true}, SHIFT(262),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 3),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 3),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(2),
  [562] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(59),
  [565] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(60),
  [568] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(169),
  [573] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(6),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(7),
  [579] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(169),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [584] = {.count = 1, .reusable = true}, SHIFT(263),
  [586] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 3),
  [588] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 3),
  [590] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(173),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(173),
  [596] = {.count = 1, .reusable = true}, SHIFT(264),
  [598] = {.count = 1, .reusable = true}, SHIFT(265),
  [600] = {.count = 1, .reusable = true}, SHIFT(266),
  [602] = {.count = 1, .reusable = true}, SHIFT(267),
  [604] = {.count = 1, .reusable = true}, SHIFT(268),
  [606] = {.count = 1, .reusable = true}, SHIFT(269),
  [608] = {.count = 1, .reusable = true}, SHIFT(270),
  [610] = {.count = 1, .reusable = true}, SHIFT(271),
  [612] = {.count = 1, .reusable = true}, SHIFT(272),
  [614] = {.count = 1, .reusable = true}, SHIFT(273),
  [616] = {.count = 1, .reusable = true}, SHIFT(274),
  [618] = {.count = 1, .reusable = true}, SHIFT(275),
  [620] = {.count = 1, .reusable = true}, SHIFT(276),
  [622] = {.count = 1, .reusable = true}, SHIFT(277),
  [624] = {.count = 1, .reusable = true}, SHIFT(278),
  [626] = {.count = 1, .reusable = true}, SHIFT(279),
  [628] = {.count = 1, .reusable = true}, SHIFT(280),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 3),
  [632] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 3),
  [634] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2),
  [636] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2), SHIFT_REPEAT(192),
  [639] = {.count = 1, .reusable = true}, SHIFT(281),
  [641] = {.count = 1, .reusable = true}, SHIFT(284),
  [643] = {.count = 1, .reusable = true}, SHIFT(285),
  [645] = {.count = 1, .reusable = true}, SHIFT(286),
  [647] = {.count = 1, .reusable = true}, SHIFT(287),
  [649] = {.count = 1, .reusable = true}, SHIFT(288),
  [651] = {.count = 1, .reusable = true}, SHIFT(289),
  [653] = {.count = 1, .reusable = false}, SHIFT(290),
  [655] = {.count = 1, .reusable = true}, SHIFT(291),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [659] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 3),
  [663] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 3),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(216),
  [668] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(216),
  [671] = {.count = 1, .reusable = true}, SHIFT(292),
  [673] = {.count = 1, .reusable = true}, SHIFT(293),
  [675] = {.count = 1, .reusable = true}, SHIFT(294),
  [677] = {.count = 1, .reusable = true}, SHIFT(295),
  [679] = {.count = 1, .reusable = true}, SHIFT(296),
  [681] = {.count = 1, .reusable = true}, SHIFT(297),
  [683] = {.count = 1, .reusable = true}, SHIFT(298),
  [685] = {.count = 1, .reusable = true}, SHIFT(299),
  [687] = {.count = 1, .reusable = true}, SHIFT(300),
  [689] = {.count = 1, .reusable = true}, SHIFT(301),
  [691] = {.count = 1, .reusable = true}, SHIFT(302),
  [693] = {.count = 1, .reusable = true}, SHIFT(303),
  [695] = {.count = 1, .reusable = true}, SHIFT(304),
  [697] = {.count = 1, .reusable = true}, SHIFT(305),
  [699] = {.count = 1, .reusable = true}, SHIFT(306),
  [701] = {.count = 1, .reusable = true}, SHIFT(307),
  [703] = {.count = 1, .reusable = true}, SHIFT(308),
  [705] = {.count = 1, .reusable = true}, SHIFT(309),
  [707] = {.count = 1, .reusable = true}, SHIFT(310),
  [709] = {.count = 1, .reusable = true}, SHIFT(311),
  [711] = {.count = 1, .reusable = true}, SHIFT(312),
  [713] = {.count = 1, .reusable = true}, SHIFT(313),
  [715] = {.count = 1, .reusable = true}, SHIFT(314),
  [717] = {.count = 1, .reusable = true}, SHIFT(315),
  [719] = {.count = 1, .reusable = true}, SHIFT(316),
  [721] = {.count = 1, .reusable = true}, SHIFT(317),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [735] = {.count = 1, .reusable = true}, SHIFT(319),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [739] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [741] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(252),
  [744] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(252),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 4),
  [749] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 4),
  [751] = {.count = 1, .reusable = false}, SHIFT(320),
  [753] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 4),
  [755] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 4),
  [757] = {.count = 1, .reusable = false}, SHIFT(321),
  [759] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [763] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(258),
  [766] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(258),
  [769] = {.count = 1, .reusable = true}, SHIFT(320),
  [771] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [773] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [775] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [779] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(262),
  [782] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_environment_repeat1, 2), SHIFT_REPEAT(262),
  [785] = {.count = 1, .reusable = true}, SHIFT(322),
  [787] = {.count = 1, .reusable = true}, SHIFT(323),
  [789] = {.count = 1, .reusable = true}, SHIFT(324),
  [791] = {.count = 1, .reusable = true}, SHIFT(325),
  [793] = {.count = 1, .reusable = true}, SHIFT(326),
  [795] = {.count = 1, .reusable = true}, SHIFT(327),
  [797] = {.count = 1, .reusable = true}, SHIFT(328),
  [799] = {.count = 1, .reusable = true}, SHIFT(329),
  [801] = {.count = 1, .reusable = true}, SHIFT(330),
  [803] = {.count = 1, .reusable = true}, SHIFT(331),
  [805] = {.count = 1, .reusable = true}, SHIFT(332),
  [807] = {.count = 1, .reusable = true}, SHIFT(333),
  [809] = {.count = 1, .reusable = true}, SHIFT(334),
  [811] = {.count = 1, .reusable = true}, SHIFT(335),
  [813] = {.count = 1, .reusable = true}, SHIFT(336),
  [815] = {.count = 1, .reusable = true}, SHIFT(337),
  [817] = {.count = 1, .reusable = true}, SHIFT(338),
  [819] = {.count = 1, .reusable = true}, SHIFT(339),
  [821] = {.count = 1, .reusable = true}, SHIFT(340),
  [823] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 4),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 4),
  [827] = {.count = 1, .reusable = true}, SHIFT(341),
  [829] = {.count = 1, .reusable = true}, SHIFT(342),
  [831] = {.count = 1, .reusable = true}, SHIFT(343),
  [833] = {.count = 1, .reusable = true}, SHIFT(344),
  [835] = {.count = 1, .reusable = true}, SHIFT(345),
  [837] = {.count = 1, .reusable = true}, SHIFT(346),
  [839] = {.count = 1, .reusable = true}, SHIFT(347),
  [841] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align, 4),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align, 4),
  [845] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align_star, 4),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align_star, 4),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray, 4),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray, 4),
  [853] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [857] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation, 4),
  [859] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation, 4),
  [861] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation_star, 4),
  [863] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation_star, 4),
  [865] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign, 4),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign, 4),
  [869] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign_star, 4),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign_star, 4),
  [873] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather, 4),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather, 4),
  [877] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather_star, 4),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather_star, 4),
  [881] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline, 4),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline, 4),
  [885] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline_star, 4),
  [887] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline_star, 4),
  [889] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split, 4),
  [891] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split, 4),
  [893] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split_star, 4),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split_star, 4),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_begin_math, 4),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_begin_math, 4),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_begin_verbatim, 4),
  [903] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim, 4),
  [905] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [907] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim, 4),
  [909] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [911] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim, 4),
  [913] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym_begin_lstlisting, 4),
  [917] = {.count = 1, .reusable = false}, REDUCE(sym_begin_minted, 4),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [921] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [925] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 5),
  [929] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 5),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 5),
  [933] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 5),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_end_align, 4),
  [937] = {.count = 1, .reusable = false}, REDUCE(sym_end_align, 4),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym_end_align_star, 4),
  [941] = {.count = 1, .reusable = false}, REDUCE(sym_end_align_star, 4),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat, 4),
  [945] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat, 4),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat_star, 4),
  [949] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat_star, 4),
  [951] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray, 4),
  [953] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray, 4),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray_star, 4),
  [957] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray_star, 4),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation, 4),
  [961] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation, 4),
  [963] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation_star, 4),
  [965] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation_star, 4),
  [967] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign, 4),
  [969] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign, 4),
  [971] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign_star, 4),
  [973] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign_star, 4),
  [975] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather, 4),
  [977] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather, 4),
  [979] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather_star, 4),
  [981] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather_star, 4),
  [983] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline, 4),
  [985] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline, 4),
  [987] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline_star, 4),
  [989] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline_star, 4),
  [991] = {.count = 1, .reusable = true}, REDUCE(sym_end_split, 4),
  [993] = {.count = 1, .reusable = false}, REDUCE(sym_end_split, 4),
  [995] = {.count = 1, .reusable = true}, REDUCE(sym_end_split_star, 4),
  [997] = {.count = 1, .reusable = false}, REDUCE(sym_end_split_star, 4),
  [999] = {.count = 1, .reusable = true}, REDUCE(sym_end_math, 4),
  [1001] = {.count = 1, .reusable = false}, REDUCE(sym_end_math, 4),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_end_verbatim, 4),
  [1005] = {.count = 1, .reusable = false}, REDUCE(sym_end_verbatim, 4),
  [1007] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim, 4),
  [1009] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim, 4),
  [1011] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim_star, 4),
  [1013] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim_star, 4),
  [1015] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim, 4),
  [1017] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim, 4),
  [1019] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [1021] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [1023] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim, 4),
  [1025] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim, 4),
  [1027] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [1029] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym_end_lstlisting, 4),
  [1033] = {.count = 1, .reusable = false}, REDUCE(sym_end_lstlisting, 4),
  [1035] = {.count = 1, .reusable = true}, SHIFT(350),
  [1037] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat, 5),
  [1039] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat, 5),
  [1041] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat_star, 5),
  [1043] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat_star, 5),
  [1045] = {.count = 1, .reusable = true}, REDUCE(sym_end_minted, 4),
  [1047] = {.count = 1, .reusable = false}, REDUCE(sym_end_minted, 4),
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
