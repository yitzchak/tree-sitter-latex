#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 378
#define SYMBOL_COUNT 168
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
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
  anon_sym_makeatletter = 42,
  anon_sym_makeatother = 43,
  sym__escape = 44,
  sym_begin_group = 45,
  sym_end_group = 46,
  sym_math_shift = 47,
  sym_alignment_tab = 48,
  sym_parameter_char = 49,
  sym_superscript = 50,
  sym_subscript = 51,
  sym__name = 52,
  sym__at_name = 53,
  sym_active_char = 54,
  sym_comment_char = 55,
  sym_text = 56,
  sym_number = 57,
  sym_verbatim_token = 58,
  sym_magic = 59,
  sym_comment_text = 60,
  sym_document = 61,
  sym__text_mode = 62,
  sym_text_mode = 63,
  sym__at_text_mode = 64,
  sym_at_group = 65,
  sym__math_mode = 66,
  sym_math_mode = 67,
  sym_parameter = 68,
  sym_text_environment = 69,
  sym_math_environment = 70,
  sym_display_math = 71,
  sym_inline_math = 72,
  sym_begin_align = 73,
  sym_end_align = 74,
  sym_begin_align_star = 75,
  sym_end_align_star = 76,
  sym_begin_alignat = 77,
  sym_end_alignat = 78,
  sym_begin_alignat_star = 79,
  sym_end_alignat_star = 80,
  sym_begin_eqnarray = 81,
  sym_end_eqnarray = 82,
  sym_begin_eqnarray_star = 83,
  sym_end_eqnarray_star = 84,
  sym_begin_equation = 85,
  sym_end_equation = 86,
  sym_begin_equation_star = 87,
  sym_end_equation_star = 88,
  sym_begin_flalign = 89,
  sym_end_flalign = 90,
  sym_begin_flalign_star = 91,
  sym_end_flalign_star = 92,
  sym_begin_gather = 93,
  sym_end_gather = 94,
  sym_begin_gather_star = 95,
  sym_end_gather_star = 96,
  sym_begin_multline = 97,
  sym_end_multline = 98,
  sym_begin_multline_star = 99,
  sym_end_multline_star = 100,
  sym_begin_split = 101,
  sym_end_split = 102,
  sym_begin_split_star = 103,
  sym_end_split_star = 104,
  sym_begin_math = 105,
  sym_end_math = 106,
  sym_begin_verbatim = 107,
  sym_end_verbatim = 108,
  sym_begin_Verbatim = 109,
  sym_end_Verbatim = 110,
  sym_begin_Verbatim_star = 111,
  sym_end_Verbatim_star = 112,
  sym_begin_BVerbatim = 113,
  sym_end_BVerbatim = 114,
  sym_begin_BVerbatim_star = 115,
  sym_end_BVerbatim_star = 116,
  sym_begin_LVerbatim = 117,
  sym_end_LVerbatim = 118,
  sym_begin_LVerbatim_star = 119,
  sym_end_LVerbatim_star = 120,
  sym_begin_lstlisting = 121,
  sym_end_lstlisting = 122,
  sym_begin_minted = 123,
  sym_end_minted = 124,
  sym_tag = 125,
  sym_tag_token = 126,
  sym_verbatim_environment = 127,
  sym_escaped = 128,
  sym_command = 129,
  sym_at_command = 130,
  sym_begin = 131,
  sym_begin_token = 132,
  sym_end = 133,
  sym_end_token = 134,
  sym_documentclass = 135,
  sym_documentclass_token = 136,
  sym_usepackage = 137,
  sym_usepackage_token = 138,
  sym_include = 139,
  sym_include_token = 140,
  sym_section = 141,
  sym_section_token = 142,
  sym_storage = 143,
  sym_storage_token = 144,
  sym_catcode = 145,
  sym_catcode_token = 146,
  sym_makeatletter = 147,
  sym_makeatletter_token = 148,
  sym_makeatother = 149,
  sym_makeatother_token = 150,
  sym_text_group = 151,
  sym_at_text_group = 152,
  sym_simple_text_group = 153,
  sym_opt_text_group = 154,
  sym_opt_at_text_group = 155,
  sym_math_group = 156,
  sym_opt_math_group = 157,
  sym_math_text_group = 158,
  sym_token = 159,
  sym_at_token = 160,
  sym_comment = 161,
  sym_begin_opt = 162,
  sym_end_opt = 163,
  aux_sym_text_mode_repeat1 = 164,
  aux_sym_at_group_repeat1 = 165,
  aux_sym_math_mode_repeat1 = 166,
  aux_sym_verbatim_environment_repeat1 = 167,
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
  [anon_sym_makeatletter] = "makeatletter",
  [anon_sym_makeatother] = "makeatother",
  [sym__escape] = "_escape",
  [sym_begin_group] = "begin_group",
  [sym_end_group] = "end_group",
  [sym_math_shift] = "math_shift",
  [sym_alignment_tab] = "alignment_tab",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym__name] = "_name",
  [sym__at_name] = "_at_name",
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
  [sym__at_text_mode] = "_at_text_mode",
  [sym_at_group] = "at_group",
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
  [sym_at_command] = "at_command",
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
  [sym_makeatletter] = "makeatletter",
  [sym_makeatletter_token] = "makeatletter_token",
  [sym_makeatother] = "makeatother",
  [sym_makeatother_token] = "makeatother_token",
  [sym_text_group] = "text_group",
  [sym_at_text_group] = "at_text_group",
  [sym_simple_text_group] = "simple_text_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_opt_at_text_group] = "opt_at_text_group",
  [sym_math_group] = "math_group",
  [sym_opt_math_group] = "opt_math_group",
  [sym_math_text_group] = "math_text_group",
  [sym_token] = "token",
  [sym_at_token] = "at_token",
  [sym_comment] = "comment",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_at_group_repeat1] = "at_group_repeat1",
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
  [anon_sym_makeatletter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_makeatother] = {
    .visible = true,
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
  [sym__at_name] = {
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
  [sym__at_text_mode] = {
    .visible = false,
    .named = true,
  },
  [sym_at_group] = {
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
  [sym_at_command] = {
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
  [sym_makeatletter] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatletter_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatother] = {
    .visible = true,
    .named = true,
  },
  [sym_makeatother_token] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_at_text_group] = {
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
  [sym_opt_at_text_group] = {
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
  [sym_at_token] = {
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
  [aux_sym_at_group_repeat1] = {
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
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(16);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'V')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'g')
        ADVANCE(131);
      if (lookahead == 'i')
        ADVANCE(138);
      if (lookahead == 'k')
        ADVANCE(147);
      if (lookahead == 'l')
        ADVANCE(149);
      if (lookahead == 'm')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(192);
      if (lookahead == 's')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(220);
      if (lookahead == 'u')
        ADVANCE(223);
      if (lookahead == 'v')
        ADVANCE(233);
      if (lookahead == 'x')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
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
      ACCEPT_TOKEN(sym__at_name);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'V')
        ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'V')
        ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(36);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__escape);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_superscript);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_subscript);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(52);
      if (lookahead == 'l')
        ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(54);
      if (lookahead == 'p')
        ADVANCE(58);
      if (lookahead == 's')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(70);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_begin);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(77);
      if (lookahead == 'h')
        ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == '`')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(90);
      if (lookahead == 'o')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'f')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(105);
      if (lookahead == 'n')
        ADVANCE(106);
      if (lookahead == 'q')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(109);
      if (lookahead == 'u')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(115);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(122);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(130);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(132);
      if (lookahead == 'd')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(140);
      if (lookahead == 'p')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(160);
      if (lookahead == 'i')
        ADVANCE(178);
      if (lookahead == 'u')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(161);
      if (lookahead == 't')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(165);
      if (lookahead == 'o')
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(180);
      if (lookahead == 't')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_minted);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(191);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'p')
        ADVANCE(206);
      if (lookahead == 'u')
        ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(210);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(213);
      if (lookahead == 's')
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(201);
      if (lookahead == 'u')
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 245:
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
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'B')
        ADVANCE(16);
      if (lookahead == 'L')
        ADVANCE(27);
      if (lookahead == 'V')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == 'a')
        ADVANCE(51);
      if (lookahead == 'b')
        ADVANCE(71);
      if (lookahead == 'c')
        ADVANCE(76);
      if (lookahead == 'd')
        ADVANCE(89);
      if (lookahead == 'e')
        ADVANCE(104);
      if (lookahead == 'f')
        ADVANCE(123);
      if (lookahead == 'g')
        ADVANCE(131);
      if (lookahead == 'i')
        ADVANCE(138);
      if (lookahead == 'k')
        ADVANCE(147);
      if (lookahead == 'l')
        ADVANCE(149);
      if (lookahead == 'm')
        ADVANCE(159);
      if (lookahead == 'p')
        ADVANCE(192);
      if (lookahead == 's')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(220);
      if (lookahead == 'u')
        ADVANCE(223);
      if (lookahead == 'v')
        ADVANCE(233);
      if (lookahead == 'x')
        ADVANCE(241);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(246);
      END_STATE();
    case 247:
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(248);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(248);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 250:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(251);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 252:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(253);
      if (lookahead == 'b')
        ADVANCE(266);
      if (lookahead == 'c')
        ADVANCE(271);
      if (lookahead == 'd')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'k')
        ADVANCE(307);
      if (lookahead == 'm')
        ADVANCE(309);
      if (lookahead == 'p')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(332);
      if (lookahead == 'u')
        ADVANCE(347);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(256);
      if (lookahead == 'p')
        ADVANCE(261);
      if (lookahead == 's')
        ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(272);
      if (lookahead == 'h')
        ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(284);
      if (lookahead == 'o')
        ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(295);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(296);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(300);
      if (lookahead == 'p')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(301);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(310);
      if (lookahead == 'i')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(318);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(327);
      if (lookahead == 't')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'u')
        ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(340);
      if (lookahead == 's')
        ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(342);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(333);
      if (lookahead == 'u')
        ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(345);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 361:
      if (lookahead == '#')
        ADVANCE(8);
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '%')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(11);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(249);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(362);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 363:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(363);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(246);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '!')
        ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '!')
        ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(365);
      if (lookahead == '!')
        ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(372);
      END_STATE();
    case 374:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(374);
      END_STATE();
    case 375:
      if (lookahead == '\n')
        ADVANCE(376);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_verbatim_token);
      END_STATE();
    case 377:
      if (lookahead == '\n')
        ADVANCE(376);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(376);
      END_STATE();
    case 378:
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(378);
      END_STATE();
    case 379:
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
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '^')
        ADVANCE(49);
      if (lookahead == '_')
        ADVANCE(50);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '}')
        ADVANCE(243);
      if (lookahead == '~')
        ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(380);
      ADVANCE(249);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(380);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 381:
      if (lookahead == 'a')
        ADVANCE(253);
      if (lookahead == 'b')
        ADVANCE(266);
      if (lookahead == 'c')
        ADVANCE(271);
      if (lookahead == 'd')
        ADVANCE(283);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'k')
        ADVANCE(307);
      if (lookahead == 'm')
        ADVANCE(382);
      if (lookahead == 'p')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(332);
      if (lookahead == 't')
        ADVANCE(383);
      if (lookahead == 'u')
        ADVANCE(347);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 386:
      if (lookahead == 'e')
        ADVANCE(387);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(386);
      END_STATE();
    case 387:
      if (lookahead == 'n')
        ADVANCE(388);
      END_STATE();
    case 388:
      if (lookahead == 'd')
        ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 390:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(253);
      if (lookahead == 'b')
        ADVANCE(266);
      if (lookahead == 'c')
        ADVANCE(271);
      if (lookahead == 'd')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'k')
        ADVANCE(307);
      if (lookahead == 'm')
        ADVANCE(309);
      if (lookahead == 'p')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(332);
      if (lookahead == 'u')
        ADVANCE(347);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(358);
      if (lookahead == 'n')
        ADVANCE(392);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(260);
      END_STATE();
    case 394:
      if (lookahead == 'B')
        ADVANCE(395);
      if (lookahead == 'L')
        ADVANCE(405);
      if (lookahead == 'V')
        ADVANCE(415);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'e')
        ADVANCE(433);
      if (lookahead == 'f')
        ADVANCE(449);
      if (lookahead == 'g')
        ADVANCE(457);
      if (lookahead == 'l')
        ADVANCE(464);
      if (lookahead == 'm')
        ADVANCE(474);
      if (lookahead == 's')
        ADVANCE(486);
      if (lookahead == 'v')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(396);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(398);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(399);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(402);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(403);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(404);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(406);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(407);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(408);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(409);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(410);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(411);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(412);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(413);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(414);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(416);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(417);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(418);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(419);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(420);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(421);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(422);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(423);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(425);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(426);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(427);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(428);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(429);
      if (lookahead == 'a')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(435);
      if (lookahead == 'u')
        ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(439);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(463);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(467);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(468);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(475);
      if (lookahead == 'u')
        ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(480);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_multline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(490);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(498);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B')
        ADVANCE(395);
      if (lookahead == 'L')
        ADVANCE(405);
      if (lookahead == 'V')
        ADVANCE(415);
      if (lookahead == 'a')
        ADVANCE(424);
      if (lookahead == 'e')
        ADVANCE(433);
      if (lookahead == 'f')
        ADVANCE(449);
      if (lookahead == 'g')
        ADVANCE(457);
      if (lookahead == 'l')
        ADVANCE(464);
      if (lookahead == 'm')
        ADVANCE(474);
      if (lookahead == 's')
        ADVANCE(486);
      if (lookahead == 'v')
        ADVANCE(492);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(249);
      END_STATE();
    case 501:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 502:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(502);
      END_STATE();
    case 503:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(504);
      if (lookahead == 'b')
        ADVANCE(516);
      if (lookahead == 'c')
        ADVANCE(521);
      if (lookahead == 'd')
        ADVANCE(533);
      if (lookahead == 'i')
        ADVANCE(548);
      if (lookahead == 'k')
        ADVANCE(557);
      if (lookahead == 'm')
        ADVANCE(559);
      if (lookahead == 'p')
        ADVANCE(573);
      if (lookahead == 's')
        ADVANCE(581);
      if (lookahead == 'u')
        ADVANCE(596);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(505);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(506);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(507);
      if (lookahead == 'p')
        ADVANCE(511);
      if (lookahead == 's')
        ADVANCE(514);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(508);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(509);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(512);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(513);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(515);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(517);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(518);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(519);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(520);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(522);
      if (lookahead == 'h')
        ADVANCE(528);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(523);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(524);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(525);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(526);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(527);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(83);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(529);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(530);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(531);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(532);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(534);
      if (lookahead == 'o')
        ADVANCE(536);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(535);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(537);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(538);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(539);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(540);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(541);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(542);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(543);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(544);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(545);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(546);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(547);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(549);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(550);
      if (lookahead == 'p')
        ADVANCE(555);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(551);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(552);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(553);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(554);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(556);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(554);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(558);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(522);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(560);
      if (lookahead == 'i')
        ADVANCE(570);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(561);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(562);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(563);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(564);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(565);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(566);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(567);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(568);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(569);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(571);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(572);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(514);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(574);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(575);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(576);
      if (lookahead == 't')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(577);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(578);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(579);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(580);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(582);
      if (lookahead == 'u')
        ADVANCE(587);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(583);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(584);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(586);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(510);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(588);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(589);
      if (lookahead == 's')
        ADVANCE(592);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(590);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(591);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(576);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(582);
      if (lookahead == 'u')
        ADVANCE(593);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(594);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(595);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(582);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(597);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(598);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(599);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(600);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(601);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(602);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(603);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(604);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(605);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(607);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(534);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 609:
      if (lookahead == 'a')
        ADVANCE(253);
      if (lookahead == 'b')
        ADVANCE(266);
      if (lookahead == 'c')
        ADVANCE(271);
      if (lookahead == 'd')
        ADVANCE(283);
      if (lookahead == 'e')
        ADVANCE(391);
      if (lookahead == 'i')
        ADVANCE(298);
      if (lookahead == 'k')
        ADVANCE(307);
      if (lookahead == 'm')
        ADVANCE(382);
      if (lookahead == 'p')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(332);
      if (lookahead == 't')
        ADVANCE(383);
      if (lookahead == 'u')
        ADVANCE(347);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(357);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 610:
      if (lookahead == 'B')
        ADVANCE(611);
      if (lookahead == 'L')
        ADVANCE(620);
      if (lookahead == 'V')
        ADVANCE(629);
      if (lookahead == 'a')
        ADVANCE(637);
      if (lookahead == 'e')
        ADVANCE(644);
      if (lookahead == 'f')
        ADVANCE(658);
      if (lookahead == 'g')
        ADVANCE(665);
      if (lookahead == 'l')
        ADVANCE(671);
      if (lookahead == 'm')
        ADVANCE(681);
      if (lookahead == 's')
        ADVANCE(692);
      if (lookahead == 'v')
        ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(610);
      END_STATE();
    case 611:
      if (lookahead == 'V')
        ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'e')
        ADVANCE(613);
      END_STATE();
    case 613:
      if (lookahead == 'r')
        ADVANCE(614);
      END_STATE();
    case 614:
      if (lookahead == 'b')
        ADVANCE(615);
      END_STATE();
    case 615:
      if (lookahead == 'a')
        ADVANCE(616);
      END_STATE();
    case 616:
      if (lookahead == 't')
        ADVANCE(617);
      END_STATE();
    case 617:
      if (lookahead == 'i')
        ADVANCE(618);
      END_STATE();
    case 618:
      if (lookahead == 'm')
        ADVANCE(619);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(25);
      END_STATE();
    case 620:
      if (lookahead == 'V')
        ADVANCE(621);
      END_STATE();
    case 621:
      if (lookahead == 'e')
        ADVANCE(622);
      END_STATE();
    case 622:
      if (lookahead == 'r')
        ADVANCE(623);
      END_STATE();
    case 623:
      if (lookahead == 'b')
        ADVANCE(624);
      END_STATE();
    case 624:
      if (lookahead == 'a')
        ADVANCE(625);
      END_STATE();
    case 625:
      if (lookahead == 't')
        ADVANCE(626);
      END_STATE();
    case 626:
      if (lookahead == 'i')
        ADVANCE(627);
      END_STATE();
    case 627:
      if (lookahead == 'm')
        ADVANCE(628);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(36);
      END_STATE();
    case 629:
      if (lookahead == 'e')
        ADVANCE(630);
      END_STATE();
    case 630:
      if (lookahead == 'r')
        ADVANCE(631);
      END_STATE();
    case 631:
      if (lookahead == 'b')
        ADVANCE(632);
      END_STATE();
    case 632:
      if (lookahead == 'a')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 't')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'i')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 'm')
        ADVANCE(636);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(45);
      END_STATE();
    case 637:
      if (lookahead == 'l')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'i')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'g')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'n')
        ADVANCE(641);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == 'a')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 't')
        ADVANCE(643);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(70);
      END_STATE();
    case 644:
      if (lookahead == 'q')
        ADVANCE(645);
      END_STATE();
    case 645:
      if (lookahead == 'n')
        ADVANCE(646);
      if (lookahead == 'u')
        ADVANCE(652);
      END_STATE();
    case 646:
      if (lookahead == 'a')
        ADVANCE(647);
      END_STATE();
    case 647:
      if (lookahead == 'r')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'r')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'a')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'y')
        ADVANCE(651);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(115);
      END_STATE();
    case 652:
      if (lookahead == 'a')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 't')
        ADVANCE(654);
      END_STATE();
    case 654:
      if (lookahead == 'i')
        ADVANCE(655);
      END_STATE();
    case 655:
      if (lookahead == 'o')
        ADVANCE(656);
      END_STATE();
    case 656:
      if (lookahead == 'n')
        ADVANCE(657);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(122);
      END_STATE();
    case 658:
      if (lookahead == 'l')
        ADVANCE(659);
      END_STATE();
    case 659:
      if (lookahead == 'a')
        ADVANCE(660);
      END_STATE();
    case 660:
      if (lookahead == 'l')
        ADVANCE(661);
      END_STATE();
    case 661:
      if (lookahead == 'i')
        ADVANCE(662);
      END_STATE();
    case 662:
      if (lookahead == 'g')
        ADVANCE(663);
      END_STATE();
    case 663:
      if (lookahead == 'n')
        ADVANCE(664);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(130);
      END_STATE();
    case 665:
      if (lookahead == 'a')
        ADVANCE(666);
      END_STATE();
    case 666:
      if (lookahead == 't')
        ADVANCE(667);
      END_STATE();
    case 667:
      if (lookahead == 'h')
        ADVANCE(668);
      END_STATE();
    case 668:
      if (lookahead == 'e')
        ADVANCE(669);
      END_STATE();
    case 669:
      if (lookahead == 'r')
        ADVANCE(670);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(137);
      END_STATE();
    case 671:
      if (lookahead == 's')
        ADVANCE(672);
      END_STATE();
    case 672:
      if (lookahead == 't')
        ADVANCE(673);
      END_STATE();
    case 673:
      if (lookahead == 'l')
        ADVANCE(674);
      END_STATE();
    case 674:
      if (lookahead == 'i')
        ADVANCE(675);
      END_STATE();
    case 675:
      if (lookahead == 's')
        ADVANCE(676);
      END_STATE();
    case 676:
      if (lookahead == 't')
        ADVANCE(677);
      END_STATE();
    case 677:
      if (lookahead == 'i')
        ADVANCE(678);
      END_STATE();
    case 678:
      if (lookahead == 'n')
        ADVANCE(679);
      END_STATE();
    case 679:
      if (lookahead == 'g')
        ADVANCE(680);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      END_STATE();
    case 681:
      if (lookahead == 'a')
        ADVANCE(682);
      if (lookahead == 'u')
        ADVANCE(685);
      END_STATE();
    case 682:
      if (lookahead == 't')
        ADVANCE(683);
      END_STATE();
    case 683:
      if (lookahead == 'h')
        ADVANCE(684);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 685:
      if (lookahead == 'l')
        ADVANCE(686);
      END_STATE();
    case 686:
      if (lookahead == 't')
        ADVANCE(687);
      END_STATE();
    case 687:
      if (lookahead == 'l')
        ADVANCE(688);
      END_STATE();
    case 688:
      if (lookahead == 'i')
        ADVANCE(689);
      END_STATE();
    case 689:
      if (lookahead == 'n')
        ADVANCE(690);
      END_STATE();
    case 690:
      if (lookahead == 'e')
        ADVANCE(691);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_multline);
      if (lookahead == '*')
        ADVANCE(191);
      END_STATE();
    case 692:
      if (lookahead == 'p')
        ADVANCE(693);
      END_STATE();
    case 693:
      if (lookahead == 'l')
        ADVANCE(694);
      END_STATE();
    case 694:
      if (lookahead == 'i')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 't')
        ADVANCE(696);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(210);
      END_STATE();
    case 697:
      if (lookahead == 'e')
        ADVANCE(698);
      END_STATE();
    case 698:
      if (lookahead == 'r')
        ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 'b')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'a')
        ADVANCE(701);
      END_STATE();
    case 701:
      if (lookahead == 't')
        ADVANCE(702);
      END_STATE();
    case 702:
      if (lookahead == 'i')
        ADVANCE(703);
      END_STATE();
    case 703:
      if (lookahead == 'm')
        ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    case 705:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(504);
      if (lookahead == 'b')
        ADVANCE(516);
      if (lookahead == 'c')
        ADVANCE(521);
      if (lookahead == 'd')
        ADVANCE(533);
      if (lookahead == 'i')
        ADVANCE(548);
      if (lookahead == 'k')
        ADVANCE(557);
      if (lookahead == 'm')
        ADVANCE(706);
      if (lookahead == 'p')
        ADVANCE(573);
      if (lookahead == 's')
        ADVANCE(581);
      if (lookahead == 'u')
        ADVANCE(596);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(606);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(359);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(359);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(570);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 707:
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(707);
      END_STATE();
    case 708:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(708);
      END_STATE();
    case 709:
      if (lookahead == 'm')
        ADVANCE(710);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(709);
      END_STATE();
    case 710:
      if (lookahead == 'i')
        ADVANCE(711);
      END_STATE();
    case 711:
      if (lookahead == 'n')
        ADVANCE(712);
      END_STATE();
    case 712:
      if (lookahead == 't')
        ADVANCE(713);
      END_STATE();
    case 713:
      if (lookahead == 'e')
        ADVANCE(714);
      END_STATE();
    case 714:
      if (lookahead == 'd')
        ADVANCE(715);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_minted);
      END_STATE();
    case 716:
      if (lookahead == '\n')
        ADVANCE(376);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '{')
        ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(376);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 247},
  [2] = {.lex_state = 250},
  [3] = {.lex_state = 252},
  [4] = {.lex_state = 361},
  [5] = {.lex_state = 247},
  [6] = {.lex_state = 363},
  [7] = {.lex_state = 364},
  [8] = {.lex_state = 374},
  [9] = {.lex_state = 374},
  [10] = {.lex_state = 247},
  [11] = {.lex_state = 247},
  [12] = {.lex_state = 247},
  [13] = {.lex_state = 247},
  [14] = {.lex_state = 247},
  [15] = {.lex_state = 247},
  [16] = {.lex_state = 247},
  [17] = {.lex_state = 247},
  [18] = {.lex_state = 247},
  [19] = {.lex_state = 247},
  [20] = {.lex_state = 247},
  [21] = {.lex_state = 247},
  [22] = {.lex_state = 247},
  [23] = {.lex_state = 247},
  [24] = {.lex_state = 247},
  [25] = {.lex_state = 247},
  [26] = {.lex_state = 247},
  [27] = {.lex_state = 375},
  [28] = {.lex_state = 377},
  [29] = {.lex_state = 377},
  [30] = {.lex_state = 377},
  [31] = {.lex_state = 377},
  [32] = {.lex_state = 377},
  [33] = {.lex_state = 377},
  [34] = {.lex_state = 377},
  [35] = {.lex_state = 378},
  [36] = {.lex_state = 247},
  [37] = {.lex_state = 378},
  [38] = {.lex_state = 379},
  [39] = {.lex_state = 378},
  [40] = {.lex_state = 378},
  [41] = {.lex_state = 378},
  [42] = {.lex_state = 378},
  [43] = {.lex_state = 379},
  [44] = {.lex_state = 378},
  [45] = {.lex_state = 247},
  [46] = {.lex_state = 247},
  [47] = {.lex_state = 250},
  [48] = {.lex_state = 247},
  [49] = {.lex_state = 247},
  [50] = {.lex_state = 247},
  [51] = {.lex_state = 379},
  [52] = {.lex_state = 378},
  [53] = {.lex_state = 378},
  [54] = {.lex_state = 378},
  [55] = {.lex_state = 378},
  [56] = {.lex_state = 378},
  [57] = {.lex_state = 379},
  [58] = {.lex_state = 378},
  [59] = {.lex_state = 247},
  [60] = {.lex_state = 379},
  [61] = {.lex_state = 379},
  [62] = {.lex_state = 361},
  [63] = {.lex_state = 381},
  [64] = {.lex_state = 361},
  [65] = {.lex_state = 247},
  [66] = {.lex_state = 378},
  [67] = {.lex_state = 378},
  [68] = {.lex_state = 247},
  [69] = {.lex_state = 378},
  [70] = {.lex_state = 250},
  [71] = {.lex_state = 247},
  [72] = {.lex_state = 379},
  [73] = {.lex_state = 379},
  [74] = {.lex_state = 378},
  [75] = {.lex_state = 247},
  [76] = {.lex_state = 378},
  [77] = {.lex_state = 378},
  [78] = {.lex_state = 378},
  [79] = {.lex_state = 378},
  [80] = {.lex_state = 378},
  [81] = {.lex_state = 378},
  [82] = {.lex_state = 378},
  [83] = {.lex_state = 378},
  [84] = {.lex_state = 378},
  [85] = {.lex_state = 378},
  [86] = {.lex_state = 378},
  [87] = {.lex_state = 378},
  [88] = {.lex_state = 378},
  [89] = {.lex_state = 378},
  [90] = {.lex_state = 378},
  [91] = {.lex_state = 378},
  [92] = {.lex_state = 386},
  [93] = {.lex_state = 379},
  [94] = {.lex_state = 378},
  [95] = {.lex_state = 375},
  [96] = {.lex_state = 378},
  [97] = {.lex_state = 375},
  [98] = {.lex_state = 250},
  [99] = {.lex_state = 375},
  [100] = {.lex_state = 378},
  [101] = {.lex_state = 375},
  [102] = {.lex_state = 375},
  [103] = {.lex_state = 378},
  [104] = {.lex_state = 375},
  [105] = {.lex_state = 375},
  [106] = {.lex_state = 378},
  [107] = {.lex_state = 375},
  [108] = {.lex_state = 375},
  [109] = {.lex_state = 378},
  [110] = {.lex_state = 375},
  [111] = {.lex_state = 375},
  [112] = {.lex_state = 378},
  [113] = {.lex_state = 375},
  [114] = {.lex_state = 375},
  [115] = {.lex_state = 378},
  [116] = {.lex_state = 375},
  [117] = {.lex_state = 375},
  [118] = {.lex_state = 361},
  [119] = {.lex_state = 375},
  [120] = {.lex_state = 390},
  [121] = {.lex_state = 379},
  [122] = {.lex_state = 378},
  [123] = {.lex_state = 247},
  [124] = {.lex_state = 394},
  [125] = {.lex_state = 247},
  [126] = {.lex_state = 247},
  [127] = {.lex_state = 379},
  [128] = {.lex_state = 378},
  [129] = {.lex_state = 250},
  [130] = {.lex_state = 379},
  [131] = {.lex_state = 378},
  [132] = {.lex_state = 379},
  [133] = {.lex_state = 379},
  [134] = {.lex_state = 378},
  [135] = {.lex_state = 501},
  [136] = {.lex_state = 502},
  [137] = {.lex_state = 503},
  [138] = {.lex_state = 361},
  [139] = {.lex_state = 379},
  [140] = {.lex_state = 379},
  [141] = {.lex_state = 379},
  [142] = {.lex_state = 250},
  [143] = {.lex_state = 247},
  [144] = {.lex_state = 379},
  [145] = {.lex_state = 379},
  [146] = {.lex_state = 250},
  [147] = {.lex_state = 247},
  [148] = {.lex_state = 378},
  [149] = {.lex_state = 378},
  [150] = {.lex_state = 379},
  [151] = {.lex_state = 361},
  [152] = {.lex_state = 378},
  [153] = {.lex_state = 379},
  [154] = {.lex_state = 361},
  [155] = {.lex_state = 378},
  [156] = {.lex_state = 379},
  [157] = {.lex_state = 361},
  [158] = {.lex_state = 379},
  [159] = {.lex_state = 609},
  [160] = {.lex_state = 379},
  [161] = {.lex_state = 247},
  [162] = {.lex_state = 379},
  [163] = {.lex_state = 250},
  [164] = {.lex_state = 247},
  [165] = {.lex_state = 379},
  [166] = {.lex_state = 378},
  [167] = {.lex_state = 247},
  [168] = {.lex_state = 378},
  [169] = {.lex_state = 378},
  [170] = {.lex_state = 378},
  [171] = {.lex_state = 378},
  [172] = {.lex_state = 378},
  [173] = {.lex_state = 378},
  [174] = {.lex_state = 378},
  [175] = {.lex_state = 378},
  [176] = {.lex_state = 378},
  [177] = {.lex_state = 378},
  [178] = {.lex_state = 378},
  [179] = {.lex_state = 378},
  [180] = {.lex_state = 378},
  [181] = {.lex_state = 378},
  [182] = {.lex_state = 378},
  [183] = {.lex_state = 378},
  [184] = {.lex_state = 378},
  [185] = {.lex_state = 610},
  [186] = {.lex_state = 379},
  [187] = {.lex_state = 375},
  [188] = {.lex_state = 610},
  [189] = {.lex_state = 375},
  [190] = {.lex_state = 375},
  [191] = {.lex_state = 375},
  [192] = {.lex_state = 250},
  [193] = {.lex_state = 610},
  [194] = {.lex_state = 375},
  [195] = {.lex_state = 610},
  [196] = {.lex_state = 375},
  [197] = {.lex_state = 610},
  [198] = {.lex_state = 375},
  [199] = {.lex_state = 610},
  [200] = {.lex_state = 375},
  [201] = {.lex_state = 610},
  [202] = {.lex_state = 375},
  [203] = {.lex_state = 610},
  [204] = {.lex_state = 375},
  [205] = {.lex_state = 375},
  [206] = {.lex_state = 361},
  [207] = {.lex_state = 378},
  [208] = {.lex_state = 375},
  [209] = {.lex_state = 379},
  [210] = {.lex_state = 379},
  [211] = {.lex_state = 247},
  [212] = {.lex_state = 378},
  [213] = {.lex_state = 378},
  [214] = {.lex_state = 378},
  [215] = {.lex_state = 378},
  [216] = {.lex_state = 378},
  [217] = {.lex_state = 378},
  [218] = {.lex_state = 378},
  [219] = {.lex_state = 378},
  [220] = {.lex_state = 378},
  [221] = {.lex_state = 378},
  [222] = {.lex_state = 378},
  [223] = {.lex_state = 378},
  [224] = {.lex_state = 378},
  [225] = {.lex_state = 378},
  [226] = {.lex_state = 378},
  [227] = {.lex_state = 378},
  [228] = {.lex_state = 378},
  [229] = {.lex_state = 378},
  [230] = {.lex_state = 378},
  [231] = {.lex_state = 378},
  [232] = {.lex_state = 378},
  [233] = {.lex_state = 378},
  [234] = {.lex_state = 378},
  [235] = {.lex_state = 378},
  [236] = {.lex_state = 378},
  [237] = {.lex_state = 378},
  [238] = {.lex_state = 379},
  [239] = {.lex_state = 378},
  [240] = {.lex_state = 378},
  [241] = {.lex_state = 250},
  [242] = {.lex_state = 379},
  [243] = {.lex_state = 379},
  [244] = {.lex_state = 502},
  [245] = {.lex_state = 363},
  [246] = {.lex_state = 379},
  [247] = {.lex_state = 379},
  [248] = {.lex_state = 705},
  [249] = {.lex_state = 379},
  [250] = {.lex_state = 361},
  [251] = {.lex_state = 379},
  [252] = {.lex_state = 250},
  [253] = {.lex_state = 379},
  [254] = {.lex_state = 247},
  [255] = {.lex_state = 379},
  [256] = {.lex_state = 250},
  [257] = {.lex_state = 707},
  [258] = {.lex_state = 708},
  [259] = {.lex_state = 379},
  [260] = {.lex_state = 361},
  [261] = {.lex_state = 378},
  [262] = {.lex_state = 379},
  [263] = {.lex_state = 378},
  [264] = {.lex_state = 361},
  [265] = {.lex_state = 379},
  [266] = {.lex_state = 379},
  [267] = {.lex_state = 250},
  [268] = {.lex_state = 610},
  [269] = {.lex_state = 610},
  [270] = {.lex_state = 610},
  [271] = {.lex_state = 610},
  [272] = {.lex_state = 610},
  [273] = {.lex_state = 610},
  [274] = {.lex_state = 610},
  [275] = {.lex_state = 610},
  [276] = {.lex_state = 610},
  [277] = {.lex_state = 610},
  [278] = {.lex_state = 610},
  [279] = {.lex_state = 610},
  [280] = {.lex_state = 610},
  [281] = {.lex_state = 610},
  [282] = {.lex_state = 610},
  [283] = {.lex_state = 610},
  [284] = {.lex_state = 610},
  [285] = {.lex_state = 378},
  [286] = {.lex_state = 378},
  [287] = {.lex_state = 379},
  [288] = {.lex_state = 375},
  [289] = {.lex_state = 378},
  [290] = {.lex_state = 378},
  [291] = {.lex_state = 378},
  [292] = {.lex_state = 378},
  [293] = {.lex_state = 378},
  [294] = {.lex_state = 378},
  [295] = {.lex_state = 375},
  [296] = {.lex_state = 709},
  [297] = {.lex_state = 247},
  [298] = {.lex_state = 247},
  [299] = {.lex_state = 378},
  [300] = {.lex_state = 378},
  [301] = {.lex_state = 247},
  [302] = {.lex_state = 247},
  [303] = {.lex_state = 247},
  [304] = {.lex_state = 247},
  [305] = {.lex_state = 247},
  [306] = {.lex_state = 247},
  [307] = {.lex_state = 247},
  [308] = {.lex_state = 247},
  [309] = {.lex_state = 247},
  [310] = {.lex_state = 247},
  [311] = {.lex_state = 247},
  [312] = {.lex_state = 247},
  [313] = {.lex_state = 247},
  [314] = {.lex_state = 375},
  [315] = {.lex_state = 377},
  [316] = {.lex_state = 377},
  [317] = {.lex_state = 377},
  [318] = {.lex_state = 377},
  [319] = {.lex_state = 377},
  [320] = {.lex_state = 377},
  [321] = {.lex_state = 716},
  [322] = {.lex_state = 379},
  [323] = {.lex_state = 378},
  [324] = {.lex_state = 379},
  [325] = {.lex_state = 379},
  [326] = {.lex_state = 361},
  [327] = {.lex_state = 379},
  [328] = {.lex_state = 250},
  [329] = {.lex_state = 379},
  [330] = {.lex_state = 379},
  [331] = {.lex_state = 379},
  [332] = {.lex_state = 378},
  [333] = {.lex_state = 378},
  [334] = {.lex_state = 378},
  [335] = {.lex_state = 378},
  [336] = {.lex_state = 378},
  [337] = {.lex_state = 378},
  [338] = {.lex_state = 378},
  [339] = {.lex_state = 378},
  [340] = {.lex_state = 378},
  [341] = {.lex_state = 378},
  [342] = {.lex_state = 378},
  [343] = {.lex_state = 378},
  [344] = {.lex_state = 378},
  [345] = {.lex_state = 378},
  [346] = {.lex_state = 378},
  [347] = {.lex_state = 378},
  [348] = {.lex_state = 378},
  [349] = {.lex_state = 379},
  [350] = {.lex_state = 379},
  [351] = {.lex_state = 379},
  [352] = {.lex_state = 379},
  [353] = {.lex_state = 379},
  [354] = {.lex_state = 379},
  [355] = {.lex_state = 379},
  [356] = {.lex_state = 379},
  [357] = {.lex_state = 378},
  [358] = {.lex_state = 247},
  [359] = {.lex_state = 247},
  [360] = {.lex_state = 379},
  [361] = {.lex_state = 379},
  [362] = {.lex_state = 379},
  [363] = {.lex_state = 379},
  [364] = {.lex_state = 379},
  [365] = {.lex_state = 379},
  [366] = {.lex_state = 379},
  [367] = {.lex_state = 379},
  [368] = {.lex_state = 379},
  [369] = {.lex_state = 379},
  [370] = {.lex_state = 379},
  [371] = {.lex_state = 379},
  [372] = {.lex_state = 379},
  [373] = {.lex_state = 379},
  [374] = {.lex_state = 379},
  [375] = {.lex_state = 379},
  [376] = {.lex_state = 379},
  [377] = {.lex_state = 379},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(3),
    [anon_sym_align_STAR] = ACTIONS(1),
    [anon_sym_alignat] = ACTIONS(3),
    [anon_sym_alignat_STAR] = ACTIONS(1),
    [anon_sym_eqnarray] = ACTIONS(3),
    [anon_sym_eqnarray_STAR] = ACTIONS(1),
    [anon_sym_equation] = ACTIONS(3),
    [anon_sym_equation_STAR] = ACTIONS(1),
    [anon_sym_flalign] = ACTIONS(3),
    [anon_sym_flalign_STAR] = ACTIONS(1),
    [anon_sym_gather] = ACTIONS(3),
    [anon_sym_gather_STAR] = ACTIONS(1),
    [anon_sym_multline] = ACTIONS(3),
    [anon_sym_multline_STAR] = ACTIONS(1),
    [anon_sym_split] = ACTIONS(3),
    [anon_sym_split_STAR] = ACTIONS(1),
    [anon_sym_math] = ACTIONS(3),
    [anon_sym_verbatim] = ACTIONS(3),
    [anon_sym_Verbatim] = ACTIONS(3),
    [anon_sym_Verbatim_STAR] = ACTIONS(1),
    [anon_sym_BVerbatim] = ACTIONS(3),
    [anon_sym_BVerbatim_STAR] = ACTIONS(1),
    [anon_sym_LVerbatim] = ACTIONS(3),
    [anon_sym_LVerbatim_STAR] = ACTIONS(1),
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
    [anon_sym_makeatletter] = ACTIONS(3),
    [anon_sym_makeatother] = ACTIONS(3),
    [sym__escape] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym__name] = ACTIONS(3),
    [sym__at_name] = ACTIONS(3),
    [sym_active_char] = ACTIONS(1),
    [sym_comment_char] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_magic] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(8),
    [sym__text_mode] = STATE(48),
    [sym_text_mode] = STATE(9),
    [sym_at_group] = STATE(48),
    [sym_parameter] = STATE(48),
    [sym_text_environment] = STATE(48),
    [sym_display_math] = STATE(48),
    [sym_inline_math] = STATE(48),
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
    [sym_verbatim_environment] = STATE(48),
    [sym_escaped] = STATE(48),
    [sym_command] = STATE(48),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(48),
    [sym_opt_text_group] = STATE(48),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(48),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(48),
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
    [anon_sym_makeatletter] = ACTIONS(47),
    [sym__name] = ACTIONS(49),
  },
  [4] = {
    [sym__text_mode] = STATE(62),
    [sym_at_group] = STATE(62),
    [sym_parameter] = STATE(62),
    [sym_text_environment] = STATE(62),
    [sym_display_math] = STATE(62),
    [sym_inline_math] = STATE(62),
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
    [sym_verbatim_environment] = STATE(62),
    [sym_escaped] = STATE(62),
    [sym_command] = STATE(62),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(62),
    [sym_opt_text_group] = STATE(62),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(62),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(62),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(51),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(53),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(53),
    [sym_subscript] = ACTIONS(53),
    [sym_active_char] = ACTIONS(53),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(55),
  },
  [5] = {
    [sym__math_mode] = STATE(71),
    [sym_math_mode] = STATE(66),
    [sym_parameter] = STATE(71),
    [sym_math_environment] = STATE(71),
    [sym_tag] = STATE(71),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(71),
    [sym_command] = STATE(71),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(71),
    [sym_opt_math_group] = STATE(71),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(71),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_math_shift] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(63),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(63),
    [sym_active_char] = ACTIONS(63),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(65),
  },
  [6] = {
    [sym_number] = ACTIONS(67),
  },
  [7] = {
    [sym_magic] = ACTIONS(69),
    [sym_comment_text] = ACTIONS(71),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(73),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(75),
  },
  [10] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(74),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [11] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(76),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [12] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(77),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [13] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(78),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [14] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(79),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [15] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(80),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [16] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(81),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [17] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(82),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [18] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(83),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [19] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(84),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [20] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(85),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [21] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(86),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [22] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(87),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [23] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(88),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [24] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(89),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [25] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(90),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [26] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(91),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [27] = {
    [sym_end_verbatim] = STATE(93),
    [sym_end_token] = STATE(94),
    [aux_sym_verbatim_environment_repeat1] = STATE(95),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(83),
  },
  [28] = {
    [sym_end_Verbatim] = STATE(93),
    [sym_end_token] = STATE(96),
    [sym_opt_text_group] = STATE(97),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(99),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(85),
  },
  [29] = {
    [sym_end_Verbatim_star] = STATE(93),
    [sym_end_token] = STATE(100),
    [sym_opt_text_group] = STATE(101),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(102),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(87),
  },
  [30] = {
    [sym_end_BVerbatim] = STATE(93),
    [sym_end_token] = STATE(103),
    [sym_opt_text_group] = STATE(104),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(105),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(89),
  },
  [31] = {
    [sym_end_BVerbatim_star] = STATE(93),
    [sym_end_token] = STATE(106),
    [sym_opt_text_group] = STATE(107),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(108),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(91),
  },
  [32] = {
    [sym_end_LVerbatim] = STATE(93),
    [sym_end_token] = STATE(109),
    [sym_opt_text_group] = STATE(110),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(111),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(93),
  },
  [33] = {
    [sym_end_LVerbatim_star] = STATE(93),
    [sym_end_token] = STATE(112),
    [sym_opt_text_group] = STATE(113),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(114),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(95),
  },
  [34] = {
    [sym_end_lstlisting] = STATE(93),
    [sym_end_token] = STATE(115),
    [sym_opt_text_group] = STATE(116),
    [sym_begin_opt] = STATE(98),
    [aux_sym_verbatim_environment_repeat1] = STATE(117),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(97),
  },
  [35] = {
    [sym_text_group] = STATE(119),
    [sym_begin_group] = ACTIONS(99),
  },
  [36] = {
    [sym__text_mode] = STATE(123),
    [sym_at_group] = STATE(123),
    [sym_parameter] = STATE(123),
    [sym_text_environment] = STATE(123),
    [sym_display_math] = STATE(123),
    [sym_inline_math] = STATE(123),
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
    [sym_verbatim_environment] = STATE(123),
    [sym_escaped] = STATE(123),
    [sym_command] = STATE(123),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_end] = STATE(121),
    [sym_end_token] = STATE(122),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(123),
    [sym_opt_text_group] = STATE(123),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(123),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(123),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(103),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(103),
    [sym_subscript] = ACTIONS(103),
    [sym_active_char] = ACTIONS(103),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(105),
  },
  [37] = {
    [sym_simple_text_group] = STATE(125),
    [sym_begin_group] = ACTIONS(107),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym__escape] = ACTIONS(111),
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
  [39] = {
    [sym_simple_text_group] = STATE(127),
    [sym_opt_text_group] = STATE(128),
    [sym_begin_opt] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(115),
  },
  [40] = {
    [sym_simple_text_group] = STATE(130),
    [sym_opt_text_group] = STATE(131),
    [sym_begin_opt] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(115),
  },
  [41] = {
    [sym_text_group] = STATE(132),
    [sym_begin_group] = ACTIONS(117),
  },
  [42] = {
    [sym_text_group] = STATE(133),
    [sym_opt_text_group] = STATE(134),
    [sym_begin_opt] = STATE(129),
    [anon_sym_LBRACK] = ACTIONS(113),
    [sym_begin_group] = ACTIONS(117),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_LBRACK] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
    [sym__escape] = ACTIONS(121),
    [sym_begin_group] = ACTIONS(121),
    [sym_end_group] = ACTIONS(121),
    [sym_math_shift] = ACTIONS(121),
    [sym_alignment_tab] = ACTIONS(121),
    [sym_parameter_char] = ACTIONS(121),
    [sym_superscript] = ACTIONS(121),
    [sym_subscript] = ACTIONS(121),
    [sym_active_char] = ACTIONS(121),
    [sym_comment_char] = ACTIONS(121),
    [sym_text] = ACTIONS(119),
  },
  [44] = {
    [sym_escaped] = STATE(136),
    [sym__escape] = ACTIONS(123),
  },
  [45] = {
    [sym__at_text_mode] = STATE(143),
    [sym_parameter] = STATE(143),
    [sym_text_environment] = STATE(143),
    [sym_display_math] = STATE(143),
    [sym_inline_math] = STATE(143),
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
    [sym_verbatim_environment] = STATE(143),
    [sym_escaped] = STATE(143),
    [sym_at_command] = STATE(143),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_makeatother] = STATE(140),
    [sym_makeatother_token] = STATE(141),
    [sym_at_text_group] = STATE(143),
    [sym_opt_at_text_group] = STATE(143),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(143),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(143),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(131),
  },
  [46] = {
    [anon_sym_LBRACK] = ACTIONS(133),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(133),
    [sym_math_shift] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_parameter_char] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [sym_subscript] = ACTIONS(133),
    [sym_active_char] = ACTIONS(133),
    [sym_comment_char] = ACTIONS(133),
    [sym_text] = ACTIONS(135),
  },
  [47] = {
    [sym__text_mode] = STATE(146),
    [sym_at_group] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_text_environment] = STATE(146),
    [sym_display_math] = STATE(146),
    [sym_inline_math] = STATE(146),
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
    [sym_verbatim_environment] = STATE(146),
    [sym_escaped] = STATE(146),
    [sym_command] = STATE(146),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(146),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(146),
    [sym_begin_opt] = STATE(47),
    [sym_end_opt] = STATE(145),
    [aux_sym_text_mode_repeat1] = STATE(146),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(139),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(139),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(139),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(141),
  },
  [48] = {
    [sym__text_mode] = STATE(147),
    [sym_at_group] = STATE(147),
    [sym_parameter] = STATE(147),
    [sym_text_environment] = STATE(147),
    [sym_display_math] = STATE(147),
    [sym_inline_math] = STATE(147),
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
    [sym_verbatim_environment] = STATE(147),
    [sym_escaped] = STATE(147),
    [sym_command] = STATE(147),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(147),
    [sym_opt_text_group] = STATE(147),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(147),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(145),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(145),
    [sym_subscript] = ACTIONS(145),
    [sym_active_char] = ACTIONS(145),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(147),
  },
  [49] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(148),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [50] = {
    [sym__math_mode] = STATE(75),
    [sym_math_mode] = STATE(149),
    [sym_parameter] = STATE(75),
    [sym_math_environment] = STATE(75),
    [sym_tag] = STATE(75),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(75),
    [sym_command] = STATE(75),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(75),
    [sym_opt_math_group] = STATE(75),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(75),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(75),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(77),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(77),
    [sym_subscript] = ACTIONS(77),
    [sym_active_char] = ACTIONS(77),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(79),
  },
  [51] = {
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
  [52] = {
    [sym_begin_group] = ACTIONS(153),
  },
  [53] = {
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_begin_group] = ACTIONS(155),
  },
  [54] = {
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_begin_group] = ACTIONS(157),
  },
  [55] = {
    [sym_begin_group] = ACTIONS(159),
  },
  [56] = {
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym_begin_group] = ACTIONS(161),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_RBRACK] = ACTIONS(165),
    [sym__escape] = ACTIONS(165),
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
  [58] = {
    [sym__escape] = ACTIONS(167),
  },
  [59] = {
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym__escape] = ACTIONS(169),
    [sym_begin_group] = ACTIONS(169),
    [sym_math_shift] = ACTIONS(169),
    [sym_alignment_tab] = ACTIONS(169),
    [sym_parameter_char] = ACTIONS(169),
    [sym_superscript] = ACTIONS(169),
    [sym_subscript] = ACTIONS(169),
    [sym_active_char] = ACTIONS(169),
    [sym_comment_char] = ACTIONS(169),
    [sym_text] = ACTIONS(171),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(175),
    [anon_sym_RBRACK] = ACTIONS(175),
    [sym__escape] = ACTIONS(175),
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
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(177),
    [anon_sym_LBRACK] = ACTIONS(179),
    [anon_sym_RBRACK] = ACTIONS(179),
    [sym__escape] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
    [sym_end_group] = ACTIONS(179),
    [sym_math_shift] = ACTIONS(179),
    [sym_alignment_tab] = ACTIONS(179),
    [sym_parameter_char] = ACTIONS(179),
    [sym_superscript] = ACTIONS(179),
    [sym_subscript] = ACTIONS(179),
    [sym_active_char] = ACTIONS(179),
    [sym_comment_char] = ACTIONS(179),
    [sym_text] = ACTIONS(177),
  },
  [62] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_environment] = STATE(151),
    [sym_display_math] = STATE(151),
    [sym_inline_math] = STATE(151),
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
    [sym_verbatim_environment] = STATE(151),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(181),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(185),
  },
  [63] = {
    [anon_sym_tag] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(49),
  },
  [64] = {
    [sym__math_mode] = STATE(154),
    [sym_parameter] = STATE(154),
    [sym_math_environment] = STATE(154),
    [sym_tag] = STATE(154),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(154),
    [sym_command] = STATE(154),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(154),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_end_group] = ACTIONS(189),
    [sym_alignment_tab] = ACTIONS(191),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(191),
    [sym_subscript] = ACTIONS(191),
    [sym_active_char] = ACTIONS(191),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(193),
  },
  [65] = {
    [sym__math_mode] = STATE(71),
    [sym_math_mode] = STATE(155),
    [sym_parameter] = STATE(71),
    [sym_math_environment] = STATE(71),
    [sym_tag] = STATE(71),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(71),
    [sym_command] = STATE(71),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(71),
    [sym_opt_math_group] = STATE(71),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(71),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(71),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(63),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(63),
    [sym_subscript] = ACTIONS(63),
    [sym_active_char] = ACTIONS(63),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(65),
  },
  [66] = {
    [sym_math_shift] = ACTIONS(195),
  },
  [67] = {
    [sym_math_text_group] = STATE(158),
    [sym_begin_group] = ACTIONS(197),
  },
  [68] = {
    [sym__math_mode] = STATE(161),
    [sym_parameter] = STATE(161),
    [sym_math_environment] = STATE(161),
    [sym_tag] = STATE(161),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(161),
    [sym_command] = STATE(161),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
    [sym_end] = STATE(160),
    [sym_end_token] = STATE(122),
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
    [sym_math_group] = STATE(161),
    [sym_opt_math_group] = STATE(161),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(161),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(161),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(201),
    [sym_active_char] = ACTIONS(201),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(203),
  },
  [69] = {
    [sym_simple_text_group] = STATE(125),
    [sym_begin_group] = ACTIONS(115),
  },
  [70] = {
    [sym__math_mode] = STATE(163),
    [sym_parameter] = STATE(163),
    [sym_math_environment] = STATE(163),
    [sym_tag] = STATE(163),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(163),
    [sym_command] = STATE(163),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(163),
    [sym_opt_math_group] = STATE(163),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(163),
    [sym_begin_opt] = STATE(70),
    [sym_end_opt] = STATE(162),
    [aux_sym_math_mode_repeat1] = STATE(163),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_active_char] = ACTIONS(205),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(207),
  },
  [71] = {
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_environment] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(164),
    [sym_command] = STATE(164),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(164),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_math_shift] = ACTIONS(209),
    [sym_alignment_tab] = ACTIONS(211),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(211),
    [sym_subscript] = ACTIONS(211),
    [sym_active_char] = ACTIONS(211),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(213),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_end_group] = ACTIONS(217),
    [sym_math_shift] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_active_char] = ACTIONS(217),
    [sym_comment_char] = ACTIONS(217),
    [sym_text] = ACTIONS(215),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_RBRACK] = ACTIONS(221),
    [sym__escape] = ACTIONS(221),
    [sym_begin_group] = ACTIONS(221),
    [sym_end_group] = ACTIONS(221),
    [sym_math_shift] = ACTIONS(221),
    [sym_alignment_tab] = ACTIONS(221),
    [sym_parameter_char] = ACTIONS(221),
    [sym_superscript] = ACTIONS(221),
    [sym_subscript] = ACTIONS(221),
    [sym_active_char] = ACTIONS(221),
    [sym_comment_char] = ACTIONS(221),
    [sym_text] = ACTIONS(219),
  },
  [74] = {
    [sym_end_align] = STATE(165),
    [sym_end_token] = STATE(166),
    [sym__escape] = ACTIONS(223),
  },
  [75] = {
    [sym__math_mode] = STATE(167),
    [sym_parameter] = STATE(167),
    [sym_math_environment] = STATE(167),
    [sym_tag] = STATE(167),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(167),
    [sym_command] = STATE(167),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(167),
    [sym_opt_math_group] = STATE(167),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(167),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(209),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(227),
  },
  [76] = {
    [sym_end_align_star] = STATE(165),
    [sym_end_token] = STATE(168),
    [sym__escape] = ACTIONS(223),
  },
  [77] = {
    [sym_end_alignat] = STATE(165),
    [sym_end_token] = STATE(169),
    [sym__escape] = ACTIONS(223),
  },
  [78] = {
    [sym_end_alignat_star] = STATE(165),
    [sym_end_token] = STATE(170),
    [sym__escape] = ACTIONS(223),
  },
  [79] = {
    [sym_end_eqnarray] = STATE(165),
    [sym_end_token] = STATE(171),
    [sym__escape] = ACTIONS(223),
  },
  [80] = {
    [sym_end_eqnarray_star] = STATE(165),
    [sym_end_token] = STATE(172),
    [sym__escape] = ACTIONS(223),
  },
  [81] = {
    [sym_end_equation] = STATE(165),
    [sym_end_token] = STATE(173),
    [sym__escape] = ACTIONS(223),
  },
  [82] = {
    [sym_end_equation_star] = STATE(165),
    [sym_end_token] = STATE(174),
    [sym__escape] = ACTIONS(223),
  },
  [83] = {
    [sym_end_flalign] = STATE(165),
    [sym_end_token] = STATE(175),
    [sym__escape] = ACTIONS(223),
  },
  [84] = {
    [sym_end_flalign_star] = STATE(165),
    [sym_end_token] = STATE(176),
    [sym__escape] = ACTIONS(223),
  },
  [85] = {
    [sym_end_gather] = STATE(165),
    [sym_end_token] = STATE(177),
    [sym__escape] = ACTIONS(223),
  },
  [86] = {
    [sym_end_gather_star] = STATE(165),
    [sym_end_token] = STATE(178),
    [sym__escape] = ACTIONS(223),
  },
  [87] = {
    [sym_end_multline] = STATE(165),
    [sym_end_token] = STATE(179),
    [sym__escape] = ACTIONS(223),
  },
  [88] = {
    [sym_end_multline_star] = STATE(165),
    [sym_end_token] = STATE(180),
    [sym__escape] = ACTIONS(223),
  },
  [89] = {
    [sym_end_split] = STATE(165),
    [sym_end_token] = STATE(181),
    [sym__escape] = ACTIONS(223),
  },
  [90] = {
    [sym_end_split_star] = STATE(165),
    [sym_end_token] = STATE(182),
    [sym__escape] = ACTIONS(223),
  },
  [91] = {
    [sym_end_math] = STATE(156),
    [sym_end_token] = STATE(183),
    [sym__escape] = ACTIONS(223),
  },
  [92] = {
    [anon_sym_end] = ACTIONS(229),
  },
  [93] = {
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
  [94] = {
    [sym_begin_group] = ACTIONS(235),
  },
  [95] = {
    [sym_end_verbatim] = STATE(186),
    [sym_end_token] = STATE(94),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [96] = {
    [sym_begin_group] = ACTIONS(239),
  },
  [97] = {
    [sym_end_Verbatim] = STATE(186),
    [sym_end_token] = STATE(96),
    [aux_sym_verbatim_environment_repeat1] = STATE(189),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(241),
  },
  [98] = {
    [sym__text_mode] = STATE(192),
    [sym_at_group] = STATE(192),
    [sym_parameter] = STATE(192),
    [sym_text_environment] = STATE(192),
    [sym_display_math] = STATE(192),
    [sym_inline_math] = STATE(192),
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
    [sym_verbatim_environment] = STATE(192),
    [sym_escaped] = STATE(192),
    [sym_command] = STATE(192),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(192),
    [sym_opt_text_group] = STATE(192),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(192),
    [sym_begin_opt] = STATE(47),
    [sym_end_opt] = STATE(191),
    [aux_sym_text_mode_repeat1] = STATE(192),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(245),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(245),
    [sym_subscript] = ACTIONS(245),
    [sym_active_char] = ACTIONS(245),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(247),
  },
  [99] = {
    [sym_end_Verbatim] = STATE(186),
    [sym_end_token] = STATE(96),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [100] = {
    [sym_begin_group] = ACTIONS(249),
  },
  [101] = {
    [sym_end_Verbatim_star] = STATE(186),
    [sym_end_token] = STATE(100),
    [aux_sym_verbatim_environment_repeat1] = STATE(194),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(251),
  },
  [102] = {
    [sym_end_Verbatim_star] = STATE(186),
    [sym_end_token] = STATE(100),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [103] = {
    [sym_begin_group] = ACTIONS(253),
  },
  [104] = {
    [sym_end_BVerbatim] = STATE(186),
    [sym_end_token] = STATE(103),
    [aux_sym_verbatim_environment_repeat1] = STATE(196),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(255),
  },
  [105] = {
    [sym_end_BVerbatim] = STATE(186),
    [sym_end_token] = STATE(103),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [106] = {
    [sym_begin_group] = ACTIONS(257),
  },
  [107] = {
    [sym_end_BVerbatim_star] = STATE(186),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_environment_repeat1] = STATE(198),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(259),
  },
  [108] = {
    [sym_end_BVerbatim_star] = STATE(186),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [109] = {
    [sym_begin_group] = ACTIONS(261),
  },
  [110] = {
    [sym_end_LVerbatim] = STATE(186),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(200),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(263),
  },
  [111] = {
    [sym_end_LVerbatim] = STATE(186),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [112] = {
    [sym_begin_group] = ACTIONS(265),
  },
  [113] = {
    [sym_end_LVerbatim_star] = STATE(186),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(202),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(267),
  },
  [114] = {
    [sym_end_LVerbatim_star] = STATE(186),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [115] = {
    [sym_begin_group] = ACTIONS(269),
  },
  [116] = {
    [sym_end_lstlisting] = STATE(186),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_environment_repeat1] = STATE(204),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(271),
  },
  [117] = {
    [sym_end_lstlisting] = STATE(186),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [118] = {
    [sym__text_mode] = STATE(206),
    [sym_at_group] = STATE(206),
    [sym_parameter] = STATE(206),
    [sym_text_environment] = STATE(206),
    [sym_display_math] = STATE(206),
    [sym_inline_math] = STATE(206),
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
    [sym_verbatim_environment] = STATE(206),
    [sym_escaped] = STATE(206),
    [sym_command] = STATE(206),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(206),
    [sym_opt_text_group] = STATE(206),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(206),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(206),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(273),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(275),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(275),
    [sym_subscript] = ACTIONS(275),
    [sym_active_char] = ACTIONS(275),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(277),
  },
  [119] = {
    [sym_end_minted] = STATE(186),
    [sym_end_token] = STATE(207),
    [aux_sym_verbatim_environment_repeat1] = STATE(208),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(279),
  },
  [120] = {
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(281),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [anon_sym_makeatletter] = ACTIONS(47),
    [sym__name] = ACTIONS(49),
  },
  [121] = {
    [ts_builtin_sym_end] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym_RBRACK] = ACTIONS(285),
    [sym__escape] = ACTIONS(285),
    [sym_begin_group] = ACTIONS(285),
    [sym_end_group] = ACTIONS(285),
    [sym_math_shift] = ACTIONS(285),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(285),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(285),
    [sym_active_char] = ACTIONS(285),
    [sym_comment_char] = ACTIONS(285),
    [sym_text] = ACTIONS(283),
  },
  [122] = {
    [sym_simple_text_group] = STATE(209),
    [sym_begin_group] = ACTIONS(115),
  },
  [123] = {
    [sym__text_mode] = STATE(211),
    [sym_at_group] = STATE(211),
    [sym_parameter] = STATE(211),
    [sym_text_environment] = STATE(211),
    [sym_display_math] = STATE(211),
    [sym_inline_math] = STATE(211),
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
    [sym_verbatim_environment] = STATE(211),
    [sym_escaped] = STATE(211),
    [sym_command] = STATE(211),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_end] = STATE(210),
    [sym_end_token] = STATE(122),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(211),
    [sym_opt_text_group] = STATE(211),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(211),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(211),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(101),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(287),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(287),
    [sym_subscript] = ACTIONS(287),
    [sym_active_char] = ACTIONS(287),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(289),
  },
  [124] = {
    [anon_sym_align] = ACTIONS(291),
    [anon_sym_align_STAR] = ACTIONS(293),
    [anon_sym_alignat] = ACTIONS(295),
    [anon_sym_alignat_STAR] = ACTIONS(297),
    [anon_sym_eqnarray] = ACTIONS(299),
    [anon_sym_eqnarray_STAR] = ACTIONS(301),
    [anon_sym_equation] = ACTIONS(303),
    [anon_sym_equation_STAR] = ACTIONS(305),
    [anon_sym_flalign] = ACTIONS(307),
    [anon_sym_flalign_STAR] = ACTIONS(309),
    [anon_sym_gather] = ACTIONS(311),
    [anon_sym_gather_STAR] = ACTIONS(313),
    [anon_sym_multline] = ACTIONS(315),
    [anon_sym_multline_STAR] = ACTIONS(317),
    [anon_sym_split] = ACTIONS(319),
    [anon_sym_split_STAR] = ACTIONS(321),
    [anon_sym_math] = ACTIONS(323),
    [anon_sym_verbatim] = ACTIONS(325),
    [anon_sym_Verbatim] = ACTIONS(327),
    [anon_sym_Verbatim_STAR] = ACTIONS(329),
    [anon_sym_BVerbatim] = ACTIONS(331),
    [anon_sym_BVerbatim_STAR] = ACTIONS(333),
    [anon_sym_LVerbatim] = ACTIONS(335),
    [anon_sym_LVerbatim_STAR] = ACTIONS(337),
    [anon_sym_lstlisting] = ACTIONS(339),
    [sym_text] = ACTIONS(341),
  },
  [125] = {
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym__escape] = ACTIONS(343),
    [sym_begin_group] = ACTIONS(343),
    [sym_math_shift] = ACTIONS(343),
    [sym_alignment_tab] = ACTIONS(343),
    [sym_parameter_char] = ACTIONS(343),
    [sym_superscript] = ACTIONS(343),
    [sym_subscript] = ACTIONS(343),
    [sym_active_char] = ACTIONS(343),
    [sym_comment_char] = ACTIONS(343),
    [sym_text] = ACTIONS(345),
  },
  [126] = {
    [sym_text] = ACTIONS(347),
  },
  [127] = {
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
  [128] = {
    [sym_simple_text_group] = STATE(238),
    [sym_begin_group] = ACTIONS(115),
  },
  [129] = {
    [sym__text_mode] = STATE(241),
    [sym_at_group] = STATE(241),
    [sym_parameter] = STATE(241),
    [sym_text_environment] = STATE(241),
    [sym_display_math] = STATE(241),
    [sym_inline_math] = STATE(241),
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
    [sym_verbatim_environment] = STATE(241),
    [sym_escaped] = STATE(241),
    [sym_command] = STATE(241),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(241),
    [sym_opt_text_group] = STATE(241),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(241),
    [sym_begin_opt] = STATE(47),
    [sym_end_opt] = STATE(240),
    [aux_sym_text_mode_repeat1] = STATE(241),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(355),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(355),
    [sym_subscript] = ACTIONS(355),
    [sym_active_char] = ACTIONS(355),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(357),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
    [sym__escape] = ACTIONS(361),
    [sym_begin_group] = ACTIONS(361),
    [sym_end_group] = ACTIONS(361),
    [sym_math_shift] = ACTIONS(361),
    [sym_alignment_tab] = ACTIONS(361),
    [sym_parameter_char] = ACTIONS(361),
    [sym_superscript] = ACTIONS(361),
    [sym_subscript] = ACTIONS(361),
    [sym_active_char] = ACTIONS(361),
    [sym_comment_char] = ACTIONS(361),
    [sym_text] = ACTIONS(359),
  },
  [131] = {
    [sym_simple_text_group] = STATE(242),
    [sym_begin_group] = ACTIONS(115),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_RBRACK] = ACTIONS(365),
    [sym__escape] = ACTIONS(365),
    [sym_begin_group] = ACTIONS(365),
    [sym_end_group] = ACTIONS(365),
    [sym_math_shift] = ACTIONS(365),
    [sym_alignment_tab] = ACTIONS(365),
    [sym_parameter_char] = ACTIONS(365),
    [sym_superscript] = ACTIONS(365),
    [sym_subscript] = ACTIONS(365),
    [sym_active_char] = ACTIONS(365),
    [sym_comment_char] = ACTIONS(365),
    [sym_text] = ACTIONS(363),
  },
  [133] = {
    [ts_builtin_sym_end] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(369),
    [anon_sym_RBRACK] = ACTIONS(369),
    [sym__escape] = ACTIONS(369),
    [sym_begin_group] = ACTIONS(369),
    [sym_end_group] = ACTIONS(369),
    [sym_math_shift] = ACTIONS(369),
    [sym_alignment_tab] = ACTIONS(369),
    [sym_parameter_char] = ACTIONS(369),
    [sym_superscript] = ACTIONS(369),
    [sym_subscript] = ACTIONS(369),
    [sym_active_char] = ACTIONS(369),
    [sym_comment_char] = ACTIONS(369),
    [sym_text] = ACTIONS(367),
  },
  [134] = {
    [sym_text_group] = STATE(243),
    [sym_begin_group] = ACTIONS(117),
  },
  [135] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(371),
  },
  [136] = {
    [anon_sym_EQ] = ACTIONS(373),
  },
  [137] = {
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
    [anon_sym_makeatother] = ACTIONS(375),
    [sym__at_name] = ACTIONS(377),
  },
  [138] = {
    [sym__at_text_mode] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_environment] = STATE(250),
    [sym_display_math] = STATE(250),
    [sym_inline_math] = STATE(250),
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
    [sym_verbatim_environment] = STATE(250),
    [sym_escaped] = STATE(250),
    [sym_at_command] = STATE(250),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(250),
    [sym_opt_at_text_group] = STATE(250),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(250),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(250),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(381),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(383),
    [sym_active_char] = ACTIONS(383),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(385),
  },
  [139] = {
    [anon_sym_LBRACK] = ACTIONS(387),
    [anon_sym_RBRACK] = ACTIONS(387),
    [sym__escape] = ACTIONS(387),
    [sym_begin_group] = ACTIONS(387),
    [sym_end_group] = ACTIONS(387),
    [sym_math_shift] = ACTIONS(387),
    [sym_alignment_tab] = ACTIONS(387),
    [sym_parameter_char] = ACTIONS(387),
    [sym_superscript] = ACTIONS(387),
    [sym_subscript] = ACTIONS(387),
    [sym_active_char] = ACTIONS(387),
    [sym_comment_char] = ACTIONS(387),
    [sym_text] = ACTIONS(389),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_RBRACK] = ACTIONS(393),
    [sym__escape] = ACTIONS(393),
    [sym_begin_group] = ACTIONS(393),
    [sym_end_group] = ACTIONS(393),
    [sym_math_shift] = ACTIONS(393),
    [sym_alignment_tab] = ACTIONS(393),
    [sym_parameter_char] = ACTIONS(393),
    [sym_superscript] = ACTIONS(393),
    [sym_subscript] = ACTIONS(393),
    [sym_active_char] = ACTIONS(393),
    [sym_comment_char] = ACTIONS(393),
    [sym_text] = ACTIONS(391),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [sym__escape] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_end_group] = ACTIONS(397),
    [sym_math_shift] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_active_char] = ACTIONS(397),
    [sym_comment_char] = ACTIONS(397),
    [sym_text] = ACTIONS(395),
  },
  [142] = {
    [sym__at_text_mode] = STATE(252),
    [sym_parameter] = STATE(252),
    [sym_text_environment] = STATE(252),
    [sym_display_math] = STATE(252),
    [sym_inline_math] = STATE(252),
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
    [sym_verbatim_environment] = STATE(252),
    [sym_escaped] = STATE(252),
    [sym_at_command] = STATE(252),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(252),
    [sym_opt_at_text_group] = STATE(252),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(252),
    [sym_begin_opt] = STATE(142),
    [sym_end_opt] = STATE(251),
    [aux_sym_at_group_repeat1] = STATE(252),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(399),
    [sym_subscript] = ACTIONS(399),
    [sym_active_char] = ACTIONS(399),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(401),
  },
  [143] = {
    [sym__at_text_mode] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_environment] = STATE(254),
    [sym_display_math] = STATE(254),
    [sym_inline_math] = STATE(254),
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
    [sym_verbatim_environment] = STATE(254),
    [sym_escaped] = STATE(254),
    [sym_at_command] = STATE(254),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_makeatother] = STATE(253),
    [sym_makeatother_token] = STATE(141),
    [sym_at_text_group] = STATE(254),
    [sym_opt_at_text_group] = STATE(254),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(254),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(125),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(403),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(403),
    [sym_subscript] = ACTIONS(403),
    [sym_active_char] = ACTIONS(403),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(405),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(409),
    [anon_sym_RBRACK] = ACTIONS(409),
    [sym__escape] = ACTIONS(409),
    [sym_begin_group] = ACTIONS(409),
    [sym_end_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(409),
    [sym_alignment_tab] = ACTIONS(409),
    [sym_parameter_char] = ACTIONS(409),
    [sym_superscript] = ACTIONS(409),
    [sym_subscript] = ACTIONS(409),
    [sym_active_char] = ACTIONS(409),
    [sym_comment_char] = ACTIONS(409),
    [sym_text] = ACTIONS(407),
  },
  [145] = {
    [ts_builtin_sym_end] = ACTIONS(411),
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
    [sym_text] = ACTIONS(411),
  },
  [146] = {
    [sym__text_mode] = STATE(256),
    [sym_at_group] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_environment] = STATE(256),
    [sym_display_math] = STATE(256),
    [sym_inline_math] = STATE(256),
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
    [sym_verbatim_environment] = STATE(256),
    [sym_escaped] = STATE(256),
    [sym_command] = STATE(256),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(256),
    [sym_opt_text_group] = STATE(256),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(256),
    [sym_begin_opt] = STATE(47),
    [sym_end_opt] = STATE(255),
    [aux_sym_text_mode_repeat1] = STATE(256),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(417),
  },
  [147] = {
    [sym__text_mode] = STATE(147),
    [sym_at_group] = STATE(147),
    [sym_parameter] = STATE(147),
    [sym_text_environment] = STATE(147),
    [sym_display_math] = STATE(147),
    [sym_inline_math] = STATE(147),
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
    [sym_verbatim_environment] = STATE(147),
    [sym_escaped] = STATE(147),
    [sym_command] = STATE(147),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(147),
    [sym_opt_text_group] = STATE(147),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(147),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym__escape] = ACTIONS(424),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(430),
    [sym_alignment_tab] = ACTIONS(433),
    [sym_parameter_char] = ACTIONS(436),
    [sym_superscript] = ACTIONS(433),
    [sym_subscript] = ACTIONS(433),
    [sym_active_char] = ACTIONS(433),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(442),
  },
  [148] = {
    [sym__escape] = ACTIONS(445),
  },
  [149] = {
    [sym__escape] = ACTIONS(447),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(451),
    [anon_sym_RBRACK] = ACTIONS(451),
    [sym__escape] = ACTIONS(451),
    [sym_begin_group] = ACTIONS(451),
    [sym_end_group] = ACTIONS(451),
    [sym_math_shift] = ACTIONS(451),
    [sym_alignment_tab] = ACTIONS(451),
    [sym_parameter_char] = ACTIONS(451),
    [sym_superscript] = ACTIONS(451),
    [sym_subscript] = ACTIONS(451),
    [sym_active_char] = ACTIONS(451),
    [sym_comment_char] = ACTIONS(451),
    [sym_text] = ACTIONS(449),
  },
  [151] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_environment] = STATE(151),
    [sym_display_math] = STATE(151),
    [sym_inline_math] = STATE(151),
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
    [sym_verbatim_environment] = STATE(151),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym__escape] = ACTIONS(424),
    [sym_begin_group] = ACTIONS(427),
    [sym_end_group] = ACTIONS(453),
    [sym_math_shift] = ACTIONS(430),
    [sym_alignment_tab] = ACTIONS(455),
    [sym_parameter_char] = ACTIONS(436),
    [sym_superscript] = ACTIONS(455),
    [sym_subscript] = ACTIONS(455),
    [sym_active_char] = ACTIONS(455),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(458),
  },
  [152] = {
    [sym_begin_group] = ACTIONS(461),
  },
  [153] = {
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_RBRACK] = ACTIONS(463),
    [sym__escape] = ACTIONS(463),
    [sym_begin_group] = ACTIONS(463),
    [sym_end_group] = ACTIONS(463),
    [sym_math_shift] = ACTIONS(463),
    [sym_alignment_tab] = ACTIONS(463),
    [sym_parameter_char] = ACTIONS(463),
    [sym_superscript] = ACTIONS(463),
    [sym_subscript] = ACTIONS(463),
    [sym_active_char] = ACTIONS(463),
    [sym_comment_char] = ACTIONS(463),
    [sym_text] = ACTIONS(465),
  },
  [154] = {
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_environment] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(260),
    [sym_command] = STATE(260),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(260),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_end_group] = ACTIONS(467),
    [sym_alignment_tab] = ACTIONS(469),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(469),
    [sym_subscript] = ACTIONS(469),
    [sym_active_char] = ACTIONS(469),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(471),
  },
  [155] = {
    [sym_math_shift] = ACTIONS(473),
  },
  [156] = {
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
  [157] = {
    [sym__text_mode] = STATE(264),
    [sym_text_mode] = STATE(263),
    [sym_at_group] = STATE(264),
    [sym_parameter] = STATE(264),
    [sym_text_environment] = STATE(264),
    [sym_display_math] = STATE(264),
    [sym_inline_math] = STATE(264),
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
    [sym_verbatim_environment] = STATE(264),
    [sym_escaped] = STATE(264),
    [sym_command] = STATE(264),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(264),
    [sym_opt_text_group] = STATE(264),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(264),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(264),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(479),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(481),
    [sym_subscript] = ACTIONS(481),
    [sym_active_char] = ACTIONS(481),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(483),
  },
  [158] = {
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_RBRACK] = ACTIONS(485),
    [sym__escape] = ACTIONS(485),
    [sym_begin_group] = ACTIONS(485),
    [sym_end_group] = ACTIONS(485),
    [sym_math_shift] = ACTIONS(485),
    [sym_alignment_tab] = ACTIONS(485),
    [sym_parameter_char] = ACTIONS(485),
    [sym_superscript] = ACTIONS(485),
    [sym_subscript] = ACTIONS(485),
    [sym_active_char] = ACTIONS(485),
    [sym_comment_char] = ACTIONS(485),
    [sym_text] = ACTIONS(487),
  },
  [159] = {
    [anon_sym_tag] = ACTIONS(187),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(31),
    [anon_sym_begin] = ACTIONS(33),
    [anon_sym_end] = ACTIONS(281),
    [anon_sym_documentclass] = ACTIONS(35),
    [anon_sym_usepackage] = ACTIONS(37),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(39),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(43),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(45),
    [sym__name] = ACTIONS(49),
  },
  [160] = {
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_RBRACK] = ACTIONS(489),
    [sym__escape] = ACTIONS(489),
    [sym_begin_group] = ACTIONS(489),
    [sym_end_group] = ACTIONS(489),
    [sym_math_shift] = ACTIONS(489),
    [sym_alignment_tab] = ACTIONS(489),
    [sym_parameter_char] = ACTIONS(489),
    [sym_superscript] = ACTIONS(489),
    [sym_subscript] = ACTIONS(489),
    [sym_active_char] = ACTIONS(489),
    [sym_comment_char] = ACTIONS(489),
    [sym_text] = ACTIONS(491),
  },
  [161] = {
    [sym__math_mode] = STATE(167),
    [sym_parameter] = STATE(167),
    [sym_math_environment] = STATE(167),
    [sym_tag] = STATE(167),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(167),
    [sym_command] = STATE(167),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
    [sym_end] = STATE(265),
    [sym_end_token] = STATE(122),
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
    [sym_math_group] = STATE(167),
    [sym_opt_math_group] = STATE(167),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(167),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(199),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(225),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(225),
    [sym_subscript] = ACTIONS(225),
    [sym_active_char] = ACTIONS(225),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(227),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_RBRACK] = ACTIONS(493),
    [sym__escape] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(493),
    [sym_end_group] = ACTIONS(493),
    [sym_math_shift] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_parameter_char] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [sym_subscript] = ACTIONS(493),
    [sym_active_char] = ACTIONS(493),
    [sym_comment_char] = ACTIONS(493),
    [sym_text] = ACTIONS(495),
  },
  [163] = {
    [sym__math_mode] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_math_environment] = STATE(267),
    [sym_tag] = STATE(267),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(267),
    [sym_command] = STATE(267),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(267),
    [sym_opt_math_group] = STATE(267),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(267),
    [sym_begin_opt] = STATE(70),
    [sym_end_opt] = STATE(266),
    [aux_sym_math_mode_repeat1] = STATE(267),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(57),
    [sym_begin_group] = ACTIONS(59),
    [sym_alignment_tab] = ACTIONS(497),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(497),
    [sym_subscript] = ACTIONS(497),
    [sym_active_char] = ACTIONS(497),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(499),
  },
  [164] = {
    [sym__math_mode] = STATE(164),
    [sym_parameter] = STATE(164),
    [sym_math_environment] = STATE(164),
    [sym_tag] = STATE(164),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(164),
    [sym_command] = STATE(164),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(164),
    [sym_opt_math_group] = STATE(164),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(164),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(164),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym__escape] = ACTIONS(504),
    [sym_begin_group] = ACTIONS(507),
    [sym_math_shift] = ACTIONS(510),
    [sym_alignment_tab] = ACTIONS(512),
    [sym_parameter_char] = ACTIONS(515),
    [sym_superscript] = ACTIONS(512),
    [sym_subscript] = ACTIONS(512),
    [sym_active_char] = ACTIONS(512),
    [sym_comment_char] = ACTIONS(518),
    [sym_text] = ACTIONS(521),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(524),
    [anon_sym_LBRACK] = ACTIONS(526),
    [anon_sym_RBRACK] = ACTIONS(526),
    [sym__escape] = ACTIONS(526),
    [sym_begin_group] = ACTIONS(526),
    [sym_end_group] = ACTIONS(526),
    [sym_math_shift] = ACTIONS(526),
    [sym_alignment_tab] = ACTIONS(526),
    [sym_parameter_char] = ACTIONS(526),
    [sym_superscript] = ACTIONS(526),
    [sym_subscript] = ACTIONS(526),
    [sym_active_char] = ACTIONS(526),
    [sym_comment_char] = ACTIONS(526),
    [sym_text] = ACTIONS(524),
  },
  [166] = {
    [sym_begin_group] = ACTIONS(528),
  },
  [167] = {
    [sym__math_mode] = STATE(167),
    [sym_parameter] = STATE(167),
    [sym_math_environment] = STATE(167),
    [sym_tag] = STATE(167),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(167),
    [sym_command] = STATE(167),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(167),
    [sym_opt_math_group] = STATE(167),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(167),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym__escape] = ACTIONS(504),
    [sym_begin_group] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(530),
    [sym_parameter_char] = ACTIONS(515),
    [sym_superscript] = ACTIONS(530),
    [sym_subscript] = ACTIONS(530),
    [sym_active_char] = ACTIONS(530),
    [sym_comment_char] = ACTIONS(518),
    [sym_text] = ACTIONS(533),
  },
  [168] = {
    [sym_begin_group] = ACTIONS(536),
  },
  [169] = {
    [sym_begin_group] = ACTIONS(538),
  },
  [170] = {
    [sym_begin_group] = ACTIONS(540),
  },
  [171] = {
    [sym_begin_group] = ACTIONS(542),
  },
  [172] = {
    [sym_begin_group] = ACTIONS(544),
  },
  [173] = {
    [sym_begin_group] = ACTIONS(546),
  },
  [174] = {
    [sym_begin_group] = ACTIONS(548),
  },
  [175] = {
    [sym_begin_group] = ACTIONS(550),
  },
  [176] = {
    [sym_begin_group] = ACTIONS(552),
  },
  [177] = {
    [sym_begin_group] = ACTIONS(554),
  },
  [178] = {
    [sym_begin_group] = ACTIONS(556),
  },
  [179] = {
    [sym_begin_group] = ACTIONS(558),
  },
  [180] = {
    [sym_begin_group] = ACTIONS(560),
  },
  [181] = {
    [sym_begin_group] = ACTIONS(562),
  },
  [182] = {
    [sym_begin_group] = ACTIONS(564),
  },
  [183] = {
    [sym_begin_group] = ACTIONS(566),
  },
  [184] = {
    [sym_begin_group] = ACTIONS(568),
  },
  [185] = {
    [anon_sym_verbatim] = ACTIONS(570),
  },
  [186] = {
    [ts_builtin_sym_end] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(574),
    [anon_sym_RBRACK] = ACTIONS(574),
    [sym__escape] = ACTIONS(574),
    [sym_begin_group] = ACTIONS(574),
    [sym_end_group] = ACTIONS(574),
    [sym_math_shift] = ACTIONS(574),
    [sym_alignment_tab] = ACTIONS(574),
    [sym_parameter_char] = ACTIONS(574),
    [sym_superscript] = ACTIONS(574),
    [sym_subscript] = ACTIONS(574),
    [sym_active_char] = ACTIONS(574),
    [sym_comment_char] = ACTIONS(574),
    [sym_text] = ACTIONS(572),
  },
  [187] = {
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(576),
    [sym_verbatim_token] = ACTIONS(578),
  },
  [188] = {
    [anon_sym_Verbatim] = ACTIONS(581),
  },
  [189] = {
    [sym_end_Verbatim] = STATE(287),
    [sym_end_token] = STATE(96),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [190] = {
    [sym__escape] = ACTIONS(409),
    [sym_verbatim_token] = ACTIONS(409),
  },
  [191] = {
    [sym__escape] = ACTIONS(413),
    [sym_verbatim_token] = ACTIONS(413),
  },
  [192] = {
    [sym__text_mode] = STATE(256),
    [sym_at_group] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_environment] = STATE(256),
    [sym_display_math] = STATE(256),
    [sym_inline_math] = STATE(256),
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
    [sym_verbatim_environment] = STATE(256),
    [sym_escaped] = STATE(256),
    [sym_command] = STATE(256),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(256),
    [sym_opt_text_group] = STATE(256),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(256),
    [sym_begin_opt] = STATE(47),
    [sym_end_opt] = STATE(288),
    [aux_sym_text_mode_repeat1] = STATE(256),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(243),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(417),
  },
  [193] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(583),
  },
  [194] = {
    [sym_end_Verbatim_star] = STATE(287),
    [sym_end_token] = STATE(100),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [195] = {
    [anon_sym_BVerbatim] = ACTIONS(585),
  },
  [196] = {
    [sym_end_BVerbatim] = STATE(287),
    [sym_end_token] = STATE(103),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [197] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(587),
  },
  [198] = {
    [sym_end_BVerbatim_star] = STATE(287),
    [sym_end_token] = STATE(106),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [199] = {
    [anon_sym_LVerbatim] = ACTIONS(589),
  },
  [200] = {
    [sym_end_LVerbatim] = STATE(287),
    [sym_end_token] = STATE(109),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [201] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(591),
  },
  [202] = {
    [sym_end_LVerbatim_star] = STATE(287),
    [sym_end_token] = STATE(112),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [203] = {
    [anon_sym_lstlisting] = ACTIONS(593),
  },
  [204] = {
    [sym_end_lstlisting] = STATE(287),
    [sym_end_token] = STATE(115),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [205] = {
    [sym__escape] = ACTIONS(179),
    [sym_verbatim_token] = ACTIONS(179),
  },
  [206] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_environment] = STATE(151),
    [sym_display_math] = STATE(151),
    [sym_inline_math] = STATE(151),
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
    [sym_verbatim_environment] = STATE(151),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(595),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(185),
  },
  [207] = {
    [sym_begin_group] = ACTIONS(597),
  },
  [208] = {
    [sym_end_minted] = STATE(287),
    [sym_end_token] = STATE(207),
    [aux_sym_verbatim_environment_repeat1] = STATE(187),
    [sym__escape] = ACTIONS(81),
    [sym_verbatim_token] = ACTIONS(237),
  },
  [209] = {
    [ts_builtin_sym_end] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [sym__escape] = ACTIONS(601),
    [sym_begin_group] = ACTIONS(601),
    [sym_end_group] = ACTIONS(601),
    [sym_math_shift] = ACTIONS(601),
    [sym_alignment_tab] = ACTIONS(601),
    [sym_parameter_char] = ACTIONS(601),
    [sym_superscript] = ACTIONS(601),
    [sym_subscript] = ACTIONS(601),
    [sym_active_char] = ACTIONS(601),
    [sym_comment_char] = ACTIONS(601),
    [sym_text] = ACTIONS(599),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [sym__escape] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(605),
    [sym_end_group] = ACTIONS(605),
    [sym_math_shift] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_parameter_char] = ACTIONS(605),
    [sym_superscript] = ACTIONS(605),
    [sym_subscript] = ACTIONS(605),
    [sym_active_char] = ACTIONS(605),
    [sym_comment_char] = ACTIONS(605),
    [sym_text] = ACTIONS(603),
  },
  [211] = {
    [sym__text_mode] = STATE(211),
    [sym_at_group] = STATE(211),
    [sym_parameter] = STATE(211),
    [sym_text_environment] = STATE(211),
    [sym_display_math] = STATE(211),
    [sym_inline_math] = STATE(211),
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
    [sym_verbatim_environment] = STATE(211),
    [sym_escaped] = STATE(211),
    [sym_command] = STATE(211),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(211),
    [sym_opt_text_group] = STATE(211),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(211),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(211),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym__escape] = ACTIONS(424),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(430),
    [sym_alignment_tab] = ACTIONS(607),
    [sym_parameter_char] = ACTIONS(436),
    [sym_superscript] = ACTIONS(607),
    [sym_subscript] = ACTIONS(607),
    [sym_active_char] = ACTIONS(607),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(610),
  },
  [212] = {
    [sym_end_group] = ACTIONS(613),
  },
  [213] = {
    [sym_end_group] = ACTIONS(615),
  },
  [214] = {
    [sym_end_group] = ACTIONS(617),
  },
  [215] = {
    [sym_end_group] = ACTIONS(619),
  },
  [216] = {
    [sym_end_group] = ACTIONS(621),
  },
  [217] = {
    [sym_end_group] = ACTIONS(623),
  },
  [218] = {
    [sym_end_group] = ACTIONS(625),
  },
  [219] = {
    [sym_end_group] = ACTIONS(627),
  },
  [220] = {
    [sym_end_group] = ACTIONS(629),
  },
  [221] = {
    [sym_end_group] = ACTIONS(631),
  },
  [222] = {
    [sym_end_group] = ACTIONS(633),
  },
  [223] = {
    [sym_end_group] = ACTIONS(635),
  },
  [224] = {
    [sym_end_group] = ACTIONS(637),
  },
  [225] = {
    [sym_end_group] = ACTIONS(639),
  },
  [226] = {
    [sym_end_group] = ACTIONS(641),
  },
  [227] = {
    [sym_end_group] = ACTIONS(643),
  },
  [228] = {
    [sym_end_group] = ACTIONS(645),
  },
  [229] = {
    [sym_end_group] = ACTIONS(647),
  },
  [230] = {
    [sym_end_group] = ACTIONS(649),
  },
  [231] = {
    [sym_end_group] = ACTIONS(651),
  },
  [232] = {
    [sym_end_group] = ACTIONS(653),
  },
  [233] = {
    [sym_end_group] = ACTIONS(655),
  },
  [234] = {
    [sym_end_group] = ACTIONS(657),
  },
  [235] = {
    [sym_end_group] = ACTIONS(659),
  },
  [236] = {
    [sym_end_group] = ACTIONS(661),
  },
  [237] = {
    [sym_end_group] = ACTIONS(663),
  },
  [238] = {
    [ts_builtin_sym_end] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym_RBRACK] = ACTIONS(667),
    [sym__escape] = ACTIONS(667),
    [sym_begin_group] = ACTIONS(667),
    [sym_end_group] = ACTIONS(667),
    [sym_math_shift] = ACTIONS(667),
    [sym_alignment_tab] = ACTIONS(667),
    [sym_parameter_char] = ACTIONS(667),
    [sym_superscript] = ACTIONS(667),
    [sym_subscript] = ACTIONS(667),
    [sym_active_char] = ACTIONS(667),
    [sym_comment_char] = ACTIONS(667),
    [sym_text] = ACTIONS(665),
  },
  [239] = {
    [sym_begin_group] = ACTIONS(407),
  },
  [240] = {
    [sym_begin_group] = ACTIONS(411),
  },
  [241] = {
    [sym__text_mode] = STATE(256),
    [sym_at_group] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_environment] = STATE(256),
    [sym_display_math] = STATE(256),
    [sym_inline_math] = STATE(256),
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
    [sym_verbatim_environment] = STATE(256),
    [sym_escaped] = STATE(256),
    [sym_command] = STATE(256),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(256),
    [sym_opt_text_group] = STATE(256),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(256),
    [sym_begin_opt] = STATE(47),
    [sym_end_opt] = STATE(323),
    [aux_sym_text_mode_repeat1] = STATE(256),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(353),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(417),
  },
  [242] = {
    [ts_builtin_sym_end] = ACTIONS(669),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_RBRACK] = ACTIONS(671),
    [sym__escape] = ACTIONS(671),
    [sym_begin_group] = ACTIONS(671),
    [sym_end_group] = ACTIONS(671),
    [sym_math_shift] = ACTIONS(671),
    [sym_alignment_tab] = ACTIONS(671),
    [sym_parameter_char] = ACTIONS(671),
    [sym_superscript] = ACTIONS(671),
    [sym_subscript] = ACTIONS(671),
    [sym_active_char] = ACTIONS(671),
    [sym_comment_char] = ACTIONS(671),
    [sym_text] = ACTIONS(669),
  },
  [243] = {
    [ts_builtin_sym_end] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(675),
    [sym__escape] = ACTIONS(675),
    [sym_begin_group] = ACTIONS(675),
    [sym_end_group] = ACTIONS(675),
    [sym_math_shift] = ACTIONS(675),
    [sym_alignment_tab] = ACTIONS(675),
    [sym_parameter_char] = ACTIONS(675),
    [sym_superscript] = ACTIONS(675),
    [sym_subscript] = ACTIONS(675),
    [sym_active_char] = ACTIONS(675),
    [sym_comment_char] = ACTIONS(675),
    [sym_text] = ACTIONS(673),
  },
  [244] = {
    [anon_sym_EQ] = ACTIONS(149),
  },
  [245] = {
    [sym_number] = ACTIONS(677),
  },
  [246] = {
    [ts_builtin_sym_end] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_RBRACK] = ACTIONS(681),
    [sym__escape] = ACTIONS(681),
    [sym_begin_group] = ACTIONS(681),
    [sym_end_group] = ACTIONS(681),
    [sym_math_shift] = ACTIONS(681),
    [sym_alignment_tab] = ACTIONS(681),
    [sym_parameter_char] = ACTIONS(681),
    [sym_superscript] = ACTIONS(681),
    [sym_subscript] = ACTIONS(681),
    [sym_active_char] = ACTIONS(681),
    [sym_comment_char] = ACTIONS(681),
    [sym_text] = ACTIONS(679),
  },
  [247] = {
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_RBRACK] = ACTIONS(683),
    [sym__escape] = ACTIONS(683),
    [sym_begin_group] = ACTIONS(683),
    [sym_end_group] = ACTIONS(683),
    [sym_math_shift] = ACTIONS(683),
    [sym_alignment_tab] = ACTIONS(683),
    [sym_parameter_char] = ACTIONS(683),
    [sym_superscript] = ACTIONS(683),
    [sym_subscript] = ACTIONS(683),
    [sym_active_char] = ACTIONS(683),
    [sym_comment_char] = ACTIONS(683),
    [sym_text] = ACTIONS(685),
  },
  [248] = {
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
    [sym__at_name] = ACTIONS(377),
  },
  [249] = {
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [sym__escape] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_end_group] = ACTIONS(687),
    [sym_math_shift] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_active_char] = ACTIONS(687),
    [sym_comment_char] = ACTIONS(687),
    [sym_text] = ACTIONS(689),
  },
  [250] = {
    [sym__at_text_mode] = STATE(326),
    [sym_parameter] = STATE(326),
    [sym_text_environment] = STATE(326),
    [sym_display_math] = STATE(326),
    [sym_inline_math] = STATE(326),
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
    [sym_verbatim_environment] = STATE(326),
    [sym_escaped] = STATE(326),
    [sym_at_command] = STATE(326),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(326),
    [sym_opt_at_text_group] = STATE(326),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(326),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(326),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(127),
    [sym_end_group] = ACTIONS(691),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(693),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(693),
    [sym_subscript] = ACTIONS(693),
    [sym_active_char] = ACTIONS(693),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(695),
  },
  [251] = {
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_RBRACK] = ACTIONS(697),
    [sym__escape] = ACTIONS(697),
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
  [252] = {
    [sym__at_text_mode] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_text_environment] = STATE(328),
    [sym_display_math] = STATE(328),
    [sym_inline_math] = STATE(328),
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
    [sym_verbatim_environment] = STATE(328),
    [sym_escaped] = STATE(328),
    [sym_at_command] = STATE(328),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(328),
    [sym_opt_at_text_group] = STATE(328),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(328),
    [sym_begin_opt] = STATE(142),
    [sym_end_opt] = STATE(327),
    [aux_sym_at_group_repeat1] = STATE(328),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(137),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(127),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(701),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(701),
    [sym_subscript] = ACTIONS(701),
    [sym_active_char] = ACTIONS(701),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(703),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(707),
    [sym__escape] = ACTIONS(707),
    [sym_begin_group] = ACTIONS(707),
    [sym_end_group] = ACTIONS(707),
    [sym_math_shift] = ACTIONS(707),
    [sym_alignment_tab] = ACTIONS(707),
    [sym_parameter_char] = ACTIONS(707),
    [sym_superscript] = ACTIONS(707),
    [sym_subscript] = ACTIONS(707),
    [sym_active_char] = ACTIONS(707),
    [sym_comment_char] = ACTIONS(707),
    [sym_text] = ACTIONS(705),
  },
  [254] = {
    [sym__at_text_mode] = STATE(254),
    [sym_parameter] = STATE(254),
    [sym_text_environment] = STATE(254),
    [sym_display_math] = STATE(254),
    [sym_inline_math] = STATE(254),
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
    [sym_verbatim_environment] = STATE(254),
    [sym_escaped] = STATE(254),
    [sym_at_command] = STATE(254),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(254),
    [sym_opt_at_text_group] = STATE(254),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(254),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(254),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym__escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(715),
    [sym_math_shift] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(721),
    [sym_subscript] = ACTIONS(721),
    [sym_active_char] = ACTIONS(721),
    [sym_comment_char] = ACTIONS(727),
    [sym_text] = ACTIONS(730),
  },
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(735),
    [anon_sym_RBRACK] = ACTIONS(735),
    [sym__escape] = ACTIONS(735),
    [sym_begin_group] = ACTIONS(735),
    [sym_end_group] = ACTIONS(735),
    [sym_math_shift] = ACTIONS(735),
    [sym_alignment_tab] = ACTIONS(735),
    [sym_parameter_char] = ACTIONS(735),
    [sym_superscript] = ACTIONS(735),
    [sym_subscript] = ACTIONS(735),
    [sym_active_char] = ACTIONS(735),
    [sym_comment_char] = ACTIONS(735),
    [sym_text] = ACTIONS(733),
  },
  [256] = {
    [sym__text_mode] = STATE(256),
    [sym_at_group] = STATE(256),
    [sym_parameter] = STATE(256),
    [sym_text_environment] = STATE(256),
    [sym_display_math] = STATE(256),
    [sym_inline_math] = STATE(256),
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
    [sym_verbatim_environment] = STATE(256),
    [sym_escaped] = STATE(256),
    [sym_command] = STATE(256),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(256),
    [sym_opt_text_group] = STATE(256),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(256),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(256),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_RBRACK] = ACTIONS(453),
    [sym__escape] = ACTIONS(424),
    [sym_begin_group] = ACTIONS(427),
    [sym_math_shift] = ACTIONS(430),
    [sym_alignment_tab] = ACTIONS(737),
    [sym_parameter_char] = ACTIONS(436),
    [sym_superscript] = ACTIONS(737),
    [sym_subscript] = ACTIONS(737),
    [sym_active_char] = ACTIONS(737),
    [sym_comment_char] = ACTIONS(439),
    [sym_text] = ACTIONS(740),
  },
  [257] = {
    [anon_sym_RBRACK] = ACTIONS(743),
  },
  [258] = {
    [anon_sym_RPAREN] = ACTIONS(745),
  },
  [259] = {
    [anon_sym_LBRACK] = ACTIONS(747),
    [anon_sym_RBRACK] = ACTIONS(747),
    [sym__escape] = ACTIONS(747),
    [sym_begin_group] = ACTIONS(747),
    [sym_end_group] = ACTIONS(747),
    [sym_math_shift] = ACTIONS(747),
    [sym_alignment_tab] = ACTIONS(747),
    [sym_parameter_char] = ACTIONS(747),
    [sym_superscript] = ACTIONS(747),
    [sym_subscript] = ACTIONS(747),
    [sym_active_char] = ACTIONS(747),
    [sym_comment_char] = ACTIONS(747),
    [sym_text] = ACTIONS(749),
  },
  [260] = {
    [sym__math_mode] = STATE(260),
    [sym_parameter] = STATE(260),
    [sym_math_environment] = STATE(260),
    [sym_tag] = STATE(260),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(260),
    [sym_command] = STATE(260),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(260),
    [sym_opt_math_group] = STATE(260),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(260),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(260),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym__escape] = ACTIONS(504),
    [sym_begin_group] = ACTIONS(507),
    [sym_end_group] = ACTIONS(510),
    [sym_alignment_tab] = ACTIONS(751),
    [sym_parameter_char] = ACTIONS(515),
    [sym_superscript] = ACTIONS(751),
    [sym_subscript] = ACTIONS(751),
    [sym_active_char] = ACTIONS(751),
    [sym_comment_char] = ACTIONS(518),
    [sym_text] = ACTIONS(754),
  },
  [261] = {
    [sym_math_shift] = ACTIONS(743),
  },
  [262] = {
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [sym__escape] = ACTIONS(757),
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
  [263] = {
    [sym_end_group] = ACTIONS(761),
  },
  [264] = {
    [sym__text_mode] = STATE(151),
    [sym_at_group] = STATE(151),
    [sym_parameter] = STATE(151),
    [sym_text_environment] = STATE(151),
    [sym_display_math] = STATE(151),
    [sym_inline_math] = STATE(151),
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
    [sym_verbatim_environment] = STATE(151),
    [sym_escaped] = STATE(151),
    [sym_command] = STATE(151),
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
    [sym_makeatletter] = STATE(45),
    [sym_makeatletter_token] = STATE(46),
    [sym_text_group] = STATE(151),
    [sym_opt_text_group] = STATE(151),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(151),
    [sym_begin_opt] = STATE(47),
    [aux_sym_text_mode_repeat1] = STATE(151),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(763),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(183),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(183),
    [sym_subscript] = ACTIONS(183),
    [sym_active_char] = ACTIONS(183),
    [sym_comment_char] = ACTIONS(19),
    [sym_text] = ACTIONS(185),
  },
  [265] = {
    [anon_sym_LBRACK] = ACTIONS(765),
    [anon_sym_RBRACK] = ACTIONS(765),
    [sym__escape] = ACTIONS(765),
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
  [266] = {
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_RBRACK] = ACTIONS(769),
    [sym__escape] = ACTIONS(769),
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
  [267] = {
    [sym__math_mode] = STATE(267),
    [sym_parameter] = STATE(267),
    [sym_math_environment] = STATE(267),
    [sym_tag] = STATE(267),
    [sym_tag_token] = STATE(67),
    [sym_escaped] = STATE(267),
    [sym_command] = STATE(267),
    [sym_begin] = STATE(68),
    [sym_begin_token] = STATE(69),
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
    [sym_math_group] = STATE(267),
    [sym_opt_math_group] = STATE(267),
    [sym_token] = STATE(38),
    [sym_comment] = STATE(267),
    [sym_begin_opt] = STATE(70),
    [aux_sym_math_mode_repeat1] = STATE(267),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_RBRACK] = ACTIONS(510),
    [sym__escape] = ACTIONS(504),
    [sym_begin_group] = ACTIONS(507),
    [sym_alignment_tab] = ACTIONS(773),
    [sym_parameter_char] = ACTIONS(515),
    [sym_superscript] = ACTIONS(773),
    [sym_subscript] = ACTIONS(773),
    [sym_active_char] = ACTIONS(773),
    [sym_comment_char] = ACTIONS(518),
    [sym_text] = ACTIONS(776),
  },
  [268] = {
    [anon_sym_align] = ACTIONS(779),
  },
  [269] = {
    [anon_sym_align_STAR] = ACTIONS(781),
  },
  [270] = {
    [anon_sym_alignat] = ACTIONS(783),
  },
  [271] = {
    [anon_sym_alignat_STAR] = ACTIONS(785),
  },
  [272] = {
    [anon_sym_eqnarray] = ACTIONS(787),
  },
  [273] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(789),
  },
  [274] = {
    [anon_sym_equation] = ACTIONS(791),
  },
  [275] = {
    [anon_sym_equation_STAR] = ACTIONS(793),
  },
  [276] = {
    [anon_sym_flalign] = ACTIONS(795),
  },
  [277] = {
    [anon_sym_flalign_STAR] = ACTIONS(797),
  },
  [278] = {
    [anon_sym_gather] = ACTIONS(799),
  },
  [279] = {
    [anon_sym_gather_STAR] = ACTIONS(801),
  },
  [280] = {
    [anon_sym_multline] = ACTIONS(803),
  },
  [281] = {
    [anon_sym_multline_STAR] = ACTIONS(805),
  },
  [282] = {
    [anon_sym_split] = ACTIONS(807),
  },
  [283] = {
    [anon_sym_split_STAR] = ACTIONS(809),
  },
  [284] = {
    [anon_sym_math] = ACTIONS(811),
  },
  [285] = {
    [sym_end_group] = ACTIONS(813),
  },
  [286] = {
    [sym_end_group] = ACTIONS(815),
  },
  [287] = {
    [ts_builtin_sym_end] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(819),
    [anon_sym_RBRACK] = ACTIONS(819),
    [sym__escape] = ACTIONS(819),
    [sym_begin_group] = ACTIONS(819),
    [sym_end_group] = ACTIONS(819),
    [sym_math_shift] = ACTIONS(819),
    [sym_alignment_tab] = ACTIONS(819),
    [sym_parameter_char] = ACTIONS(819),
    [sym_superscript] = ACTIONS(819),
    [sym_subscript] = ACTIONS(819),
    [sym_active_char] = ACTIONS(819),
    [sym_comment_char] = ACTIONS(819),
    [sym_text] = ACTIONS(817),
  },
  [288] = {
    [sym__escape] = ACTIONS(735),
    [sym_verbatim_token] = ACTIONS(735),
  },
  [289] = {
    [sym_end_group] = ACTIONS(821),
  },
  [290] = {
    [sym_end_group] = ACTIONS(823),
  },
  [291] = {
    [sym_end_group] = ACTIONS(825),
  },
  [292] = {
    [sym_end_group] = ACTIONS(827),
  },
  [293] = {
    [sym_end_group] = ACTIONS(829),
  },
  [294] = {
    [sym_end_group] = ACTIONS(831),
  },
  [295] = {
    [sym__escape] = ACTIONS(451),
    [sym_verbatim_token] = ACTIONS(451),
  },
  [296] = {
    [anon_sym_minted] = ACTIONS(833),
  },
  [297] = {
    [anon_sym_LBRACK] = ACTIONS(835),
    [sym__escape] = ACTIONS(835),
    [sym_begin_group] = ACTIONS(835),
    [sym_alignment_tab] = ACTIONS(835),
    [sym_parameter_char] = ACTIONS(835),
    [sym_superscript] = ACTIONS(835),
    [sym_subscript] = ACTIONS(835),
    [sym_active_char] = ACTIONS(835),
    [sym_comment_char] = ACTIONS(835),
    [sym_text] = ACTIONS(837),
  },
  [298] = {
    [anon_sym_LBRACK] = ACTIONS(839),
    [sym__escape] = ACTIONS(839),
    [sym_begin_group] = ACTIONS(839),
    [sym_alignment_tab] = ACTIONS(839),
    [sym_parameter_char] = ACTIONS(839),
    [sym_superscript] = ACTIONS(839),
    [sym_subscript] = ACTIONS(839),
    [sym_active_char] = ACTIONS(839),
    [sym_comment_char] = ACTIONS(839),
    [sym_text] = ACTIONS(841),
  },
  [299] = {
    [sym_opt_text_group] = STATE(358),
    [sym_begin_opt] = STATE(47),
    [anon_sym_LBRACK] = ACTIONS(113),
  },
  [300] = {
    [sym_text_group] = STATE(359),
    [sym_begin_group] = ACTIONS(117),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(843),
    [sym__escape] = ACTIONS(843),
    [sym_begin_group] = ACTIONS(843),
    [sym_alignment_tab] = ACTIONS(843),
    [sym_parameter_char] = ACTIONS(843),
    [sym_superscript] = ACTIONS(843),
    [sym_subscript] = ACTIONS(843),
    [sym_active_char] = ACTIONS(843),
    [sym_comment_char] = ACTIONS(843),
    [sym_text] = ACTIONS(845),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(847),
    [sym__escape] = ACTIONS(847),
    [sym_begin_group] = ACTIONS(847),
    [sym_alignment_tab] = ACTIONS(847),
    [sym_parameter_char] = ACTIONS(847),
    [sym_superscript] = ACTIONS(847),
    [sym_subscript] = ACTIONS(847),
    [sym_active_char] = ACTIONS(847),
    [sym_comment_char] = ACTIONS(847),
    [sym_text] = ACTIONS(849),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(851),
    [sym__escape] = ACTIONS(851),
    [sym_begin_group] = ACTIONS(851),
    [sym_alignment_tab] = ACTIONS(851),
    [sym_parameter_char] = ACTIONS(851),
    [sym_superscript] = ACTIONS(851),
    [sym_subscript] = ACTIONS(851),
    [sym_active_char] = ACTIONS(851),
    [sym_comment_char] = ACTIONS(851),
    [sym_text] = ACTIONS(853),
  },
  [304] = {
    [anon_sym_LBRACK] = ACTIONS(855),
    [sym__escape] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_active_char] = ACTIONS(855),
    [sym_comment_char] = ACTIONS(855),
    [sym_text] = ACTIONS(857),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(859),
    [sym__escape] = ACTIONS(859),
    [sym_begin_group] = ACTIONS(859),
    [sym_alignment_tab] = ACTIONS(859),
    [sym_parameter_char] = ACTIONS(859),
    [sym_superscript] = ACTIONS(859),
    [sym_subscript] = ACTIONS(859),
    [sym_active_char] = ACTIONS(859),
    [sym_comment_char] = ACTIONS(859),
    [sym_text] = ACTIONS(861),
  },
  [306] = {
    [anon_sym_LBRACK] = ACTIONS(863),
    [sym__escape] = ACTIONS(863),
    [sym_begin_group] = ACTIONS(863),
    [sym_alignment_tab] = ACTIONS(863),
    [sym_parameter_char] = ACTIONS(863),
    [sym_superscript] = ACTIONS(863),
    [sym_subscript] = ACTIONS(863),
    [sym_active_char] = ACTIONS(863),
    [sym_comment_char] = ACTIONS(863),
    [sym_text] = ACTIONS(865),
  },
  [307] = {
    [anon_sym_LBRACK] = ACTIONS(867),
    [sym__escape] = ACTIONS(867),
    [sym_begin_group] = ACTIONS(867),
    [sym_alignment_tab] = ACTIONS(867),
    [sym_parameter_char] = ACTIONS(867),
    [sym_superscript] = ACTIONS(867),
    [sym_subscript] = ACTIONS(867),
    [sym_active_char] = ACTIONS(867),
    [sym_comment_char] = ACTIONS(867),
    [sym_text] = ACTIONS(869),
  },
  [308] = {
    [anon_sym_LBRACK] = ACTIONS(871),
    [sym__escape] = ACTIONS(871),
    [sym_begin_group] = ACTIONS(871),
    [sym_alignment_tab] = ACTIONS(871),
    [sym_parameter_char] = ACTIONS(871),
    [sym_superscript] = ACTIONS(871),
    [sym_subscript] = ACTIONS(871),
    [sym_active_char] = ACTIONS(871),
    [sym_comment_char] = ACTIONS(871),
    [sym_text] = ACTIONS(873),
  },
  [309] = {
    [anon_sym_LBRACK] = ACTIONS(875),
    [sym__escape] = ACTIONS(875),
    [sym_begin_group] = ACTIONS(875),
    [sym_alignment_tab] = ACTIONS(875),
    [sym_parameter_char] = ACTIONS(875),
    [sym_superscript] = ACTIONS(875),
    [sym_subscript] = ACTIONS(875),
    [sym_active_char] = ACTIONS(875),
    [sym_comment_char] = ACTIONS(875),
    [sym_text] = ACTIONS(877),
  },
  [310] = {
    [anon_sym_LBRACK] = ACTIONS(879),
    [sym__escape] = ACTIONS(879),
    [sym_begin_group] = ACTIONS(879),
    [sym_alignment_tab] = ACTIONS(879),
    [sym_parameter_char] = ACTIONS(879),
    [sym_superscript] = ACTIONS(879),
    [sym_subscript] = ACTIONS(879),
    [sym_active_char] = ACTIONS(879),
    [sym_comment_char] = ACTIONS(879),
    [sym_text] = ACTIONS(881),
  },
  [311] = {
    [anon_sym_LBRACK] = ACTIONS(883),
    [sym__escape] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_parameter_char] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_active_char] = ACTIONS(883),
    [sym_comment_char] = ACTIONS(883),
    [sym_text] = ACTIONS(885),
  },
  [312] = {
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
  [313] = {
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
  [314] = {
    [sym__escape] = ACTIONS(895),
    [sym_verbatim_token] = ACTIONS(895),
  },
  [315] = {
    [anon_sym_LBRACK] = ACTIONS(897),
    [sym__escape] = ACTIONS(897),
    [sym_verbatim_token] = ACTIONS(897),
  },
  [316] = {
    [anon_sym_LBRACK] = ACTIONS(899),
    [sym__escape] = ACTIONS(899),
    [sym_verbatim_token] = ACTIONS(899),
  },
  [317] = {
    [anon_sym_LBRACK] = ACTIONS(901),
    [sym__escape] = ACTIONS(901),
    [sym_verbatim_token] = ACTIONS(901),
  },
  [318] = {
    [anon_sym_LBRACK] = ACTIONS(903),
    [sym__escape] = ACTIONS(903),
    [sym_verbatim_token] = ACTIONS(903),
  },
  [319] = {
    [anon_sym_LBRACK] = ACTIONS(905),
    [sym__escape] = ACTIONS(905),
    [sym_verbatim_token] = ACTIONS(905),
  },
  [320] = {
    [anon_sym_LBRACK] = ACTIONS(907),
    [sym__escape] = ACTIONS(907),
    [sym_verbatim_token] = ACTIONS(907),
  },
  [321] = {
    [anon_sym_LBRACK] = ACTIONS(909),
    [sym__escape] = ACTIONS(909),
    [sym_begin_group] = ACTIONS(911),
    [sym_verbatim_token] = ACTIONS(909),
  },
  [322] = {
    [ts_builtin_sym_end] = ACTIONS(913),
    [anon_sym_LBRACK] = ACTIONS(915),
    [anon_sym_RBRACK] = ACTIONS(915),
    [sym__escape] = ACTIONS(915),
    [sym_begin_group] = ACTIONS(915),
    [sym_end_group] = ACTIONS(915),
    [sym_math_shift] = ACTIONS(915),
    [sym_alignment_tab] = ACTIONS(915),
    [sym_parameter_char] = ACTIONS(915),
    [sym_superscript] = ACTIONS(915),
    [sym_subscript] = ACTIONS(915),
    [sym_active_char] = ACTIONS(915),
    [sym_comment_char] = ACTIONS(915),
    [sym_text] = ACTIONS(913),
  },
  [323] = {
    [sym_begin_group] = ACTIONS(733),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(917),
    [anon_sym_LBRACK] = ACTIONS(919),
    [anon_sym_RBRACK] = ACTIONS(919),
    [sym__escape] = ACTIONS(919),
    [sym_begin_group] = ACTIONS(919),
    [sym_end_group] = ACTIONS(919),
    [sym_math_shift] = ACTIONS(919),
    [sym_alignment_tab] = ACTIONS(919),
    [sym_parameter_char] = ACTIONS(919),
    [sym_superscript] = ACTIONS(919),
    [sym_subscript] = ACTIONS(919),
    [sym_active_char] = ACTIONS(919),
    [sym_comment_char] = ACTIONS(919),
    [sym_text] = ACTIONS(917),
  },
  [325] = {
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
    [sym_text] = ACTIONS(923),
  },
  [326] = {
    [sym__at_text_mode] = STATE(326),
    [sym_parameter] = STATE(326),
    [sym_text_environment] = STATE(326),
    [sym_display_math] = STATE(326),
    [sym_inline_math] = STATE(326),
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
    [sym_verbatim_environment] = STATE(326),
    [sym_escaped] = STATE(326),
    [sym_at_command] = STATE(326),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(326),
    [sym_opt_at_text_group] = STATE(326),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(326),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(326),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym__escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(715),
    [sym_end_group] = ACTIONS(925),
    [sym_math_shift] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(927),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(927),
    [sym_subscript] = ACTIONS(927),
    [sym_active_char] = ACTIONS(927),
    [sym_comment_char] = ACTIONS(727),
    [sym_text] = ACTIONS(930),
  },
  [327] = {
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
    [sym_text] = ACTIONS(935),
  },
  [328] = {
    [sym__at_text_mode] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_text_environment] = STATE(328),
    [sym_display_math] = STATE(328),
    [sym_inline_math] = STATE(328),
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
    [sym_verbatim_environment] = STATE(328),
    [sym_escaped] = STATE(328),
    [sym_at_command] = STATE(328),
    [sym_begin] = STATE(36),
    [sym_begin_token] = STATE(37),
    [sym_documentclass] = STATE(139),
    [sym_documentclass_token] = STATE(39),
    [sym_usepackage] = STATE(139),
    [sym_usepackage_token] = STATE(40),
    [sym_include] = STATE(139),
    [sym_include_token] = STATE(41),
    [sym_section] = STATE(139),
    [sym_section_token] = STATE(42),
    [sym_storage] = STATE(139),
    [sym_storage_token] = STATE(43),
    [sym_catcode] = STATE(139),
    [sym_catcode_token] = STATE(44),
    [sym_at_text_group] = STATE(328),
    [sym_opt_at_text_group] = STATE(328),
    [sym_at_token] = STATE(139),
    [sym_comment] = STATE(328),
    [sym_begin_opt] = STATE(142),
    [aux_sym_at_group_repeat1] = STATE(328),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(925),
    [sym__escape] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(715),
    [sym_math_shift] = ACTIONS(718),
    [sym_alignment_tab] = ACTIONS(937),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(937),
    [sym_subscript] = ACTIONS(937),
    [sym_active_char] = ACTIONS(937),
    [sym_comment_char] = ACTIONS(727),
    [sym_text] = ACTIONS(940),
  },
  [329] = {
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
  [330] = {
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
  [331] = {
    [anon_sym_LBRACK] = ACTIONS(951),
    [anon_sym_RBRACK] = ACTIONS(951),
    [sym__escape] = ACTIONS(951),
    [sym_begin_group] = ACTIONS(951),
    [sym_end_group] = ACTIONS(951),
    [sym_math_shift] = ACTIONS(951),
    [sym_alignment_tab] = ACTIONS(951),
    [sym_parameter_char] = ACTIONS(951),
    [sym_superscript] = ACTIONS(951),
    [sym_subscript] = ACTIONS(951),
    [sym_active_char] = ACTIONS(951),
    [sym_comment_char] = ACTIONS(951),
    [sym_text] = ACTIONS(953),
  },
  [332] = {
    [sym_end_group] = ACTIONS(955),
  },
  [333] = {
    [sym_end_group] = ACTIONS(957),
  },
  [334] = {
    [sym_end_group] = ACTIONS(959),
  },
  [335] = {
    [sym_end_group] = ACTIONS(961),
  },
  [336] = {
    [sym_end_group] = ACTIONS(963),
  },
  [337] = {
    [sym_end_group] = ACTIONS(965),
  },
  [338] = {
    [sym_end_group] = ACTIONS(967),
  },
  [339] = {
    [sym_end_group] = ACTIONS(969),
  },
  [340] = {
    [sym_end_group] = ACTIONS(971),
  },
  [341] = {
    [sym_end_group] = ACTIONS(973),
  },
  [342] = {
    [sym_end_group] = ACTIONS(975),
  },
  [343] = {
    [sym_end_group] = ACTIONS(977),
  },
  [344] = {
    [sym_end_group] = ACTIONS(979),
  },
  [345] = {
    [sym_end_group] = ACTIONS(981),
  },
  [346] = {
    [sym_end_group] = ACTIONS(983),
  },
  [347] = {
    [sym_end_group] = ACTIONS(985),
  },
  [348] = {
    [sym_end_group] = ACTIONS(987),
  },
  [349] = {
    [ts_builtin_sym_end] = ACTIONS(989),
    [anon_sym_LBRACK] = ACTIONS(991),
    [anon_sym_RBRACK] = ACTIONS(991),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_end_group] = ACTIONS(991),
    [sym_math_shift] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(991),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [sym_comment_char] = ACTIONS(991),
    [sym_text] = ACTIONS(989),
  },
  [350] = {
    [ts_builtin_sym_end] = ACTIONS(993),
    [anon_sym_LBRACK] = ACTIONS(995),
    [anon_sym_RBRACK] = ACTIONS(995),
    [sym__escape] = ACTIONS(995),
    [sym_begin_group] = ACTIONS(995),
    [sym_end_group] = ACTIONS(995),
    [sym_math_shift] = ACTIONS(995),
    [sym_alignment_tab] = ACTIONS(995),
    [sym_parameter_char] = ACTIONS(995),
    [sym_superscript] = ACTIONS(995),
    [sym_subscript] = ACTIONS(995),
    [sym_active_char] = ACTIONS(995),
    [sym_comment_char] = ACTIONS(995),
    [sym_text] = ACTIONS(993),
  },
  [351] = {
    [ts_builtin_sym_end] = ACTIONS(997),
    [anon_sym_LBRACK] = ACTIONS(999),
    [anon_sym_RBRACK] = ACTIONS(999),
    [sym__escape] = ACTIONS(999),
    [sym_begin_group] = ACTIONS(999),
    [sym_end_group] = ACTIONS(999),
    [sym_math_shift] = ACTIONS(999),
    [sym_alignment_tab] = ACTIONS(999),
    [sym_parameter_char] = ACTIONS(999),
    [sym_superscript] = ACTIONS(999),
    [sym_subscript] = ACTIONS(999),
    [sym_active_char] = ACTIONS(999),
    [sym_comment_char] = ACTIONS(999),
    [sym_text] = ACTIONS(997),
  },
  [352] = {
    [ts_builtin_sym_end] = ACTIONS(1001),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_end_group] = ACTIONS(1003),
    [sym_math_shift] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_comment_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1001),
  },
  [353] = {
    [ts_builtin_sym_end] = ACTIONS(1005),
    [anon_sym_LBRACK] = ACTIONS(1007),
    [anon_sym_RBRACK] = ACTIONS(1007),
    [sym__escape] = ACTIONS(1007),
    [sym_begin_group] = ACTIONS(1007),
    [sym_end_group] = ACTIONS(1007),
    [sym_math_shift] = ACTIONS(1007),
    [sym_alignment_tab] = ACTIONS(1007),
    [sym_parameter_char] = ACTIONS(1007),
    [sym_superscript] = ACTIONS(1007),
    [sym_subscript] = ACTIONS(1007),
    [sym_active_char] = ACTIONS(1007),
    [sym_comment_char] = ACTIONS(1007),
    [sym_text] = ACTIONS(1005),
  },
  [354] = {
    [ts_builtin_sym_end] = ACTIONS(1009),
    [anon_sym_LBRACK] = ACTIONS(1011),
    [anon_sym_RBRACK] = ACTIONS(1011),
    [sym__escape] = ACTIONS(1011),
    [sym_begin_group] = ACTIONS(1011),
    [sym_end_group] = ACTIONS(1011),
    [sym_math_shift] = ACTIONS(1011),
    [sym_alignment_tab] = ACTIONS(1011),
    [sym_parameter_char] = ACTIONS(1011),
    [sym_superscript] = ACTIONS(1011),
    [sym_subscript] = ACTIONS(1011),
    [sym_active_char] = ACTIONS(1011),
    [sym_comment_char] = ACTIONS(1011),
    [sym_text] = ACTIONS(1009),
  },
  [355] = {
    [ts_builtin_sym_end] = ACTIONS(1013),
    [anon_sym_LBRACK] = ACTIONS(1015),
    [anon_sym_RBRACK] = ACTIONS(1015),
    [sym__escape] = ACTIONS(1015),
    [sym_begin_group] = ACTIONS(1015),
    [sym_end_group] = ACTIONS(1015),
    [sym_math_shift] = ACTIONS(1015),
    [sym_alignment_tab] = ACTIONS(1015),
    [sym_parameter_char] = ACTIONS(1015),
    [sym_superscript] = ACTIONS(1015),
    [sym_subscript] = ACTIONS(1015),
    [sym_active_char] = ACTIONS(1015),
    [sym_comment_char] = ACTIONS(1015),
    [sym_text] = ACTIONS(1013),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(1017),
    [anon_sym_LBRACK] = ACTIONS(1019),
    [anon_sym_RBRACK] = ACTIONS(1019),
    [sym__escape] = ACTIONS(1019),
    [sym_begin_group] = ACTIONS(1019),
    [sym_end_group] = ACTIONS(1019),
    [sym_math_shift] = ACTIONS(1019),
    [sym_alignment_tab] = ACTIONS(1019),
    [sym_parameter_char] = ACTIONS(1019),
    [sym_superscript] = ACTIONS(1019),
    [sym_subscript] = ACTIONS(1019),
    [sym_active_char] = ACTIONS(1019),
    [sym_comment_char] = ACTIONS(1019),
    [sym_text] = ACTIONS(1017),
  },
  [357] = {
    [sym_end_group] = ACTIONS(1021),
  },
  [358] = {
    [anon_sym_LBRACK] = ACTIONS(1023),
    [sym__escape] = ACTIONS(1023),
    [sym_begin_group] = ACTIONS(1023),
    [sym_alignment_tab] = ACTIONS(1023),
    [sym_parameter_char] = ACTIONS(1023),
    [sym_superscript] = ACTIONS(1023),
    [sym_subscript] = ACTIONS(1023),
    [sym_active_char] = ACTIONS(1023),
    [sym_comment_char] = ACTIONS(1023),
    [sym_text] = ACTIONS(1025),
  },
  [359] = {
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym__escape] = ACTIONS(1027),
    [sym_begin_group] = ACTIONS(1027),
    [sym_alignment_tab] = ACTIONS(1027),
    [sym_parameter_char] = ACTIONS(1027),
    [sym_superscript] = ACTIONS(1027),
    [sym_subscript] = ACTIONS(1027),
    [sym_active_char] = ACTIONS(1027),
    [sym_comment_char] = ACTIONS(1027),
    [sym_text] = ACTIONS(1029),
  },
  [360] = {
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
  [361] = {
    [ts_builtin_sym_end] = ACTIONS(1035),
    [anon_sym_LBRACK] = ACTIONS(1037),
    [anon_sym_RBRACK] = ACTIONS(1037),
    [sym__escape] = ACTIONS(1037),
    [sym_begin_group] = ACTIONS(1037),
    [sym_end_group] = ACTIONS(1037),
    [sym_math_shift] = ACTIONS(1037),
    [sym_alignment_tab] = ACTIONS(1037),
    [sym_parameter_char] = ACTIONS(1037),
    [sym_superscript] = ACTIONS(1037),
    [sym_subscript] = ACTIONS(1037),
    [sym_active_char] = ACTIONS(1037),
    [sym_comment_char] = ACTIONS(1037),
    [sym_text] = ACTIONS(1035),
  },
  [362] = {
    [ts_builtin_sym_end] = ACTIONS(1039),
    [anon_sym_LBRACK] = ACTIONS(1041),
    [anon_sym_RBRACK] = ACTIONS(1041),
    [sym__escape] = ACTIONS(1041),
    [sym_begin_group] = ACTIONS(1041),
    [sym_end_group] = ACTIONS(1041),
    [sym_math_shift] = ACTIONS(1041),
    [sym_alignment_tab] = ACTIONS(1041),
    [sym_parameter_char] = ACTIONS(1041),
    [sym_superscript] = ACTIONS(1041),
    [sym_subscript] = ACTIONS(1041),
    [sym_active_char] = ACTIONS(1041),
    [sym_comment_char] = ACTIONS(1041),
    [sym_text] = ACTIONS(1039),
  },
  [363] = {
    [ts_builtin_sym_end] = ACTIONS(1043),
    [anon_sym_LBRACK] = ACTIONS(1045),
    [anon_sym_RBRACK] = ACTIONS(1045),
    [sym__escape] = ACTIONS(1045),
    [sym_begin_group] = ACTIONS(1045),
    [sym_end_group] = ACTIONS(1045),
    [sym_math_shift] = ACTIONS(1045),
    [sym_alignment_tab] = ACTIONS(1045),
    [sym_parameter_char] = ACTIONS(1045),
    [sym_superscript] = ACTIONS(1045),
    [sym_subscript] = ACTIONS(1045),
    [sym_active_char] = ACTIONS(1045),
    [sym_comment_char] = ACTIONS(1045),
    [sym_text] = ACTIONS(1043),
  },
  [364] = {
    [ts_builtin_sym_end] = ACTIONS(1047),
    [anon_sym_LBRACK] = ACTIONS(1049),
    [anon_sym_RBRACK] = ACTIONS(1049),
    [sym__escape] = ACTIONS(1049),
    [sym_begin_group] = ACTIONS(1049),
    [sym_end_group] = ACTIONS(1049),
    [sym_math_shift] = ACTIONS(1049),
    [sym_alignment_tab] = ACTIONS(1049),
    [sym_parameter_char] = ACTIONS(1049),
    [sym_superscript] = ACTIONS(1049),
    [sym_subscript] = ACTIONS(1049),
    [sym_active_char] = ACTIONS(1049),
    [sym_comment_char] = ACTIONS(1049),
    [sym_text] = ACTIONS(1047),
  },
  [365] = {
    [ts_builtin_sym_end] = ACTIONS(1051),
    [anon_sym_LBRACK] = ACTIONS(1053),
    [anon_sym_RBRACK] = ACTIONS(1053),
    [sym__escape] = ACTIONS(1053),
    [sym_begin_group] = ACTIONS(1053),
    [sym_end_group] = ACTIONS(1053),
    [sym_math_shift] = ACTIONS(1053),
    [sym_alignment_tab] = ACTIONS(1053),
    [sym_parameter_char] = ACTIONS(1053),
    [sym_superscript] = ACTIONS(1053),
    [sym_subscript] = ACTIONS(1053),
    [sym_active_char] = ACTIONS(1053),
    [sym_comment_char] = ACTIONS(1053),
    [sym_text] = ACTIONS(1051),
  },
  [366] = {
    [ts_builtin_sym_end] = ACTIONS(1055),
    [anon_sym_LBRACK] = ACTIONS(1057),
    [anon_sym_RBRACK] = ACTIONS(1057),
    [sym__escape] = ACTIONS(1057),
    [sym_begin_group] = ACTIONS(1057),
    [sym_end_group] = ACTIONS(1057),
    [sym_math_shift] = ACTIONS(1057),
    [sym_alignment_tab] = ACTIONS(1057),
    [sym_parameter_char] = ACTIONS(1057),
    [sym_superscript] = ACTIONS(1057),
    [sym_subscript] = ACTIONS(1057),
    [sym_active_char] = ACTIONS(1057),
    [sym_comment_char] = ACTIONS(1057),
    [sym_text] = ACTIONS(1055),
  },
  [367] = {
    [ts_builtin_sym_end] = ACTIONS(1059),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_RBRACK] = ACTIONS(1061),
    [sym__escape] = ACTIONS(1061),
    [sym_begin_group] = ACTIONS(1061),
    [sym_end_group] = ACTIONS(1061),
    [sym_math_shift] = ACTIONS(1061),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(1061),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(1061),
    [sym_active_char] = ACTIONS(1061),
    [sym_comment_char] = ACTIONS(1061),
    [sym_text] = ACTIONS(1059),
  },
  [368] = {
    [ts_builtin_sym_end] = ACTIONS(1063),
    [anon_sym_LBRACK] = ACTIONS(1065),
    [anon_sym_RBRACK] = ACTIONS(1065),
    [sym__escape] = ACTIONS(1065),
    [sym_begin_group] = ACTIONS(1065),
    [sym_end_group] = ACTIONS(1065),
    [sym_math_shift] = ACTIONS(1065),
    [sym_alignment_tab] = ACTIONS(1065),
    [sym_parameter_char] = ACTIONS(1065),
    [sym_superscript] = ACTIONS(1065),
    [sym_subscript] = ACTIONS(1065),
    [sym_active_char] = ACTIONS(1065),
    [sym_comment_char] = ACTIONS(1065),
    [sym_text] = ACTIONS(1063),
  },
  [369] = {
    [ts_builtin_sym_end] = ACTIONS(1067),
    [anon_sym_LBRACK] = ACTIONS(1069),
    [anon_sym_RBRACK] = ACTIONS(1069),
    [sym__escape] = ACTIONS(1069),
    [sym_begin_group] = ACTIONS(1069),
    [sym_end_group] = ACTIONS(1069),
    [sym_math_shift] = ACTIONS(1069),
    [sym_alignment_tab] = ACTIONS(1069),
    [sym_parameter_char] = ACTIONS(1069),
    [sym_superscript] = ACTIONS(1069),
    [sym_subscript] = ACTIONS(1069),
    [sym_active_char] = ACTIONS(1069),
    [sym_comment_char] = ACTIONS(1069),
    [sym_text] = ACTIONS(1067),
  },
  [370] = {
    [ts_builtin_sym_end] = ACTIONS(1071),
    [anon_sym_LBRACK] = ACTIONS(1073),
    [anon_sym_RBRACK] = ACTIONS(1073),
    [sym__escape] = ACTIONS(1073),
    [sym_begin_group] = ACTIONS(1073),
    [sym_end_group] = ACTIONS(1073),
    [sym_math_shift] = ACTIONS(1073),
    [sym_alignment_tab] = ACTIONS(1073),
    [sym_parameter_char] = ACTIONS(1073),
    [sym_superscript] = ACTIONS(1073),
    [sym_subscript] = ACTIONS(1073),
    [sym_active_char] = ACTIONS(1073),
    [sym_comment_char] = ACTIONS(1073),
    [sym_text] = ACTIONS(1071),
  },
  [371] = {
    [ts_builtin_sym_end] = ACTIONS(1075),
    [anon_sym_LBRACK] = ACTIONS(1077),
    [anon_sym_RBRACK] = ACTIONS(1077),
    [sym__escape] = ACTIONS(1077),
    [sym_begin_group] = ACTIONS(1077),
    [sym_end_group] = ACTIONS(1077),
    [sym_math_shift] = ACTIONS(1077),
    [sym_alignment_tab] = ACTIONS(1077),
    [sym_parameter_char] = ACTIONS(1077),
    [sym_superscript] = ACTIONS(1077),
    [sym_subscript] = ACTIONS(1077),
    [sym_active_char] = ACTIONS(1077),
    [sym_comment_char] = ACTIONS(1077),
    [sym_text] = ACTIONS(1075),
  },
  [372] = {
    [ts_builtin_sym_end] = ACTIONS(1079),
    [anon_sym_LBRACK] = ACTIONS(1081),
    [anon_sym_RBRACK] = ACTIONS(1081),
    [sym__escape] = ACTIONS(1081),
    [sym_begin_group] = ACTIONS(1081),
    [sym_end_group] = ACTIONS(1081),
    [sym_math_shift] = ACTIONS(1081),
    [sym_alignment_tab] = ACTIONS(1081),
    [sym_parameter_char] = ACTIONS(1081),
    [sym_superscript] = ACTIONS(1081),
    [sym_subscript] = ACTIONS(1081),
    [sym_active_char] = ACTIONS(1081),
    [sym_comment_char] = ACTIONS(1081),
    [sym_text] = ACTIONS(1079),
  },
  [373] = {
    [ts_builtin_sym_end] = ACTIONS(1083),
    [anon_sym_LBRACK] = ACTIONS(1085),
    [anon_sym_RBRACK] = ACTIONS(1085),
    [sym__escape] = ACTIONS(1085),
    [sym_begin_group] = ACTIONS(1085),
    [sym_end_group] = ACTIONS(1085),
    [sym_math_shift] = ACTIONS(1085),
    [sym_alignment_tab] = ACTIONS(1085),
    [sym_parameter_char] = ACTIONS(1085),
    [sym_superscript] = ACTIONS(1085),
    [sym_subscript] = ACTIONS(1085),
    [sym_active_char] = ACTIONS(1085),
    [sym_comment_char] = ACTIONS(1085),
    [sym_text] = ACTIONS(1083),
  },
  [374] = {
    [ts_builtin_sym_end] = ACTIONS(1087),
    [anon_sym_LBRACK] = ACTIONS(1089),
    [anon_sym_RBRACK] = ACTIONS(1089),
    [sym__escape] = ACTIONS(1089),
    [sym_begin_group] = ACTIONS(1089),
    [sym_end_group] = ACTIONS(1089),
    [sym_math_shift] = ACTIONS(1089),
    [sym_alignment_tab] = ACTIONS(1089),
    [sym_parameter_char] = ACTIONS(1089),
    [sym_superscript] = ACTIONS(1089),
    [sym_subscript] = ACTIONS(1089),
    [sym_active_char] = ACTIONS(1089),
    [sym_comment_char] = ACTIONS(1089),
    [sym_text] = ACTIONS(1087),
  },
  [375] = {
    [ts_builtin_sym_end] = ACTIONS(1091),
    [anon_sym_LBRACK] = ACTIONS(1093),
    [anon_sym_RBRACK] = ACTIONS(1093),
    [sym__escape] = ACTIONS(1093),
    [sym_begin_group] = ACTIONS(1093),
    [sym_end_group] = ACTIONS(1093),
    [sym_math_shift] = ACTIONS(1093),
    [sym_alignment_tab] = ACTIONS(1093),
    [sym_parameter_char] = ACTIONS(1093),
    [sym_superscript] = ACTIONS(1093),
    [sym_subscript] = ACTIONS(1093),
    [sym_active_char] = ACTIONS(1093),
    [sym_comment_char] = ACTIONS(1093),
    [sym_text] = ACTIONS(1091),
  },
  [376] = {
    [ts_builtin_sym_end] = ACTIONS(1095),
    [anon_sym_LBRACK] = ACTIONS(1097),
    [anon_sym_RBRACK] = ACTIONS(1097),
    [sym__escape] = ACTIONS(1097),
    [sym_begin_group] = ACTIONS(1097),
    [sym_end_group] = ACTIONS(1097),
    [sym_math_shift] = ACTIONS(1097),
    [sym_alignment_tab] = ACTIONS(1097),
    [sym_parameter_char] = ACTIONS(1097),
    [sym_superscript] = ACTIONS(1097),
    [sym_subscript] = ACTIONS(1097),
    [sym_active_char] = ACTIONS(1097),
    [sym_comment_char] = ACTIONS(1097),
    [sym_text] = ACTIONS(1095),
  },
  [377] = {
    [ts_builtin_sym_end] = ACTIONS(1099),
    [anon_sym_LBRACK] = ACTIONS(1101),
    [anon_sym_RBRACK] = ACTIONS(1101),
    [sym__escape] = ACTIONS(1101),
    [sym_begin_group] = ACTIONS(1101),
    [sym_end_group] = ACTIONS(1101),
    [sym_math_shift] = ACTIONS(1101),
    [sym_alignment_tab] = ACTIONS(1101),
    [sym_parameter_char] = ACTIONS(1101),
    [sym_superscript] = ACTIONS(1101),
    [sym_subscript] = ACTIONS(1101),
    [sym_active_char] = ACTIONS(1101),
    [sym_comment_char] = ACTIONS(1101),
    [sym_text] = ACTIONS(1099),
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
  [15] = {.count = 1, .reusable = false}, SHIFT(48),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = true}, SHIFT(48),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = false}, SHIFT(49),
  [29] = {.count = 1, .reusable = false}, SHIFT(50),
  [31] = {.count = 1, .reusable = false}, SHIFT(51),
  [33] = {.count = 1, .reusable = false}, SHIFT(52),
  [35] = {.count = 1, .reusable = false}, SHIFT(53),
  [37] = {.count = 1, .reusable = false}, SHIFT(54),
  [39] = {.count = 1, .reusable = false}, SHIFT(55),
  [41] = {.count = 1, .reusable = false}, SHIFT(56),
  [43] = {.count = 1, .reusable = false}, SHIFT(57),
  [45] = {.count = 1, .reusable = false}, SHIFT(58),
  [47] = {.count = 1, .reusable = false}, SHIFT(59),
  [49] = {.count = 1, .reusable = false}, SHIFT(60),
  [51] = {.count = 1, .reusable = false}, SHIFT(61),
  [53] = {.count = 1, .reusable = false}, SHIFT(62),
  [55] = {.count = 1, .reusable = true}, SHIFT(62),
  [57] = {.count = 1, .reusable = false}, SHIFT(63),
  [59] = {.count = 1, .reusable = false}, SHIFT(64),
  [61] = {.count = 1, .reusable = false}, SHIFT(65),
  [63] = {.count = 1, .reusable = false}, SHIFT(71),
  [65] = {.count = 1, .reusable = true}, SHIFT(71),
  [67] = {.count = 1, .reusable = true}, SHIFT(72),
  [69] = {.count = 1, .reusable = true}, SHIFT(73),
  [71] = {.count = 1, .reusable = false}, SHIFT(73),
  [73] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [77] = {.count = 1, .reusable = false}, SHIFT(75),
  [79] = {.count = 1, .reusable = true}, SHIFT(75),
  [81] = {.count = 1, .reusable = false}, SHIFT(92),
  [83] = {.count = 1, .reusable = false}, SHIFT(95),
  [85] = {.count = 1, .reusable = false}, SHIFT(99),
  [87] = {.count = 1, .reusable = false}, SHIFT(102),
  [89] = {.count = 1, .reusable = false}, SHIFT(105),
  [91] = {.count = 1, .reusable = false}, SHIFT(108),
  [93] = {.count = 1, .reusable = false}, SHIFT(111),
  [95] = {.count = 1, .reusable = false}, SHIFT(114),
  [97] = {.count = 1, .reusable = false}, SHIFT(117),
  [99] = {.count = 1, .reusable = true}, SHIFT(118),
  [101] = {.count = 1, .reusable = false}, SHIFT(120),
  [103] = {.count = 1, .reusable = false}, SHIFT(123),
  [105] = {.count = 1, .reusable = true}, SHIFT(123),
  [107] = {.count = 1, .reusable = true}, SHIFT(124),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [113] = {.count = 1, .reusable = true}, SHIFT(2),
  [115] = {.count = 1, .reusable = true}, SHIFT(126),
  [117] = {.count = 1, .reusable = true}, SHIFT(4),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(135),
  [125] = {.count = 1, .reusable = false}, SHIFT(137),
  [127] = {.count = 1, .reusable = false}, SHIFT(138),
  [129] = {.count = 1, .reusable = false}, SHIFT(143),
  [131] = {.count = 1, .reusable = true}, SHIFT(143),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [137] = {.count = 1, .reusable = false}, SHIFT(144),
  [139] = {.count = 1, .reusable = false}, SHIFT(146),
  [141] = {.count = 1, .reusable = true}, SHIFT(146),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [145] = {.count = 1, .reusable = false}, SHIFT(147),
  [147] = {.count = 1, .reusable = true}, SHIFT(147),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [181] = {.count = 1, .reusable = false}, SHIFT(150),
  [183] = {.count = 1, .reusable = false}, SHIFT(151),
  [185] = {.count = 1, .reusable = true}, SHIFT(151),
  [187] = {.count = 1, .reusable = false}, SHIFT(152),
  [189] = {.count = 1, .reusable = false}, SHIFT(153),
  [191] = {.count = 1, .reusable = false}, SHIFT(154),
  [193] = {.count = 1, .reusable = true}, SHIFT(154),
  [195] = {.count = 1, .reusable = true}, SHIFT(156),
  [197] = {.count = 1, .reusable = true}, SHIFT(157),
  [199] = {.count = 1, .reusable = false}, SHIFT(159),
  [201] = {.count = 1, .reusable = false}, SHIFT(161),
  [203] = {.count = 1, .reusable = true}, SHIFT(161),
  [205] = {.count = 1, .reusable = false}, SHIFT(163),
  [207] = {.count = 1, .reusable = true}, SHIFT(163),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_math_mode, 1),
  [211] = {.count = 1, .reusable = false}, SHIFT(164),
  [213] = {.count = 1, .reusable = true}, SHIFT(164),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [217] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [221] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [223] = {.count = 1, .reusable = true}, SHIFT(92),
  [225] = {.count = 1, .reusable = false}, SHIFT(167),
  [227] = {.count = 1, .reusable = true}, SHIFT(167),
  [229] = {.count = 1, .reusable = true}, SHIFT(184),
  [231] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 2),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 2),
  [235] = {.count = 1, .reusable = true}, SHIFT(185),
  [237] = {.count = 1, .reusable = false}, SHIFT(187),
  [239] = {.count = 1, .reusable = true}, SHIFT(188),
  [241] = {.count = 1, .reusable = false}, SHIFT(189),
  [243] = {.count = 1, .reusable = false}, SHIFT(190),
  [245] = {.count = 1, .reusable = false}, SHIFT(192),
  [247] = {.count = 1, .reusable = true}, SHIFT(192),
  [249] = {.count = 1, .reusable = true}, SHIFT(193),
  [251] = {.count = 1, .reusable = false}, SHIFT(194),
  [253] = {.count = 1, .reusable = true}, SHIFT(195),
  [255] = {.count = 1, .reusable = false}, SHIFT(196),
  [257] = {.count = 1, .reusable = true}, SHIFT(197),
  [259] = {.count = 1, .reusable = false}, SHIFT(198),
  [261] = {.count = 1, .reusable = true}, SHIFT(199),
  [263] = {.count = 1, .reusable = false}, SHIFT(200),
  [265] = {.count = 1, .reusable = true}, SHIFT(201),
  [267] = {.count = 1, .reusable = false}, SHIFT(202),
  [269] = {.count = 1, .reusable = true}, SHIFT(203),
  [271] = {.count = 1, .reusable = false}, SHIFT(204),
  [273] = {.count = 1, .reusable = false}, SHIFT(205),
  [275] = {.count = 1, .reusable = false}, SHIFT(206),
  [277] = {.count = 1, .reusable = true}, SHIFT(206),
  [279] = {.count = 1, .reusable = false}, SHIFT(208),
  [281] = {.count = 1, .reusable = false}, SHIFT(184),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 2),
  [285] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 2),
  [287] = {.count = 1, .reusable = false}, SHIFT(211),
  [289] = {.count = 1, .reusable = true}, SHIFT(211),
  [291] = {.count = 1, .reusable = false}, SHIFT(212),
  [293] = {.count = 1, .reusable = false}, SHIFT(213),
  [295] = {.count = 1, .reusable = false}, SHIFT(214),
  [297] = {.count = 1, .reusable = false}, SHIFT(215),
  [299] = {.count = 1, .reusable = false}, SHIFT(216),
  [301] = {.count = 1, .reusable = false}, SHIFT(217),
  [303] = {.count = 1, .reusable = false}, SHIFT(218),
  [305] = {.count = 1, .reusable = false}, SHIFT(219),
  [307] = {.count = 1, .reusable = false}, SHIFT(220),
  [309] = {.count = 1, .reusable = false}, SHIFT(221),
  [311] = {.count = 1, .reusable = false}, SHIFT(222),
  [313] = {.count = 1, .reusable = false}, SHIFT(223),
  [315] = {.count = 1, .reusable = false}, SHIFT(224),
  [317] = {.count = 1, .reusable = false}, SHIFT(225),
  [319] = {.count = 1, .reusable = false}, SHIFT(226),
  [321] = {.count = 1, .reusable = false}, SHIFT(227),
  [323] = {.count = 1, .reusable = false}, SHIFT(228),
  [325] = {.count = 1, .reusable = false}, SHIFT(229),
  [327] = {.count = 1, .reusable = false}, SHIFT(230),
  [329] = {.count = 1, .reusable = false}, SHIFT(231),
  [331] = {.count = 1, .reusable = false}, SHIFT(232),
  [333] = {.count = 1, .reusable = false}, SHIFT(233),
  [335] = {.count = 1, .reusable = false}, SHIFT(234),
  [337] = {.count = 1, .reusable = false}, SHIFT(235),
  [339] = {.count = 1, .reusable = false}, SHIFT(236),
  [341] = {.count = 1, .reusable = false}, SHIFT(237),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2),
  [347] = {.count = 1, .reusable = true}, SHIFT(237),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [353] = {.count = 1, .reusable = false}, SHIFT(239),
  [355] = {.count = 1, .reusable = false}, SHIFT(241),
  [357] = {.count = 1, .reusable = true}, SHIFT(241),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [365] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [371] = {.count = 1, .reusable = true}, SHIFT(244),
  [373] = {.count = 1, .reusable = true}, SHIFT(245),
  [375] = {.count = 1, .reusable = false}, SHIFT(246),
  [377] = {.count = 1, .reusable = false}, SHIFT(247),
  [379] = {.count = 1, .reusable = false}, SHIFT(248),
  [381] = {.count = 1, .reusable = false}, SHIFT(249),
  [383] = {.count = 1, .reusable = false}, SHIFT(250),
  [385] = {.count = 1, .reusable = true}, SHIFT(250),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_at_command, 1),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [399] = {.count = 1, .reusable = false}, SHIFT(252),
  [401] = {.count = 1, .reusable = true}, SHIFT(252),
  [403] = {.count = 1, .reusable = false}, SHIFT(254),
  [405] = {.count = 1, .reusable = true}, SHIFT(254),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [415] = {.count = 1, .reusable = false}, SHIFT(256),
  [417] = {.count = 1, .reusable = true}, SHIFT(256),
  [419] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [421] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [424] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [427] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [430] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [433] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(147),
  [436] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [439] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(147),
  [445] = {.count = 1, .reusable = true}, SHIFT(257),
  [447] = {.count = 1, .reusable = true}, SHIFT(258),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [453] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [455] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(151),
  [458] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(151),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [467] = {.count = 1, .reusable = false}, SHIFT(259),
  [469] = {.count = 1, .reusable = false}, SHIFT(260),
  [471] = {.count = 1, .reusable = true}, SHIFT(260),
  [473] = {.count = 1, .reusable = true}, SHIFT(261),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 3),
  [479] = {.count = 1, .reusable = false}, SHIFT(262),
  [481] = {.count = 1, .reusable = false}, SHIFT(264),
  [483] = {.count = 1, .reusable = true}, SHIFT(264),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [497] = {.count = 1, .reusable = false}, SHIFT(267),
  [499] = {.count = 1, .reusable = true}, SHIFT(267),
  [501] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [504] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(63),
  [507] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(64),
  [510] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [512] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(164),
  [515] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [518] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(7),
  [521] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(164),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 3),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 3),
  [528] = {.count = 1, .reusable = true}, SHIFT(268),
  [530] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(167),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(167),
  [536] = {.count = 1, .reusable = true}, SHIFT(269),
  [538] = {.count = 1, .reusable = true}, SHIFT(270),
  [540] = {.count = 1, .reusable = true}, SHIFT(271),
  [542] = {.count = 1, .reusable = true}, SHIFT(272),
  [544] = {.count = 1, .reusable = true}, SHIFT(273),
  [546] = {.count = 1, .reusable = true}, SHIFT(274),
  [548] = {.count = 1, .reusable = true}, SHIFT(275),
  [550] = {.count = 1, .reusable = true}, SHIFT(276),
  [552] = {.count = 1, .reusable = true}, SHIFT(277),
  [554] = {.count = 1, .reusable = true}, SHIFT(278),
  [556] = {.count = 1, .reusable = true}, SHIFT(279),
  [558] = {.count = 1, .reusable = true}, SHIFT(280),
  [560] = {.count = 1, .reusable = true}, SHIFT(281),
  [562] = {.count = 1, .reusable = true}, SHIFT(282),
  [564] = {.count = 1, .reusable = true}, SHIFT(283),
  [566] = {.count = 1, .reusable = true}, SHIFT(284),
  [568] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [570] = {.count = 1, .reusable = true}, SHIFT(285),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 3),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 3),
  [576] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2),
  [578] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_environment_repeat1, 2), SHIFT_REPEAT(187),
  [581] = {.count = 1, .reusable = true}, SHIFT(286),
  [583] = {.count = 1, .reusable = true}, SHIFT(289),
  [585] = {.count = 1, .reusable = true}, SHIFT(290),
  [587] = {.count = 1, .reusable = true}, SHIFT(291),
  [589] = {.count = 1, .reusable = true}, SHIFT(292),
  [591] = {.count = 1, .reusable = true}, SHIFT(293),
  [593] = {.count = 1, .reusable = true}, SHIFT(294),
  [595] = {.count = 1, .reusable = false}, SHIFT(295),
  [597] = {.count = 1, .reusable = true}, SHIFT(296),
  [599] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [601] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 3),
  [607] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(211),
  [610] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(211),
  [613] = {.count = 1, .reusable = true}, SHIFT(297),
  [615] = {.count = 1, .reusable = true}, SHIFT(298),
  [617] = {.count = 1, .reusable = true}, SHIFT(299),
  [619] = {.count = 1, .reusable = true}, SHIFT(300),
  [621] = {.count = 1, .reusable = true}, SHIFT(301),
  [623] = {.count = 1, .reusable = true}, SHIFT(302),
  [625] = {.count = 1, .reusable = true}, SHIFT(303),
  [627] = {.count = 1, .reusable = true}, SHIFT(304),
  [629] = {.count = 1, .reusable = true}, SHIFT(305),
  [631] = {.count = 1, .reusable = true}, SHIFT(306),
  [633] = {.count = 1, .reusable = true}, SHIFT(307),
  [635] = {.count = 1, .reusable = true}, SHIFT(308),
  [637] = {.count = 1, .reusable = true}, SHIFT(309),
  [639] = {.count = 1, .reusable = true}, SHIFT(310),
  [641] = {.count = 1, .reusable = true}, SHIFT(311),
  [643] = {.count = 1, .reusable = true}, SHIFT(312),
  [645] = {.count = 1, .reusable = true}, SHIFT(313),
  [647] = {.count = 1, .reusable = true}, SHIFT(314),
  [649] = {.count = 1, .reusable = true}, SHIFT(315),
  [651] = {.count = 1, .reusable = true}, SHIFT(316),
  [653] = {.count = 1, .reusable = true}, SHIFT(317),
  [655] = {.count = 1, .reusable = true}, SHIFT(318),
  [657] = {.count = 1, .reusable = true}, SHIFT(319),
  [659] = {.count = 1, .reusable = true}, SHIFT(320),
  [661] = {.count = 1, .reusable = true}, SHIFT(321),
  [663] = {.count = 1, .reusable = true}, SHIFT(322),
  [665] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [667] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [669] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [671] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [677] = {.count = 1, .reusable = true}, SHIFT(324),
  [679] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [681] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_at_token, 2),
  [685] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [687] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 2),
  [689] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [691] = {.count = 1, .reusable = false}, SHIFT(325),
  [693] = {.count = 1, .reusable = false}, SHIFT(326),
  [695] = {.count = 1, .reusable = true}, SHIFT(326),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 2),
  [699] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [701] = {.count = 1, .reusable = false}, SHIFT(328),
  [703] = {.count = 1, .reusable = true}, SHIFT(328),
  [705] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [707] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 3),
  [709] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [712] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(248),
  [715] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(138),
  [718] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [721] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(254),
  [724] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [727] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(7),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(254),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [735] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [737] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(256),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(256),
  [743] = {.count = 1, .reusable = true}, SHIFT(329),
  [745] = {.count = 1, .reusable = true}, SHIFT(330),
  [747] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [751] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(260),
  [754] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(260),
  [757] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [759] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [761] = {.count = 1, .reusable = true}, SHIFT(331),
  [763] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode, 1),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [769] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [771] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [773] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(267),
  [776] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(267),
  [779] = {.count = 1, .reusable = true}, SHIFT(332),
  [781] = {.count = 1, .reusable = true}, SHIFT(333),
  [783] = {.count = 1, .reusable = true}, SHIFT(334),
  [785] = {.count = 1, .reusable = true}, SHIFT(335),
  [787] = {.count = 1, .reusable = true}, SHIFT(336),
  [789] = {.count = 1, .reusable = true}, SHIFT(337),
  [791] = {.count = 1, .reusable = true}, SHIFT(338),
  [793] = {.count = 1, .reusable = true}, SHIFT(339),
  [795] = {.count = 1, .reusable = true}, SHIFT(340),
  [797] = {.count = 1, .reusable = true}, SHIFT(341),
  [799] = {.count = 1, .reusable = true}, SHIFT(342),
  [801] = {.count = 1, .reusable = true}, SHIFT(343),
  [803] = {.count = 1, .reusable = true}, SHIFT(344),
  [805] = {.count = 1, .reusable = true}, SHIFT(345),
  [807] = {.count = 1, .reusable = true}, SHIFT(346),
  [809] = {.count = 1, .reusable = true}, SHIFT(347),
  [811] = {.count = 1, .reusable = true}, SHIFT(348),
  [813] = {.count = 1, .reusable = true}, SHIFT(349),
  [815] = {.count = 1, .reusable = true}, SHIFT(350),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 4),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 4),
  [821] = {.count = 1, .reusable = true}, SHIFT(351),
  [823] = {.count = 1, .reusable = true}, SHIFT(352),
  [825] = {.count = 1, .reusable = true}, SHIFT(353),
  [827] = {.count = 1, .reusable = true}, SHIFT(354),
  [829] = {.count = 1, .reusable = true}, SHIFT(355),
  [831] = {.count = 1, .reusable = true}, SHIFT(356),
  [833] = {.count = 1, .reusable = true}, SHIFT(357),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align, 4),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align, 4),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align_star, 4),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align_star, 4),
  [843] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray, 4),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray, 4),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [849] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [851] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation, 4),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation, 4),
  [855] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation_star, 4),
  [857] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation_star, 4),
  [859] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign, 4),
  [861] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign, 4),
  [863] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign_star, 4),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign_star, 4),
  [867] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather, 4),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather, 4),
  [871] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather_star, 4),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather_star, 4),
  [875] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline, 4),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline, 4),
  [879] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multline_star, 4),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multline_star, 4),
  [883] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split, 4),
  [885] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split, 4),
  [887] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split_star, 4),
  [889] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split_star, 4),
  [891] = {.count = 1, .reusable = false}, REDUCE(sym_begin_math, 4),
  [893] = {.count = 1, .reusable = true}, REDUCE(sym_begin_math, 4),
  [895] = {.count = 1, .reusable = false}, REDUCE(sym_begin_verbatim, 4),
  [897] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim, 4),
  [899] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim, 4),
  [903] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [905] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim, 4),
  [907] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [909] = {.count = 1, .reusable = false}, REDUCE(sym_begin_lstlisting, 4),
  [911] = {.count = 1, .reusable = false}, REDUCE(sym_begin_minted, 4),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [915] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [919] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [921] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 3),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [925] = {.count = 1, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2),
  [927] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(326),
  [930] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(326),
  [933] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 3),
  [935] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [937] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(328),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(328),
  [943] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 5),
  [945] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 5),
  [947] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 5),
  [949] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 5),
  [951] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [955] = {.count = 1, .reusable = true}, SHIFT(360),
  [957] = {.count = 1, .reusable = true}, SHIFT(361),
  [959] = {.count = 1, .reusable = true}, SHIFT(362),
  [961] = {.count = 1, .reusable = true}, SHIFT(363),
  [963] = {.count = 1, .reusable = true}, SHIFT(364),
  [965] = {.count = 1, .reusable = true}, SHIFT(365),
  [967] = {.count = 1, .reusable = true}, SHIFT(366),
  [969] = {.count = 1, .reusable = true}, SHIFT(367),
  [971] = {.count = 1, .reusable = true}, SHIFT(368),
  [973] = {.count = 1, .reusable = true}, SHIFT(369),
  [975] = {.count = 1, .reusable = true}, SHIFT(370),
  [977] = {.count = 1, .reusable = true}, SHIFT(371),
  [979] = {.count = 1, .reusable = true}, SHIFT(372),
  [981] = {.count = 1, .reusable = true}, SHIFT(373),
  [983] = {.count = 1, .reusable = true}, SHIFT(374),
  [985] = {.count = 1, .reusable = true}, SHIFT(375),
  [987] = {.count = 1, .reusable = true}, SHIFT(376),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_end_verbatim, 4),
  [991] = {.count = 1, .reusable = false}, REDUCE(sym_end_verbatim, 4),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim, 4),
  [995] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim, 4),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim_star, 4),
  [999] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim_star, 4),
  [1001] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim, 4),
  [1003] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim, 4),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [1007] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [1009] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim, 4),
  [1011] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim, 4),
  [1013] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [1015] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_end_lstlisting, 4),
  [1019] = {.count = 1, .reusable = false}, REDUCE(sym_end_lstlisting, 4),
  [1021] = {.count = 1, .reusable = true}, SHIFT(377),
  [1023] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat, 5),
  [1025] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat, 5),
  [1027] = {.count = 1, .reusable = false}, REDUCE(sym_begin_alignat_star, 5),
  [1029] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat_star, 5),
  [1031] = {.count = 1, .reusable = true}, REDUCE(sym_end_align, 4),
  [1033] = {.count = 1, .reusable = false}, REDUCE(sym_end_align, 4),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym_end_align_star, 4),
  [1037] = {.count = 1, .reusable = false}, REDUCE(sym_end_align_star, 4),
  [1039] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat, 4),
  [1041] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat, 4),
  [1043] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat_star, 4),
  [1045] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat_star, 4),
  [1047] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray, 4),
  [1049] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray, 4),
  [1051] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray_star, 4),
  [1053] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray_star, 4),
  [1055] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation, 4),
  [1057] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation, 4),
  [1059] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation_star, 4),
  [1061] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation_star, 4),
  [1063] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign, 4),
  [1065] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign, 4),
  [1067] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign_star, 4),
  [1069] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign_star, 4),
  [1071] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather, 4),
  [1073] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather, 4),
  [1075] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather_star, 4),
  [1077] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather_star, 4),
  [1079] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline, 4),
  [1081] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline, 4),
  [1083] = {.count = 1, .reusable = true}, REDUCE(sym_end_multline_star, 4),
  [1085] = {.count = 1, .reusable = false}, REDUCE(sym_end_multline_star, 4),
  [1087] = {.count = 1, .reusable = true}, REDUCE(sym_end_split, 4),
  [1089] = {.count = 1, .reusable = false}, REDUCE(sym_end_split, 4),
  [1091] = {.count = 1, .reusable = true}, REDUCE(sym_end_split_star, 4),
  [1093] = {.count = 1, .reusable = false}, REDUCE(sym_end_split_star, 4),
  [1095] = {.count = 1, .reusable = true}, REDUCE(sym_end_math, 4),
  [1097] = {.count = 1, .reusable = false}, REDUCE(sym_end_math, 4),
  [1099] = {.count = 1, .reusable = true}, REDUCE(sym_end_minted, 4),
  [1101] = {.count = 1, .reusable = false}, REDUCE(sym_end_minted, 4),
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
