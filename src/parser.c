#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 354
#define SYMBOL_COUNT 154
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
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
  anon_sym_tag = 31,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 32,
  anon_sym_begin = 33,
  anon_sym_end = 34,
  anon_sym_documentclass = 35,
  anon_sym_usepackage = 36,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 37,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 38,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 39,
  anon_sym_EQ = 40,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 41,
  sym__escape = 42,
  sym_begin_group = 43,
  sym_end_group = 44,
  sym_math_shift = 45,
  sym_alignment_tab = 46,
  sym_parameter_char = 47,
  sym_superscript = 48,
  sym_subscript = 49,
  sym__name = 50,
  sym_active_char = 51,
  sym_comment_char = 52,
  sym_text = 53,
  sym_number = 54,
  sym_verbatim_token = 55,
  sym_magic = 56,
  sym_comment_text = 57,
  sym_document = 58,
  sym__text_mode = 59,
  sym_text_mode = 60,
  sym__math_mode = 61,
  sym_math_mode = 62,
  sym_parameter = 63,
  sym_text_environment = 64,
  sym_math_environment = 65,
  sym_display_math = 66,
  sym_inline_math = 67,
  sym_begin_align = 68,
  sym_end_align = 69,
  sym_begin_align_star = 70,
  sym_end_align_star = 71,
  sym_begin_alignat = 72,
  sym_end_alignat = 73,
  sym_begin_alignat_star = 74,
  sym_end_alignat_star = 75,
  sym_begin_eqnarray = 76,
  sym_end_eqnarray = 77,
  sym_begin_eqnarray_star = 78,
  sym_end_eqnarray_star = 79,
  sym_begin_equation = 80,
  sym_end_equation = 81,
  sym_begin_equation_star = 82,
  sym_end_equation_star = 83,
  sym_begin_flalign = 84,
  sym_end_flalign = 85,
  sym_begin_flalign_star = 86,
  sym_end_flalign_star = 87,
  sym_begin_gather = 88,
  sym_end_gather = 89,
  sym_begin_gather_star = 90,
  sym_end_gather_star = 91,
  sym_begin_multline = 92,
  sym_end_multline = 93,
  sym_begin_multline_star = 94,
  sym_end_multline_star = 95,
  sym_begin_split = 96,
  sym_end_split = 97,
  sym_begin_split_star = 98,
  sym_end_split_star = 99,
  sym_begin_math = 100,
  sym_end_math = 101,
  sym_begin_verbatim = 102,
  sym_end_verbatim = 103,
  sym_begin_Verbatim = 104,
  sym_end_Verbatim = 105,
  sym_begin_Verbatim_star = 106,
  sym_end_Verbatim_star = 107,
  sym_begin_BVerbatim = 108,
  sym_end_BVerbatim = 109,
  sym_begin_BVerbatim_star = 110,
  sym_end_BVerbatim_star = 111,
  sym_begin_LVerbatim = 112,
  sym_end_LVerbatim = 113,
  sym_begin_LVerbatim_star = 114,
  sym_end_LVerbatim_star = 115,
  sym_begin_lstlisting = 116,
  sym_end_lstlisting = 117,
  sym_begin_minted = 118,
  sym_end_minted = 119,
  sym_tag = 120,
  sym_tag_token = 121,
  sym_verbatim_environment = 122,
  sym_escaped = 123,
  sym_command = 124,
  sym_begin = 125,
  sym_begin_token = 126,
  sym_end = 127,
  sym_end_token = 128,
  sym_documentclass = 129,
  sym_documentclass_token = 130,
  sym_usepackage = 131,
  sym_usepackage_token = 132,
  sym_include = 133,
  sym_include_token = 134,
  sym_section = 135,
  sym_section_token = 136,
  sym_storage = 137,
  sym_storage_token = 138,
  sym_catcode = 139,
  sym_catcode_token = 140,
  sym_text_group = 141,
  sym_simple_text_group = 142,
  sym_opt_text_group = 143,
  sym_math_group = 144,
  sym_opt_math_group = 145,
  sym_math_text_group = 146,
  sym_token = 147,
  sym_comment = 148,
  sym_begin_opt = 149,
  sym_end_opt = 150,
  aux_sym_text_mode_repeat1 = 151,
  aux_sym_math_mode_repeat1 = 152,
  aux_sym_verbatim_environment_repeat1 = 153,
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
  [anon_sym_tag] = "tag",
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
  [sym_text_mode] = "text_mode",
  [sym__math_mode] = "_math_mode",
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
  [sym_tag] = "tag",
  [sym_tag_token] = "tag_token",
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
  [sym_math_text_group] = "math_text_group",
  [sym_token] = "token",
  [sym_comment] = "comment",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
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
  [anon_sym_tag] = {
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
  [sym_text_mode] = {
    .visible = true,
    .named = true,
  },
  [sym__math_mode] = {
    .visible = false,
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_token] = {
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
  [sym_math_text_group] = {
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
  [aux_sym_text_mode_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_mode_repeat1] = {
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
      if (lookahead == 't')
        ADVANCE(193);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == 'v')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(214);
      if (lookahead == '{')
        ADVANCE(215);
      if (lookahead == '}')
        ADVANCE(216);
      if (lookahead == '~')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
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
      if (lookahead == 'a')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
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
      if (lookahead == 'c')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 218:
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
      if (lookahead == 't')
        ADVANCE(193);
      if (lookahead == 'u')
        ADVANCE(196);
      if (lookahead == 'v')
        ADVANCE(206);
      if (lookahead == 'x')
        ADVANCE(214);
      if (lookahead == '{')
        ADVANCE(215);
      if (lookahead == '}')
        ADVANCE(216);
      if (lookahead == '~')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      END_STATE();
    case 220:
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
        ADVANCE(215);
      if (lookahead == '~')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(221);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
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
        ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 223:
      if (lookahead == '#')
        ADVANCE(8);
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
        ADVANCE(215);
      if (lookahead == '~')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(224);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 225:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == 'a')
        ADVANCE(226);
      if (lookahead == 'b')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(229);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == 'k')
        ADVANCE(231);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'p')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 'u')
        ADVANCE(237);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(239);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(71);
      if (lookahead == 'h')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'o')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'u')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 241:
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
        ADVANCE(215);
      if (lookahead == '}')
        ADVANCE(216);
      if (lookahead == '~')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(242);
      if ((lookahead < '[' || lookahead > '_'))
        ADVANCE(222);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 243:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(245);
      if (lookahead == '!')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(252);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(245);
      if (lookahead == '!')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(252);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(252);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(250);
      if (lookahead != 0)
        ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(252);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(245);
      if (lookahead == '!')
        ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(252);
      END_STATE();
    case 254:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    case 255:
      if (lookahead == '\n')
        ADVANCE(256);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      if (lookahead != 0)
        ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_verbatim_token);
      END_STATE();
    case 257:
      if (lookahead == '\n')
        ADVANCE(256);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      if (lookahead != 0)
        ADVANCE(256);
      END_STATE();
    case 258:
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(215);
      if (lookahead == '}')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(258);
      END_STATE();
    case 259:
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
        ADVANCE(215);
      if (lookahead == '}')
        ADVANCE(216);
      if (lookahead == '~')
        ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(260);
      ADVANCE(222);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(260);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 261:
      if (lookahead == 'a')
        ADVANCE(226);
      if (lookahead == 'b')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(229);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == 'k')
        ADVANCE(231);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'p')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == 'u')
        ADVANCE(237);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(239);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 263:
      if (lookahead == 'e')
        ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      END_STATE();
    case 264:
      if (lookahead == 'n')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'd')
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 267:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == 'a')
        ADVANCE(226);
      if (lookahead == 'b')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == 'k')
        ADVANCE(231);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'p')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 'u')
        ADVANCE(237);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(239);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(99);
      if (lookahead == 'n')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(24);
      END_STATE();
    case 269:
      if (lookahead == 'B')
        ADVANCE(270);
      if (lookahead == 'L')
        ADVANCE(280);
      if (lookahead == 'V')
        ADVANCE(290);
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'e')
        ADVANCE(308);
      if (lookahead == 'f')
        ADVANCE(324);
      if (lookahead == 'g')
        ADVANCE(332);
      if (lookahead == 'l')
        ADVANCE(339);
      if (lookahead == 'm')
        ADVANCE(349);
      if (lookahead == 's')
        ADVANCE(361);
      if (lookahead == 'v')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(271);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(272);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(273);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(274);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(275);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(276);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(277);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(278);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(279);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(281);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(282);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(284);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(285);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(287);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(288);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(289);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(291);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(292);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(293);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(294);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(295);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
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
        ADVANCE(222);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(297);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(298);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(300);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(301);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(302);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(303);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(304);
      if (lookahead == 'a')
        ADVANCE(305);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(306);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(307);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(309);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(310);
      if (lookahead == 'u')
        ADVANCE(317);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(311);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(312);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(313);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(314);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(315);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(316);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(318);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(320);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(321);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(322);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(323);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(325);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(326);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(328);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(329);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(330);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(331);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(333);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(334);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(335);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(336);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(338);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(340);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(341);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(342);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(343);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(344);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(345);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(346);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(347);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(348);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(350);
      if (lookahead == 'u')
        ADVANCE(353);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(351);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(352);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(354);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(355);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(356);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(357);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(358);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(359);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(360);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(363);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(365);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(366);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(369);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(370);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(371);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(372);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(373);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(374);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B')
        ADVANCE(270);
      if (lookahead == 'L')
        ADVANCE(280);
      if (lookahead == 'V')
        ADVANCE(290);
      if (lookahead == 'a')
        ADVANCE(299);
      if (lookahead == 'e')
        ADVANCE(308);
      if (lookahead == 'f')
        ADVANCE(324);
      if (lookahead == 'g')
        ADVANCE(332);
      if (lookahead == 'l')
        ADVANCE(339);
      if (lookahead == 'm')
        ADVANCE(349);
      if (lookahead == 's')
        ADVANCE(361);
      if (lookahead == 'v')
        ADVANCE(367);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(375);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(222);
      END_STATE();
    case 376:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(239);
      END_STATE();
    case 377:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(377);
      END_STATE();
    case 378:
      if (lookahead == 'a')
        ADVANCE(226);
      if (lookahead == 'b')
        ADVANCE(227);
      if (lookahead == 'c')
        ADVANCE(228);
      if (lookahead == 'd')
        ADVANCE(229);
      if (lookahead == 'e')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(230);
      if (lookahead == 'k')
        ADVANCE(231);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'p')
        ADVANCE(235);
      if (lookahead == 's')
        ADVANCE(236);
      if (lookahead == 't')
        ADVANCE(262);
      if (lookahead == 'u')
        ADVANCE(237);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(239);
      END_STATE();
    case 379:
      if (lookahead == 'B')
        ADVANCE(380);
      if (lookahead == 'L')
        ADVANCE(390);
      if (lookahead == 'V')
        ADVANCE(400);
      if (lookahead == 'a')
        ADVANCE(409);
      if (lookahead == 'e')
        ADVANCE(418);
      if (lookahead == 'f')
        ADVANCE(434);
      if (lookahead == 'g')
        ADVANCE(442);
      if (lookahead == 'l')
        ADVANCE(449);
      if (lookahead == 'm')
        ADVANCE(459);
      if (lookahead == 's')
        ADVANCE(471);
      if (lookahead == 'v')
        ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(379);
      END_STATE();
    case 380:
      if (lookahead == 'V')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'e')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'r')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'b')
        ADVANCE(384);
      END_STATE();
    case 384:
      if (lookahead == 'a')
        ADVANCE(385);
      END_STATE();
    case 385:
      if (lookahead == 't')
        ADVANCE(386);
      END_STATE();
    case 386:
      if (lookahead == 'i')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'm')
        ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      END_STATE();
    case 390:
      if (lookahead == 'V')
        ADVANCE(391);
      END_STATE();
    case 391:
      if (lookahead == 'e')
        ADVANCE(392);
      END_STATE();
    case 392:
      if (lookahead == 'r')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'b')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'a')
        ADVANCE(395);
      END_STATE();
    case 395:
      if (lookahead == 't')
        ADVANCE(396);
      END_STATE();
    case 396:
      if (lookahead == 'i')
        ADVANCE(397);
      END_STATE();
    case 397:
      if (lookahead == 'm')
        ADVANCE(398);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(399);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      END_STATE();
    case 400:
      if (lookahead == 'e')
        ADVANCE(401);
      END_STATE();
    case 401:
      if (lookahead == 'r')
        ADVANCE(402);
      END_STATE();
    case 402:
      if (lookahead == 'b')
        ADVANCE(403);
      END_STATE();
    case 403:
      if (lookahead == 'a')
        ADVANCE(404);
      END_STATE();
    case 404:
      if (lookahead == 't')
        ADVANCE(405);
      END_STATE();
    case 405:
      if (lookahead == 'i')
        ADVANCE(406);
      END_STATE();
    case 406:
      if (lookahead == 'm')
        ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      END_STATE();
    case 409:
      if (lookahead == 'l')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'i')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'g')
        ADVANCE(412);
      END_STATE();
    case 412:
      if (lookahead == 'n')
        ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(414);
      if (lookahead == 'a')
        ADVANCE(415);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      END_STATE();
    case 415:
      if (lookahead == 't')
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(417);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      END_STATE();
    case 418:
      if (lookahead == 'q')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'n')
        ADVANCE(420);
      if (lookahead == 'u')
        ADVANCE(427);
      END_STATE();
    case 420:
      if (lookahead == 'a')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'r')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 'r')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'a')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'y')
        ADVANCE(425);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 427:
      if (lookahead == 'a')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 't')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'i')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'o')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 'n')
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 434:
      if (lookahead == 'l')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'a')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'l')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 'i')
        ADVANCE(438);
      END_STATE();
    case 438:
      if (lookahead == 'g')
        ADVANCE(439);
      END_STATE();
    case 439:
      if (lookahead == 'n')
        ADVANCE(440);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 442:
      if (lookahead == 'a')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 't')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'h')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'e')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'r')
        ADVANCE(447);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
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
      if (lookahead == 'l')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'i')
        ADVANCE(453);
      END_STATE();
    case 453:
      if (lookahead == 's')
        ADVANCE(454);
      END_STATE();
    case 454:
      if (lookahead == 't')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'i')
        ADVANCE(456);
      END_STATE();
    case 456:
      if (lookahead == 'n')
        ADVANCE(457);
      END_STATE();
    case 457:
      if (lookahead == 'g')
        ADVANCE(458);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      END_STATE();
    case 459:
      if (lookahead == 'a')
        ADVANCE(460);
      if (lookahead == 'u')
        ADVANCE(463);
      END_STATE();
    case 460:
      if (lookahead == 't')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'h')
        ADVANCE(462);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 463:
      if (lookahead == 'l')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 't')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'l')
        ADVANCE(466);
      END_STATE();
    case 466:
      if (lookahead == 'i')
        ADVANCE(467);
      END_STATE();
    case 467:
      if (lookahead == 'n')
        ADVANCE(468);
      END_STATE();
    case 468:
      if (lookahead == 'e')
        ADVANCE(469);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      END_STATE();
    case 471:
      if (lookahead == 'p')
        ADVANCE(472);
      END_STATE();
    case 472:
      if (lookahead == 'l')
        ADVANCE(473);
      END_STATE();
    case 473:
      if (lookahead == 'i')
        ADVANCE(474);
      END_STATE();
    case 474:
      if (lookahead == 't')
        ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(476);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    case 477:
      if (lookahead == 'e')
        ADVANCE(478);
      END_STATE();
    case 478:
      if (lookahead == 'r')
        ADVANCE(479);
      END_STATE();
    case 479:
      if (lookahead == 'b')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 'a')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == 't')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'i')
        ADVANCE(483);
      END_STATE();
    case 483:
      if (lookahead == 'm')
        ADVANCE(484);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 485:
      if (lookahead == ']')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(485);
      END_STATE();
    case 486:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(486);
      END_STATE();
    case 487:
      if (lookahead == 'm')
        ADVANCE(488);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(487);
      END_STATE();
    case 488:
      if (lookahead == 'i')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'n')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 't')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'e')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'd')
        ADVANCE(493);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_minted);
      END_STATE();
    case 494:
      if (lookahead == '\n')
        ADVANCE(256);
      if (lookahead == '[')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(43);
      if (lookahead == '{')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(256);
      if (lookahead != 0)
        ADVANCE(256);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 220},
  [2] = {.lex_state = 223},
  [3] = {.lex_state = 225},
  [4] = {.lex_state = 241},
  [5] = {.lex_state = 220},
  [6] = {.lex_state = 243},
  [7] = {.lex_state = 244},
  [8] = {.lex_state = 254},
  [9] = {.lex_state = 254},
  [10] = {.lex_state = 220},
  [11] = {.lex_state = 220},
  [12] = {.lex_state = 220},
  [13] = {.lex_state = 220},
  [14] = {.lex_state = 220},
  [15] = {.lex_state = 220},
  [16] = {.lex_state = 220},
  [17] = {.lex_state = 220},
  [18] = {.lex_state = 220},
  [19] = {.lex_state = 220},
  [20] = {.lex_state = 220},
  [21] = {.lex_state = 220},
  [22] = {.lex_state = 220},
  [23] = {.lex_state = 220},
  [24] = {.lex_state = 220},
  [25] = {.lex_state = 220},
  [26] = {.lex_state = 220},
  [27] = {.lex_state = 255},
  [28] = {.lex_state = 257},
  [29] = {.lex_state = 257},
  [30] = {.lex_state = 257},
  [31] = {.lex_state = 257},
  [32] = {.lex_state = 257},
  [33] = {.lex_state = 257},
  [34] = {.lex_state = 257},
  [35] = {.lex_state = 258},
  [36] = {.lex_state = 220},
  [37] = {.lex_state = 258},
  [38] = {.lex_state = 259},
  [39] = {.lex_state = 258},
  [40] = {.lex_state = 258},
  [41] = {.lex_state = 258},
  [42] = {.lex_state = 258},
  [43] = {.lex_state = 259},
  [44] = {.lex_state = 258},
  [45] = {.lex_state = 223},
  [46] = {.lex_state = 220},
  [47] = {.lex_state = 220},
  [48] = {.lex_state = 220},
  [49] = {.lex_state = 259},
  [50] = {.lex_state = 258},
  [51] = {.lex_state = 258},
  [52] = {.lex_state = 258},
  [53] = {.lex_state = 258},
  [54] = {.lex_state = 258},
  [55] = {.lex_state = 259},
  [56] = {.lex_state = 258},
  [57] = {.lex_state = 259},
  [58] = {.lex_state = 259},
  [59] = {.lex_state = 241},
  [60] = {.lex_state = 261},
  [61] = {.lex_state = 241},
  [62] = {.lex_state = 220},
  [63] = {.lex_state = 258},
  [64] = {.lex_state = 258},
  [65] = {.lex_state = 220},
  [66] = {.lex_state = 258},
  [67] = {.lex_state = 223},
  [68] = {.lex_state = 220},
  [69] = {.lex_state = 259},
  [70] = {.lex_state = 259},
  [71] = {.lex_state = 258},
  [72] = {.lex_state = 220},
  [73] = {.lex_state = 258},
  [74] = {.lex_state = 258},
  [75] = {.lex_state = 258},
  [76] = {.lex_state = 258},
  [77] = {.lex_state = 258},
  [78] = {.lex_state = 258},
  [79] = {.lex_state = 258},
  [80] = {.lex_state = 258},
  [81] = {.lex_state = 258},
  [82] = {.lex_state = 258},
  [83] = {.lex_state = 258},
  [84] = {.lex_state = 258},
  [85] = {.lex_state = 258},
  [86] = {.lex_state = 258},
  [87] = {.lex_state = 258},
  [88] = {.lex_state = 258},
  [89] = {.lex_state = 263},
  [90] = {.lex_state = 241},
  [91] = {.lex_state = 258},
  [92] = {.lex_state = 255},
  [93] = {.lex_state = 258},
  [94] = {.lex_state = 255},
  [95] = {.lex_state = 223},
  [96] = {.lex_state = 255},
  [97] = {.lex_state = 258},
  [98] = {.lex_state = 255},
  [99] = {.lex_state = 255},
  [100] = {.lex_state = 258},
  [101] = {.lex_state = 255},
  [102] = {.lex_state = 255},
  [103] = {.lex_state = 258},
  [104] = {.lex_state = 255},
  [105] = {.lex_state = 255},
  [106] = {.lex_state = 258},
  [107] = {.lex_state = 255},
  [108] = {.lex_state = 255},
  [109] = {.lex_state = 258},
  [110] = {.lex_state = 255},
  [111] = {.lex_state = 255},
  [112] = {.lex_state = 258},
  [113] = {.lex_state = 255},
  [114] = {.lex_state = 255},
  [115] = {.lex_state = 241},
  [116] = {.lex_state = 255},
  [117] = {.lex_state = 267},
  [118] = {.lex_state = 241},
  [119] = {.lex_state = 258},
  [120] = {.lex_state = 220},
  [121] = {.lex_state = 269},
  [122] = {.lex_state = 220},
  [123] = {.lex_state = 220},
  [124] = {.lex_state = 259},
  [125] = {.lex_state = 258},
  [126] = {.lex_state = 223},
  [127] = {.lex_state = 259},
  [128] = {.lex_state = 258},
  [129] = {.lex_state = 259},
  [130] = {.lex_state = 259},
  [131] = {.lex_state = 258},
  [132] = {.lex_state = 376},
  [133] = {.lex_state = 377},
  [134] = {.lex_state = 259},
  [135] = {.lex_state = 241},
  [136] = {.lex_state = 223},
  [137] = {.lex_state = 220},
  [138] = {.lex_state = 258},
  [139] = {.lex_state = 258},
  [140] = {.lex_state = 259},
  [141] = {.lex_state = 241},
  [142] = {.lex_state = 258},
  [143] = {.lex_state = 259},
  [144] = {.lex_state = 241},
  [145] = {.lex_state = 258},
  [146] = {.lex_state = 241},
  [147] = {.lex_state = 241},
  [148] = {.lex_state = 259},
  [149] = {.lex_state = 378},
  [150] = {.lex_state = 259},
  [151] = {.lex_state = 220},
  [152] = {.lex_state = 259},
  [153] = {.lex_state = 223},
  [154] = {.lex_state = 220},
  [155] = {.lex_state = 241},
  [156] = {.lex_state = 258},
  [157] = {.lex_state = 220},
  [158] = {.lex_state = 258},
  [159] = {.lex_state = 258},
  [160] = {.lex_state = 258},
  [161] = {.lex_state = 258},
  [162] = {.lex_state = 258},
  [163] = {.lex_state = 258},
  [164] = {.lex_state = 258},
  [165] = {.lex_state = 258},
  [166] = {.lex_state = 258},
  [167] = {.lex_state = 258},
  [168] = {.lex_state = 258},
  [169] = {.lex_state = 258},
  [170] = {.lex_state = 258},
  [171] = {.lex_state = 258},
  [172] = {.lex_state = 258},
  [173] = {.lex_state = 258},
  [174] = {.lex_state = 258},
  [175] = {.lex_state = 379},
  [176] = {.lex_state = 241},
  [177] = {.lex_state = 255},
  [178] = {.lex_state = 379},
  [179] = {.lex_state = 255},
  [180] = {.lex_state = 255},
  [181] = {.lex_state = 255},
  [182] = {.lex_state = 223},
  [183] = {.lex_state = 379},
  [184] = {.lex_state = 255},
  [185] = {.lex_state = 379},
  [186] = {.lex_state = 255},
  [187] = {.lex_state = 379},
  [188] = {.lex_state = 255},
  [189] = {.lex_state = 379},
  [190] = {.lex_state = 255},
  [191] = {.lex_state = 379},
  [192] = {.lex_state = 255},
  [193] = {.lex_state = 379},
  [194] = {.lex_state = 255},
  [195] = {.lex_state = 255},
  [196] = {.lex_state = 241},
  [197] = {.lex_state = 258},
  [198] = {.lex_state = 255},
  [199] = {.lex_state = 259},
  [200] = {.lex_state = 241},
  [201] = {.lex_state = 220},
  [202] = {.lex_state = 258},
  [203] = {.lex_state = 258},
  [204] = {.lex_state = 258},
  [205] = {.lex_state = 258},
  [206] = {.lex_state = 258},
  [207] = {.lex_state = 258},
  [208] = {.lex_state = 258},
  [209] = {.lex_state = 258},
  [210] = {.lex_state = 258},
  [211] = {.lex_state = 258},
  [212] = {.lex_state = 258},
  [213] = {.lex_state = 258},
  [214] = {.lex_state = 258},
  [215] = {.lex_state = 258},
  [216] = {.lex_state = 258},
  [217] = {.lex_state = 258},
  [218] = {.lex_state = 258},
  [219] = {.lex_state = 258},
  [220] = {.lex_state = 258},
  [221] = {.lex_state = 258},
  [222] = {.lex_state = 258},
  [223] = {.lex_state = 258},
  [224] = {.lex_state = 258},
  [225] = {.lex_state = 258},
  [226] = {.lex_state = 258},
  [227] = {.lex_state = 258},
  [228] = {.lex_state = 259},
  [229] = {.lex_state = 258},
  [230] = {.lex_state = 258},
  [231] = {.lex_state = 223},
  [232] = {.lex_state = 259},
  [233] = {.lex_state = 259},
  [234] = {.lex_state = 377},
  [235] = {.lex_state = 243},
  [236] = {.lex_state = 241},
  [237] = {.lex_state = 223},
  [238] = {.lex_state = 485},
  [239] = {.lex_state = 486},
  [240] = {.lex_state = 259},
  [241] = {.lex_state = 241},
  [242] = {.lex_state = 258},
  [243] = {.lex_state = 259},
  [244] = {.lex_state = 258},
  [245] = {.lex_state = 241},
  [246] = {.lex_state = 259},
  [247] = {.lex_state = 259},
  [248] = {.lex_state = 379},
  [249] = {.lex_state = 379},
  [250] = {.lex_state = 379},
  [251] = {.lex_state = 379},
  [252] = {.lex_state = 379},
  [253] = {.lex_state = 379},
  [254] = {.lex_state = 379},
  [255] = {.lex_state = 379},
  [256] = {.lex_state = 379},
  [257] = {.lex_state = 379},
  [258] = {.lex_state = 379},
  [259] = {.lex_state = 379},
  [260] = {.lex_state = 379},
  [261] = {.lex_state = 379},
  [262] = {.lex_state = 379},
  [263] = {.lex_state = 379},
  [264] = {.lex_state = 379},
  [265] = {.lex_state = 258},
  [266] = {.lex_state = 258},
  [267] = {.lex_state = 241},
  [268] = {.lex_state = 255},
  [269] = {.lex_state = 258},
  [270] = {.lex_state = 258},
  [271] = {.lex_state = 258},
  [272] = {.lex_state = 258},
  [273] = {.lex_state = 258},
  [274] = {.lex_state = 258},
  [275] = {.lex_state = 255},
  [276] = {.lex_state = 487},
  [277] = {.lex_state = 220},
  [278] = {.lex_state = 220},
  [279] = {.lex_state = 258},
  [280] = {.lex_state = 258},
  [281] = {.lex_state = 220},
  [282] = {.lex_state = 220},
  [283] = {.lex_state = 220},
  [284] = {.lex_state = 220},
  [285] = {.lex_state = 220},
  [286] = {.lex_state = 220},
  [287] = {.lex_state = 220},
  [288] = {.lex_state = 220},
  [289] = {.lex_state = 220},
  [290] = {.lex_state = 220},
  [291] = {.lex_state = 220},
  [292] = {.lex_state = 220},
  [293] = {.lex_state = 220},
  [294] = {.lex_state = 255},
  [295] = {.lex_state = 257},
  [296] = {.lex_state = 257},
  [297] = {.lex_state = 257},
  [298] = {.lex_state = 257},
  [299] = {.lex_state = 257},
  [300] = {.lex_state = 257},
  [301] = {.lex_state = 494},
  [302] = {.lex_state = 259},
  [303] = {.lex_state = 258},
  [304] = {.lex_state = 259},
  [305] = {.lex_state = 241},
  [306] = {.lex_state = 241},
  [307] = {.lex_state = 259},
  [308] = {.lex_state = 258},
  [309] = {.lex_state = 258},
  [310] = {.lex_state = 258},
  [311] = {.lex_state = 258},
  [312] = {.lex_state = 258},
  [313] = {.lex_state = 258},
  [314] = {.lex_state = 258},
  [315] = {.lex_state = 258},
  [316] = {.lex_state = 258},
  [317] = {.lex_state = 258},
  [318] = {.lex_state = 258},
  [319] = {.lex_state = 258},
  [320] = {.lex_state = 258},
  [321] = {.lex_state = 258},
  [322] = {.lex_state = 258},
  [323] = {.lex_state = 258},
  [324] = {.lex_state = 258},
  [325] = {.lex_state = 241},
  [326] = {.lex_state = 241},
  [327] = {.lex_state = 241},
  [328] = {.lex_state = 241},
  [329] = {.lex_state = 241},
  [330] = {.lex_state = 241},
  [331] = {.lex_state = 241},
  [332] = {.lex_state = 241},
  [333] = {.lex_state = 258},
  [334] = {.lex_state = 220},
  [335] = {.lex_state = 220},
  [336] = {.lex_state = 241},
  [337] = {.lex_state = 241},
  [338] = {.lex_state = 241},
  [339] = {.lex_state = 241},
  [340] = {.lex_state = 241},
  [341] = {.lex_state = 241},
  [342] = {.lex_state = 241},
  [343] = {.lex_state = 241},
  [344] = {.lex_state = 241},
  [345] = {.lex_state = 241},
  [346] = {.lex_state = 241},
  [347] = {.lex_state = 241},
  [348] = {.lex_state = 241},
  [349] = {.lex_state = 241},
  [350] = {.lex_state = 241},
  [351] = {.lex_state = 241},
  [352] = {.lex_state = 241},
  [353] = {.lex_state = 241},
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
    [anon_sym_tag] = ACTIONS(3),
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
    [sym__text_mode] = STATE(46),
    [sym_text_mode] = STATE(9),
    [sym_parameter] = STATE(46),
    [sym_text_environment] = STATE(46),
    [sym_display_math] = STATE(46),
    [sym_inline_math] = STATE(46),
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
    [sym_verbatim_environment] = STATE(46),
    [sym_escaped] = STATE(46),
    [sym_command] = STATE(46),
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
    [sym_text_group] = STATE(46),
    [sym_opt_text_group] = STATE(46),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(46),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(46),
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
    [sym__text_mode] = STATE(59),
    [sym_parameter] = STATE(59),
    [sym_text_environment] = STATE(59),
    [sym_display_math] = STATE(59),
    [sym_inline_math] = STATE(59),
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
    [sym_verbatim_environment] = STATE(59),
    [sym_escaped] = STATE(59),
    [sym_command] = STATE(59),
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
    [sym_text_group] = STATE(59),
    [sym_opt_text_group] = STATE(59),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(59),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(59),
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
    [sym__math_mode] = STATE(68),
    [sym_math_mode] = STATE(63),
    [sym_parameter] = STATE(68),
    [sym_math_environment] = STATE(68),
    [sym_tag] = STATE(68),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(68),
    [sym_command] = STATE(68),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(68),
    [sym_opt_math_group] = STATE(68),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(68),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(68),
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
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [10] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(71),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [11] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(73),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [12] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(74),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [13] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(75),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [14] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(76),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [15] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(77),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [16] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(78),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [17] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(79),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [18] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(80),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [19] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(81),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [20] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(82),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [21] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(83),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [22] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(84),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [23] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(85),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [24] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(86),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [25] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(87),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [26] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(88),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [27] = {
    [sym_end_verbatim] = STATE(90),
    [sym_end_token] = STATE(91),
    [aux_sym_verbatim_environment_repeat1] = STATE(92),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(81),
  },
  [28] = {
    [sym_end_Verbatim] = STATE(90),
    [sym_end_token] = STATE(93),
    [sym_opt_text_group] = STATE(94),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(83),
  },
  [29] = {
    [sym_end_Verbatim_star] = STATE(90),
    [sym_end_token] = STATE(97),
    [sym_opt_text_group] = STATE(98),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(85),
  },
  [30] = {
    [sym_end_BVerbatim] = STATE(90),
    [sym_end_token] = STATE(100),
    [sym_opt_text_group] = STATE(101),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(87),
  },
  [31] = {
    [sym_end_BVerbatim_star] = STATE(90),
    [sym_end_token] = STATE(103),
    [sym_opt_text_group] = STATE(104),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(105),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(89),
  },
  [32] = {
    [sym_end_LVerbatim] = STATE(90),
    [sym_end_token] = STATE(106),
    [sym_opt_text_group] = STATE(107),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(91),
  },
  [33] = {
    [sym_end_LVerbatim_star] = STATE(90),
    [sym_end_token] = STATE(109),
    [sym_opt_text_group] = STATE(110),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(93),
  },
  [34] = {
    [sym_end_lstlisting] = STATE(90),
    [sym_end_token] = STATE(112),
    [sym_opt_text_group] = STATE(113),
    [sym_begin_opt] = STATE(95),
    [aux_sym_verbatim_environment_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(95),
  },
  [35] = {
    [sym_text_group] = STATE(116),
    [sym_begin_group] = ACTIONS(97),
  },
  [36] = {
    [sym__text_mode] = STATE(120),
    [sym_parameter] = STATE(120),
    [sym_text_environment] = STATE(120),
    [sym_display_math] = STATE(120),
    [sym_inline_math] = STATE(120),
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
    [sym_verbatim_environment] = STATE(120),
    [sym_escaped] = STATE(120),
    [sym_command] = STATE(120),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_end] = STATE(118),
    [sym_end_token] = STATE(119),
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
    [sym_text_group] = STATE(120),
    [sym_opt_text_group] = STATE(120),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(120),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(120),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(101),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(101),
    [sym_subscript] = ACTIONS(101),
    [sym_active_char] = ACTIONS(101),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(103),
  },
  [37] = {
    [sym_simple_text_group] = STATE(122),
    [sym_begin_group] = ACTIONS(105),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(109),
    [anon_sym_RBRACK] = ACTIONS(109),
    [sym__escape] = ACTIONS(109),
    [sym_begin_group] = ACTIONS(109),
    [sym_end_group] = ACTIONS(109),
    [sym_math_shift] = ACTIONS(109),
    [sym_alignment_tab] = ACTIONS(109),
    [sym_parameter_char] = ACTIONS(109),
    [sym_superscript] = ACTIONS(109),
    [sym_subscript] = ACTIONS(109),
    [sym_active_char] = ACTIONS(109),
    [sym_comment_char] = ACTIONS(109),
    [sym_text] = ACTIONS(107),
  },
  [39] = {
    [sym_simple_text_group] = STATE(124),
    [sym_opt_text_group] = STATE(125),
    [sym_begin_opt] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
  },
  [40] = {
    [sym_simple_text_group] = STATE(127),
    [sym_opt_text_group] = STATE(128),
    [sym_begin_opt] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(113),
  },
  [41] = {
    [sym_text_group] = STATE(129),
    [sym_begin_group] = ACTIONS(115),
  },
  [42] = {
    [sym_text_group] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(126),
    [anon_sym_LBRACK] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(115),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym__escape] = ACTIONS(119),
    [sym_begin_group] = ACTIONS(119),
    [sym_end_group] = ACTIONS(119),
    [sym_math_shift] = ACTIONS(119),
    [sym_alignment_tab] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(119),
    [sym_superscript] = ACTIONS(119),
    [sym_subscript] = ACTIONS(119),
    [sym_active_char] = ACTIONS(119),
    [sym_comment_char] = ACTIONS(119),
    [sym_text] = ACTIONS(117),
  },
  [44] = {
    [sym_escaped] = STATE(133),
    [sym__escape] = ACTIONS(121),
  },
  [45] = {
    [sym__math_mode] = STATE(136),
    [sym_parameter] = STATE(136),
    [sym_math_environment] = STATE(136),
    [sym_tag] = STATE(136),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(136),
    [sym_command] = STATE(136),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(136),
    [sym_opt_math_group] = STATE(136),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(136),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(135),
    [aux_sym_math_mode_repeat1] = STATE(136),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(125),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(125),
    [sym_subscript] = ACTIONS(125),
    [sym_active_char] = ACTIONS(125),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(127),
  },
  [46] = {
    [sym__text_mode] = STATE(137),
    [sym_parameter] = STATE(137),
    [sym_text_environment] = STATE(137),
    [sym_display_math] = STATE(137),
    [sym_inline_math] = STATE(137),
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
    [sym_verbatim_environment] = STATE(137),
    [sym_escaped] = STATE(137),
    [sym_command] = STATE(137),
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
    [sym_text_group] = STATE(137),
    [sym_opt_text_group] = STATE(137),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(137),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(131),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(131),
    [sym_subscript] = ACTIONS(131),
    [sym_active_char] = ACTIONS(131),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(133),
  },
  [47] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(138),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [48] = {
    [sym__math_mode] = STATE(72),
    [sym_math_mode] = STATE(139),
    [sym_parameter] = STATE(72),
    [sym_math_environment] = STATE(72),
    [sym_tag] = STATE(72),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(72),
    [sym_command] = STATE(72),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(72),
    [sym_opt_math_group] = STATE(72),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(72),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(72),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(75),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(75),
    [sym_subscript] = ACTIONS(75),
    [sym_active_char] = ACTIONS(75),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(77),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(137),
    [sym_begin_group] = ACTIONS(137),
    [sym_end_group] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(137),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(137),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(137),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(137),
    [sym_text] = ACTIONS(135),
  },
  [50] = {
    [sym_begin_group] = ACTIONS(139),
  },
  [51] = {
    [anon_sym_LBRACK] = ACTIONS(141),
    [sym_begin_group] = ACTIONS(141),
  },
  [52] = {
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
  },
  [53] = {
    [sym_begin_group] = ACTIONS(145),
  },
  [54] = {
    [anon_sym_LBRACK] = ACTIONS(147),
    [sym_begin_group] = ACTIONS(147),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(151),
    [anon_sym_RBRACK] = ACTIONS(151),
    [sym__escape] = ACTIONS(151),
    [sym_begin_group] = ACTIONS(151),
    [sym_end_group] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(151),
    [sym_alignment_tab] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(151),
    [sym_superscript] = ACTIONS(151),
    [sym_subscript] = ACTIONS(151),
    [sym_active_char] = ACTIONS(151),
    [sym_comment_char] = ACTIONS(151),
    [sym_text] = ACTIONS(149),
  },
  [56] = {
    [sym__escape] = ACTIONS(153),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [sym__escape] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
    [sym_end_group] = ACTIONS(157),
    [sym_math_shift] = ACTIONS(157),
    [sym_alignment_tab] = ACTIONS(157),
    [sym_parameter_char] = ACTIONS(157),
    [sym_superscript] = ACTIONS(157),
    [sym_subscript] = ACTIONS(157),
    [sym_active_char] = ACTIONS(157),
    [sym_comment_char] = ACTIONS(157),
    [sym_text] = ACTIONS(155),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_RBRACK] = ACTIONS(161),
    [sym__escape] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
    [sym_end_group] = ACTIONS(161),
    [sym_math_shift] = ACTIONS(161),
    [sym_alignment_tab] = ACTIONS(161),
    [sym_parameter_char] = ACTIONS(161),
    [sym_superscript] = ACTIONS(161),
    [sym_subscript] = ACTIONS(161),
    [sym_active_char] = ACTIONS(161),
    [sym_comment_char] = ACTIONS(161),
    [sym_text] = ACTIONS(159),
  },
  [59] = {
    [sym__text_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_environment] = STATE(141),
    [sym_display_math] = STATE(141),
    [sym_inline_math] = STATE(141),
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
    [sym_verbatim_environment] = STATE(141),
    [sym_escaped] = STATE(141),
    [sym_command] = STATE(141),
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
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(141),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(163),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(167),
  },
  [60] = {
    [anon_sym_tag] = ACTIONS(169),
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
  [61] = {
    [sym__math_mode] = STATE(144),
    [sym_parameter] = STATE(144),
    [sym_math_environment] = STATE(144),
    [sym_tag] = STATE(144),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(144),
    [sym_command] = STATE(144),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(144),
    [sym_opt_math_group] = STATE(144),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(144),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(144),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(171),
    [sym_alignment_tab] = ACTIONS(173),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(173),
    [sym_subscript] = ACTIONS(173),
    [sym_active_char] = ACTIONS(173),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(175),
  },
  [62] = {
    [sym__math_mode] = STATE(68),
    [sym_math_mode] = STATE(145),
    [sym_parameter] = STATE(68),
    [sym_math_environment] = STATE(68),
    [sym_tag] = STATE(68),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(68),
    [sym_command] = STATE(68),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(68),
    [sym_opt_math_group] = STATE(68),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(68),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(68),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(61),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(61),
    [sym_subscript] = ACTIONS(61),
    [sym_active_char] = ACTIONS(61),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(63),
  },
  [63] = {
    [sym_math_shift] = ACTIONS(177),
  },
  [64] = {
    [sym_math_text_group] = STATE(148),
    [sym_begin_group] = ACTIONS(179),
  },
  [65] = {
    [sym__math_mode] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_math_environment] = STATE(151),
    [sym_tag] = STATE(151),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
    [sym_end] = STATE(150),
    [sym_end_token] = STATE(119),
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
    [sym_math_group] = STATE(151),
    [sym_opt_math_group] = STATE(151),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(185),
  },
  [66] = {
    [sym_simple_text_group] = STATE(122),
    [sym_begin_group] = ACTIONS(113),
  },
  [67] = {
    [sym__math_mode] = STATE(153),
    [sym_parameter] = STATE(153),
    [sym_math_environment] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(153),
    [sym_command] = STATE(153),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(153),
    [sym_opt_math_group] = STATE(153),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(153),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(152),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(187),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(187),
    [sym_active_char] = ACTIONS(187),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(189),
  },
  [68] = {
    [sym__math_mode] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_math_environment] = STATE(154),
    [sym_tag] = STATE(154),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(154),
    [sym_command] = STATE(154),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(154),
    [sym_opt_math_group] = STATE(154),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(154),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_math_shift] = ACTIONS(191),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(195),
  },
  [69] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(199),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(199),
    [sym_end_group] = ACTIONS(199),
    [sym_math_shift] = ACTIONS(199),
    [sym_alignment_tab] = ACTIONS(199),
    [sym_parameter_char] = ACTIONS(199),
    [sym_superscript] = ACTIONS(199),
    [sym_subscript] = ACTIONS(199),
    [sym_active_char] = ACTIONS(199),
    [sym_comment_char] = ACTIONS(199),
    [sym_text] = ACTIONS(197),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(203),
    [sym__escape] = ACTIONS(203),
    [sym_begin_group] = ACTIONS(203),
    [sym_end_group] = ACTIONS(203),
    [sym_math_shift] = ACTIONS(203),
    [sym_alignment_tab] = ACTIONS(203),
    [sym_parameter_char] = ACTIONS(203),
    [sym_superscript] = ACTIONS(203),
    [sym_subscript] = ACTIONS(203),
    [sym_active_char] = ACTIONS(203),
    [sym_comment_char] = ACTIONS(203),
    [sym_text] = ACTIONS(201),
  },
  [71] = {
    [sym_end_align] = STATE(155),
    [sym_end_token] = STATE(156),
    [sym__escape] = ACTIONS(205),
  },
  [72] = {
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_environment] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(191),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(209),
  },
  [73] = {
    [sym_end_align_star] = STATE(155),
    [sym_end_token] = STATE(158),
    [sym__escape] = ACTIONS(205),
  },
  [74] = {
    [sym_end_alignat] = STATE(155),
    [sym_end_token] = STATE(159),
    [sym__escape] = ACTIONS(205),
  },
  [75] = {
    [sym_end_alignat_star] = STATE(155),
    [sym_end_token] = STATE(160),
    [sym__escape] = ACTIONS(205),
  },
  [76] = {
    [sym_end_eqnarray] = STATE(155),
    [sym_end_token] = STATE(161),
    [sym__escape] = ACTIONS(205),
  },
  [77] = {
    [sym_end_eqnarray_star] = STATE(155),
    [sym_end_token] = STATE(162),
    [sym__escape] = ACTIONS(205),
  },
  [78] = {
    [sym_end_equation] = STATE(155),
    [sym_end_token] = STATE(163),
    [sym__escape] = ACTIONS(205),
  },
  [79] = {
    [sym_end_equation_star] = STATE(155),
    [sym_end_token] = STATE(164),
    [sym__escape] = ACTIONS(205),
  },
  [80] = {
    [sym_end_flalign] = STATE(155),
    [sym_end_token] = STATE(165),
    [sym__escape] = ACTIONS(205),
  },
  [81] = {
    [sym_end_flalign_star] = STATE(155),
    [sym_end_token] = STATE(166),
    [sym__escape] = ACTIONS(205),
  },
  [82] = {
    [sym_end_gather] = STATE(155),
    [sym_end_token] = STATE(167),
    [sym__escape] = ACTIONS(205),
  },
  [83] = {
    [sym_end_gather_star] = STATE(155),
    [sym_end_token] = STATE(168),
    [sym__escape] = ACTIONS(205),
  },
  [84] = {
    [sym_end_multline] = STATE(155),
    [sym_end_token] = STATE(169),
    [sym__escape] = ACTIONS(205),
  },
  [85] = {
    [sym_end_multline_star] = STATE(155),
    [sym_end_token] = STATE(170),
    [sym__escape] = ACTIONS(205),
  },
  [86] = {
    [sym_end_split] = STATE(155),
    [sym_end_token] = STATE(171),
    [sym__escape] = ACTIONS(205),
  },
  [87] = {
    [sym_end_split_star] = STATE(155),
    [sym_end_token] = STATE(172),
    [sym__escape] = ACTIONS(205),
  },
  [88] = {
    [sym_end_math] = STATE(146),
    [sym_end_token] = STATE(173),
    [sym__escape] = ACTIONS(205),
  },
  [89] = {
    [anon_sym_end] = ACTIONS(211),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym__escape] = ACTIONS(215),
    [sym_begin_group] = ACTIONS(215),
    [sym_end_group] = ACTIONS(215),
    [sym_math_shift] = ACTIONS(215),
    [sym_alignment_tab] = ACTIONS(215),
    [sym_parameter_char] = ACTIONS(215),
    [sym_superscript] = ACTIONS(215),
    [sym_subscript] = ACTIONS(215),
    [sym_active_char] = ACTIONS(215),
    [sym_comment_char] = ACTIONS(215),
    [sym_text] = ACTIONS(213),
  },
  [91] = {
    [sym_begin_group] = ACTIONS(217),
  },
  [92] = {
    [sym_end_verbatim] = STATE(176),
    [sym_end_token] = STATE(91),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [93] = {
    [sym_begin_group] = ACTIONS(221),
  },
  [94] = {
    [sym_end_Verbatim] = STATE(176),
    [sym_end_token] = STATE(93),
    [aux_sym_verbatim_environment_repeat1] = STATE(179),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(223),
  },
  [95] = {
    [sym__math_mode] = STATE(182),
    [sym_parameter] = STATE(182),
    [sym_math_environment] = STATE(182),
    [sym_tag] = STATE(182),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(182),
    [sym_command] = STATE(182),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(182),
    [sym_opt_math_group] = STATE(182),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(182),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(182),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_active_char] = ACTIONS(227),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(229),
  },
  [96] = {
    [sym_end_Verbatim] = STATE(176),
    [sym_end_token] = STATE(93),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [97] = {
    [sym_begin_group] = ACTIONS(231),
  },
  [98] = {
    [sym_end_Verbatim_star] = STATE(176),
    [sym_end_token] = STATE(97),
    [aux_sym_verbatim_environment_repeat1] = STATE(184),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(233),
  },
  [99] = {
    [sym_end_Verbatim_star] = STATE(176),
    [sym_end_token] = STATE(97),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [100] = {
    [sym_begin_group] = ACTIONS(235),
  },
  [101] = {
    [sym_end_BVerbatim] = STATE(176),
    [sym_end_token] = STATE(100),
    [aux_sym_verbatim_environment_repeat1] = STATE(186),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [102] = {
    [sym_end_BVerbatim] = STATE(176),
    [sym_end_token] = STATE(100),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [103] = {
    [sym_begin_group] = ACTIONS(239),
  },
  [104] = {
    [sym_end_BVerbatim_star] = STATE(176),
    [sym_end_token] = STATE(103),
    [aux_sym_verbatim_environment_repeat1] = STATE(188),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(241),
  },
  [105] = {
    [sym_end_BVerbatim_star] = STATE(176),
    [sym_end_token] = STATE(103),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [106] = {
    [sym_begin_group] = ACTIONS(243),
  },
  [107] = {
    [sym_end_LVerbatim] = STATE(176),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_environment_repeat1] = STATE(190),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(245),
  },
  [108] = {
    [sym_end_LVerbatim] = STATE(176),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [109] = {
    [sym_begin_group] = ACTIONS(247),
  },
  [110] = {
    [sym_end_LVerbatim_star] = STATE(176),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(192),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(249),
  },
  [111] = {
    [sym_end_LVerbatim_star] = STATE(176),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [112] = {
    [sym_begin_group] = ACTIONS(251),
  },
  [113] = {
    [sym_end_lstlisting] = STATE(176),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(253),
  },
  [114] = {
    [sym_end_lstlisting] = STATE(176),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [115] = {
    [sym__text_mode] = STATE(196),
    [sym_parameter] = STATE(196),
    [sym_text_environment] = STATE(196),
    [sym_display_math] = STATE(196),
    [sym_inline_math] = STATE(196),
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
    [sym_verbatim_environment] = STATE(196),
    [sym_escaped] = STATE(196),
    [sym_command] = STATE(196),
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
    [sym_text_group] = STATE(196),
    [sym_opt_text_group] = STATE(196),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(196),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(196),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(255),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(257),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(257),
    [sym_subscript] = ACTIONS(257),
    [sym_active_char] = ACTIONS(257),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(259),
  },
  [116] = {
    [sym_end_minted] = STATE(176),
    [sym_end_token] = STATE(197),
    [aux_sym_verbatim_environment_repeat1] = STATE(198),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(261),
  },
  [117] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(263),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(267),
    [sym__escape] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(267),
    [sym_end_group] = ACTIONS(267),
    [sym_math_shift] = ACTIONS(267),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_parameter_char] = ACTIONS(267),
    [sym_superscript] = ACTIONS(267),
    [sym_subscript] = ACTIONS(267),
    [sym_active_char] = ACTIONS(267),
    [sym_comment_char] = ACTIONS(267),
    [sym_text] = ACTIONS(265),
  },
  [119] = {
    [sym_simple_text_group] = STATE(199),
    [sym_begin_group] = ACTIONS(113),
  },
  [120] = {
    [sym__text_mode] = STATE(201),
    [sym_parameter] = STATE(201),
    [sym_text_environment] = STATE(201),
    [sym_display_math] = STATE(201),
    [sym_inline_math] = STATE(201),
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
    [sym_verbatim_environment] = STATE(201),
    [sym_escaped] = STATE(201),
    [sym_command] = STATE(201),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_end] = STATE(200),
    [sym_end_token] = STATE(119),
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
    [sym_text_group] = STATE(201),
    [sym_opt_text_group] = STATE(201),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(201),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(99),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(269),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(269),
    [sym_subscript] = ACTIONS(269),
    [sym_active_char] = ACTIONS(269),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(271),
  },
  [121] = {
    [anon_sym_align] = ACTIONS(273),
    [anon_sym_align_STAR] = ACTIONS(275),
    [anon_sym_alignat] = ACTIONS(277),
    [anon_sym_alignat_STAR] = ACTIONS(279),
    [anon_sym_eqnarray] = ACTIONS(281),
    [anon_sym_eqnarray_STAR] = ACTIONS(283),
    [anon_sym_equation] = ACTIONS(285),
    [anon_sym_equation_STAR] = ACTIONS(287),
    [anon_sym_flalign] = ACTIONS(289),
    [anon_sym_flalign_STAR] = ACTIONS(291),
    [anon_sym_gather] = ACTIONS(293),
    [anon_sym_gather_STAR] = ACTIONS(295),
    [anon_sym_multline] = ACTIONS(297),
    [anon_sym_multline_STAR] = ACTIONS(299),
    [anon_sym_split] = ACTIONS(301),
    [anon_sym_split_STAR] = ACTIONS(303),
    [anon_sym_math] = ACTIONS(305),
    [anon_sym_verbatim] = ACTIONS(307),
    [anon_sym_Verbatim] = ACTIONS(309),
    [anon_sym_Verbatim_STAR] = ACTIONS(311),
    [anon_sym_BVerbatim] = ACTIONS(313),
    [anon_sym_BVerbatim_STAR] = ACTIONS(315),
    [anon_sym_LVerbatim] = ACTIONS(317),
    [anon_sym_LVerbatim_STAR] = ACTIONS(319),
    [anon_sym_lstlisting] = ACTIONS(321),
    [sym_text] = ACTIONS(323),
  },
  [122] = {
    [anon_sym_LBRACK] = ACTIONS(325),
    [sym__escape] = ACTIONS(325),
    [sym_begin_group] = ACTIONS(325),
    [sym_math_shift] = ACTIONS(325),
    [sym_alignment_tab] = ACTIONS(325),
    [sym_parameter_char] = ACTIONS(325),
    [sym_superscript] = ACTIONS(325),
    [sym_subscript] = ACTIONS(325),
    [sym_active_char] = ACTIONS(325),
    [sym_comment_char] = ACTIONS(325),
    [sym_text] = ACTIONS(327),
  },
  [123] = {
    [sym_text] = ACTIONS(329),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [sym__escape] = ACTIONS(333),
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
  [125] = {
    [sym_simple_text_group] = STATE(228),
    [sym_begin_group] = ACTIONS(113),
  },
  [126] = {
    [sym__math_mode] = STATE(231),
    [sym_parameter] = STATE(231),
    [sym_math_environment] = STATE(231),
    [sym_tag] = STATE(231),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(231),
    [sym_command] = STATE(231),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(231),
    [sym_opt_math_group] = STATE(231),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(231),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(230),
    [aux_sym_math_mode_repeat1] = STATE(231),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(337),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(337),
    [sym_subscript] = ACTIONS(337),
    [sym_active_char] = ACTIONS(337),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(339),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [sym__escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(343),
    [sym_end_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(343),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [sym_comment_char] = ACTIONS(343),
    [sym_text] = ACTIONS(341),
  },
  [128] = {
    [sym_simple_text_group] = STATE(232),
    [sym_begin_group] = ACTIONS(113),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [sym__escape] = ACTIONS(347),
    [sym_begin_group] = ACTIONS(347),
    [sym_end_group] = ACTIONS(347),
    [sym_math_shift] = ACTIONS(347),
    [sym_alignment_tab] = ACTIONS(347),
    [sym_parameter_char] = ACTIONS(347),
    [sym_superscript] = ACTIONS(347),
    [sym_subscript] = ACTIONS(347),
    [sym_active_char] = ACTIONS(347),
    [sym_comment_char] = ACTIONS(347),
    [sym_text] = ACTIONS(345),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(351),
    [anon_sym_RBRACK] = ACTIONS(351),
    [sym__escape] = ACTIONS(351),
    [sym_begin_group] = ACTIONS(351),
    [sym_end_group] = ACTIONS(351),
    [sym_math_shift] = ACTIONS(351),
    [sym_alignment_tab] = ACTIONS(351),
    [sym_parameter_char] = ACTIONS(351),
    [sym_superscript] = ACTIONS(351),
    [sym_subscript] = ACTIONS(351),
    [sym_active_char] = ACTIONS(351),
    [sym_comment_char] = ACTIONS(351),
    [sym_text] = ACTIONS(349),
  },
  [131] = {
    [sym_text_group] = STATE(233),
    [sym_begin_group] = ACTIONS(115),
  },
  [132] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(353),
  },
  [133] = {
    [anon_sym_EQ] = ACTIONS(355),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [sym__escape] = ACTIONS(359),
    [sym_begin_group] = ACTIONS(359),
    [sym_end_group] = ACTIONS(359),
    [sym_math_shift] = ACTIONS(359),
    [sym_alignment_tab] = ACTIONS(359),
    [sym_parameter_char] = ACTIONS(359),
    [sym_superscript] = ACTIONS(359),
    [sym_subscript] = ACTIONS(359),
    [sym_active_char] = ACTIONS(359),
    [sym_comment_char] = ACTIONS(359),
    [sym_text] = ACTIONS(357),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(361),
    [anon_sym_LBRACK] = ACTIONS(363),
    [sym__escape] = ACTIONS(363),
    [sym_begin_group] = ACTIONS(363),
    [sym_end_group] = ACTIONS(363),
    [sym_math_shift] = ACTIONS(363),
    [sym_alignment_tab] = ACTIONS(363),
    [sym_parameter_char] = ACTIONS(363),
    [sym_superscript] = ACTIONS(363),
    [sym_subscript] = ACTIONS(363),
    [sym_active_char] = ACTIONS(363),
    [sym_comment_char] = ACTIONS(363),
    [sym_text] = ACTIONS(361),
  },
  [136] = {
    [sym__math_mode] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_math_environment] = STATE(237),
    [sym_tag] = STATE(237),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(237),
    [sym_command] = STATE(237),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(237),
    [sym_opt_math_group] = STATE(237),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(237),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(236),
    [aux_sym_math_mode_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(367),
  },
  [137] = {
    [sym__text_mode] = STATE(137),
    [sym_parameter] = STATE(137),
    [sym_text_environment] = STATE(137),
    [sym_display_math] = STATE(137),
    [sym_inline_math] = STATE(137),
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
    [sym_verbatim_environment] = STATE(137),
    [sym_escaped] = STATE(137),
    [sym_command] = STATE(137),
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
    [sym_text_group] = STATE(137),
    [sym_opt_text_group] = STATE(137),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(137),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(137),
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(386),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_comment_char] = ACTIONS(389),
    [sym_text] = ACTIONS(392),
  },
  [138] = {
    [sym__escape] = ACTIONS(395),
  },
  [139] = {
    [sym__escape] = ACTIONS(397),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_RBRACK] = ACTIONS(401),
    [sym__escape] = ACTIONS(401),
    [sym_begin_group] = ACTIONS(401),
    [sym_end_group] = ACTIONS(401),
    [sym_math_shift] = ACTIONS(401),
    [sym_alignment_tab] = ACTIONS(401),
    [sym_parameter_char] = ACTIONS(401),
    [sym_superscript] = ACTIONS(401),
    [sym_subscript] = ACTIONS(401),
    [sym_active_char] = ACTIONS(401),
    [sym_comment_char] = ACTIONS(401),
    [sym_text] = ACTIONS(399),
  },
  [141] = {
    [sym__text_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_environment] = STATE(141),
    [sym_display_math] = STATE(141),
    [sym_inline_math] = STATE(141),
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
    [sym_verbatim_environment] = STATE(141),
    [sym_escaped] = STATE(141),
    [sym_command] = STATE(141),
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
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(141),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_end_group] = ACTIONS(403),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(405),
    [sym_parameter_char] = ACTIONS(386),
    [sym_superscript] = ACTIONS(405),
    [sym_subscript] = ACTIONS(405),
    [sym_active_char] = ACTIONS(405),
    [sym_comment_char] = ACTIONS(389),
    [sym_text] = ACTIONS(408),
  },
  [142] = {
    [sym_begin_group] = ACTIONS(411),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_RBRACK] = ACTIONS(413),
    [sym__escape] = ACTIONS(413),
    [sym_begin_group] = ACTIONS(413),
    [sym_end_group] = ACTIONS(413),
    [sym_math_shift] = ACTIONS(413),
    [sym_alignment_tab] = ACTIONS(413),
    [sym_parameter_char] = ACTIONS(413),
    [sym_superscript] = ACTIONS(413),
    [sym_subscript] = ACTIONS(413),
    [sym_active_char] = ACTIONS(413),
    [sym_comment_char] = ACTIONS(413),
    [sym_text] = ACTIONS(415),
  },
  [144] = {
    [sym__math_mode] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_math_environment] = STATE(241),
    [sym_tag] = STATE(241),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(241),
    [sym_command] = STATE(241),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(241),
    [sym_opt_math_group] = STATE(241),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(241),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_end_group] = ACTIONS(417),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(419),
    [sym_active_char] = ACTIONS(419),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(421),
  },
  [145] = {
    [sym_math_shift] = ACTIONS(423),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(425),
    [anon_sym_LBRACK] = ACTIONS(427),
    [sym__escape] = ACTIONS(427),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(427),
    [sym_alignment_tab] = ACTIONS(427),
    [sym_parameter_char] = ACTIONS(427),
    [sym_superscript] = ACTIONS(427),
    [sym_subscript] = ACTIONS(427),
    [sym_active_char] = ACTIONS(427),
    [sym_comment_char] = ACTIONS(427),
    [sym_text] = ACTIONS(425),
  },
  [147] = {
    [sym__text_mode] = STATE(245),
    [sym_text_mode] = STATE(244),
    [sym_parameter] = STATE(245),
    [sym_text_environment] = STATE(245),
    [sym_display_math] = STATE(245),
    [sym_inline_math] = STATE(245),
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
    [sym_verbatim_environment] = STATE(245),
    [sym_escaped] = STATE(245),
    [sym_command] = STATE(245),
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
    [sym_text_group] = STATE(245),
    [sym_opt_text_group] = STATE(245),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(245),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(245),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(429),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(431),
    [sym_active_char] = ACTIONS(431),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(433),
  },
  [148] = {
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [sym__escape] = ACTIONS(435),
    [sym_begin_group] = ACTIONS(435),
    [sym_end_group] = ACTIONS(435),
    [sym_math_shift] = ACTIONS(435),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(435),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(435),
    [sym_active_char] = ACTIONS(435),
    [sym_comment_char] = ACTIONS(435),
    [sym_text] = ACTIONS(437),
  },
  [149] = {
    [anon_sym_tag] = ACTIONS(169),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(263),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(47),
  },
  [150] = {
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_RBRACK] = ACTIONS(439),
    [sym__escape] = ACTIONS(439),
    [sym_begin_group] = ACTIONS(439),
    [sym_end_group] = ACTIONS(439),
    [sym_math_shift] = ACTIONS(439),
    [sym_alignment_tab] = ACTIONS(439),
    [sym_parameter_char] = ACTIONS(439),
    [sym_superscript] = ACTIONS(439),
    [sym_subscript] = ACTIONS(439),
    [sym_active_char] = ACTIONS(439),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(441),
  },
  [151] = {
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_environment] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
    [sym_end] = STATE(246),
    [sym_end_token] = STATE(119),
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
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(181),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(207),
    [sym_subscript] = ACTIONS(207),
    [sym_active_char] = ACTIONS(207),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(209),
  },
  [152] = {
    [anon_sym_LBRACK] = ACTIONS(443),
    [anon_sym_RBRACK] = ACTIONS(443),
    [sym__escape] = ACTIONS(443),
    [sym_begin_group] = ACTIONS(443),
    [sym_end_group] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(443),
    [sym_alignment_tab] = ACTIONS(443),
    [sym_parameter_char] = ACTIONS(443),
    [sym_superscript] = ACTIONS(443),
    [sym_subscript] = ACTIONS(443),
    [sym_active_char] = ACTIONS(443),
    [sym_comment_char] = ACTIONS(443),
    [sym_text] = ACTIONS(445),
  },
  [153] = {
    [sym__math_mode] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_math_environment] = STATE(237),
    [sym_tag] = STATE(237),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(237),
    [sym_command] = STATE(237),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(237),
    [sym_opt_math_group] = STATE(237),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(237),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(247),
    [aux_sym_math_mode_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(367),
  },
  [154] = {
    [sym__math_mode] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_math_environment] = STATE(154),
    [sym_tag] = STATE(154),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(154),
    [sym_command] = STATE(154),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(154),
    [sym_opt_math_group] = STATE(154),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(154),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(453),
    [sym_math_shift] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(458),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(458),
    [sym_subscript] = ACTIONS(458),
    [sym_active_char] = ACTIONS(458),
    [sym_comment_char] = ACTIONS(464),
    [sym_text] = ACTIONS(467),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(470),
    [anon_sym_LBRACK] = ACTIONS(472),
    [sym__escape] = ACTIONS(472),
    [sym_begin_group] = ACTIONS(472),
    [sym_end_group] = ACTIONS(472),
    [sym_math_shift] = ACTIONS(472),
    [sym_alignment_tab] = ACTIONS(472),
    [sym_parameter_char] = ACTIONS(472),
    [sym_superscript] = ACTIONS(472),
    [sym_subscript] = ACTIONS(472),
    [sym_active_char] = ACTIONS(472),
    [sym_comment_char] = ACTIONS(472),
    [sym_text] = ACTIONS(470),
  },
  [156] = {
    [sym_begin_group] = ACTIONS(474),
  },
  [157] = {
    [sym__math_mode] = STATE(157),
    [sym_parameter] = STATE(157),
    [sym_math_environment] = STATE(157),
    [sym_tag] = STATE(157),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(157),
    [sym_command] = STATE(157),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(157),
    [sym_opt_math_group] = STATE(157),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(157),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(157),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(453),
    [sym_alignment_tab] = ACTIONS(476),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(476),
    [sym_subscript] = ACTIONS(476),
    [sym_active_char] = ACTIONS(476),
    [sym_comment_char] = ACTIONS(464),
    [sym_text] = ACTIONS(479),
  },
  [158] = {
    [sym_begin_group] = ACTIONS(482),
  },
  [159] = {
    [sym_begin_group] = ACTIONS(484),
  },
  [160] = {
    [sym_begin_group] = ACTIONS(486),
  },
  [161] = {
    [sym_begin_group] = ACTIONS(488),
  },
  [162] = {
    [sym_begin_group] = ACTIONS(490),
  },
  [163] = {
    [sym_begin_group] = ACTIONS(492),
  },
  [164] = {
    [sym_begin_group] = ACTIONS(494),
  },
  [165] = {
    [sym_begin_group] = ACTIONS(496),
  },
  [166] = {
    [sym_begin_group] = ACTIONS(498),
  },
  [167] = {
    [sym_begin_group] = ACTIONS(500),
  },
  [168] = {
    [sym_begin_group] = ACTIONS(502),
  },
  [169] = {
    [sym_begin_group] = ACTIONS(504),
  },
  [170] = {
    [sym_begin_group] = ACTIONS(506),
  },
  [171] = {
    [sym_begin_group] = ACTIONS(508),
  },
  [172] = {
    [sym_begin_group] = ACTIONS(510),
  },
  [173] = {
    [sym_begin_group] = ACTIONS(512),
  },
  [174] = {
    [sym_begin_group] = ACTIONS(514),
  },
  [175] = {
    [anon_sym_verbatim] = ACTIONS(516),
  },
  [176] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_LBRACK] = ACTIONS(520),
    [sym__escape] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(520),
    [sym_end_group] = ACTIONS(520),
    [sym_math_shift] = ACTIONS(520),
    [sym_alignment_tab] = ACTIONS(520),
    [sym_parameter_char] = ACTIONS(520),
    [sym_superscript] = ACTIONS(520),
    [sym_subscript] = ACTIONS(520),
    [sym_active_char] = ACTIONS(520),
    [sym_comment_char] = ACTIONS(520),
    [sym_text] = ACTIONS(518),
  },
  [177] = {
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(522),
    [sym_verbatim_token] = ACTIONS(524),
  },
  [178] = {
    [anon_sym_Verbatim] = ACTIONS(527),
  },
  [179] = {
    [sym_end_Verbatim] = STATE(267),
    [sym_end_token] = STATE(93),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [180] = {
    [sym__escape] = ACTIONS(359),
    [sym_verbatim_token] = ACTIONS(359),
  },
  [181] = {
    [sym__escape] = ACTIONS(363),
    [sym_verbatim_token] = ACTIONS(363),
  },
  [182] = {
    [sym__math_mode] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_math_environment] = STATE(237),
    [sym_tag] = STATE(237),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(237),
    [sym_command] = STATE(237),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(237),
    [sym_opt_math_group] = STATE(237),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(237),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(268),
    [aux_sym_math_mode_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(225),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(367),
  },
  [183] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(529),
  },
  [184] = {
    [sym_end_Verbatim_star] = STATE(267),
    [sym_end_token] = STATE(97),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [185] = {
    [anon_sym_BVerbatim] = ACTIONS(531),
  },
  [186] = {
    [sym_end_BVerbatim] = STATE(267),
    [sym_end_token] = STATE(100),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [187] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(533),
  },
  [188] = {
    [sym_end_BVerbatim_star] = STATE(267),
    [sym_end_token] = STATE(103),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [189] = {
    [anon_sym_LVerbatim] = ACTIONS(535),
  },
  [190] = {
    [sym_end_LVerbatim] = STATE(267),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [191] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(537),
  },
  [192] = {
    [sym_end_LVerbatim_star] = STATE(267),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [193] = {
    [anon_sym_lstlisting] = ACTIONS(539),
  },
  [194] = {
    [sym_end_lstlisting] = STATE(267),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [195] = {
    [sym__escape] = ACTIONS(161),
    [sym_verbatim_token] = ACTIONS(161),
  },
  [196] = {
    [sym__text_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_environment] = STATE(141),
    [sym_display_math] = STATE(141),
    [sym_inline_math] = STATE(141),
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
    [sym_verbatim_environment] = STATE(141),
    [sym_escaped] = STATE(141),
    [sym_command] = STATE(141),
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
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(141),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(541),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(167),
  },
  [197] = {
    [sym_begin_group] = ACTIONS(543),
  },
  [198] = {
    [sym_end_minted] = STATE(267),
    [sym_end_token] = STATE(197),
    [aux_sym_verbatim_environment_repeat1] = STATE(177),
    [sym__escape] = ACTIONS(79),
    [sym_verbatim_token] = ACTIONS(219),
  },
  [199] = {
    [ts_builtin_sym_end] = ACTIONS(545),
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
    [sym_text] = ACTIONS(545),
  },
  [200] = {
    [ts_builtin_sym_end] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(551),
    [sym__escape] = ACTIONS(551),
    [sym_begin_group] = ACTIONS(551),
    [sym_end_group] = ACTIONS(551),
    [sym_math_shift] = ACTIONS(551),
    [sym_alignment_tab] = ACTIONS(551),
    [sym_parameter_char] = ACTIONS(551),
    [sym_superscript] = ACTIONS(551),
    [sym_subscript] = ACTIONS(551),
    [sym_active_char] = ACTIONS(551),
    [sym_comment_char] = ACTIONS(551),
    [sym_text] = ACTIONS(549),
  },
  [201] = {
    [sym__text_mode] = STATE(201),
    [sym_parameter] = STATE(201),
    [sym_text_environment] = STATE(201),
    [sym_display_math] = STATE(201),
    [sym_inline_math] = STATE(201),
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
    [sym_verbatim_environment] = STATE(201),
    [sym_escaped] = STATE(201),
    [sym_command] = STATE(201),
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
    [sym_text_group] = STATE(201),
    [sym_opt_text_group] = STATE(201),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(201),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__escape] = ACTIONS(374),
    [sym_begin_group] = ACTIONS(377),
    [sym_math_shift] = ACTIONS(380),
    [sym_alignment_tab] = ACTIONS(553),
    [sym_parameter_char] = ACTIONS(386),
    [sym_superscript] = ACTIONS(553),
    [sym_subscript] = ACTIONS(553),
    [sym_active_char] = ACTIONS(553),
    [sym_comment_char] = ACTIONS(389),
    [sym_text] = ACTIONS(556),
  },
  [202] = {
    [sym_end_group] = ACTIONS(559),
  },
  [203] = {
    [sym_end_group] = ACTIONS(561),
  },
  [204] = {
    [sym_end_group] = ACTIONS(563),
  },
  [205] = {
    [sym_end_group] = ACTIONS(565),
  },
  [206] = {
    [sym_end_group] = ACTIONS(567),
  },
  [207] = {
    [sym_end_group] = ACTIONS(569),
  },
  [208] = {
    [sym_end_group] = ACTIONS(571),
  },
  [209] = {
    [sym_end_group] = ACTIONS(573),
  },
  [210] = {
    [sym_end_group] = ACTIONS(575),
  },
  [211] = {
    [sym_end_group] = ACTIONS(577),
  },
  [212] = {
    [sym_end_group] = ACTIONS(579),
  },
  [213] = {
    [sym_end_group] = ACTIONS(581),
  },
  [214] = {
    [sym_end_group] = ACTIONS(583),
  },
  [215] = {
    [sym_end_group] = ACTIONS(585),
  },
  [216] = {
    [sym_end_group] = ACTIONS(587),
  },
  [217] = {
    [sym_end_group] = ACTIONS(589),
  },
  [218] = {
    [sym_end_group] = ACTIONS(591),
  },
  [219] = {
    [sym_end_group] = ACTIONS(593),
  },
  [220] = {
    [sym_end_group] = ACTIONS(595),
  },
  [221] = {
    [sym_end_group] = ACTIONS(597),
  },
  [222] = {
    [sym_end_group] = ACTIONS(599),
  },
  [223] = {
    [sym_end_group] = ACTIONS(601),
  },
  [224] = {
    [sym_end_group] = ACTIONS(603),
  },
  [225] = {
    [sym_end_group] = ACTIONS(605),
  },
  [226] = {
    [sym_end_group] = ACTIONS(607),
  },
  [227] = {
    [sym_end_group] = ACTIONS(609),
  },
  [228] = {
    [ts_builtin_sym_end] = ACTIONS(611),
    [anon_sym_LBRACK] = ACTIONS(613),
    [anon_sym_RBRACK] = ACTIONS(613),
    [sym__escape] = ACTIONS(613),
    [sym_begin_group] = ACTIONS(613),
    [sym_end_group] = ACTIONS(613),
    [sym_math_shift] = ACTIONS(613),
    [sym_alignment_tab] = ACTIONS(613),
    [sym_parameter_char] = ACTIONS(613),
    [sym_superscript] = ACTIONS(613),
    [sym_subscript] = ACTIONS(613),
    [sym_active_char] = ACTIONS(613),
    [sym_comment_char] = ACTIONS(613),
    [sym_text] = ACTIONS(611),
  },
  [229] = {
    [sym_begin_group] = ACTIONS(357),
  },
  [230] = {
    [sym_begin_group] = ACTIONS(361),
  },
  [231] = {
    [sym__math_mode] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_math_environment] = STATE(237),
    [sym_tag] = STATE(237),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(237),
    [sym_command] = STATE(237),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(237),
    [sym_opt_math_group] = STATE(237),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(237),
    [sym_begin_opt] = STATE(67),
    [sym_end_opt] = STATE(303),
    [aux_sym_math_mode_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(335),
    [sym__escape] = ACTIONS(55),
    [sym_begin_group] = ACTIONS(57),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(367),
  },
  [232] = {
    [ts_builtin_sym_end] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(617),
    [sym__escape] = ACTIONS(617),
    [sym_begin_group] = ACTIONS(617),
    [sym_end_group] = ACTIONS(617),
    [sym_math_shift] = ACTIONS(617),
    [sym_alignment_tab] = ACTIONS(617),
    [sym_parameter_char] = ACTIONS(617),
    [sym_superscript] = ACTIONS(617),
    [sym_subscript] = ACTIONS(617),
    [sym_active_char] = ACTIONS(617),
    [sym_comment_char] = ACTIONS(617),
    [sym_text] = ACTIONS(615),
  },
  [233] = {
    [ts_builtin_sym_end] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [sym__escape] = ACTIONS(621),
    [sym_begin_group] = ACTIONS(621),
    [sym_end_group] = ACTIONS(621),
    [sym_math_shift] = ACTIONS(621),
    [sym_alignment_tab] = ACTIONS(621),
    [sym_parameter_char] = ACTIONS(621),
    [sym_superscript] = ACTIONS(621),
    [sym_subscript] = ACTIONS(621),
    [sym_active_char] = ACTIONS(621),
    [sym_comment_char] = ACTIONS(621),
    [sym_text] = ACTIONS(619),
  },
  [234] = {
    [anon_sym_EQ] = ACTIONS(135),
  },
  [235] = {
    [sym_number] = ACTIONS(623),
  },
  [236] = {
    [ts_builtin_sym_end] = ACTIONS(625),
    [anon_sym_LBRACK] = ACTIONS(627),
    [sym__escape] = ACTIONS(627),
    [sym_begin_group] = ACTIONS(627),
    [sym_end_group] = ACTIONS(627),
    [sym_math_shift] = ACTIONS(627),
    [sym_alignment_tab] = ACTIONS(627),
    [sym_parameter_char] = ACTIONS(627),
    [sym_superscript] = ACTIONS(627),
    [sym_subscript] = ACTIONS(627),
    [sym_active_char] = ACTIONS(627),
    [sym_comment_char] = ACTIONS(627),
    [sym_text] = ACTIONS(625),
  },
  [237] = {
    [sym__math_mode] = STATE(237),
    [sym_parameter] = STATE(237),
    [sym_math_environment] = STATE(237),
    [sym_tag] = STATE(237),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(237),
    [sym_command] = STATE(237),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(237),
    [sym_opt_math_group] = STATE(237),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(237),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(237),
    [anon_sym_LBRACK] = ACTIONS(447),
    [anon_sym_RBRACK] = ACTIONS(456),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(453),
    [sym_alignment_tab] = ACTIONS(629),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(629),
    [sym_subscript] = ACTIONS(629),
    [sym_active_char] = ACTIONS(629),
    [sym_comment_char] = ACTIONS(464),
    [sym_text] = ACTIONS(632),
  },
  [238] = {
    [anon_sym_RBRACK] = ACTIONS(635),
  },
  [239] = {
    [anon_sym_RPAREN] = ACTIONS(637),
  },
  [240] = {
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
    [sym__escape] = ACTIONS(639),
    [sym_begin_group] = ACTIONS(639),
    [sym_end_group] = ACTIONS(639),
    [sym_math_shift] = ACTIONS(639),
    [sym_alignment_tab] = ACTIONS(639),
    [sym_parameter_char] = ACTIONS(639),
    [sym_superscript] = ACTIONS(639),
    [sym_subscript] = ACTIONS(639),
    [sym_active_char] = ACTIONS(639),
    [sym_comment_char] = ACTIONS(639),
    [sym_text] = ACTIONS(641),
  },
  [241] = {
    [sym__math_mode] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_math_environment] = STATE(241),
    [sym_tag] = STATE(241),
    [sym_tag_token] = STATE(64),
    [sym_escaped] = STATE(241),
    [sym_command] = STATE(241),
    [sym_begin] = STATE(65),
    [sym_begin_token] = STATE(66),
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
    [sym_math_group] = STATE(241),
    [sym_opt_math_group] = STATE(241),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(241),
    [sym_begin_opt] = STATE(67),
    [aux_sym_math_mode_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(447),
    [sym__escape] = ACTIONS(450),
    [sym_begin_group] = ACTIONS(453),
    [sym_end_group] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(643),
    [sym_parameter_char] = ACTIONS(461),
    [sym_superscript] = ACTIONS(643),
    [sym_subscript] = ACTIONS(643),
    [sym_active_char] = ACTIONS(643),
    [sym_comment_char] = ACTIONS(464),
    [sym_text] = ACTIONS(646),
  },
  [242] = {
    [sym_math_shift] = ACTIONS(635),
  },
  [243] = {
    [anon_sym_LBRACK] = ACTIONS(649),
    [anon_sym_RBRACK] = ACTIONS(649),
    [sym__escape] = ACTIONS(649),
    [sym_begin_group] = ACTIONS(649),
    [sym_end_group] = ACTIONS(649),
    [sym_math_shift] = ACTIONS(649),
    [sym_alignment_tab] = ACTIONS(649),
    [sym_parameter_char] = ACTIONS(649),
    [sym_superscript] = ACTIONS(649),
    [sym_subscript] = ACTIONS(649),
    [sym_active_char] = ACTIONS(649),
    [sym_comment_char] = ACTIONS(649),
    [sym_text] = ACTIONS(651),
  },
  [244] = {
    [sym_end_group] = ACTIONS(653),
  },
  [245] = {
    [sym__text_mode] = STATE(141),
    [sym_parameter] = STATE(141),
    [sym_text_environment] = STATE(141),
    [sym_display_math] = STATE(141),
    [sym_inline_math] = STATE(141),
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
    [sym_verbatim_environment] = STATE(141),
    [sym_escaped] = STATE(141),
    [sym_command] = STATE(141),
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
    [sym_text_group] = STATE(141),
    [sym_opt_text_group] = STATE(141),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(141),
    [sym_begin_opt] = STATE(45),
    [aux_sym_text_mode_repeat1] = STATE(141),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(655),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(165),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(165),
    [sym_subscript] = ACTIONS(165),
    [sym_active_char] = ACTIONS(165),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(167),
  },
  [246] = {
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym__escape] = ACTIONS(657),
    [sym_begin_group] = ACTIONS(657),
    [sym_end_group] = ACTIONS(657),
    [sym_math_shift] = ACTIONS(657),
    [sym_alignment_tab] = ACTIONS(657),
    [sym_parameter_char] = ACTIONS(657),
    [sym_superscript] = ACTIONS(657),
    [sym_subscript] = ACTIONS(657),
    [sym_active_char] = ACTIONS(657),
    [sym_comment_char] = ACTIONS(657),
    [sym_text] = ACTIONS(659),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [sym__escape] = ACTIONS(661),
    [sym_begin_group] = ACTIONS(661),
    [sym_end_group] = ACTIONS(661),
    [sym_math_shift] = ACTIONS(661),
    [sym_alignment_tab] = ACTIONS(661),
    [sym_parameter_char] = ACTIONS(661),
    [sym_superscript] = ACTIONS(661),
    [sym_subscript] = ACTIONS(661),
    [sym_active_char] = ACTIONS(661),
    [sym_comment_char] = ACTIONS(661),
    [sym_text] = ACTIONS(663),
  },
  [248] = {
    [anon_sym_align] = ACTIONS(665),
  },
  [249] = {
    [anon_sym_align_STAR] = ACTIONS(667),
  },
  [250] = {
    [anon_sym_alignat] = ACTIONS(669),
  },
  [251] = {
    [anon_sym_alignat_STAR] = ACTIONS(671),
  },
  [252] = {
    [anon_sym_eqnarray] = ACTIONS(673),
  },
  [253] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(675),
  },
  [254] = {
    [anon_sym_equation] = ACTIONS(677),
  },
  [255] = {
    [anon_sym_equation_STAR] = ACTIONS(679),
  },
  [256] = {
    [anon_sym_flalign] = ACTIONS(681),
  },
  [257] = {
    [anon_sym_flalign_STAR] = ACTIONS(683),
  },
  [258] = {
    [anon_sym_gather] = ACTIONS(685),
  },
  [259] = {
    [anon_sym_gather_STAR] = ACTIONS(687),
  },
  [260] = {
    [anon_sym_multline] = ACTIONS(689),
  },
  [261] = {
    [anon_sym_multline_STAR] = ACTIONS(691),
  },
  [262] = {
    [anon_sym_split] = ACTIONS(693),
  },
  [263] = {
    [anon_sym_split_STAR] = ACTIONS(695),
  },
  [264] = {
    [anon_sym_math] = ACTIONS(697),
  },
  [265] = {
    [sym_end_group] = ACTIONS(699),
  },
  [266] = {
    [sym_end_group] = ACTIONS(701),
  },
  [267] = {
    [ts_builtin_sym_end] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(705),
    [sym__escape] = ACTIONS(705),
    [sym_begin_group] = ACTIONS(705),
    [sym_end_group] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(705),
    [sym_alignment_tab] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(705),
    [sym_superscript] = ACTIONS(705),
    [sym_subscript] = ACTIONS(705),
    [sym_active_char] = ACTIONS(705),
    [sym_comment_char] = ACTIONS(705),
    [sym_text] = ACTIONS(703),
  },
  [268] = {
    [sym__escape] = ACTIONS(627),
    [sym_verbatim_token] = ACTIONS(627),
  },
  [269] = {
    [sym_end_group] = ACTIONS(707),
  },
  [270] = {
    [sym_end_group] = ACTIONS(709),
  },
  [271] = {
    [sym_end_group] = ACTIONS(711),
  },
  [272] = {
    [sym_end_group] = ACTIONS(713),
  },
  [273] = {
    [sym_end_group] = ACTIONS(715),
  },
  [274] = {
    [sym_end_group] = ACTIONS(717),
  },
  [275] = {
    [sym__escape] = ACTIONS(401),
    [sym_verbatim_token] = ACTIONS(401),
  },
  [276] = {
    [anon_sym_minted] = ACTIONS(719),
  },
  [277] = {
    [anon_sym_LBRACK] = ACTIONS(721),
    [sym__escape] = ACTIONS(721),
    [sym_begin_group] = ACTIONS(721),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(721),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(721),
    [sym_active_char] = ACTIONS(721),
    [sym_comment_char] = ACTIONS(721),
    [sym_text] = ACTIONS(723),
  },
  [278] = {
    [anon_sym_LBRACK] = ACTIONS(725),
    [sym__escape] = ACTIONS(725),
    [sym_begin_group] = ACTIONS(725),
    [sym_alignment_tab] = ACTIONS(725),
    [sym_parameter_char] = ACTIONS(725),
    [sym_superscript] = ACTIONS(725),
    [sym_subscript] = ACTIONS(725),
    [sym_active_char] = ACTIONS(725),
    [sym_comment_char] = ACTIONS(725),
    [sym_text] = ACTIONS(727),
  },
  [279] = {
    [sym_opt_text_group] = STATE(334),
    [sym_begin_opt] = STATE(45),
    [anon_sym_LBRACK] = ACTIONS(111),
  },
  [280] = {
    [sym_text_group] = STATE(335),
    [sym_begin_group] = ACTIONS(115),
  },
  [281] = {
    [anon_sym_LBRACK] = ACTIONS(729),
    [sym__escape] = ACTIONS(729),
    [sym_begin_group] = ACTIONS(729),
    [sym_alignment_tab] = ACTIONS(729),
    [sym_parameter_char] = ACTIONS(729),
    [sym_superscript] = ACTIONS(729),
    [sym_subscript] = ACTIONS(729),
    [sym_active_char] = ACTIONS(729),
    [sym_comment_char] = ACTIONS(729),
    [sym_text] = ACTIONS(731),
  },
  [282] = {
    [anon_sym_LBRACK] = ACTIONS(733),
    [sym__escape] = ACTIONS(733),
    [sym_begin_group] = ACTIONS(733),
    [sym_alignment_tab] = ACTIONS(733),
    [sym_parameter_char] = ACTIONS(733),
    [sym_superscript] = ACTIONS(733),
    [sym_subscript] = ACTIONS(733),
    [sym_active_char] = ACTIONS(733),
    [sym_comment_char] = ACTIONS(733),
    [sym_text] = ACTIONS(735),
  },
  [283] = {
    [anon_sym_LBRACK] = ACTIONS(737),
    [sym__escape] = ACTIONS(737),
    [sym_begin_group] = ACTIONS(737),
    [sym_alignment_tab] = ACTIONS(737),
    [sym_parameter_char] = ACTIONS(737),
    [sym_superscript] = ACTIONS(737),
    [sym_subscript] = ACTIONS(737),
    [sym_active_char] = ACTIONS(737),
    [sym_comment_char] = ACTIONS(737),
    [sym_text] = ACTIONS(739),
  },
  [284] = {
    [anon_sym_LBRACK] = ACTIONS(741),
    [sym__escape] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_active_char] = ACTIONS(741),
    [sym_comment_char] = ACTIONS(741),
    [sym_text] = ACTIONS(743),
  },
  [285] = {
    [anon_sym_LBRACK] = ACTIONS(745),
    [sym__escape] = ACTIONS(745),
    [sym_begin_group] = ACTIONS(745),
    [sym_alignment_tab] = ACTIONS(745),
    [sym_parameter_char] = ACTIONS(745),
    [sym_superscript] = ACTIONS(745),
    [sym_subscript] = ACTIONS(745),
    [sym_active_char] = ACTIONS(745),
    [sym_comment_char] = ACTIONS(745),
    [sym_text] = ACTIONS(747),
  },
  [286] = {
    [anon_sym_LBRACK] = ACTIONS(749),
    [sym__escape] = ACTIONS(749),
    [sym_begin_group] = ACTIONS(749),
    [sym_alignment_tab] = ACTIONS(749),
    [sym_parameter_char] = ACTIONS(749),
    [sym_superscript] = ACTIONS(749),
    [sym_subscript] = ACTIONS(749),
    [sym_active_char] = ACTIONS(749),
    [sym_comment_char] = ACTIONS(749),
    [sym_text] = ACTIONS(751),
  },
  [287] = {
    [anon_sym_LBRACK] = ACTIONS(753),
    [sym__escape] = ACTIONS(753),
    [sym_begin_group] = ACTIONS(753),
    [sym_alignment_tab] = ACTIONS(753),
    [sym_parameter_char] = ACTIONS(753),
    [sym_superscript] = ACTIONS(753),
    [sym_subscript] = ACTIONS(753),
    [sym_active_char] = ACTIONS(753),
    [sym_comment_char] = ACTIONS(753),
    [sym_text] = ACTIONS(755),
  },
  [288] = {
    [anon_sym_LBRACK] = ACTIONS(757),
    [sym__escape] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_active_char] = ACTIONS(757),
    [sym_comment_char] = ACTIONS(757),
    [sym_text] = ACTIONS(759),
  },
  [289] = {
    [anon_sym_LBRACK] = ACTIONS(761),
    [sym__escape] = ACTIONS(761),
    [sym_begin_group] = ACTIONS(761),
    [sym_alignment_tab] = ACTIONS(761),
    [sym_parameter_char] = ACTIONS(761),
    [sym_superscript] = ACTIONS(761),
    [sym_subscript] = ACTIONS(761),
    [sym_active_char] = ACTIONS(761),
    [sym_comment_char] = ACTIONS(761),
    [sym_text] = ACTIONS(763),
  },
  [290] = {
    [anon_sym_LBRACK] = ACTIONS(765),
    [sym__escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(765),
    [sym_alignment_tab] = ACTIONS(765),
    [sym_parameter_char] = ACTIONS(765),
    [sym_superscript] = ACTIONS(765),
    [sym_subscript] = ACTIONS(765),
    [sym_active_char] = ACTIONS(765),
    [sym_comment_char] = ACTIONS(765),
    [sym_text] = ACTIONS(767),
  },
  [291] = {
    [anon_sym_LBRACK] = ACTIONS(769),
    [sym__escape] = ACTIONS(769),
    [sym_begin_group] = ACTIONS(769),
    [sym_alignment_tab] = ACTIONS(769),
    [sym_parameter_char] = ACTIONS(769),
    [sym_superscript] = ACTIONS(769),
    [sym_subscript] = ACTIONS(769),
    [sym_active_char] = ACTIONS(769),
    [sym_comment_char] = ACTIONS(769),
    [sym_text] = ACTIONS(771),
  },
  [292] = {
    [anon_sym_LBRACK] = ACTIONS(773),
    [sym__escape] = ACTIONS(773),
    [sym_begin_group] = ACTIONS(773),
    [sym_alignment_tab] = ACTIONS(773),
    [sym_parameter_char] = ACTIONS(773),
    [sym_superscript] = ACTIONS(773),
    [sym_subscript] = ACTIONS(773),
    [sym_active_char] = ACTIONS(773),
    [sym_comment_char] = ACTIONS(773),
    [sym_text] = ACTIONS(775),
  },
  [293] = {
    [anon_sym_LBRACK] = ACTIONS(777),
    [sym__escape] = ACTIONS(777),
    [sym_begin_group] = ACTIONS(777),
    [sym_alignment_tab] = ACTIONS(777),
    [sym_parameter_char] = ACTIONS(777),
    [sym_superscript] = ACTIONS(777),
    [sym_subscript] = ACTIONS(777),
    [sym_active_char] = ACTIONS(777),
    [sym_comment_char] = ACTIONS(777),
    [sym_text] = ACTIONS(779),
  },
  [294] = {
    [sym__escape] = ACTIONS(781),
    [sym_verbatim_token] = ACTIONS(781),
  },
  [295] = {
    [anon_sym_LBRACK] = ACTIONS(783),
    [sym__escape] = ACTIONS(783),
    [sym_verbatim_token] = ACTIONS(783),
  },
  [296] = {
    [anon_sym_LBRACK] = ACTIONS(785),
    [sym__escape] = ACTIONS(785),
    [sym_verbatim_token] = ACTIONS(785),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(787),
    [sym__escape] = ACTIONS(787),
    [sym_verbatim_token] = ACTIONS(787),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(789),
    [sym__escape] = ACTIONS(789),
    [sym_verbatim_token] = ACTIONS(789),
  },
  [299] = {
    [anon_sym_LBRACK] = ACTIONS(791),
    [sym__escape] = ACTIONS(791),
    [sym_verbatim_token] = ACTIONS(791),
  },
  [300] = {
    [anon_sym_LBRACK] = ACTIONS(793),
    [sym__escape] = ACTIONS(793),
    [sym_verbatim_token] = ACTIONS(793),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(795),
    [sym__escape] = ACTIONS(795),
    [sym_begin_group] = ACTIONS(797),
    [sym_verbatim_token] = ACTIONS(795),
  },
  [302] = {
    [ts_builtin_sym_end] = ACTIONS(799),
    [anon_sym_LBRACK] = ACTIONS(801),
    [anon_sym_RBRACK] = ACTIONS(801),
    [sym__escape] = ACTIONS(801),
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
  [303] = {
    [sym_begin_group] = ACTIONS(625),
  },
  [304] = {
    [ts_builtin_sym_end] = ACTIONS(803),
    [anon_sym_LBRACK] = ACTIONS(805),
    [anon_sym_RBRACK] = ACTIONS(805),
    [sym__escape] = ACTIONS(805),
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
  [305] = {
    [ts_builtin_sym_end] = ACTIONS(807),
    [anon_sym_LBRACK] = ACTIONS(809),
    [sym__escape] = ACTIONS(809),
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
  [306] = {
    [ts_builtin_sym_end] = ACTIONS(811),
    [anon_sym_LBRACK] = ACTIONS(813),
    [sym__escape] = ACTIONS(813),
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
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(815),
    [anon_sym_RBRACK] = ACTIONS(815),
    [sym__escape] = ACTIONS(815),
    [sym_begin_group] = ACTIONS(815),
    [sym_end_group] = ACTIONS(815),
    [sym_math_shift] = ACTIONS(815),
    [sym_alignment_tab] = ACTIONS(815),
    [sym_parameter_char] = ACTIONS(815),
    [sym_superscript] = ACTIONS(815),
    [sym_subscript] = ACTIONS(815),
    [sym_active_char] = ACTIONS(815),
    [sym_comment_char] = ACTIONS(815),
    [sym_text] = ACTIONS(817),
  },
  [308] = {
    [sym_end_group] = ACTIONS(819),
  },
  [309] = {
    [sym_end_group] = ACTIONS(821),
  },
  [310] = {
    [sym_end_group] = ACTIONS(823),
  },
  [311] = {
    [sym_end_group] = ACTIONS(825),
  },
  [312] = {
    [sym_end_group] = ACTIONS(827),
  },
  [313] = {
    [sym_end_group] = ACTIONS(829),
  },
  [314] = {
    [sym_end_group] = ACTIONS(831),
  },
  [315] = {
    [sym_end_group] = ACTIONS(833),
  },
  [316] = {
    [sym_end_group] = ACTIONS(835),
  },
  [317] = {
    [sym_end_group] = ACTIONS(837),
  },
  [318] = {
    [sym_end_group] = ACTIONS(839),
  },
  [319] = {
    [sym_end_group] = ACTIONS(841),
  },
  [320] = {
    [sym_end_group] = ACTIONS(843),
  },
  [321] = {
    [sym_end_group] = ACTIONS(845),
  },
  [322] = {
    [sym_end_group] = ACTIONS(847),
  },
  [323] = {
    [sym_end_group] = ACTIONS(849),
  },
  [324] = {
    [sym_end_group] = ACTIONS(851),
  },
  [325] = {
    [ts_builtin_sym_end] = ACTIONS(853),
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym__escape] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_end_group] = ACTIONS(855),
    [sym_math_shift] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_active_char] = ACTIONS(855),
    [sym_comment_char] = ACTIONS(855),
    [sym_text] = ACTIONS(853),
  },
  [326] = {
    [ts_builtin_sym_end] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(859),
    [sym__escape] = ACTIONS(859),
    [sym_begin_group] = ACTIONS(859),
    [sym_end_group] = ACTIONS(859),
    [sym_math_shift] = ACTIONS(859),
    [sym_alignment_tab] = ACTIONS(859),
    [sym_parameter_char] = ACTIONS(859),
    [sym_superscript] = ACTIONS(859),
    [sym_subscript] = ACTIONS(859),
    [sym_active_char] = ACTIONS(859),
    [sym_comment_char] = ACTIONS(859),
    [sym_text] = ACTIONS(857),
  },
  [327] = {
    [ts_builtin_sym_end] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(863),
    [sym__escape] = ACTIONS(863),
    [sym_begin_group] = ACTIONS(863),
    [sym_end_group] = ACTIONS(863),
    [sym_math_shift] = ACTIONS(863),
    [sym_alignment_tab] = ACTIONS(863),
    [sym_parameter_char] = ACTIONS(863),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(863),
    [sym_active_char] = ACTIONS(863),
    [sym_comment_char] = ACTIONS(863),
    [sym_text] = ACTIONS(861),
  },
  [328] = {
    [ts_builtin_sym_end] = ACTIONS(865),
    [anon_sym_LBRACK] = ACTIONS(867),
    [sym__escape] = ACTIONS(867),
    [sym_begin_group] = ACTIONS(867),
    [sym_end_group] = ACTIONS(867),
    [sym_math_shift] = ACTIONS(867),
    [sym_alignment_tab] = ACTIONS(867),
    [sym_parameter_char] = ACTIONS(867),
    [sym_superscript] = ACTIONS(867),
    [sym_subscript] = ACTIONS(867),
    [sym_active_char] = ACTIONS(867),
    [sym_comment_char] = ACTIONS(867),
    [sym_text] = ACTIONS(865),
  },
  [329] = {
    [ts_builtin_sym_end] = ACTIONS(869),
    [anon_sym_LBRACK] = ACTIONS(871),
    [sym__escape] = ACTIONS(871),
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
  [330] = {
    [ts_builtin_sym_end] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(875),
    [sym__escape] = ACTIONS(875),
    [sym_begin_group] = ACTIONS(875),
    [sym_end_group] = ACTIONS(875),
    [sym_math_shift] = ACTIONS(875),
    [sym_alignment_tab] = ACTIONS(875),
    [sym_parameter_char] = ACTIONS(875),
    [sym_superscript] = ACTIONS(875),
    [sym_subscript] = ACTIONS(875),
    [sym_active_char] = ACTIONS(875),
    [sym_comment_char] = ACTIONS(875),
    [sym_text] = ACTIONS(873),
  },
  [331] = {
    [ts_builtin_sym_end] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(879),
    [sym__escape] = ACTIONS(879),
    [sym_begin_group] = ACTIONS(879),
    [sym_end_group] = ACTIONS(879),
    [sym_math_shift] = ACTIONS(879),
    [sym_alignment_tab] = ACTIONS(879),
    [sym_parameter_char] = ACTIONS(879),
    [sym_superscript] = ACTIONS(879),
    [sym_subscript] = ACTIONS(879),
    [sym_active_char] = ACTIONS(879),
    [sym_comment_char] = ACTIONS(879),
    [sym_text] = ACTIONS(877),
  },
  [332] = {
    [ts_builtin_sym_end] = ACTIONS(881),
    [anon_sym_LBRACK] = ACTIONS(883),
    [sym__escape] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_end_group] = ACTIONS(883),
    [sym_math_shift] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_parameter_char] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_active_char] = ACTIONS(883),
    [sym_comment_char] = ACTIONS(883),
    [sym_text] = ACTIONS(881),
  },
  [333] = {
    [sym_end_group] = ACTIONS(885),
  },
  [334] = {
    [anon_sym_LBRACK] = ACTIONS(887),
    [sym__escape] = ACTIONS(887),
    [sym_begin_group] = ACTIONS(887),
    [sym_alignment_tab] = ACTIONS(887),
    [sym_parameter_char] = ACTIONS(887),
    [sym_superscript] = ACTIONS(887),
    [sym_subscript] = ACTIONS(887),
    [sym_active_char] = ACTIONS(887),
    [sym_comment_char] = ACTIONS(887),
    [sym_text] = ACTIONS(889),
  },
  [335] = {
    [anon_sym_LBRACK] = ACTIONS(891),
    [sym__escape] = ACTIONS(891),
    [sym_begin_group] = ACTIONS(891),
    [sym_alignment_tab] = ACTIONS(891),
    [sym_parameter_char] = ACTIONS(891),
    [sym_superscript] = ACTIONS(891),
    [sym_subscript] = ACTIONS(891),
    [sym_active_char] = ACTIONS(891),
    [sym_comment_char] = ACTIONS(891),
    [sym_text] = ACTIONS(893),
  },
  [336] = {
    [ts_builtin_sym_end] = ACTIONS(895),
    [anon_sym_LBRACK] = ACTIONS(897),
    [sym__escape] = ACTIONS(897),
    [sym_begin_group] = ACTIONS(897),
    [sym_end_group] = ACTIONS(897),
    [sym_math_shift] = ACTIONS(897),
    [sym_alignment_tab] = ACTIONS(897),
    [sym_parameter_char] = ACTIONS(897),
    [sym_superscript] = ACTIONS(897),
    [sym_subscript] = ACTIONS(897),
    [sym_active_char] = ACTIONS(897),
    [sym_comment_char] = ACTIONS(897),
    [sym_text] = ACTIONS(895),
  },
  [337] = {
    [ts_builtin_sym_end] = ACTIONS(899),
    [anon_sym_LBRACK] = ACTIONS(901),
    [sym__escape] = ACTIONS(901),
    [sym_begin_group] = ACTIONS(901),
    [sym_end_group] = ACTIONS(901),
    [sym_math_shift] = ACTIONS(901),
    [sym_alignment_tab] = ACTIONS(901),
    [sym_parameter_char] = ACTIONS(901),
    [sym_superscript] = ACTIONS(901),
    [sym_subscript] = ACTIONS(901),
    [sym_active_char] = ACTIONS(901),
    [sym_comment_char] = ACTIONS(901),
    [sym_text] = ACTIONS(899),
  },
  [338] = {
    [ts_builtin_sym_end] = ACTIONS(903),
    [anon_sym_LBRACK] = ACTIONS(905),
    [sym__escape] = ACTIONS(905),
    [sym_begin_group] = ACTIONS(905),
    [sym_end_group] = ACTIONS(905),
    [sym_math_shift] = ACTIONS(905),
    [sym_alignment_tab] = ACTIONS(905),
    [sym_parameter_char] = ACTIONS(905),
    [sym_superscript] = ACTIONS(905),
    [sym_subscript] = ACTIONS(905),
    [sym_active_char] = ACTIONS(905),
    [sym_comment_char] = ACTIONS(905),
    [sym_text] = ACTIONS(903),
  },
  [339] = {
    [ts_builtin_sym_end] = ACTIONS(907),
    [anon_sym_LBRACK] = ACTIONS(909),
    [sym__escape] = ACTIONS(909),
    [sym_begin_group] = ACTIONS(909),
    [sym_end_group] = ACTIONS(909),
    [sym_math_shift] = ACTIONS(909),
    [sym_alignment_tab] = ACTIONS(909),
    [sym_parameter_char] = ACTIONS(909),
    [sym_superscript] = ACTIONS(909),
    [sym_subscript] = ACTIONS(909),
    [sym_active_char] = ACTIONS(909),
    [sym_comment_char] = ACTIONS(909),
    [sym_text] = ACTIONS(907),
  },
  [340] = {
    [ts_builtin_sym_end] = ACTIONS(911),
    [anon_sym_LBRACK] = ACTIONS(913),
    [sym__escape] = ACTIONS(913),
    [sym_begin_group] = ACTIONS(913),
    [sym_end_group] = ACTIONS(913),
    [sym_math_shift] = ACTIONS(913),
    [sym_alignment_tab] = ACTIONS(913),
    [sym_parameter_char] = ACTIONS(913),
    [sym_superscript] = ACTIONS(913),
    [sym_subscript] = ACTIONS(913),
    [sym_active_char] = ACTIONS(913),
    [sym_comment_char] = ACTIONS(913),
    [sym_text] = ACTIONS(911),
  },
  [341] = {
    [ts_builtin_sym_end] = ACTIONS(915),
    [anon_sym_LBRACK] = ACTIONS(917),
    [sym__escape] = ACTIONS(917),
    [sym_begin_group] = ACTIONS(917),
    [sym_end_group] = ACTIONS(917),
    [sym_math_shift] = ACTIONS(917),
    [sym_alignment_tab] = ACTIONS(917),
    [sym_parameter_char] = ACTIONS(917),
    [sym_superscript] = ACTIONS(917),
    [sym_subscript] = ACTIONS(917),
    [sym_active_char] = ACTIONS(917),
    [sym_comment_char] = ACTIONS(917),
    [sym_text] = ACTIONS(915),
  },
  [342] = {
    [ts_builtin_sym_end] = ACTIONS(919),
    [anon_sym_LBRACK] = ACTIONS(921),
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
  [343] = {
    [ts_builtin_sym_end] = ACTIONS(923),
    [anon_sym_LBRACK] = ACTIONS(925),
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
  [344] = {
    [ts_builtin_sym_end] = ACTIONS(927),
    [anon_sym_LBRACK] = ACTIONS(929),
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
  [345] = {
    [ts_builtin_sym_end] = ACTIONS(931),
    [anon_sym_LBRACK] = ACTIONS(933),
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
  [346] = {
    [ts_builtin_sym_end] = ACTIONS(935),
    [anon_sym_LBRACK] = ACTIONS(937),
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
  [347] = {
    [ts_builtin_sym_end] = ACTIONS(939),
    [anon_sym_LBRACK] = ACTIONS(941),
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
  [348] = {
    [ts_builtin_sym_end] = ACTIONS(943),
    [anon_sym_LBRACK] = ACTIONS(945),
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
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(947),
    [anon_sym_LBRACK] = ACTIONS(949),
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
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(951),
    [anon_sym_LBRACK] = ACTIONS(953),
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
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(955),
    [anon_sym_LBRACK] = ACTIONS(957),
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
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(959),
    [anon_sym_LBRACK] = ACTIONS(961),
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
  [353] = {
    [ts_builtin_sym_end] = ACTIONS(963),
    [anon_sym_LBRACK] = ACTIONS(965),
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
  [15] = {.count = 1, .reusable = false}, SHIFT(46),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(46),
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
  [51] = {.count = 1, .reusable = false}, SHIFT(59),
  [53] = {.count = 1, .reusable = true}, SHIFT(59),
  [55] = {.count = 1, .reusable = false}, SHIFT(60),
  [57] = {.count = 1, .reusable = false}, SHIFT(61),
  [59] = {.count = 1, .reusable = false}, SHIFT(62),
  [61] = {.count = 1, .reusable = false}, SHIFT(68),
  [63] = {.count = 1, .reusable = true}, SHIFT(68),
  [65] = {.count = 1, .reusable = true}, SHIFT(69),
  [67] = {.count = 1, .reusable = true}, SHIFT(70),
  [69] = {.count = 1, .reusable = false}, SHIFT(70),
  [71] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [75] = {.count = 1, .reusable = false}, SHIFT(72),
  [77] = {.count = 1, .reusable = true}, SHIFT(72),
  [79] = {.count = 1, .reusable = false}, SHIFT(89),
  [81] = {.count = 1, .reusable = false}, SHIFT(92),
  [83] = {.count = 1, .reusable = false}, SHIFT(96),
  [85] = {.count = 1, .reusable = false}, SHIFT(99),
  [87] = {.count = 1, .reusable = false}, SHIFT(102),
  [89] = {.count = 1, .reusable = false}, SHIFT(105),
  [91] = {.count = 1, .reusable = false}, SHIFT(108),
  [93] = {.count = 1, .reusable = false}, SHIFT(111),
  [95] = {.count = 1, .reusable = false}, SHIFT(114),
  [97] = {.count = 1, .reusable = true}, SHIFT(115),
  [99] = {.count = 1, .reusable = false}, SHIFT(117),
  [101] = {.count = 1, .reusable = false}, SHIFT(120),
  [103] = {.count = 1, .reusable = true}, SHIFT(120),
  [105] = {.count = 1, .reusable = true}, SHIFT(121),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [111] = {.count = 1, .reusable = true}, SHIFT(2),
  [113] = {.count = 1, .reusable = true}, SHIFT(123),
  [115] = {.count = 1, .reusable = true}, SHIFT(4),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [121] = {.count = 1, .reusable = true}, SHIFT(132),
  [123] = {.count = 1, .reusable = false}, SHIFT(134),
  [125] = {.count = 1, .reusable = false}, SHIFT(136),
  [127] = {.count = 1, .reusable = true}, SHIFT(136),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [131] = {.count = 1, .reusable = false}, SHIFT(137),
  [133] = {.count = 1, .reusable = true}, SHIFT(137),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [163] = {.count = 1, .reusable = false}, SHIFT(140),
  [165] = {.count = 1, .reusable = false}, SHIFT(141),
  [167] = {.count = 1, .reusable = true}, SHIFT(141),
  [169] = {.count = 1, .reusable = false}, SHIFT(142),
  [171] = {.count = 1, .reusable = false}, SHIFT(143),
  [173] = {.count = 1, .reusable = false}, SHIFT(144),
  [175] = {.count = 1, .reusable = true}, SHIFT(144),
  [177] = {.count = 1, .reusable = true}, SHIFT(146),
  [179] = {.count = 1, .reusable = true}, SHIFT(147),
  [181] = {.count = 1, .reusable = false}, SHIFT(149),
  [183] = {.count = 1, .reusable = false}, SHIFT(151),
  [185] = {.count = 1, .reusable = true}, SHIFT(151),
  [187] = {.count = 1, .reusable = false}, SHIFT(153),
  [189] = {.count = 1, .reusable = true}, SHIFT(153),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_math_mode, 1),
  [193] = {.count = 1, .reusable = false}, SHIFT(154),
  [195] = {.count = 1, .reusable = true}, SHIFT(154),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [205] = {.count = 1, .reusable = true}, SHIFT(89),
  [207] = {.count = 1, .reusable = false}, SHIFT(157),
  [209] = {.count = 1, .reusable = true}, SHIFT(157),
  [211] = {.count = 1, .reusable = true}, SHIFT(174),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(175),
  [219] = {.count = 1, .reusable = false}, SHIFT(177),
  [221] = {.count = 1, .reusable = true}, SHIFT(178),
  [223] = {.count = 1, .reusable = false}, SHIFT(179),
  [225] = {.count = 1, .reusable = false}, SHIFT(180),
  [227] = {.count = 1, .reusable = false}, SHIFT(182),
  [229] = {.count = 1, .reusable = true}, SHIFT(182),
  [231] = {.count = 1, .reusable = true}, SHIFT(183),
  [233] = {.count = 1, .reusable = false}, SHIFT(184),
  [235] = {.count = 1, .reusable = true}, SHIFT(185),
  [237] = {.count = 1, .reusable = false}, SHIFT(186),
  [239] = {.count = 1, .reusable = true}, SHIFT(187),
  [241] = {.count = 1, .reusable = false}, SHIFT(188),
  [243] = {.count = 1, .reusable = true}, SHIFT(189),
  [245] = {.count = 1, .reusable = false}, SHIFT(190),
  [247] = {.count = 1, .reusable = true}, SHIFT(191),
  [249] = {.count = 1, .reusable = false}, SHIFT(192),
  [251] = {.count = 1, .reusable = true}, SHIFT(193),
  [253] = {.count = 1, .reusable = false}, SHIFT(194),
  [255] = {.count = 1, .reusable = false}, SHIFT(195),
  [257] = {.count = 1, .reusable = false}, SHIFT(196),
  [259] = {.count = 1, .reusable = true}, SHIFT(196),
  [261] = {.count = 1, .reusable = false}, SHIFT(198),
  [263] = {.count = 1, .reusable = false}, SHIFT(174),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 2),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 2),
  [269] = {.count = 1, .reusable = false}, SHIFT(201),
  [271] = {.count = 1, .reusable = true}, SHIFT(201),
  [273] = {.count = 1, .reusable = false}, SHIFT(202),
  [275] = {.count = 1, .reusable = false}, SHIFT(203),
  [277] = {.count = 1, .reusable = false}, SHIFT(204),
  [279] = {.count = 1, .reusable = false}, SHIFT(205),
  [281] = {.count = 1, .reusable = false}, SHIFT(206),
  [283] = {.count = 1, .reusable = false}, SHIFT(207),
  [285] = {.count = 1, .reusable = false}, SHIFT(208),
  [287] = {.count = 1, .reusable = false}, SHIFT(209),
  [289] = {.count = 1, .reusable = false}, SHIFT(210),
  [291] = {.count = 1, .reusable = false}, SHIFT(211),
  [293] = {.count = 1, .reusable = false}, SHIFT(212),
  [295] = {.count = 1, .reusable = false}, SHIFT(213),
  [297] = {.count = 1, .reusable = false}, SHIFT(214),
  [299] = {.count = 1, .reusable = false}, SHIFT(215),
  [301] = {.count = 1, .reusable = false}, SHIFT(216),
  [303] = {.count = 1, .reusable = false}, SHIFT(217),
  [305] = {.count = 1, .reusable = false}, SHIFT(218),
  [307] = {.count = 1, .reusable = false}, SHIFT(219),
  [309] = {.count = 1, .reusable = false}, SHIFT(220),
  [311] = {.count = 1, .reusable = false}, SHIFT(221),
  [313] = {.count = 1, .reusable = false}, SHIFT(222),
  [315] = {.count = 1, .reusable = false}, SHIFT(223),
  [317] = {.count = 1, .reusable = false}, SHIFT(224),
  [319] = {.count = 1, .reusable = false}, SHIFT(225),
  [321] = {.count = 1, .reusable = false}, SHIFT(226),
  [323] = {.count = 1, .reusable = false}, SHIFT(227),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(227),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [333] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [335] = {.count = 1, .reusable = false}, SHIFT(229),
  [337] = {.count = 1, .reusable = false}, SHIFT(231),
  [339] = {.count = 1, .reusable = true}, SHIFT(231),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [353] = {.count = 1, .reusable = true}, SHIFT(234),
  [355] = {.count = 1, .reusable = true}, SHIFT(235),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [365] = {.count = 1, .reusable = false}, SHIFT(237),
  [367] = {.count = 1, .reusable = true}, SHIFT(237),
  [369] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [371] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [374] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [377] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [380] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [383] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(137),
  [386] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [389] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [392] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(137),
  [395] = {.count = 1, .reusable = true}, SHIFT(238),
  [397] = {.count = 1, .reusable = true}, SHIFT(239),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [403] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [405] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(141),
  [408] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(141),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [417] = {.count = 1, .reusable = false}, SHIFT(240),
  [419] = {.count = 1, .reusable = false}, SHIFT(241),
  [421] = {.count = 1, .reusable = true}, SHIFT(241),
  [423] = {.count = 1, .reusable = true}, SHIFT(242),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 3),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 3),
  [429] = {.count = 1, .reusable = false}, SHIFT(243),
  [431] = {.count = 1, .reusable = false}, SHIFT(245),
  [433] = {.count = 1, .reusable = true}, SHIFT(245),
  [435] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [447] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [450] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(60),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(61),
  [456] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [458] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(154),
  [461] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [464] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(7),
  [467] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(154),
  [470] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 3),
  [472] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 3),
  [474] = {.count = 1, .reusable = true}, SHIFT(248),
  [476] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(157),
  [479] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(157),
  [482] = {.count = 1, .reusable = true}, SHIFT(249),
  [484] = {.count = 1, .reusable = true}, SHIFT(250),
  [486] = {.count = 1, .reusable = true}, SHIFT(251),
  [488] = {.count = 1, .reusable = true}, SHIFT(252),
  [490] = {.count = 1, .reusable = true}, SHIFT(253),
  [492] = {.count = 1, .reusable = true}, SHIFT(254),
  [494] = {.count = 1, .reusable = true}, SHIFT(255),
  [496] = {.count = 1, .reusable = true}, SHIFT(256),
  [498] = {.count = 1, .reusable = true}, SHIFT(257),
  [500] = {.count = 1, .reusable = true}, SHIFT(258),
  [502] = {.count = 1, .reusable = true}, SHIFT(259),
  [504] = {.count = 1, .reusable = true}, SHIFT(260),
  [506] = {.count = 1, .reusable = true}, SHIFT(261),
  [508] = {.count = 1, .reusable = true}, SHIFT(262),
  [510] = {.count = 1, .reusable = true}, SHIFT(263),
  [512] = {.count = 1, .reusable = true}, SHIFT(264),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [516] = {.count = 1, .reusable = true}, SHIFT(265),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 3),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 3),
  [522] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2),
  [524] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2), SHIFT_REPEAT(177),
  [527] = {.count = 1, .reusable = true}, SHIFT(266),
  [529] = {.count = 1, .reusable = true}, SHIFT(269),
  [531] = {.count = 1, .reusable = true}, SHIFT(270),
  [533] = {.count = 1, .reusable = true}, SHIFT(271),
  [535] = {.count = 1, .reusable = true}, SHIFT(272),
  [537] = {.count = 1, .reusable = true}, SHIFT(273),
  [539] = {.count = 1, .reusable = true}, SHIFT(274),
  [541] = {.count = 1, .reusable = false}, SHIFT(275),
  [543] = {.count = 1, .reusable = true}, SHIFT(276),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 3),
  [551] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 3),
  [553] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(201),
  [556] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(201),
  [559] = {.count = 1, .reusable = true}, SHIFT(277),
  [561] = {.count = 1, .reusable = true}, SHIFT(278),
  [563] = {.count = 1, .reusable = true}, SHIFT(279),
  [565] = {.count = 1, .reusable = true}, SHIFT(280),
  [567] = {.count = 1, .reusable = true}, SHIFT(281),
  [569] = {.count = 1, .reusable = true}, SHIFT(282),
  [571] = {.count = 1, .reusable = true}, SHIFT(283),
  [573] = {.count = 1, .reusable = true}, SHIFT(284),
  [575] = {.count = 1, .reusable = true}, SHIFT(285),
  [577] = {.count = 1, .reusable = true}, SHIFT(286),
  [579] = {.count = 1, .reusable = true}, SHIFT(287),
  [581] = {.count = 1, .reusable = true}, SHIFT(288),
  [583] = {.count = 1, .reusable = true}, SHIFT(289),
  [585] = {.count = 1, .reusable = true}, SHIFT(290),
  [587] = {.count = 1, .reusable = true}, SHIFT(291),
  [589] = {.count = 1, .reusable = true}, SHIFT(292),
  [591] = {.count = 1, .reusable = true}, SHIFT(293),
  [593] = {.count = 1, .reusable = true}, SHIFT(294),
  [595] = {.count = 1, .reusable = true}, SHIFT(295),
  [597] = {.count = 1, .reusable = true}, SHIFT(296),
  [599] = {.count = 1, .reusable = true}, SHIFT(297),
  [601] = {.count = 1, .reusable = true}, SHIFT(298),
  [603] = {.count = 1, .reusable = true}, SHIFT(299),
  [605] = {.count = 1, .reusable = true}, SHIFT(300),
  [607] = {.count = 1, .reusable = true}, SHIFT(301),
  [609] = {.count = 1, .reusable = true}, SHIFT(302),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [615] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [617] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [619] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [621] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [623] = {.count = 1, .reusable = true}, SHIFT(304),
  [625] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [627] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [629] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(237),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(237),
  [635] = {.count = 1, .reusable = true}, SHIFT(305),
  [637] = {.count = 1, .reusable = true}, SHIFT(306),
  [639] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [641] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [643] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(241),
  [646] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(241),
  [649] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [653] = {.count = 1, .reusable = true}, SHIFT(307),
  [655] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode, 1),
  [657] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [659] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [661] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [665] = {.count = 1, .reusable = true}, SHIFT(308),
  [667] = {.count = 1, .reusable = true}, SHIFT(309),
  [669] = {.count = 1, .reusable = true}, SHIFT(310),
  [671] = {.count = 1, .reusable = true}, SHIFT(311),
  [673] = {.count = 1, .reusable = true}, SHIFT(312),
  [675] = {.count = 1, .reusable = true}, SHIFT(313),
  [677] = {.count = 1, .reusable = true}, SHIFT(314),
  [679] = {.count = 1, .reusable = true}, SHIFT(315),
  [681] = {.count = 1, .reusable = true}, SHIFT(316),
  [683] = {.count = 1, .reusable = true}, SHIFT(317),
  [685] = {.count = 1, .reusable = true}, SHIFT(318),
  [687] = {.count = 1, .reusable = true}, SHIFT(319),
  [689] = {.count = 1, .reusable = true}, SHIFT(320),
  [691] = {.count = 1, .reusable = true}, SHIFT(321),
  [693] = {.count = 1, .reusable = true}, SHIFT(322),
  [695] = {.count = 1, .reusable = true}, SHIFT(323),
  [697] = {.count = 1, .reusable = true}, SHIFT(324),
  [699] = {.count = 1, .reusable = true}, SHIFT(325),
  [701] = {.count = 1, .reusable = true}, SHIFT(326),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 4),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 4),
  [707] = {.count = 1, .reusable = true}, SHIFT(327),
  [709] = {.count = 1, .reusable = true}, SHIFT(328),
  [711] = {.count = 1, .reusable = true}, SHIFT(329),
  [713] = {.count = 1, .reusable = true}, SHIFT(330),
  [715] = {.count = 1, .reusable = true}, SHIFT(331),
  [717] = {.count = 1, .reusable = true}, SHIFT(332),
  [719] = {.count = 1, .reusable = true}, SHIFT(333),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align, 4),
  [723] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align, 4),
  [725] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align_star, 4),
  [727] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align_star, 4),
  [729] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray, 4),
  [731] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray, 4),
  [733] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [735] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [737] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation, 4),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation, 4),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation_star, 4),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation_star, 4),
  [745] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign, 4),
  [747] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign, 4),
  [749] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign_star, 4),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign_star, 4),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather, 4),
  [755] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather, 4),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather_star, 4),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather_star, 4),
  [761] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline, 4),
  [763] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline, 4),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline_star, 4),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline_star, 4),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split, 4),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split, 4),
  [773] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split_star, 4),
  [775] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split_star, 4),
  [777] = {.count = 1, .reusable = false}, REDUCE(sym_begin_math, 4),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_begin_math, 4),
  [781] = {.count = 1, .reusable = false}, REDUCE(sym_begin_verbatim, 4),
  [783] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim, 4),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [787] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim, 4),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim, 4),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym_begin_lstlisting, 4),
  [797] = {.count = 1, .reusable = false}, REDUCE(sym_begin_minted, 4),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [803] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [805] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 5),
  [809] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 5),
  [811] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 5),
  [813] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 5),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [819] = {.count = 1, .reusable = true}, SHIFT(336),
  [821] = {.count = 1, .reusable = true}, SHIFT(337),
  [823] = {.count = 1, .reusable = true}, SHIFT(338),
  [825] = {.count = 1, .reusable = true}, SHIFT(339),
  [827] = {.count = 1, .reusable = true}, SHIFT(340),
  [829] = {.count = 1, .reusable = true}, SHIFT(341),
  [831] = {.count = 1, .reusable = true}, SHIFT(342),
  [833] = {.count = 1, .reusable = true}, SHIFT(343),
  [835] = {.count = 1, .reusable = true}, SHIFT(344),
  [837] = {.count = 1, .reusable = true}, SHIFT(345),
  [839] = {.count = 1, .reusable = true}, SHIFT(346),
  [841] = {.count = 1, .reusable = true}, SHIFT(347),
  [843] = {.count = 1, .reusable = true}, SHIFT(348),
  [845] = {.count = 1, .reusable = true}, SHIFT(349),
  [847] = {.count = 1, .reusable = true}, SHIFT(350),
  [849] = {.count = 1, .reusable = true}, SHIFT(351),
  [851] = {.count = 1, .reusable = true}, SHIFT(352),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_end_verbatim, 4),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym_end_verbatim, 4),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim, 4),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim, 4),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim_star, 4),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim_star, 4),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim, 4),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim, 4),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim, 4),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim, 4),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_end_lstlisting, 4),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_end_lstlisting, 4),
  [885] = {.count = 1, .reusable = true}, SHIFT(353),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat, 5),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat, 5),
  [891] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat_star, 5),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat_star, 5),
  [895] = {.count = 1, .reusable = true}, REDUCE(sym_end_align, 4),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_end_align, 4),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_end_align_star, 4),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_end_align_star, 4),
  [903] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat, 4),
  [905] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat, 4),
  [907] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat_star, 4),
  [909] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat_star, 4),
  [911] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray, 4),
  [913] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray, 4),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray_star, 4),
  [917] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray_star, 4),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation, 4),
  [921] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation, 4),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation_star, 4),
  [925] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation_star, 4),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign, 4),
  [929] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign, 4),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign_star, 4),
  [933] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign_star, 4),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather, 4),
  [937] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather, 4),
  [939] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather_star, 4),
  [941] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather_star, 4),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline, 4),
  [945] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline, 4),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline_star, 4),
  [949] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline_star, 4),
  [951] = {.count = 1, .reusable = true}, REDUCE(sym_end_split, 4),
  [953] = {.count = 1, .reusable = false}, REDUCE(sym_end_split, 4),
  [955] = {.count = 1, .reusable = true}, REDUCE(sym_end_split_star, 4),
  [957] = {.count = 1, .reusable = false}, REDUCE(sym_end_split_star, 4),
  [959] = {.count = 1, .reusable = true}, REDUCE(sym_end_math, 4),
  [961] = {.count = 1, .reusable = false}, REDUCE(sym_end_math, 4),
  [963] = {.count = 1, .reusable = true}, REDUCE(sym_end_minted, 4),
  [965] = {.count = 1, .reusable = false}, REDUCE(sym_end_minted, 4),
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
