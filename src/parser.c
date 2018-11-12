#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 495
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 1

enum {
  anon_sym_LBRACK = 1,
  anon_sym_RBRACK = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_align = 5,
  anon_sym_align_STAR = 6,
  anon_sym_alignat = 7,
  anon_sym_alignat_STAR = 8,
  anon_sym_displaymath = 9,
  anon_sym_dmath = 10,
  anon_sym_dmath_STAR = 11,
  anon_sym_dseries = 12,
  anon_sym_dseries_STAR = 13,
  anon_sym_dgroup = 14,
  anon_sym_dgroup_STAR = 15,
  anon_sym_darray = 16,
  anon_sym_darray_STAR = 17,
  anon_sym_eqnarray = 18,
  anon_sym_eqnarray_STAR = 19,
  anon_sym_equation = 20,
  anon_sym_equation_STAR = 21,
  anon_sym_flalign = 22,
  anon_sym_flalign_STAR = 23,
  anon_sym_gather = 24,
  anon_sym_gather_STAR = 25,
  anon_sym_multiline = 26,
  anon_sym_multiline_STAR = 27,
  anon_sym_split = 28,
  anon_sym_split_STAR = 29,
  anon_sym_math = 30,
  anon_sym_verbatim = 31,
  anon_sym_Verbatim = 32,
  anon_sym_Verbatim_STAR = 33,
  anon_sym_BVerbatim = 34,
  anon_sym_BVerbatim_STAR = 35,
  anon_sym_LVerbatim = 36,
  anon_sym_LVerbatim_STAR = 37,
  anon_sym_lstlisting = 38,
  anon_sym_minted = 39,
  anon_sym_tag = 40,
  aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH = 41,
  anon_sym_begin = 42,
  anon_sym_end = 43,
  anon_sym_documentclass = 44,
  anon_sym_usepackage = 45,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 46,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 47,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 48,
  anon_sym_EQ = 49,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 50,
  anon_sym_makeatletter = 51,
  anon_sym_makeatother = 52,
  sym__escape = 53,
  sym_begin_group = 54,
  sym_end_group = 55,
  sym_math_shift = 56,
  sym_alignment_tab = 57,
  sym__end_of_line = 58,
  sym_parameter_char = 59,
  sym_superscript = 60,
  sym_subscript = 61,
  sym__name = 62,
  sym__at_name = 63,
  sym_active_char = 64,
  sym_comment_char = 65,
  sym_text = 66,
  sym_number = 67,
  sym__verbatim_token = 68,
  sym_magic = 69,
  sym_comment_text = 70,
  sym_document = 71,
  sym__text_mode = 72,
  sym_text_mode = 73,
  sym__at_text_mode = 74,
  sym_at_group = 75,
  sym__math_mode = 76,
  sym_math_mode = 77,
  sym_parameter = 78,
  sym_text_environment = 79,
  sym_math_environment = 80,
  sym_display_math = 81,
  sym_inline_math = 82,
  sym_begin_display_math = 83,
  sym_end_display_math = 84,
  sym_begin_inline_math = 85,
  sym_end_inline_math = 86,
  sym_begin_align = 87,
  sym_end_align = 88,
  sym_begin_align_star = 89,
  sym_end_align_star = 90,
  sym_begin_alignat = 91,
  sym_end_alignat = 92,
  sym_begin_alignat_star = 93,
  sym_end_alignat_star = 94,
  sym_begin_displaymath = 95,
  sym_end_displaymath = 96,
  sym_begin_dmath = 97,
  sym_end_dmath = 98,
  sym_begin_dmath_star = 99,
  sym_end_dmath_star = 100,
  sym_begin_dseries = 101,
  sym_end_dseries = 102,
  sym_begin_dseries_star = 103,
  sym_end_dseries_star = 104,
  sym_begin_dgroup = 105,
  sym_end_dgroup = 106,
  sym_begin_dgroup_star = 107,
  sym_end_dgroup_star = 108,
  sym_begin_darray = 109,
  sym_end_darray = 110,
  sym_begin_darray_star = 111,
  sym_end_darray_star = 112,
  sym_begin_eqnarray = 113,
  sym_end_eqnarray = 114,
  sym_begin_eqnarray_star = 115,
  sym_end_eqnarray_star = 116,
  sym_begin_equation = 117,
  sym_end_equation = 118,
  sym_begin_equation_star = 119,
  sym_end_equation_star = 120,
  sym_begin_flalign = 121,
  sym_end_flalign = 122,
  sym_begin_flalign_star = 123,
  sym_end_flalign_star = 124,
  sym_begin_gather = 125,
  sym_end_gather = 126,
  sym_begin_gather_star = 127,
  sym_end_gather_star = 128,
  sym_begin_multiline = 129,
  sym_end_multiline = 130,
  sym_begin_multiline_star = 131,
  sym_end_multiline_star = 132,
  sym_begin_split = 133,
  sym_end_split = 134,
  sym_begin_split_star = 135,
  sym_end_split_star = 136,
  sym_begin_math = 137,
  sym_end_math = 138,
  sym_begin_verbatim = 139,
  sym_end_verbatim = 140,
  sym_begin_Verbatim = 141,
  sym_end_Verbatim = 142,
  sym_begin_Verbatim_star = 143,
  sym_end_Verbatim_star = 144,
  sym_begin_BVerbatim = 145,
  sym_end_BVerbatim = 146,
  sym_begin_BVerbatim_star = 147,
  sym_end_BVerbatim_star = 148,
  sym_begin_LVerbatim = 149,
  sym_end_LVerbatim = 150,
  sym_begin_LVerbatim_star = 151,
  sym_end_LVerbatim_star = 152,
  sym_begin_lstlisting = 153,
  sym_end_lstlisting = 154,
  sym_begin_minted = 155,
  sym_end_minted = 156,
  sym_tag = 157,
  sym_tag_token = 158,
  sym_verbatim_environment = 159,
  sym_escaped = 160,
  sym_command = 161,
  sym_at_command = 162,
  sym_begin = 163,
  sym_begin_token = 164,
  sym_end = 165,
  sym_end_token = 166,
  sym_documentclass = 167,
  sym_documentclass_token = 168,
  sym_usepackage = 169,
  sym_usepackage_token = 170,
  sym_include = 171,
  sym_include_token = 172,
  sym_section = 173,
  sym_section_token = 174,
  sym_storage = 175,
  sym_storage_token = 176,
  sym_catcode = 177,
  sym_catcode_token = 178,
  sym_makeatletter = 179,
  sym_makeatletter_token = 180,
  sym_makeatother = 181,
  sym_makeatother_token = 182,
  sym_text_group = 183,
  sym_at_text_group = 184,
  sym_simple_text_group = 185,
  sym_opt_text_group = 186,
  sym_opt_at_text_group = 187,
  sym_math_group = 188,
  sym_opt_math_group = 189,
  sym_math_text_group = 190,
  sym_token = 191,
  sym_at_token = 192,
  sym_comment = 193,
  sym_verbatim_text = 194,
  sym_begin_opt = 195,
  sym_end_opt = 196,
  aux_sym_text_mode_repeat1 = 197,
  aux_sym_at_group_repeat1 = 198,
  aux_sym_math_mode_repeat1 = 199,
  aux_sym_verbatim_text_repeat1 = 200,
  anon_alias_sym_text = 201,
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
  [anon_sym_displaymath] = "displaymath",
  [anon_sym_dmath] = "dmath",
  [anon_sym_dmath_STAR] = "dmath*",
  [anon_sym_dseries] = "dseries",
  [anon_sym_dseries_STAR] = "dseries*",
  [anon_sym_dgroup] = "dgroup",
  [anon_sym_dgroup_STAR] = "dgroup*",
  [anon_sym_darray] = "darray",
  [anon_sym_darray_STAR] = "darray*",
  [anon_sym_eqnarray] = "eqnarray",
  [anon_sym_eqnarray_STAR] = "eqnarray*",
  [anon_sym_equation] = "equation",
  [anon_sym_equation_STAR] = "equation*",
  [anon_sym_flalign] = "flalign",
  [anon_sym_flalign_STAR] = "flalign*",
  [anon_sym_gather] = "gather",
  [anon_sym_gather_STAR] = "gather*",
  [anon_sym_multiline] = "multiline",
  [anon_sym_multiline_STAR] = "multiline*",
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
  [sym__end_of_line] = "_end_of_line",
  [sym_parameter_char] = "parameter_char",
  [sym_superscript] = "superscript",
  [sym_subscript] = "subscript",
  [sym__name] = "_name",
  [sym__at_name] = "_at_name",
  [sym_active_char] = "active_char",
  [sym_comment_char] = "comment_char",
  [sym_text] = "text",
  [sym_number] = "number",
  [sym__verbatim_token] = "_verbatim_token",
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
  [sym_begin_display_math] = "begin_display_math",
  [sym_end_display_math] = "end_display_math",
  [sym_begin_inline_math] = "begin_inline_math",
  [sym_end_inline_math] = "end_inline_math",
  [sym_begin_align] = "begin_align",
  [sym_end_align] = "end_align",
  [sym_begin_align_star] = "begin_align_star",
  [sym_end_align_star] = "end_align_star",
  [sym_begin_alignat] = "begin_alignat",
  [sym_end_alignat] = "end_alignat",
  [sym_begin_alignat_star] = "begin_alignat_star",
  [sym_end_alignat_star] = "end_alignat_star",
  [sym_begin_displaymath] = "begin_displaymath",
  [sym_end_displaymath] = "end_displaymath",
  [sym_begin_dmath] = "begin_dmath",
  [sym_end_dmath] = "end_dmath",
  [sym_begin_dmath_star] = "begin_dmath_star",
  [sym_end_dmath_star] = "end_dmath_star",
  [sym_begin_dseries] = "begin_dseries",
  [sym_end_dseries] = "end_dseries",
  [sym_begin_dseries_star] = "begin_dseries_star",
  [sym_end_dseries_star] = "end_dseries_star",
  [sym_begin_dgroup] = "begin_dgroup",
  [sym_end_dgroup] = "end_dgroup",
  [sym_begin_dgroup_star] = "begin_dgroup_star",
  [sym_end_dgroup_star] = "end_dgroup_star",
  [sym_begin_darray] = "begin_darray",
  [sym_end_darray] = "end_darray",
  [sym_begin_darray_star] = "begin_darray_star",
  [sym_end_darray_star] = "end_darray_star",
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
  [sym_begin_multiline] = "begin_multiline",
  [sym_end_multiline] = "end_multiline",
  [sym_begin_multiline_star] = "begin_multiline_star",
  [sym_end_multiline_star] = "end_multiline_star",
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
  [sym_verbatim_text] = "verbatim_text",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_at_group_repeat1] = "at_group_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [anon_alias_sym_text] = "text",
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
  [anon_sym_displaymath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dmath] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dmath_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dseries] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dseries_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dgroup_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_darray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_darray_STAR] = {
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
  [anon_sym_multiline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_multiline_STAR] = {
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
  [sym__end_of_line] = {
    .visible = false,
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
  [sym__verbatim_token] = {
    .visible = false,
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
  [sym_begin_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_end_inline_math] = {
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
  [sym_begin_displaymath] = {
    .visible = true,
    .named = true,
  },
  [sym_end_displaymath] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_dmath] = {
    .visible = true,
    .named = true,
  },
  [sym_end_dmath] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_dmath_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_dmath_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_dseries] = {
    .visible = true,
    .named = true,
  },
  [sym_end_dseries] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_dseries_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_dseries_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_dgroup] = {
    .visible = true,
    .named = true,
  },
  [sym_end_dgroup] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_dgroup_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_dgroup_star] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_darray] = {
    .visible = true,
    .named = true,
  },
  [sym_end_darray] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_darray_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_darray_star] = {
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
  [sym_begin_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym_end_multiline] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_multiline_star] = {
    .visible = true,
    .named = true,
  },
  [sym_end_multiline_star] = {
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
  [sym_verbatim_text] = {
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
  [aux_sym_verbatim_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_text] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_text,
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
        ADVANCE(138);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'g')
        ADVANCE(165);
      if (lookahead == 'i')
        ADVANCE(172);
      if (lookahead == 'k')
        ADVANCE(181);
      if (lookahead == 'l')
        ADVANCE(183);
      if (lookahead == 'm')
        ADVANCE(193);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(258);
      if (lookahead == 'v')
        ADVANCE(268);
      if (lookahead == 'x')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '}')
        ADVANCE(278);
      if (lookahead == '~')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
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
      if (lookahead == 'a')
        ADVANCE(90);
      if (lookahead == 'e')
        ADVANCE(96);
      if (lookahead == 'g')
        ADVANCE(98);
      if (lookahead == 'i')
        ADVANCE(104);
      if (lookahead == 'm')
        ADVANCE(114);
      if (lookahead == 'o')
        ADVANCE(119);
      if (lookahead == 's')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_darray);
      if (lookahead == '*')
        ADVANCE(95);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_darray_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'f')
        ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'o')
        ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_dgroup);
      if (lookahead == '*')
        ADVANCE(103);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_dgroup_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_displaymath);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_dmath);
      if (lookahead == '*')
        ADVANCE(118);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_dmath_STAR);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
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
      if (lookahead == 's')
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_dseries);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_dseries_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(139);
      if (lookahead == 'n')
        ADVANCE(140);
      if (lookahead == 'q')
        ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(143);
      if (lookahead == 'u')
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'y')
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(149);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
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
      if (lookahead == 'o')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(156);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(164);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(166);
      if (lookahead == 'd')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'h')
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
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(171);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(174);
      if (lookahead == 'p')
        ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'u')
        ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(194);
      if (lookahead == 'i')
        ADVANCE(212);
      if (lookahead == 'u')
        ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(195);
      if (lookahead == 't')
        ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(199);
      if (lookahead == 'o')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(214);
      if (lookahead == 't')
        ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_minted);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(anon_sym_multiline);
      if (lookahead == '*')
        ADVANCE(226);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_multiline_STAR);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
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
      if (lookahead == 't')
        ADVANCE(57);
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
      if (lookahead == 'r')
        ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'h')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(236);
      if (lookahead == 'p')
        ADVANCE(241);
      if (lookahead == 'u')
        ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'o')
        ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'n')
        ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'l')
        ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(245);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(248);
      if (lookahead == 's')
        ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(236);
      if (lookahead == 'u')
        ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 's')
        ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'p')
        ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'c')
        ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'k')
        ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'g')
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'e')
        ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'r')
        ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'b')
        ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'a')
        ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 't')
        ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'i')
        ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'm')
        ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead == '@')
        ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '@')
        ADVANCE(15);
      if (lookahead == 'd')
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_begin_group);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_end_group);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_active_char);
      END_STATE();
    case 280:
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
        ADVANCE(138);
      if (lookahead == 'f')
        ADVANCE(157);
      if (lookahead == 'g')
        ADVANCE(165);
      if (lookahead == 'i')
        ADVANCE(172);
      if (lookahead == 'k')
        ADVANCE(181);
      if (lookahead == 'l')
        ADVANCE(183);
      if (lookahead == 'm')
        ADVANCE(193);
      if (lookahead == 'p')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(235);
      if (lookahead == 't')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(258);
      if (lookahead == 'v')
        ADVANCE(268);
      if (lookahead == 'x')
        ADVANCE(276);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '}')
        ADVANCE(278);
      if (lookahead == '~')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('h' <= lookahead && lookahead <= 'z'))
        ADVANCE(26);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      END_STATE();
    case 282:
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
        ADVANCE(277);
      if (lookahead == '~')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(283);
      if ((lookahead < '[' || lookahead > '_') &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(283);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 285:
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
        ADVANCE(277);
      if (lookahead == '~')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(286);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 287:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead == 'k')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 'u')
        ADVANCE(382);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(291);
      if (lookahead == 'p')
        ADVANCE(296);
      if (lookahead == 's')
        ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(293);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(307);
      if (lookahead == 'h')
        ADVANCE(313);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(310);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == '`')
        ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(319);
      if (lookahead == 'o')
        ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'f')
        ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(322);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'm')
        ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(335);
      if (lookahead == 'p')
        ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(337);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'u')
        ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(339);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(307);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(345);
      if (lookahead == 'i')
        ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(346);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'l')
        ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(353);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(354);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(355);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_makeatletter);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(357);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(360);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(362);
      if (lookahead == 't')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(363);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'h')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead == 'u')
        ADVANCE(373);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 't')
        ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'i')
        ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'o')
        ADVANCE(372);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(374);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(375);
      if (lookahead == 's')
        ADVANCE(378);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(376);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'r')
        ADVANCE(377);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(362);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(368);
      if (lookahead == 'u')
        ADVANCE(379);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'b')
        ADVANCE(380);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 's')
        ADVANCE(381);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'p')
        ADVANCE(385);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'c')
        ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'k')
        ADVANCE(388);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'a')
        ADVANCE(389);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(391);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(393);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'e')
        ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 396:
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
        ADVANCE(277);
      if (lookahead == '}')
        ADVANCE(278);
      if (lookahead == '~')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '[' || lookahead > '_'))
        ADVANCE(284);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(397);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 398:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(398);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(281);
      END_STATE();
    case 399:
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
        ADVANCE(277);
      if (lookahead == '}')
        ADVANCE(278);
      if (lookahead == '~')
        ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(400);
      ADVANCE(284);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(400);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '!')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '!')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(409);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'T')
        ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == 'X')
        ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(409);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(407);
      if (lookahead != 0)
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_magic);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_comment_text);
      if (lookahead == '\n')
        ADVANCE(402);
      if (lookahead == '!')
        ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(410);
      if (lookahead != 0)
        ADVANCE(409);
      END_STATE();
    case 411:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(411);
      END_STATE();
    case 412:
      if (lookahead == '$')
        ADVANCE(9);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(48);
      if (lookahead == '{')
        ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(412);
      END_STATE();
    case 413:
      if (lookahead == '\n')
        ADVANCE(414);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__end_of_line);
      END_STATE();
    case 415:
      if (lookahead == '\n')
        ADVANCE(416);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(416);
      if (lookahead != 0)
        ADVANCE(416);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__verbatim_token);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(416);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(416);
      if (lookahead != 0)
        ADVANCE(416);
      END_STATE();
    case 418:
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead == 'k')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(419);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(420);
      if (lookahead == 'u')
        ADVANCE(382);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(356);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(421);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'g')
        ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 423:
      if (lookahead == '\n')
        ADVANCE(416);
      if (lookahead == '\\')
        ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(416);
      if (lookahead != 0)
        ADVANCE(416);
      END_STATE();
    case 424:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'e')
        ADVANCE(425);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead == 'k')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(344);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 'u')
        ADVANCE(382);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(393);
      if (lookahead == 'n')
        ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__name);
      if (lookahead == 'd')
        ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_end);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(295);
      END_STATE();
    case 428:
      if (lookahead == 'B')
        ADVANCE(429);
      if (lookahead == 'L')
        ADVANCE(439);
      if (lookahead == 'V')
        ADVANCE(449);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'd')
        ADVANCE(467);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'g')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(533);
      if (lookahead == 'm')
        ADVANCE(543);
      if (lookahead == 's')
        ADVANCE(561);
      if (lookahead == 'v')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(430);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(431);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(432);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(433);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(434);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(435);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(436);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(437);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(438);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_BVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'V')
        ADVANCE(440);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(441);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(442);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(443);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(444);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(445);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(446);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(447);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(448);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_LVerbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(450);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(451);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(452);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(453);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(454);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(455);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(456);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(457);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_Verbatim_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(459);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(460);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(461);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(462);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(463);
      if (lookahead == 'a')
        ADVANCE(464);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_align_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(465);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(466);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_alignat_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(468);
      if (lookahead == 'g')
        ADVANCE(474);
      if (lookahead == 'i')
        ADVANCE(480);
      if (lookahead == 'm')
        ADVANCE(490);
      if (lookahead == 's')
        ADVANCE(495);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(469);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(470);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(471);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(472);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_darray);
      if (lookahead == '*')
        ADVANCE(473);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_darray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(475);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(476);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u')
        ADVANCE(477);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(478);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_dgroup);
      if (lookahead == '*')
        ADVANCE(479);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_dgroup_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(481);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(482);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(483);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(484);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(485);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(486);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(487);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(488);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(489);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_displaymath);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(491);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(492);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(493);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_dmath);
      if (lookahead == '*')
        ADVANCE(494);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_dmath_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(496);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(497);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
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
        ADVANCE(284);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(499);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(500);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_dseries);
      if (lookahead == '*')
        ADVANCE(501);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_dseries_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q')
        ADVANCE(503);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(504);
      if (lookahead == 'u')
        ADVANCE(511);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(505);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(506);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(507);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(508);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y')
        ADVANCE(509);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(510);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_eqnarray_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(512);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(513);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(514);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o')
        ADVANCE(515);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(516);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(517);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_equation_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(519);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(520);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(521);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(522);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(523);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(524);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(525);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_flalign_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(527);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(528);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(529);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(530);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(531);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(532);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_gather_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(534);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(535);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(536);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(537);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's')
        ADVANCE(538);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(539);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(540);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(541);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g')
        ADVANCE(542);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(544);
      if (lookahead == 'i')
        ADVANCE(547);
      if (lookahead == 'u')
        ADVANCE(552);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(545);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h')
        ADVANCE(546);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_math);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(548);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(549);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(550);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd')
        ADVANCE(551);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_minted);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(553);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(554);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(555);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(556);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(557);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n')
        ADVANCE(558);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(559);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_multiline);
      if (lookahead == '*')
        ADVANCE(560);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_multiline_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p')
        ADVANCE(562);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l')
        ADVANCE(563);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(564);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(565);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(566);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_split_STAR);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e')
        ADVANCE(568);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r')
        ADVANCE(569);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b')
        ADVANCE(570);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a')
        ADVANCE(571);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't')
        ADVANCE(572);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i')
        ADVANCE(573);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm')
        ADVANCE(574);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_verbatim);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'B')
        ADVANCE(429);
      if (lookahead == 'L')
        ADVANCE(439);
      if (lookahead == 'V')
        ADVANCE(449);
      if (lookahead == 'a')
        ADVANCE(458);
      if (lookahead == 'd')
        ADVANCE(467);
      if (lookahead == 'e')
        ADVANCE(502);
      if (lookahead == 'f')
        ADVANCE(518);
      if (lookahead == 'g')
        ADVANCE(526);
      if (lookahead == 'l')
        ADVANCE(533);
      if (lookahead == 'm')
        ADVANCE(543);
      if (lookahead == 's')
        ADVANCE(561);
      if (lookahead == 'v')
        ADVANCE(567);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(575);
      if (lookahead != 0 &&
          (lookahead < '#' || lookahead > '&') &&
          (lookahead < '[' || lookahead > '_') &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~')
        ADVANCE(284);
      END_STATE();
    case 576:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 577:
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(577);
      END_STATE();
    case 578:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(579);
      if (lookahead == 'b')
        ADVANCE(591);
      if (lookahead == 'c')
        ADVANCE(596);
      if (lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'i')
        ADVANCE(623);
      if (lookahead == 'k')
        ADVANCE(632);
      if (lookahead == 'm')
        ADVANCE(634);
      if (lookahead == 'p')
        ADVANCE(648);
      if (lookahead == 's')
        ADVANCE(656);
      if (lookahead == 'u')
        ADVANCE(671);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(580);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(581);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(582);
      if (lookahead == 'p')
        ADVANCE(586);
      if (lookahead == 's')
        ADVANCE(589);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(583);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(584);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(587);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(588);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(590);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(592);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(593);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(594);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(595);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_begin);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(597);
      if (lookahead == 'h')
        ADVANCE(603);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(598);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(599);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(600);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(601);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(602);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == '`')
        ADVANCE(83);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(604);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(605);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(606);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(607);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(609);
      if (lookahead == 'o')
        ADVANCE(611);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'f')
        ADVANCE(610);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(612);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(613);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'm')
        ADVANCE(614);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(615);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(616);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(617);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(618);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(619);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(620);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(621);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(622);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_documentclass);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'n')
        ADVANCE(624);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(625);
      if (lookahead == 'p')
        ADVANCE(630);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'l')
        ADVANCE(626);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(627);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'd')
        ADVANCE(628);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(629);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'u')
        ADVANCE(631);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(629);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'c')
        ADVANCE(633);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(597);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(635);
      if (lookahead == 'i')
        ADVANCE(645);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(636);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(637);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(638);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(639);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(640);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(641);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(642);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(643);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(644);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_makeatother);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(646);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(647);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(589);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(649);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(650);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(651);
      if (lookahead == 't')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(652);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(653);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(654);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(655);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'h')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(657);
      if (lookahead == 'u')
        ADVANCE(662);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(658);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 't')
        ADVANCE(659);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'i')
        ADVANCE(660);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'o')
        ADVANCE(661);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'n')
        ADVANCE(585);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(663);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(664);
      if (lookahead == 's')
        ADVANCE(667);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(665);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'r')
        ADVANCE(666);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(651);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(657);
      if (lookahead == 'u')
        ADVANCE(668);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'b')
        ADVANCE(669);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 's')
        ADVANCE(670);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(657);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(672);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(673);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'p')
        ADVANCE(674);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(675);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'c')
        ADVANCE(676);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'k')
        ADVANCE(677);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'a')
        ADVANCE(678);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'g')
        ADVANCE(679);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(680);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_usepackage);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'd')
        ADVANCE(682);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym__at_name);
      if (lookahead == 'e')
        ADVANCE(609);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 684:
      if (lookahead == 'a')
        ADVANCE(288);
      if (lookahead == 'b')
        ADVANCE(301);
      if (lookahead == 'c')
        ADVANCE(306);
      if (lookahead == 'd')
        ADVANCE(318);
      if (lookahead == 'e')
        ADVANCE(425);
      if (lookahead == 'i')
        ADVANCE(333);
      if (lookahead == 'k')
        ADVANCE(342);
      if (lookahead == 'm')
        ADVANCE(419);
      if (lookahead == 'p')
        ADVANCE(359);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead == 't')
        ADVANCE(420);
      if (lookahead == 'u')
        ADVANCE(382);
      if (lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 685:
      if (lookahead == ')')
        ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(685);
      END_STATE();
    case 686:
      if (lookahead == 'e')
        ADVANCE(687);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(686);
      END_STATE();
    case 687:
      if (lookahead == 'n')
        ADVANCE(688);
      END_STATE();
    case 688:
      if (lookahead == 'd')
        ADVANCE(689);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 690:
      if (lookahead == '}')
        ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(690);
      END_STATE();
    case 691:
      if (lookahead == '(')
        ADVANCE(12);
      if (lookahead == '[')
        ADVANCE(46);
      if (lookahead == 'a')
        ADVANCE(579);
      if (lookahead == 'b')
        ADVANCE(591);
      if (lookahead == 'c')
        ADVANCE(596);
      if (lookahead == 'd')
        ADVANCE(608);
      if (lookahead == 'i')
        ADVANCE(623);
      if (lookahead == 'k')
        ADVANCE(632);
      if (lookahead == 'm')
        ADVANCE(692);
      if (lookahead == 'p')
        ADVANCE(648);
      if (lookahead == 's')
        ADVANCE(656);
      if (lookahead == 'u')
        ADVANCE(671);
      if (lookahead == 'e' ||
          lookahead == 'g' ||
          lookahead == 'x')
        ADVANCE(681);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(394);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z'))
        ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']')
        ADVANCE(394);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(645);
      if (('@' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(15);
      END_STATE();
    case 693:
      if (lookahead == 'B')
        ADVANCE(694);
      if (lookahead == 'L')
        ADVANCE(703);
      if (lookahead == 'V')
        ADVANCE(712);
      if (lookahead == 'a')
        ADVANCE(720);
      if (lookahead == 'd')
        ADVANCE(727);
      if (lookahead == 'e')
        ADVANCE(758);
      if (lookahead == 'f')
        ADVANCE(772);
      if (lookahead == 'g')
        ADVANCE(779);
      if (lookahead == 'l')
        ADVANCE(785);
      if (lookahead == 'm')
        ADVANCE(795);
      if (lookahead == 's')
        ADVANCE(812);
      if (lookahead == 'v')
        ADVANCE(817);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(693);
      END_STATE();
    case 694:
      if (lookahead == 'V')
        ADVANCE(695);
      END_STATE();
    case 695:
      if (lookahead == 'e')
        ADVANCE(696);
      END_STATE();
    case 696:
      if (lookahead == 'r')
        ADVANCE(697);
      END_STATE();
    case 697:
      if (lookahead == 'b')
        ADVANCE(698);
      END_STATE();
    case 698:
      if (lookahead == 'a')
        ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 't')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'i')
        ADVANCE(701);
      END_STATE();
    case 701:
      if (lookahead == 'm')
        ADVANCE(702);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BVerbatim);
      if (lookahead == '*')
        ADVANCE(25);
      END_STATE();
    case 703:
      if (lookahead == 'V')
        ADVANCE(704);
      END_STATE();
    case 704:
      if (lookahead == 'e')
        ADVANCE(705);
      END_STATE();
    case 705:
      if (lookahead == 'r')
        ADVANCE(706);
      END_STATE();
    case 706:
      if (lookahead == 'b')
        ADVANCE(707);
      END_STATE();
    case 707:
      if (lookahead == 'a')
        ADVANCE(708);
      END_STATE();
    case 708:
      if (lookahead == 't')
        ADVANCE(709);
      END_STATE();
    case 709:
      if (lookahead == 'i')
        ADVANCE(710);
      END_STATE();
    case 710:
      if (lookahead == 'm')
        ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_LVerbatim);
      if (lookahead == '*')
        ADVANCE(36);
      END_STATE();
    case 712:
      if (lookahead == 'e')
        ADVANCE(713);
      END_STATE();
    case 713:
      if (lookahead == 'r')
        ADVANCE(714);
      END_STATE();
    case 714:
      if (lookahead == 'b')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'a')
        ADVANCE(716);
      END_STATE();
    case 716:
      if (lookahead == 't')
        ADVANCE(717);
      END_STATE();
    case 717:
      if (lookahead == 'i')
        ADVANCE(718);
      END_STATE();
    case 718:
      if (lookahead == 'm')
        ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_Verbatim);
      if (lookahead == '*')
        ADVANCE(45);
      END_STATE();
    case 720:
      if (lookahead == 'l')
        ADVANCE(721);
      END_STATE();
    case 721:
      if (lookahead == 'i')
        ADVANCE(722);
      END_STATE();
    case 722:
      if (lookahead == 'g')
        ADVANCE(723);
      END_STATE();
    case 723:
      if (lookahead == 'n')
        ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_align);
      if (lookahead == '*')
        ADVANCE(67);
      if (lookahead == 'a')
        ADVANCE(725);
      END_STATE();
    case 725:
      if (lookahead == 't')
        ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_alignat);
      if (lookahead == '*')
        ADVANCE(70);
      END_STATE();
    case 727:
      if (lookahead == 'a')
        ADVANCE(728);
      if (lookahead == 'g')
        ADVANCE(733);
      if (lookahead == 'i')
        ADVANCE(738);
      if (lookahead == 'm')
        ADVANCE(748);
      if (lookahead == 's')
        ADVANCE(752);
      END_STATE();
    case 728:
      if (lookahead == 'r')
        ADVANCE(729);
      END_STATE();
    case 729:
      if (lookahead == 'r')
        ADVANCE(730);
      END_STATE();
    case 730:
      if (lookahead == 'a')
        ADVANCE(731);
      END_STATE();
    case 731:
      if (lookahead == 'y')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_darray);
      if (lookahead == '*')
        ADVANCE(95);
      END_STATE();
    case 733:
      if (lookahead == 'r')
        ADVANCE(734);
      END_STATE();
    case 734:
      if (lookahead == 'o')
        ADVANCE(735);
      END_STATE();
    case 735:
      if (lookahead == 'u')
        ADVANCE(736);
      END_STATE();
    case 736:
      if (lookahead == 'p')
        ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_dgroup);
      if (lookahead == '*')
        ADVANCE(103);
      END_STATE();
    case 738:
      if (lookahead == 's')
        ADVANCE(739);
      END_STATE();
    case 739:
      if (lookahead == 'p')
        ADVANCE(740);
      END_STATE();
    case 740:
      if (lookahead == 'l')
        ADVANCE(741);
      END_STATE();
    case 741:
      if (lookahead == 'a')
        ADVANCE(742);
      END_STATE();
    case 742:
      if (lookahead == 'y')
        ADVANCE(743);
      END_STATE();
    case 743:
      if (lookahead == 'm')
        ADVANCE(744);
      END_STATE();
    case 744:
      if (lookahead == 'a')
        ADVANCE(745);
      END_STATE();
    case 745:
      if (lookahead == 't')
        ADVANCE(746);
      END_STATE();
    case 746:
      if (lookahead == 'h')
        ADVANCE(747);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_displaymath);
      END_STATE();
    case 748:
      if (lookahead == 'a')
        ADVANCE(749);
      END_STATE();
    case 749:
      if (lookahead == 't')
        ADVANCE(750);
      END_STATE();
    case 750:
      if (lookahead == 'h')
        ADVANCE(751);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_dmath);
      if (lookahead == '*')
        ADVANCE(118);
      END_STATE();
    case 752:
      if (lookahead == 'e')
        ADVANCE(753);
      END_STATE();
    case 753:
      if (lookahead == 'r')
        ADVANCE(754);
      END_STATE();
    case 754:
      if (lookahead == 'i')
        ADVANCE(755);
      END_STATE();
    case 755:
      if (lookahead == 'e')
        ADVANCE(756);
      END_STATE();
    case 756:
      if (lookahead == 's')
        ADVANCE(757);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_dseries);
      if (lookahead == '*')
        ADVANCE(137);
      END_STATE();
    case 758:
      if (lookahead == 'q')
        ADVANCE(759);
      END_STATE();
    case 759:
      if (lookahead == 'n')
        ADVANCE(760);
      if (lookahead == 'u')
        ADVANCE(766);
      END_STATE();
    case 760:
      if (lookahead == 'a')
        ADVANCE(761);
      END_STATE();
    case 761:
      if (lookahead == 'r')
        ADVANCE(762);
      END_STATE();
    case 762:
      if (lookahead == 'r')
        ADVANCE(763);
      END_STATE();
    case 763:
      if (lookahead == 'a')
        ADVANCE(764);
      END_STATE();
    case 764:
      if (lookahead == 'y')
        ADVANCE(765);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_eqnarray);
      if (lookahead == '*')
        ADVANCE(149);
      END_STATE();
    case 766:
      if (lookahead == 'a')
        ADVANCE(767);
      END_STATE();
    case 767:
      if (lookahead == 't')
        ADVANCE(768);
      END_STATE();
    case 768:
      if (lookahead == 'i')
        ADVANCE(769);
      END_STATE();
    case 769:
      if (lookahead == 'o')
        ADVANCE(770);
      END_STATE();
    case 770:
      if (lookahead == 'n')
        ADVANCE(771);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_equation);
      if (lookahead == '*')
        ADVANCE(156);
      END_STATE();
    case 772:
      if (lookahead == 'l')
        ADVANCE(773);
      END_STATE();
    case 773:
      if (lookahead == 'a')
        ADVANCE(774);
      END_STATE();
    case 774:
      if (lookahead == 'l')
        ADVANCE(775);
      END_STATE();
    case 775:
      if (lookahead == 'i')
        ADVANCE(776);
      END_STATE();
    case 776:
      if (lookahead == 'g')
        ADVANCE(777);
      END_STATE();
    case 777:
      if (lookahead == 'n')
        ADVANCE(778);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_flalign);
      if (lookahead == '*')
        ADVANCE(164);
      END_STATE();
    case 779:
      if (lookahead == 'a')
        ADVANCE(780);
      END_STATE();
    case 780:
      if (lookahead == 't')
        ADVANCE(781);
      END_STATE();
    case 781:
      if (lookahead == 'h')
        ADVANCE(782);
      END_STATE();
    case 782:
      if (lookahead == 'e')
        ADVANCE(783);
      END_STATE();
    case 783:
      if (lookahead == 'r')
        ADVANCE(784);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_gather);
      if (lookahead == '*')
        ADVANCE(171);
      END_STATE();
    case 785:
      if (lookahead == 's')
        ADVANCE(786);
      END_STATE();
    case 786:
      if (lookahead == 't')
        ADVANCE(787);
      END_STATE();
    case 787:
      if (lookahead == 'l')
        ADVANCE(788);
      END_STATE();
    case 788:
      if (lookahead == 'i')
        ADVANCE(789);
      END_STATE();
    case 789:
      if (lookahead == 's')
        ADVANCE(790);
      END_STATE();
    case 790:
      if (lookahead == 't')
        ADVANCE(791);
      END_STATE();
    case 791:
      if (lookahead == 'i')
        ADVANCE(792);
      END_STATE();
    case 792:
      if (lookahead == 'n')
        ADVANCE(793);
      END_STATE();
    case 793:
      if (lookahead == 'g')
        ADVANCE(794);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_lstlisting);
      END_STATE();
    case 795:
      if (lookahead == 'a')
        ADVANCE(796);
      if (lookahead == 'i')
        ADVANCE(799);
      if (lookahead == 'u')
        ADVANCE(804);
      END_STATE();
    case 796:
      if (lookahead == 't')
        ADVANCE(797);
      END_STATE();
    case 797:
      if (lookahead == 'h')
        ADVANCE(798);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_math);
      END_STATE();
    case 799:
      if (lookahead == 'n')
        ADVANCE(800);
      END_STATE();
    case 800:
      if (lookahead == 't')
        ADVANCE(801);
      END_STATE();
    case 801:
      if (lookahead == 'e')
        ADVANCE(802);
      END_STATE();
    case 802:
      if (lookahead == 'd')
        ADVANCE(803);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_minted);
      END_STATE();
    case 804:
      if (lookahead == 'l')
        ADVANCE(805);
      END_STATE();
    case 805:
      if (lookahead == 't')
        ADVANCE(806);
      END_STATE();
    case 806:
      if (lookahead == 'i')
        ADVANCE(807);
      END_STATE();
    case 807:
      if (lookahead == 'l')
        ADVANCE(808);
      END_STATE();
    case 808:
      if (lookahead == 'i')
        ADVANCE(809);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        ADVANCE(810);
      END_STATE();
    case 810:
      if (lookahead == 'e')
        ADVANCE(811);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_multiline);
      if (lookahead == '*')
        ADVANCE(226);
      END_STATE();
    case 812:
      if (lookahead == 'p')
        ADVANCE(813);
      END_STATE();
    case 813:
      if (lookahead == 'l')
        ADVANCE(814);
      END_STATE();
    case 814:
      if (lookahead == 'i')
        ADVANCE(815);
      END_STATE();
    case 815:
      if (lookahead == 't')
        ADVANCE(816);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_split);
      if (lookahead == '*')
        ADVANCE(245);
      END_STATE();
    case 817:
      if (lookahead == 'e')
        ADVANCE(818);
      END_STATE();
    case 818:
      if (lookahead == 'r')
        ADVANCE(819);
      END_STATE();
    case 819:
      if (lookahead == 'b')
        ADVANCE(820);
      END_STATE();
    case 820:
      if (lookahead == 'a')
        ADVANCE(821);
      END_STATE();
    case 821:
      if (lookahead == 't')
        ADVANCE(822);
      END_STATE();
    case 822:
      if (lookahead == 'i')
        ADVANCE(823);
      END_STATE();
    case 823:
      if (lookahead == 'm')
        ADVANCE(824);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_verbatim);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 282},
  [2] = {.lex_state = 285},
  [3] = {.lex_state = 287},
  [4] = {.lex_state = 396},
  [5] = {.lex_state = 282},
  [6] = {.lex_state = 398},
  [7] = {.lex_state = 399},
  [8] = {.lex_state = 401},
  [9] = {.lex_state = 411},
  [10] = {.lex_state = 411},
  [11] = {.lex_state = 282},
  [12] = {.lex_state = 282},
  [13] = {.lex_state = 282},
  [14] = {.lex_state = 282},
  [15] = {.lex_state = 412},
  [16] = {.lex_state = 412},
  [17] = {.lex_state = 282},
  [18] = {.lex_state = 413},
  [19] = {.lex_state = 413},
  [20] = {.lex_state = 413},
  [21] = {.lex_state = 413},
  [22] = {.lex_state = 413},
  [23] = {.lex_state = 413},
  [24] = {.lex_state = 413},
  [25] = {.lex_state = 413},
  [26] = {.lex_state = 282},
  [27] = {.lex_state = 282},
  [28] = {.lex_state = 282},
  [29] = {.lex_state = 282},
  [30] = {.lex_state = 282},
  [31] = {.lex_state = 282},
  [32] = {.lex_state = 282},
  [33] = {.lex_state = 282},
  [34] = {.lex_state = 282},
  [35] = {.lex_state = 282},
  [36] = {.lex_state = 282},
  [37] = {.lex_state = 282},
  [38] = {.lex_state = 282},
  [39] = {.lex_state = 415},
  [40] = {.lex_state = 417},
  [41] = {.lex_state = 417},
  [42] = {.lex_state = 417},
  [43] = {.lex_state = 417},
  [44] = {.lex_state = 417},
  [45] = {.lex_state = 417},
  [46] = {.lex_state = 417},
  [47] = {.lex_state = 412},
  [48] = {.lex_state = 282},
  [49] = {.lex_state = 412},
  [50] = {.lex_state = 399},
  [51] = {.lex_state = 412},
  [52] = {.lex_state = 412},
  [53] = {.lex_state = 412},
  [54] = {.lex_state = 412},
  [55] = {.lex_state = 399},
  [56] = {.lex_state = 412},
  [57] = {.lex_state = 282},
  [58] = {.lex_state = 282},
  [59] = {.lex_state = 285},
  [60] = {.lex_state = 282},
  [61] = {.lex_state = 282},
  [62] = {.lex_state = 282},
  [63] = {.lex_state = 399},
  [64] = {.lex_state = 412},
  [65] = {.lex_state = 412},
  [66] = {.lex_state = 412},
  [67] = {.lex_state = 412},
  [68] = {.lex_state = 412},
  [69] = {.lex_state = 399},
  [70] = {.lex_state = 412},
  [71] = {.lex_state = 282},
  [72] = {.lex_state = 399},
  [73] = {.lex_state = 399},
  [74] = {.lex_state = 396},
  [75] = {.lex_state = 418},
  [76] = {.lex_state = 396},
  [77] = {.lex_state = 282},
  [78] = {.lex_state = 412},
  [79] = {.lex_state = 412},
  [80] = {.lex_state = 282},
  [81] = {.lex_state = 412},
  [82] = {.lex_state = 285},
  [83] = {.lex_state = 282},
  [84] = {.lex_state = 399},
  [85] = {.lex_state = 399},
  [86] = {.lex_state = 412},
  [87] = {.lex_state = 282},
  [88] = {.lex_state = 412},
  [89] = {.lex_state = 412},
  [90] = {.lex_state = 412},
  [91] = {.lex_state = 282},
  [92] = {.lex_state = 282},
  [93] = {.lex_state = 412},
  [94] = {.lex_state = 282},
  [95] = {.lex_state = 413},
  [96] = {.lex_state = 285},
  [97] = {.lex_state = 282},
  [98] = {.lex_state = 413},
  [99] = {.lex_state = 282},
  [100] = {.lex_state = 413},
  [101] = {.lex_state = 282},
  [102] = {.lex_state = 413},
  [103] = {.lex_state = 282},
  [104] = {.lex_state = 413},
  [105] = {.lex_state = 282},
  [106] = {.lex_state = 413},
  [107] = {.lex_state = 282},
  [108] = {.lex_state = 413},
  [109] = {.lex_state = 282},
  [110] = {.lex_state = 413},
  [111] = {.lex_state = 412},
  [112] = {.lex_state = 412},
  [113] = {.lex_state = 412},
  [114] = {.lex_state = 412},
  [115] = {.lex_state = 412},
  [116] = {.lex_state = 412},
  [117] = {.lex_state = 412},
  [118] = {.lex_state = 412},
  [119] = {.lex_state = 412},
  [120] = {.lex_state = 412},
  [121] = {.lex_state = 412},
  [122] = {.lex_state = 412},
  [123] = {.lex_state = 412},
  [124] = {.lex_state = 412},
  [125] = {.lex_state = 423},
  [126] = {.lex_state = 415},
  [127] = {.lex_state = 412},
  [128] = {.lex_state = 285},
  [129] = {.lex_state = 415},
  [130] = {.lex_state = 412},
  [131] = {.lex_state = 415},
  [132] = {.lex_state = 412},
  [133] = {.lex_state = 415},
  [134] = {.lex_state = 412},
  [135] = {.lex_state = 415},
  [136] = {.lex_state = 412},
  [137] = {.lex_state = 415},
  [138] = {.lex_state = 412},
  [139] = {.lex_state = 415},
  [140] = {.lex_state = 412},
  [141] = {.lex_state = 396},
  [142] = {.lex_state = 415},
  [143] = {.lex_state = 424},
  [144] = {.lex_state = 399},
  [145] = {.lex_state = 412},
  [146] = {.lex_state = 282},
  [147] = {.lex_state = 428},
  [148] = {.lex_state = 282},
  [149] = {.lex_state = 282},
  [150] = {.lex_state = 399},
  [151] = {.lex_state = 412},
  [152] = {.lex_state = 285},
  [153] = {.lex_state = 399},
  [154] = {.lex_state = 412},
  [155] = {.lex_state = 399},
  [156] = {.lex_state = 399},
  [157] = {.lex_state = 412},
  [158] = {.lex_state = 576},
  [159] = {.lex_state = 577},
  [160] = {.lex_state = 578},
  [161] = {.lex_state = 396},
  [162] = {.lex_state = 399},
  [163] = {.lex_state = 399},
  [164] = {.lex_state = 399},
  [165] = {.lex_state = 399},
  [166] = {.lex_state = 285},
  [167] = {.lex_state = 282},
  [168] = {.lex_state = 399},
  [169] = {.lex_state = 399},
  [170] = {.lex_state = 285},
  [171] = {.lex_state = 282},
  [172] = {.lex_state = 399},
  [173] = {.lex_state = 396},
  [174] = {.lex_state = 412},
  [175] = {.lex_state = 399},
  [176] = {.lex_state = 396},
  [177] = {.lex_state = 412},
  [178] = {.lex_state = 399},
  [179] = {.lex_state = 396},
  [180] = {.lex_state = 399},
  [181] = {.lex_state = 684},
  [182] = {.lex_state = 399},
  [183] = {.lex_state = 282},
  [184] = {.lex_state = 399},
  [185] = {.lex_state = 285},
  [186] = {.lex_state = 282},
  [187] = {.lex_state = 412},
  [188] = {.lex_state = 399},
  [189] = {.lex_state = 282},
  [190] = {.lex_state = 685},
  [191] = {.lex_state = 686},
  [192] = {.lex_state = 412},
  [193] = {.lex_state = 412},
  [194] = {.lex_state = 412},
  [195] = {.lex_state = 412},
  [196] = {.lex_state = 412},
  [197] = {.lex_state = 412},
  [198] = {.lex_state = 282},
  [199] = {.lex_state = 413},
  [200] = {.lex_state = 413},
  [201] = {.lex_state = 285},
  [202] = {.lex_state = 412},
  [203] = {.lex_state = 282},
  [204] = {.lex_state = 412},
  [205] = {.lex_state = 282},
  [206] = {.lex_state = 412},
  [207] = {.lex_state = 282},
  [208] = {.lex_state = 412},
  [209] = {.lex_state = 282},
  [210] = {.lex_state = 412},
  [211] = {.lex_state = 282},
  [212] = {.lex_state = 412},
  [213] = {.lex_state = 282},
  [214] = {.lex_state = 412},
  [215] = {.lex_state = 282},
  [216] = {.lex_state = 412},
  [217] = {.lex_state = 412},
  [218] = {.lex_state = 412},
  [219] = {.lex_state = 412},
  [220] = {.lex_state = 412},
  [221] = {.lex_state = 412},
  [222] = {.lex_state = 412},
  [223] = {.lex_state = 412},
  [224] = {.lex_state = 412},
  [225] = {.lex_state = 412},
  [226] = {.lex_state = 412},
  [227] = {.lex_state = 412},
  [228] = {.lex_state = 412},
  [229] = {.lex_state = 399},
  [230] = {.lex_state = 412},
  [231] = {.lex_state = 423},
  [232] = {.lex_state = 412},
  [233] = {.lex_state = 412},
  [234] = {.lex_state = 415},
  [235] = {.lex_state = 415},
  [236] = {.lex_state = 285},
  [237] = {.lex_state = 412},
  [238] = {.lex_state = 412},
  [239] = {.lex_state = 412},
  [240] = {.lex_state = 412},
  [241] = {.lex_state = 412},
  [242] = {.lex_state = 412},
  [243] = {.lex_state = 412},
  [244] = {.lex_state = 412},
  [245] = {.lex_state = 412},
  [246] = {.lex_state = 412},
  [247] = {.lex_state = 412},
  [248] = {.lex_state = 412},
  [249] = {.lex_state = 415},
  [250] = {.lex_state = 396},
  [251] = {.lex_state = 412},
  [252] = {.lex_state = 412},
  [253] = {.lex_state = 399},
  [254] = {.lex_state = 399},
  [255] = {.lex_state = 282},
  [256] = {.lex_state = 690},
  [257] = {.lex_state = 690},
  [258] = {.lex_state = 690},
  [259] = {.lex_state = 690},
  [260] = {.lex_state = 690},
  [261] = {.lex_state = 690},
  [262] = {.lex_state = 690},
  [263] = {.lex_state = 690},
  [264] = {.lex_state = 690},
  [265] = {.lex_state = 690},
  [266] = {.lex_state = 690},
  [267] = {.lex_state = 690},
  [268] = {.lex_state = 690},
  [269] = {.lex_state = 690},
  [270] = {.lex_state = 690},
  [271] = {.lex_state = 690},
  [272] = {.lex_state = 690},
  [273] = {.lex_state = 690},
  [274] = {.lex_state = 690},
  [275] = {.lex_state = 690},
  [276] = {.lex_state = 690},
  [277] = {.lex_state = 690},
  [278] = {.lex_state = 690},
  [279] = {.lex_state = 690},
  [280] = {.lex_state = 690},
  [281] = {.lex_state = 690},
  [282] = {.lex_state = 690},
  [283] = {.lex_state = 690},
  [284] = {.lex_state = 690},
  [285] = {.lex_state = 690},
  [286] = {.lex_state = 690},
  [287] = {.lex_state = 690},
  [288] = {.lex_state = 690},
  [289] = {.lex_state = 690},
  [290] = {.lex_state = 690},
  [291] = {.lex_state = 690},
  [292] = {.lex_state = 399},
  [293] = {.lex_state = 412},
  [294] = {.lex_state = 412},
  [295] = {.lex_state = 285},
  [296] = {.lex_state = 399},
  [297] = {.lex_state = 399},
  [298] = {.lex_state = 577},
  [299] = {.lex_state = 398},
  [300] = {.lex_state = 399},
  [301] = {.lex_state = 399},
  [302] = {.lex_state = 691},
  [303] = {.lex_state = 399},
  [304] = {.lex_state = 396},
  [305] = {.lex_state = 399},
  [306] = {.lex_state = 285},
  [307] = {.lex_state = 399},
  [308] = {.lex_state = 282},
  [309] = {.lex_state = 399},
  [310] = {.lex_state = 285},
  [311] = {.lex_state = 399},
  [312] = {.lex_state = 396},
  [313] = {.lex_state = 412},
  [314] = {.lex_state = 399},
  [315] = {.lex_state = 690},
  [316] = {.lex_state = 396},
  [317] = {.lex_state = 399},
  [318] = {.lex_state = 399},
  [319] = {.lex_state = 285},
  [320] = {.lex_state = 399},
  [321] = {.lex_state = 399},
  [322] = {.lex_state = 693},
  [323] = {.lex_state = 693},
  [324] = {.lex_state = 399},
  [325] = {.lex_state = 412},
  [326] = {.lex_state = 412},
  [327] = {.lex_state = 693},
  [328] = {.lex_state = 412},
  [329] = {.lex_state = 412},
  [330] = {.lex_state = 413},
  [331] = {.lex_state = 412},
  [332] = {.lex_state = 412},
  [333] = {.lex_state = 412},
  [334] = {.lex_state = 412},
  [335] = {.lex_state = 412},
  [336] = {.lex_state = 412},
  [337] = {.lex_state = 412},
  [338] = {.lex_state = 412},
  [339] = {.lex_state = 412},
  [340] = {.lex_state = 412},
  [341] = {.lex_state = 412},
  [342] = {.lex_state = 412},
  [343] = {.lex_state = 412},
  [344] = {.lex_state = 412},
  [345] = {.lex_state = 693},
  [346] = {.lex_state = 693},
  [347] = {.lex_state = 693},
  [348] = {.lex_state = 693},
  [349] = {.lex_state = 693},
  [350] = {.lex_state = 693},
  [351] = {.lex_state = 693},
  [352] = {.lex_state = 693},
  [353] = {.lex_state = 693},
  [354] = {.lex_state = 693},
  [355] = {.lex_state = 693},
  [356] = {.lex_state = 693},
  [357] = {.lex_state = 693},
  [358] = {.lex_state = 693},
  [359] = {.lex_state = 399},
  [360] = {.lex_state = 693},
  [361] = {.lex_state = 415},
  [362] = {.lex_state = 693},
  [363] = {.lex_state = 693},
  [364] = {.lex_state = 693},
  [365] = {.lex_state = 693},
  [366] = {.lex_state = 693},
  [367] = {.lex_state = 693},
  [368] = {.lex_state = 415},
  [369] = {.lex_state = 412},
  [370] = {.lex_state = 282},
  [371] = {.lex_state = 282},
  [372] = {.lex_state = 412},
  [373] = {.lex_state = 412},
  [374] = {.lex_state = 282},
  [375] = {.lex_state = 413},
  [376] = {.lex_state = 413},
  [377] = {.lex_state = 413},
  [378] = {.lex_state = 413},
  [379] = {.lex_state = 413},
  [380] = {.lex_state = 413},
  [381] = {.lex_state = 413},
  [382] = {.lex_state = 413},
  [383] = {.lex_state = 282},
  [384] = {.lex_state = 282},
  [385] = {.lex_state = 282},
  [386] = {.lex_state = 282},
  [387] = {.lex_state = 282},
  [388] = {.lex_state = 282},
  [389] = {.lex_state = 282},
  [390] = {.lex_state = 282},
  [391] = {.lex_state = 282},
  [392] = {.lex_state = 282},
  [393] = {.lex_state = 282},
  [394] = {.lex_state = 282},
  [395] = {.lex_state = 282},
  [396] = {.lex_state = 415},
  [397] = {.lex_state = 417},
  [398] = {.lex_state = 417},
  [399] = {.lex_state = 417},
  [400] = {.lex_state = 417},
  [401] = {.lex_state = 417},
  [402] = {.lex_state = 417},
  [403] = {.lex_state = 417},
  [404] = {.lex_state = 412},
  [405] = {.lex_state = 399},
  [406] = {.lex_state = 412},
  [407] = {.lex_state = 399},
  [408] = {.lex_state = 399},
  [409] = {.lex_state = 396},
  [410] = {.lex_state = 399},
  [411] = {.lex_state = 285},
  [412] = {.lex_state = 399},
  [413] = {.lex_state = 399},
  [414] = {.lex_state = 690},
  [415] = {.lex_state = 690},
  [416] = {.lex_state = 693},
  [417] = {.lex_state = 693},
  [418] = {.lex_state = 690},
  [419] = {.lex_state = 693},
  [420] = {.lex_state = 693},
  [421] = {.lex_state = 693},
  [422] = {.lex_state = 693},
  [423] = {.lex_state = 693},
  [424] = {.lex_state = 693},
  [425] = {.lex_state = 693},
  [426] = {.lex_state = 693},
  [427] = {.lex_state = 690},
  [428] = {.lex_state = 690},
  [429] = {.lex_state = 690},
  [430] = {.lex_state = 690},
  [431] = {.lex_state = 690},
  [432] = {.lex_state = 690},
  [433] = {.lex_state = 690},
  [434] = {.lex_state = 690},
  [435] = {.lex_state = 690},
  [436] = {.lex_state = 690},
  [437] = {.lex_state = 690},
  [438] = {.lex_state = 690},
  [439] = {.lex_state = 690},
  [440] = {.lex_state = 690},
  [441] = {.lex_state = 690},
  [442] = {.lex_state = 690},
  [443] = {.lex_state = 690},
  [444] = {.lex_state = 690},
  [445] = {.lex_state = 690},
  [446] = {.lex_state = 690},
  [447] = {.lex_state = 690},
  [448] = {.lex_state = 693},
  [449] = {.lex_state = 399},
  [450] = {.lex_state = 399},
  [451] = {.lex_state = 690},
  [452] = {.lex_state = 690},
  [453] = {.lex_state = 399},
  [454] = {.lex_state = 690},
  [455] = {.lex_state = 690},
  [456] = {.lex_state = 690},
  [457] = {.lex_state = 690},
  [458] = {.lex_state = 690},
  [459] = {.lex_state = 690},
  [460] = {.lex_state = 690},
  [461] = {.lex_state = 690},
  [462] = {.lex_state = 399},
  [463] = {.lex_state = 399},
  [464] = {.lex_state = 399},
  [465] = {.lex_state = 399},
  [466] = {.lex_state = 399},
  [467] = {.lex_state = 399},
  [468] = {.lex_state = 399},
  [469] = {.lex_state = 399},
  [470] = {.lex_state = 399},
  [471] = {.lex_state = 399},
  [472] = {.lex_state = 399},
  [473] = {.lex_state = 399},
  [474] = {.lex_state = 399},
  [475] = {.lex_state = 399},
  [476] = {.lex_state = 399},
  [477] = {.lex_state = 399},
  [478] = {.lex_state = 399},
  [479] = {.lex_state = 399},
  [480] = {.lex_state = 399},
  [481] = {.lex_state = 399},
  [482] = {.lex_state = 399},
  [483] = {.lex_state = 690},
  [484] = {.lex_state = 399},
  [485] = {.lex_state = 399},
  [486] = {.lex_state = 399},
  [487] = {.lex_state = 399},
  [488] = {.lex_state = 399},
  [489] = {.lex_state = 399},
  [490] = {.lex_state = 399},
  [491] = {.lex_state = 399},
  [492] = {.lex_state = 399},
  [493] = {.lex_state = 399},
  [494] = {.lex_state = 399},
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
    [anon_sym_displaymath] = ACTIONS(3),
    [anon_sym_dmath] = ACTIONS(3),
    [anon_sym_dmath_STAR] = ACTIONS(1),
    [anon_sym_dseries] = ACTIONS(3),
    [anon_sym_dseries_STAR] = ACTIONS(1),
    [anon_sym_dgroup] = ACTIONS(3),
    [anon_sym_dgroup_STAR] = ACTIONS(1),
    [anon_sym_darray] = ACTIONS(3),
    [anon_sym_darray_STAR] = ACTIONS(1),
    [anon_sym_eqnarray] = ACTIONS(3),
    [anon_sym_eqnarray_STAR] = ACTIONS(1),
    [anon_sym_equation] = ACTIONS(3),
    [anon_sym_equation_STAR] = ACTIONS(1),
    [anon_sym_flalign] = ACTIONS(3),
    [anon_sym_flalign_STAR] = ACTIONS(1),
    [anon_sym_gather] = ACTIONS(3),
    [anon_sym_gather_STAR] = ACTIONS(1),
    [anon_sym_multiline] = ACTIONS(3),
    [anon_sym_multiline_STAR] = ACTIONS(1),
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
    [sym_document] = STATE(9),
    [sym__text_mode] = STATE(60),
    [sym_text_mode] = STATE(10),
    [sym_at_group] = STATE(60),
    [sym_parameter] = STATE(60),
    [sym_text_environment] = STATE(60),
    [sym_display_math] = STATE(60),
    [sym_inline_math] = STATE(60),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(60),
    [sym_escaped] = STATE(60),
    [sym_command] = STATE(60),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(60),
    [sym_opt_text_group] = STATE(60),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(60),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(15),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(15),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(15),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(23),
  },
  [2] = {
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_RBRACK] = ACTIONS(25),
    [sym__escape] = ACTIONS(25),
    [sym_begin_group] = ACTIONS(25),
    [sym_math_shift] = ACTIONS(25),
    [sym_alignment_tab] = ACTIONS(25),
    [sym_parameter_char] = ACTIONS(25),
    [sym_superscript] = ACTIONS(25),
    [sym_subscript] = ACTIONS(25),
    [sym_active_char] = ACTIONS(25),
    [sym_comment_char] = ACTIONS(25),
    [sym_text] = ACTIONS(27),
  },
  [3] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_makeatletter] = ACTIONS(49),
    [sym__name] = ACTIONS(51),
  },
  [4] = {
    [sym__text_mode] = STATE(74),
    [sym_at_group] = STATE(74),
    [sym_parameter] = STATE(74),
    [sym_text_environment] = STATE(74),
    [sym_display_math] = STATE(74),
    [sym_inline_math] = STATE(74),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(74),
    [sym_escaped] = STATE(74),
    [sym_command] = STATE(74),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(74),
    [sym_opt_text_group] = STATE(74),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(74),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(74),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(53),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(55),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(55),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(55),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(57),
  },
  [5] = {
    [sym__math_mode] = STATE(83),
    [sym_math_mode] = STATE(78),
    [sym_parameter] = STATE(83),
    [sym_math_environment] = STATE(83),
    [sym_tag] = STATE(83),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(83),
    [sym_command] = STATE(83),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(83),
    [sym_opt_math_group] = STATE(83),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(83),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(63),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(67),
  },
  [6] = {
    [sym_number] = ACTIONS(69),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [sym__escape] = ACTIONS(73),
    [sym_begin_group] = ACTIONS(73),
    [sym_end_group] = ACTIONS(73),
    [sym_math_shift] = ACTIONS(73),
    [sym_alignment_tab] = ACTIONS(73),
    [sym_parameter_char] = ACTIONS(73),
    [sym_superscript] = ACTIONS(73),
    [sym_subscript] = ACTIONS(73),
    [sym_active_char] = ACTIONS(73),
    [sym_comment_char] = ACTIONS(73),
    [sym_text] = ACTIONS(71),
  },
  [8] = {
    [sym_magic] = ACTIONS(75),
    [sym_comment_text] = ACTIONS(77),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(79),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(81),
  },
  [11] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(86),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [12] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(88),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [13] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(89),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [14] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(90),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [15] = {
    [sym_text_group] = STATE(91),
    [sym_begin_group] = ACTIONS(87),
  },
  [16] = {
    [sym_text_group] = STATE(92),
    [sym_begin_group] = ACTIONS(87),
  },
  [17] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(93),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [18] = {
    [sym_opt_text_group] = STATE(95),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(89),
  },
  [19] = {
    [sym_opt_text_group] = STATE(98),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(91),
  },
  [20] = {
    [sym_opt_text_group] = STATE(100),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(93),
  },
  [21] = {
    [sym_opt_text_group] = STATE(102),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(95),
  },
  [22] = {
    [sym_opt_text_group] = STATE(104),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(97),
  },
  [23] = {
    [sym_opt_text_group] = STATE(106),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(99),
  },
  [24] = {
    [sym_opt_text_group] = STATE(108),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(101),
  },
  [25] = {
    [sym_opt_text_group] = STATE(110),
    [sym_begin_opt] = STATE(96),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__end_of_line] = ACTIONS(103),
  },
  [26] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(111),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [27] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(112),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [28] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(113),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [29] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(114),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [30] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(115),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [31] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(116),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [32] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(117),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [33] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(118),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [34] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(119),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [35] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(120),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [36] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(121),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [37] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(122),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [38] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(123),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [39] = {
    [sym_verbatim_text] = STATE(124),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [40] = {
    [sym_opt_text_group] = STATE(126),
    [sym_verbatim_text] = STATE(127),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [41] = {
    [sym_opt_text_group] = STATE(129),
    [sym_verbatim_text] = STATE(130),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [42] = {
    [sym_opt_text_group] = STATE(131),
    [sym_verbatim_text] = STATE(132),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [43] = {
    [sym_opt_text_group] = STATE(133),
    [sym_verbatim_text] = STATE(134),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [44] = {
    [sym_opt_text_group] = STATE(135),
    [sym_verbatim_text] = STATE(136),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [45] = {
    [sym_opt_text_group] = STATE(137),
    [sym_verbatim_text] = STATE(138),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [46] = {
    [sym_opt_text_group] = STATE(139),
    [sym_verbatim_text] = STATE(140),
    [sym_begin_opt] = STATE(128),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__verbatim_token] = ACTIONS(107),
  },
  [47] = {
    [sym_text_group] = STATE(142),
    [sym_begin_group] = ACTIONS(109),
  },
  [48] = {
    [sym__text_mode] = STATE(146),
    [sym_at_group] = STATE(146),
    [sym_parameter] = STATE(146),
    [sym_text_environment] = STATE(146),
    [sym_display_math] = STATE(146),
    [sym_inline_math] = STATE(146),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(146),
    [sym_escaped] = STATE(146),
    [sym_command] = STATE(146),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_end] = STATE(144),
    [sym_end_token] = STATE(145),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(146),
    [sym_opt_text_group] = STATE(146),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(146),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(146),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(113),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(113),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(113),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(115),
  },
  [49] = {
    [sym_simple_text_group] = STATE(148),
    [sym_begin_group] = ACTIONS(117),
  },
  [50] = {
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
  [51] = {
    [sym_simple_text_group] = STATE(150),
    [sym_opt_text_group] = STATE(151),
    [sym_begin_opt] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(125),
  },
  [52] = {
    [sym_simple_text_group] = STATE(153),
    [sym_opt_text_group] = STATE(154),
    [sym_begin_opt] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(125),
  },
  [53] = {
    [sym_text_group] = STATE(155),
    [sym_begin_group] = ACTIONS(87),
  },
  [54] = {
    [sym_text_group] = STATE(156),
    [sym_opt_text_group] = STATE(157),
    [sym_begin_opt] = STATE(152),
    [anon_sym_LBRACK] = ACTIONS(123),
    [sym_begin_group] = ACTIONS(87),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [sym__escape] = ACTIONS(129),
    [sym_begin_group] = ACTIONS(129),
    [sym_end_group] = ACTIONS(129),
    [sym_math_shift] = ACTIONS(129),
    [sym_alignment_tab] = ACTIONS(129),
    [sym_parameter_char] = ACTIONS(129),
    [sym_superscript] = ACTIONS(129),
    [sym_subscript] = ACTIONS(129),
    [sym_active_char] = ACTIONS(129),
    [sym_comment_char] = ACTIONS(129),
    [sym_text] = ACTIONS(127),
  },
  [56] = {
    [sym_escaped] = STATE(159),
    [sym__escape] = ACTIONS(131),
  },
  [57] = {
    [sym__at_text_mode] = STATE(167),
    [sym_parameter] = STATE(167),
    [sym_text_environment] = STATE(167),
    [sym_display_math] = STATE(167),
    [sym_inline_math] = STATE(167),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(167),
    [sym_escaped] = STATE(167),
    [sym_at_command] = STATE(167),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_makeatother] = STATE(164),
    [sym_makeatother_token] = STATE(165),
    [sym_at_text_group] = STATE(167),
    [sym_opt_at_text_group] = STATE(167),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(167),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(167),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(137),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(137),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(137),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(141),
  },
  [58] = {
    [anon_sym_LBRACK] = ACTIONS(143),
    [sym__escape] = ACTIONS(143),
    [sym_begin_group] = ACTIONS(143),
    [sym_math_shift] = ACTIONS(143),
    [sym_alignment_tab] = ACTIONS(143),
    [sym_parameter_char] = ACTIONS(143),
    [sym_superscript] = ACTIONS(143),
    [sym_subscript] = ACTIONS(143),
    [sym_active_char] = ACTIONS(143),
    [sym_comment_char] = ACTIONS(143),
    [sym_text] = ACTIONS(145),
  },
  [59] = {
    [sym__text_mode] = STATE(170),
    [sym_at_group] = STATE(170),
    [sym_parameter] = STATE(170),
    [sym_text_environment] = STATE(170),
    [sym_display_math] = STATE(170),
    [sym_inline_math] = STATE(170),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(170),
    [sym_escaped] = STATE(170),
    [sym_command] = STATE(170),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(170),
    [sym_opt_text_group] = STATE(170),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(170),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(169),
    [aux_sym_text_mode_repeat1] = STATE(170),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(149),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(149),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(151),
  },
  [60] = {
    [sym__text_mode] = STATE(171),
    [sym_at_group] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_text_environment] = STATE(171),
    [sym_display_math] = STATE(171),
    [sym_inline_math] = STATE(171),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(171),
    [sym_escaped] = STATE(171),
    [sym_command] = STATE(171),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(171),
    [sym_opt_text_group] = STATE(171),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(171),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(153),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(155),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(155),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(155),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(157),
  },
  [61] = {
    [anon_sym_LBRACK] = ACTIONS(159),
    [sym__escape] = ACTIONS(159),
    [sym_begin_group] = ACTIONS(159),
    [sym_alignment_tab] = ACTIONS(159),
    [sym_parameter_char] = ACTIONS(159),
    [sym_superscript] = ACTIONS(159),
    [sym_subscript] = ACTIONS(159),
    [sym_active_char] = ACTIONS(159),
    [sym_comment_char] = ACTIONS(159),
    [sym_text] = ACTIONS(161),
  },
  [62] = {
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym__escape] = ACTIONS(163),
    [sym_begin_group] = ACTIONS(163),
    [sym_alignment_tab] = ACTIONS(163),
    [sym_parameter_char] = ACTIONS(163),
    [sym_superscript] = ACTIONS(163),
    [sym_subscript] = ACTIONS(163),
    [sym_active_char] = ACTIONS(163),
    [sym_comment_char] = ACTIONS(163),
    [sym_text] = ACTIONS(165),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(169),
    [sym__escape] = ACTIONS(169),
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
  [64] = {
    [sym_begin_group] = ACTIONS(171),
  },
  [65] = {
    [anon_sym_LBRACK] = ACTIONS(173),
    [sym_begin_group] = ACTIONS(173),
  },
  [66] = {
    [anon_sym_LBRACK] = ACTIONS(175),
    [sym_begin_group] = ACTIONS(175),
  },
  [67] = {
    [sym_begin_group] = ACTIONS(177),
  },
  [68] = {
    [anon_sym_LBRACK] = ACTIONS(179),
    [sym_begin_group] = ACTIONS(179),
  },
  [69] = {
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
  [70] = {
    [sym__escape] = ACTIONS(185),
  },
  [71] = {
    [anon_sym_LBRACK] = ACTIONS(187),
    [sym__escape] = ACTIONS(187),
    [sym_begin_group] = ACTIONS(187),
    [sym_math_shift] = ACTIONS(187),
    [sym_alignment_tab] = ACTIONS(187),
    [sym_parameter_char] = ACTIONS(187),
    [sym_superscript] = ACTIONS(187),
    [sym_subscript] = ACTIONS(187),
    [sym_active_char] = ACTIONS(187),
    [sym_comment_char] = ACTIONS(187),
    [sym_text] = ACTIONS(189),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(193),
    [anon_sym_RBRACK] = ACTIONS(193),
    [sym__escape] = ACTIONS(193),
    [sym_begin_group] = ACTIONS(193),
    [sym_end_group] = ACTIONS(193),
    [sym_math_shift] = ACTIONS(193),
    [sym_alignment_tab] = ACTIONS(193),
    [sym_parameter_char] = ACTIONS(193),
    [sym_superscript] = ACTIONS(193),
    [sym_subscript] = ACTIONS(193),
    [sym_active_char] = ACTIONS(193),
    [sym_comment_char] = ACTIONS(193),
    [sym_text] = ACTIONS(191),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(197),
    [anon_sym_RBRACK] = ACTIONS(197),
    [sym__escape] = ACTIONS(197),
    [sym_begin_group] = ACTIONS(197),
    [sym_end_group] = ACTIONS(197),
    [sym_math_shift] = ACTIONS(197),
    [sym_alignment_tab] = ACTIONS(197),
    [sym_parameter_char] = ACTIONS(197),
    [sym_superscript] = ACTIONS(197),
    [sym_subscript] = ACTIONS(197),
    [sym_active_char] = ACTIONS(197),
    [sym_comment_char] = ACTIONS(197),
    [sym_text] = ACTIONS(195),
  },
  [74] = {
    [sym__text_mode] = STATE(173),
    [sym_at_group] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_environment] = STATE(173),
    [sym_display_math] = STATE(173),
    [sym_inline_math] = STATE(173),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(199),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(201),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(203),
  },
  [75] = {
    [anon_sym_tag] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym__name] = ACTIONS(51),
  },
  [76] = {
    [sym__math_mode] = STATE(176),
    [sym_parameter] = STATE(176),
    [sym_math_environment] = STATE(176),
    [sym_tag] = STATE(176),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(176),
    [sym_command] = STATE(176),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(176),
    [sym_opt_math_group] = STATE(176),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(176),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(176),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(207),
    [sym_alignment_tab] = ACTIONS(209),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(209),
    [sym_subscript] = ACTIONS(209),
    [sym_active_char] = ACTIONS(209),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(211),
  },
  [77] = {
    [sym__math_mode] = STATE(83),
    [sym_math_mode] = STATE(177),
    [sym_parameter] = STATE(83),
    [sym_math_environment] = STATE(83),
    [sym_tag] = STATE(83),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(83),
    [sym_command] = STATE(83),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(83),
    [sym_opt_math_group] = STATE(83),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(83),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(83),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(65),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(65),
    [sym_subscript] = ACTIONS(65),
    [sym_active_char] = ACTIONS(65),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(67),
  },
  [78] = {
    [sym_math_shift] = ACTIONS(213),
  },
  [79] = {
    [sym_math_text_group] = STATE(180),
    [sym_begin_group] = ACTIONS(215),
  },
  [80] = {
    [sym__math_mode] = STATE(183),
    [sym_parameter] = STATE(183),
    [sym_math_environment] = STATE(183),
    [sym_tag] = STATE(183),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(183),
    [sym_command] = STATE(183),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_end] = STATE(182),
    [sym_end_token] = STATE(145),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(183),
    [sym_opt_math_group] = STATE(183),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(183),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(183),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(219),
    [sym_subscript] = ACTIONS(219),
    [sym_active_char] = ACTIONS(219),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(221),
  },
  [81] = {
    [sym_simple_text_group] = STATE(148),
    [sym_begin_group] = ACTIONS(125),
  },
  [82] = {
    [sym__math_mode] = STATE(185),
    [sym_parameter] = STATE(185),
    [sym_math_environment] = STATE(185),
    [sym_tag] = STATE(185),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(185),
    [sym_command] = STATE(185),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(185),
    [sym_opt_math_group] = STATE(185),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(185),
    [sym_begin_opt] = STATE(82),
    [sym_end_opt] = STATE(184),
    [aux_sym_math_mode_repeat1] = STATE(185),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(223),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(223),
    [sym_subscript] = ACTIONS(223),
    [sym_active_char] = ACTIONS(223),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(225),
  },
  [83] = {
    [sym__math_mode] = STATE(186),
    [sym_parameter] = STATE(186),
    [sym_math_environment] = STATE(186),
    [sym_tag] = STATE(186),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(186),
    [sym_command] = STATE(186),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(186),
    [sym_opt_math_group] = STATE(186),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(186),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(186),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_math_shift] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(229),
    [sym_subscript] = ACTIONS(229),
    [sym_active_char] = ACTIONS(229),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(231),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_RBRACK] = ACTIONS(235),
    [sym__escape] = ACTIONS(235),
    [sym_begin_group] = ACTIONS(235),
    [sym_end_group] = ACTIONS(235),
    [sym_math_shift] = ACTIONS(235),
    [sym_alignment_tab] = ACTIONS(235),
    [sym_parameter_char] = ACTIONS(235),
    [sym_superscript] = ACTIONS(235),
    [sym_subscript] = ACTIONS(235),
    [sym_active_char] = ACTIONS(235),
    [sym_comment_char] = ACTIONS(235),
    [sym_text] = ACTIONS(233),
  },
  [85] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
    [sym__escape] = ACTIONS(239),
    [sym_begin_group] = ACTIONS(239),
    [sym_end_group] = ACTIONS(239),
    [sym_math_shift] = ACTIONS(239),
    [sym_alignment_tab] = ACTIONS(239),
    [sym_parameter_char] = ACTIONS(239),
    [sym_superscript] = ACTIONS(239),
    [sym_subscript] = ACTIONS(239),
    [sym_active_char] = ACTIONS(239),
    [sym_comment_char] = ACTIONS(239),
    [sym_text] = ACTIONS(237),
  },
  [86] = {
    [sym_end_display_math] = STATE(188),
    [sym__escape] = ACTIONS(241),
  },
  [87] = {
    [sym__math_mode] = STATE(189),
    [sym_parameter] = STATE(189),
    [sym_math_environment] = STATE(189),
    [sym_tag] = STATE(189),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(189),
    [sym_command] = STATE(189),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(189),
    [sym_opt_math_group] = STATE(189),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(189),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(189),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(245),
  },
  [88] = {
    [sym_end_inline_math] = STATE(178),
    [sym__escape] = ACTIONS(247),
  },
  [89] = {
    [sym_end_align] = STATE(188),
    [sym_end_token] = STATE(192),
    [sym__escape] = ACTIONS(249),
  },
  [90] = {
    [sym_end_align_star] = STATE(188),
    [sym_end_token] = STATE(193),
    [sym__escape] = ACTIONS(249),
  },
  [91] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(194),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [92] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(195),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [93] = {
    [sym_end_displaymath] = STATE(188),
    [sym_end_token] = STATE(196),
    [sym__escape] = ACTIONS(249),
  },
  [94] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(197),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [95] = {
    [sym__end_of_line] = ACTIONS(251),
  },
  [96] = {
    [sym__text_mode] = STATE(201),
    [sym_at_group] = STATE(201),
    [sym_parameter] = STATE(201),
    [sym_text_environment] = STATE(201),
    [sym_display_math] = STATE(201),
    [sym_inline_math] = STATE(201),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(201),
    [sym_escaped] = STATE(201),
    [sym_command] = STATE(201),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(201),
    [sym_opt_text_group] = STATE(201),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(201),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(200),
    [aux_sym_text_mode_repeat1] = STATE(201),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(255),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(255),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(255),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(257),
  },
  [97] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(202),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [98] = {
    [sym__end_of_line] = ACTIONS(259),
  },
  [99] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(204),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [100] = {
    [sym__end_of_line] = ACTIONS(261),
  },
  [101] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(206),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [102] = {
    [sym__end_of_line] = ACTIONS(263),
  },
  [103] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(208),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [104] = {
    [sym__end_of_line] = ACTIONS(265),
  },
  [105] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(210),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [106] = {
    [sym__end_of_line] = ACTIONS(267),
  },
  [107] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(212),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [108] = {
    [sym__end_of_line] = ACTIONS(269),
  },
  [109] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(214),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [110] = {
    [sym__end_of_line] = ACTIONS(271),
  },
  [111] = {
    [sym_end_eqnarray] = STATE(188),
    [sym_end_token] = STATE(216),
    [sym__escape] = ACTIONS(249),
  },
  [112] = {
    [sym_end_eqnarray_star] = STATE(188),
    [sym_end_token] = STATE(217),
    [sym__escape] = ACTIONS(249),
  },
  [113] = {
    [sym_end_equation] = STATE(188),
    [sym_end_token] = STATE(218),
    [sym__escape] = ACTIONS(249),
  },
  [114] = {
    [sym_end_equation_star] = STATE(188),
    [sym_end_token] = STATE(219),
    [sym__escape] = ACTIONS(249),
  },
  [115] = {
    [sym_end_flalign] = STATE(188),
    [sym_end_token] = STATE(220),
    [sym__escape] = ACTIONS(249),
  },
  [116] = {
    [sym_end_flalign_star] = STATE(188),
    [sym_end_token] = STATE(221),
    [sym__escape] = ACTIONS(249),
  },
  [117] = {
    [sym_end_gather] = STATE(188),
    [sym_end_token] = STATE(222),
    [sym__escape] = ACTIONS(249),
  },
  [118] = {
    [sym_end_gather_star] = STATE(188),
    [sym_end_token] = STATE(223),
    [sym__escape] = ACTIONS(249),
  },
  [119] = {
    [sym_end_multiline] = STATE(188),
    [sym_end_token] = STATE(224),
    [sym__escape] = ACTIONS(249),
  },
  [120] = {
    [sym_end_multiline_star] = STATE(188),
    [sym_end_token] = STATE(225),
    [sym__escape] = ACTIONS(249),
  },
  [121] = {
    [sym_end_split] = STATE(188),
    [sym_end_token] = STATE(226),
    [sym__escape] = ACTIONS(249),
  },
  [122] = {
    [sym_end_split_star] = STATE(188),
    [sym_end_token] = STATE(227),
    [sym__escape] = ACTIONS(249),
  },
  [123] = {
    [sym_end_math] = STATE(178),
    [sym_end_token] = STATE(228),
    [sym__escape] = ACTIONS(249),
  },
  [124] = {
    [sym_end_verbatim] = STATE(229),
    [sym_end_token] = STATE(230),
    [sym__escape] = ACTIONS(249),
  },
  [125] = {
    [aux_sym_verbatim_text_repeat1] = STATE(231),
    [sym__escape] = ACTIONS(273),
    [sym__verbatim_token] = ACTIONS(275),
  },
  [126] = {
    [sym_verbatim_text] = STATE(232),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [127] = {
    [sym_end_Verbatim] = STATE(229),
    [sym_end_token] = STATE(233),
    [sym__escape] = ACTIONS(249),
  },
  [128] = {
    [sym__text_mode] = STATE(236),
    [sym_at_group] = STATE(236),
    [sym_parameter] = STATE(236),
    [sym_text_environment] = STATE(236),
    [sym_display_math] = STATE(236),
    [sym_inline_math] = STATE(236),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(236),
    [sym_escaped] = STATE(236),
    [sym_command] = STATE(236),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(236),
    [sym_opt_text_group] = STATE(236),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(236),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(235),
    [aux_sym_text_mode_repeat1] = STATE(236),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(279),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(279),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(279),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(281),
  },
  [129] = {
    [sym_verbatim_text] = STATE(237),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [130] = {
    [sym_end_Verbatim_star] = STATE(229),
    [sym_end_token] = STATE(238),
    [sym__escape] = ACTIONS(249),
  },
  [131] = {
    [sym_verbatim_text] = STATE(239),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [132] = {
    [sym_end_BVerbatim] = STATE(229),
    [sym_end_token] = STATE(240),
    [sym__escape] = ACTIONS(249),
  },
  [133] = {
    [sym_verbatim_text] = STATE(241),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [134] = {
    [sym_end_BVerbatim_star] = STATE(229),
    [sym_end_token] = STATE(242),
    [sym__escape] = ACTIONS(249),
  },
  [135] = {
    [sym_verbatim_text] = STATE(243),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [136] = {
    [sym_end_LVerbatim] = STATE(229),
    [sym_end_token] = STATE(244),
    [sym__escape] = ACTIONS(249),
  },
  [137] = {
    [sym_verbatim_text] = STATE(245),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [138] = {
    [sym_end_LVerbatim_star] = STATE(229),
    [sym_end_token] = STATE(246),
    [sym__escape] = ACTIONS(249),
  },
  [139] = {
    [sym_verbatim_text] = STATE(247),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [140] = {
    [sym_end_lstlisting] = STATE(229),
    [sym_end_token] = STATE(248),
    [sym__escape] = ACTIONS(249),
  },
  [141] = {
    [sym__text_mode] = STATE(250),
    [sym_at_group] = STATE(250),
    [sym_parameter] = STATE(250),
    [sym_text_environment] = STATE(250),
    [sym_display_math] = STATE(250),
    [sym_inline_math] = STATE(250),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(250),
    [sym_escaped] = STATE(250),
    [sym_command] = STATE(250),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(250),
    [sym_opt_text_group] = STATE(250),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(250),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(250),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(283),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(285),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(285),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(285),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(287),
  },
  [142] = {
    [sym_verbatim_text] = STATE(251),
    [aux_sym_verbatim_text_repeat1] = STATE(125),
    [sym__verbatim_token] = ACTIONS(105),
  },
  [143] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(289),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_makeatletter] = ACTIONS(49),
    [sym__name] = ACTIONS(51),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [sym__escape] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_end_group] = ACTIONS(293),
    [sym_math_shift] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_active_char] = ACTIONS(293),
    [sym_comment_char] = ACTIONS(293),
    [sym_text] = ACTIONS(291),
  },
  [145] = {
    [sym_simple_text_group] = STATE(253),
    [sym_begin_group] = ACTIONS(125),
  },
  [146] = {
    [sym__text_mode] = STATE(255),
    [sym_at_group] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_text_environment] = STATE(255),
    [sym_display_math] = STATE(255),
    [sym_inline_math] = STATE(255),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(255),
    [sym_escaped] = STATE(255),
    [sym_command] = STATE(255),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_end] = STATE(254),
    [sym_end_token] = STATE(145),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(255),
    [sym_opt_text_group] = STATE(255),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(255),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(255),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(111),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(295),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(295),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(297),
  },
  [147] = {
    [anon_sym_align] = ACTIONS(299),
    [anon_sym_align_STAR] = ACTIONS(301),
    [anon_sym_alignat] = ACTIONS(303),
    [anon_sym_alignat_STAR] = ACTIONS(305),
    [anon_sym_displaymath] = ACTIONS(307),
    [anon_sym_dmath] = ACTIONS(309),
    [anon_sym_dmath_STAR] = ACTIONS(311),
    [anon_sym_dseries] = ACTIONS(313),
    [anon_sym_dseries_STAR] = ACTIONS(315),
    [anon_sym_dgroup] = ACTIONS(317),
    [anon_sym_dgroup_STAR] = ACTIONS(319),
    [anon_sym_darray] = ACTIONS(321),
    [anon_sym_darray_STAR] = ACTIONS(323),
    [anon_sym_eqnarray] = ACTIONS(325),
    [anon_sym_eqnarray_STAR] = ACTIONS(327),
    [anon_sym_equation] = ACTIONS(329),
    [anon_sym_equation_STAR] = ACTIONS(331),
    [anon_sym_flalign] = ACTIONS(333),
    [anon_sym_flalign_STAR] = ACTIONS(335),
    [anon_sym_gather] = ACTIONS(337),
    [anon_sym_gather_STAR] = ACTIONS(339),
    [anon_sym_multiline] = ACTIONS(341),
    [anon_sym_multiline_STAR] = ACTIONS(343),
    [anon_sym_split] = ACTIONS(345),
    [anon_sym_split_STAR] = ACTIONS(347),
    [anon_sym_math] = ACTIONS(349),
    [anon_sym_verbatim] = ACTIONS(351),
    [anon_sym_Verbatim] = ACTIONS(353),
    [anon_sym_Verbatim_STAR] = ACTIONS(355),
    [anon_sym_BVerbatim] = ACTIONS(357),
    [anon_sym_BVerbatim_STAR] = ACTIONS(359),
    [anon_sym_LVerbatim] = ACTIONS(361),
    [anon_sym_LVerbatim_STAR] = ACTIONS(363),
    [anon_sym_lstlisting] = ACTIONS(365),
    [anon_sym_minted] = ACTIONS(367),
    [sym_text] = ACTIONS(369),
  },
  [148] = {
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym__escape] = ACTIONS(371),
    [sym_begin_group] = ACTIONS(371),
    [sym_math_shift] = ACTIONS(371),
    [sym_alignment_tab] = ACTIONS(371),
    [sym_parameter_char] = ACTIONS(371),
    [sym_superscript] = ACTIONS(371),
    [sym_subscript] = ACTIONS(371),
    [sym_active_char] = ACTIONS(371),
    [sym_comment_char] = ACTIONS(371),
    [sym_text] = ACTIONS(373),
  },
  [149] = {
    [sym_text] = ACTIONS(375),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [anon_sym_RBRACK] = ACTIONS(379),
    [sym__escape] = ACTIONS(379),
    [sym_begin_group] = ACTIONS(379),
    [sym_end_group] = ACTIONS(379),
    [sym_math_shift] = ACTIONS(379),
    [sym_alignment_tab] = ACTIONS(379),
    [sym_parameter_char] = ACTIONS(379),
    [sym_superscript] = ACTIONS(379),
    [sym_subscript] = ACTIONS(379),
    [sym_active_char] = ACTIONS(379),
    [sym_comment_char] = ACTIONS(379),
    [sym_text] = ACTIONS(377),
  },
  [151] = {
    [sym_simple_text_group] = STATE(292),
    [sym_begin_group] = ACTIONS(125),
  },
  [152] = {
    [sym__text_mode] = STATE(295),
    [sym_at_group] = STATE(295),
    [sym_parameter] = STATE(295),
    [sym_text_environment] = STATE(295),
    [sym_display_math] = STATE(295),
    [sym_inline_math] = STATE(295),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(295),
    [sym_escaped] = STATE(295),
    [sym_command] = STATE(295),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(295),
    [sym_opt_text_group] = STATE(295),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(295),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(294),
    [aux_sym_text_mode_repeat1] = STATE(295),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(383),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(383),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(383),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(385),
  },
  [153] = {
    [ts_builtin_sym_end] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_RBRACK] = ACTIONS(389),
    [sym__escape] = ACTIONS(389),
    [sym_begin_group] = ACTIONS(389),
    [sym_end_group] = ACTIONS(389),
    [sym_math_shift] = ACTIONS(389),
    [sym_alignment_tab] = ACTIONS(389),
    [sym_parameter_char] = ACTIONS(389),
    [sym_superscript] = ACTIONS(389),
    [sym_subscript] = ACTIONS(389),
    [sym_active_char] = ACTIONS(389),
    [sym_comment_char] = ACTIONS(389),
    [sym_text] = ACTIONS(387),
  },
  [154] = {
    [sym_simple_text_group] = STATE(296),
    [sym_begin_group] = ACTIONS(125),
  },
  [155] = {
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
  [156] = {
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
  [157] = {
    [sym_text_group] = STATE(297),
    [sym_begin_group] = ACTIONS(87),
  },
  [158] = {
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(399),
  },
  [159] = {
    [anon_sym_EQ] = ACTIONS(401),
  },
  [160] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [anon_sym_makeatother] = ACTIONS(403),
    [sym__at_name] = ACTIONS(405),
  },
  [161] = {
    [sym__at_text_mode] = STATE(304),
    [sym_parameter] = STATE(304),
    [sym_text_environment] = STATE(304),
    [sym_display_math] = STATE(304),
    [sym_inline_math] = STATE(304),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(304),
    [sym_escaped] = STATE(304),
    [sym_at_command] = STATE(304),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(304),
    [sym_opt_at_text_group] = STATE(304),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(304),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(304),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(135),
    [sym_end_group] = ACTIONS(409),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(411),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(411),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(411),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(413),
  },
  [162] = {
    [anon_sym_LBRACK] = ACTIONS(415),
    [anon_sym_RBRACK] = ACTIONS(415),
    [sym__escape] = ACTIONS(415),
    [sym_begin_group] = ACTIONS(415),
    [sym_end_group] = ACTIONS(415),
    [sym_math_shift] = ACTIONS(415),
    [sym_alignment_tab] = ACTIONS(415),
    [sym_parameter_char] = ACTIONS(415),
    [sym_superscript] = ACTIONS(415),
    [sym_subscript] = ACTIONS(415),
    [sym_active_char] = ACTIONS(415),
    [sym_comment_char] = ACTIONS(415),
    [sym_text] = ACTIONS(417),
  },
  [163] = {
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_RBRACK] = ACTIONS(419),
    [sym__escape] = ACTIONS(419),
    [sym_begin_group] = ACTIONS(419),
    [sym_end_group] = ACTIONS(419),
    [sym_math_shift] = ACTIONS(419),
    [sym_alignment_tab] = ACTIONS(419),
    [sym_parameter_char] = ACTIONS(419),
    [sym_superscript] = ACTIONS(419),
    [sym_subscript] = ACTIONS(419),
    [sym_active_char] = ACTIONS(419),
    [sym_comment_char] = ACTIONS(419),
    [sym_text] = ACTIONS(421),
  },
  [164] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(425),
    [anon_sym_RBRACK] = ACTIONS(425),
    [sym__escape] = ACTIONS(425),
    [sym_begin_group] = ACTIONS(425),
    [sym_end_group] = ACTIONS(425),
    [sym_math_shift] = ACTIONS(425),
    [sym_alignment_tab] = ACTIONS(425),
    [sym_parameter_char] = ACTIONS(425),
    [sym_superscript] = ACTIONS(425),
    [sym_subscript] = ACTIONS(425),
    [sym_active_char] = ACTIONS(425),
    [sym_comment_char] = ACTIONS(425),
    [sym_text] = ACTIONS(423),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_RBRACK] = ACTIONS(429),
    [sym__escape] = ACTIONS(429),
    [sym_begin_group] = ACTIONS(429),
    [sym_end_group] = ACTIONS(429),
    [sym_math_shift] = ACTIONS(429),
    [sym_alignment_tab] = ACTIONS(429),
    [sym_parameter_char] = ACTIONS(429),
    [sym_superscript] = ACTIONS(429),
    [sym_subscript] = ACTIONS(429),
    [sym_active_char] = ACTIONS(429),
    [sym_comment_char] = ACTIONS(429),
    [sym_text] = ACTIONS(427),
  },
  [166] = {
    [sym__at_text_mode] = STATE(306),
    [sym_parameter] = STATE(306),
    [sym_text_environment] = STATE(306),
    [sym_display_math] = STATE(306),
    [sym_inline_math] = STATE(306),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(306),
    [sym_escaped] = STATE(306),
    [sym_at_command] = STATE(306),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(306),
    [sym_opt_at_text_group] = STATE(306),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(306),
    [sym_begin_opt] = STATE(166),
    [sym_end_opt] = STATE(305),
    [aux_sym_at_group_repeat1] = STATE(306),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(431),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(431),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(431),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(433),
  },
  [167] = {
    [sym__at_text_mode] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_environment] = STATE(308),
    [sym_display_math] = STATE(308),
    [sym_inline_math] = STATE(308),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(308),
    [sym_escaped] = STATE(308),
    [sym_at_command] = STATE(308),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_makeatother] = STATE(307),
    [sym_makeatother_token] = STATE(165),
    [sym_at_text_group] = STATE(308),
    [sym_opt_at_text_group] = STATE(308),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(308),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(308),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(435),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(435),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(435),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(437),
  },
  [168] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [sym__escape] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(441),
    [sym_end_group] = ACTIONS(441),
    [sym_math_shift] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_parameter_char] = ACTIONS(441),
    [sym_superscript] = ACTIONS(441),
    [sym_subscript] = ACTIONS(441),
    [sym_active_char] = ACTIONS(441),
    [sym_comment_char] = ACTIONS(441),
    [sym_text] = ACTIONS(439),
  },
  [169] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [sym__escape] = ACTIONS(445),
    [sym_begin_group] = ACTIONS(445),
    [sym_end_group] = ACTIONS(445),
    [sym_math_shift] = ACTIONS(445),
    [sym_alignment_tab] = ACTIONS(445),
    [sym_parameter_char] = ACTIONS(445),
    [sym_superscript] = ACTIONS(445),
    [sym_subscript] = ACTIONS(445),
    [sym_active_char] = ACTIONS(445),
    [sym_comment_char] = ACTIONS(445),
    [sym_text] = ACTIONS(443),
  },
  [170] = {
    [sym__text_mode] = STATE(310),
    [sym_at_group] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_text_environment] = STATE(310),
    [sym_display_math] = STATE(310),
    [sym_inline_math] = STATE(310),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(310),
    [sym_escaped] = STATE(310),
    [sym_command] = STATE(310),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(310),
    [sym_opt_text_group] = STATE(310),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(310),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(309),
    [aux_sym_text_mode_repeat1] = STATE(310),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(447),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(449),
  },
  [171] = {
    [sym__text_mode] = STATE(171),
    [sym_at_group] = STATE(171),
    [sym_parameter] = STATE(171),
    [sym_text_environment] = STATE(171),
    [sym_display_math] = STATE(171),
    [sym_inline_math] = STATE(171),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(171),
    [sym_escaped] = STATE(171),
    [sym_command] = STATE(171),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(171),
    [sym_opt_text_group] = STATE(171),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(171),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(171),
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(459),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(465),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(465),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(465),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(477),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(480),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_RBRACK] = ACTIONS(482),
    [sym__escape] = ACTIONS(482),
    [sym_begin_group] = ACTIONS(482),
    [sym_end_group] = ACTIONS(482),
    [sym_math_shift] = ACTIONS(482),
    [sym_alignment_tab] = ACTIONS(482),
    [sym_parameter_char] = ACTIONS(482),
    [sym_superscript] = ACTIONS(482),
    [sym_subscript] = ACTIONS(482),
    [sym_active_char] = ACTIONS(482),
    [sym_comment_char] = ACTIONS(482),
    [sym_text] = ACTIONS(480),
  },
  [173] = {
    [sym__text_mode] = STATE(173),
    [sym_at_group] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_environment] = STATE(173),
    [sym_display_math] = STATE(173),
    [sym_inline_math] = STATE(173),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(459),
    [sym_end_group] = ACTIONS(484),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(486),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(486),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(486),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(489),
  },
  [174] = {
    [sym_begin_group] = ACTIONS(492),
  },
  [175] = {
    [anon_sym_LBRACK] = ACTIONS(494),
    [anon_sym_RBRACK] = ACTIONS(494),
    [sym__escape] = ACTIONS(494),
    [sym_begin_group] = ACTIONS(494),
    [sym_end_group] = ACTIONS(494),
    [sym_math_shift] = ACTIONS(494),
    [sym_alignment_tab] = ACTIONS(494),
    [sym_parameter_char] = ACTIONS(494),
    [sym_superscript] = ACTIONS(494),
    [sym_subscript] = ACTIONS(494),
    [sym_active_char] = ACTIONS(494),
    [sym_comment_char] = ACTIONS(494),
    [sym_text] = ACTIONS(496),
  },
  [176] = {
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_environment] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(312),
    [sym_command] = STATE(312),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(312),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_end_group] = ACTIONS(498),
    [sym_alignment_tab] = ACTIONS(500),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(500),
    [sym_subscript] = ACTIONS(500),
    [sym_active_char] = ACTIONS(500),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(502),
  },
  [177] = {
    [sym_math_shift] = ACTIONS(504),
  },
  [178] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_RBRACK] = ACTIONS(508),
    [sym__escape] = ACTIONS(508),
    [sym_begin_group] = ACTIONS(508),
    [sym_end_group] = ACTIONS(508),
    [sym_math_shift] = ACTIONS(508),
    [sym_alignment_tab] = ACTIONS(508),
    [sym_parameter_char] = ACTIONS(508),
    [sym_superscript] = ACTIONS(508),
    [sym_subscript] = ACTIONS(508),
    [sym_active_char] = ACTIONS(508),
    [sym_comment_char] = ACTIONS(508),
    [sym_text] = ACTIONS(506),
  },
  [179] = {
    [sym__text_mode] = STATE(316),
    [sym_text_mode] = STATE(315),
    [sym_at_group] = STATE(316),
    [sym_parameter] = STATE(316),
    [sym_text_environment] = STATE(316),
    [sym_display_math] = STATE(316),
    [sym_inline_math] = STATE(316),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(316),
    [sym_escaped] = STATE(316),
    [sym_command] = STATE(316),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(316),
    [sym_opt_text_group] = STATE(316),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(316),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(316),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(510),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(512),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(512),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(512),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(514),
  },
  [180] = {
    [anon_sym_LBRACK] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(516),
    [sym__escape] = ACTIONS(516),
    [sym_begin_group] = ACTIONS(516),
    [sym_end_group] = ACTIONS(516),
    [sym_math_shift] = ACTIONS(516),
    [sym_alignment_tab] = ACTIONS(516),
    [sym_parameter_char] = ACTIONS(516),
    [sym_superscript] = ACTIONS(516),
    [sym_subscript] = ACTIONS(516),
    [sym_active_char] = ACTIONS(516),
    [sym_comment_char] = ACTIONS(516),
    [sym_text] = ACTIONS(518),
  },
  [181] = {
    [anon_sym_tag] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_end] = ACTIONS(289),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym__name] = ACTIONS(51),
  },
  [182] = {
    [anon_sym_LBRACK] = ACTIONS(520),
    [anon_sym_RBRACK] = ACTIONS(520),
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
    [sym_text] = ACTIONS(522),
  },
  [183] = {
    [sym__math_mode] = STATE(189),
    [sym_parameter] = STATE(189),
    [sym_math_environment] = STATE(189),
    [sym_tag] = STATE(189),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(189),
    [sym_command] = STATE(189),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_end] = STATE(317),
    [sym_end_token] = STATE(145),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(189),
    [sym_opt_math_group] = STATE(189),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(189),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(189),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(243),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(243),
    [sym_subscript] = ACTIONS(243),
    [sym_active_char] = ACTIONS(243),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(245),
  },
  [184] = {
    [anon_sym_LBRACK] = ACTIONS(524),
    [anon_sym_RBRACK] = ACTIONS(524),
    [sym__escape] = ACTIONS(524),
    [sym_begin_group] = ACTIONS(524),
    [sym_end_group] = ACTIONS(524),
    [sym_math_shift] = ACTIONS(524),
    [sym_alignment_tab] = ACTIONS(524),
    [sym_parameter_char] = ACTIONS(524),
    [sym_superscript] = ACTIONS(524),
    [sym_subscript] = ACTIONS(524),
    [sym_active_char] = ACTIONS(524),
    [sym_comment_char] = ACTIONS(524),
    [sym_text] = ACTIONS(526),
  },
  [185] = {
    [sym__math_mode] = STATE(319),
    [sym_parameter] = STATE(319),
    [sym_math_environment] = STATE(319),
    [sym_tag] = STATE(319),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(319),
    [sym_command] = STATE(319),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(319),
    [sym_opt_math_group] = STATE(319),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(319),
    [sym_begin_opt] = STATE(82),
    [sym_end_opt] = STATE(318),
    [aux_sym_math_mode_repeat1] = STATE(319),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(528),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(528),
    [sym_subscript] = ACTIONS(528),
    [sym_active_char] = ACTIONS(528),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(530),
  },
  [186] = {
    [sym__math_mode] = STATE(186),
    [sym_parameter] = STATE(186),
    [sym_math_environment] = STATE(186),
    [sym_tag] = STATE(186),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(186),
    [sym_command] = STATE(186),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(186),
    [sym_opt_math_group] = STATE(186),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(186),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(186),
    [anon_sym_LBRACK] = ACTIONS(532),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(538),
    [sym_math_shift] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(543),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(543),
    [sym_subscript] = ACTIONS(543),
    [sym_active_char] = ACTIONS(543),
    [sym_comment_char] = ACTIONS(549),
    [sym_text] = ACTIONS(552),
  },
  [187] = {
    [anon_sym_RBRACK] = ACTIONS(555),
  },
  [188] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_RBRACK] = ACTIONS(559),
    [sym__escape] = ACTIONS(559),
    [sym_begin_group] = ACTIONS(559),
    [sym_end_group] = ACTIONS(559),
    [sym_math_shift] = ACTIONS(559),
    [sym_alignment_tab] = ACTIONS(559),
    [sym_parameter_char] = ACTIONS(559),
    [sym_superscript] = ACTIONS(559),
    [sym_subscript] = ACTIONS(559),
    [sym_active_char] = ACTIONS(559),
    [sym_comment_char] = ACTIONS(559),
    [sym_text] = ACTIONS(557),
  },
  [189] = {
    [sym__math_mode] = STATE(189),
    [sym_parameter] = STATE(189),
    [sym_math_environment] = STATE(189),
    [sym_tag] = STATE(189),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(189),
    [sym_command] = STATE(189),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(189),
    [sym_opt_math_group] = STATE(189),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(189),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(189),
    [anon_sym_LBRACK] = ACTIONS(532),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(561),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(561),
    [sym_subscript] = ACTIONS(561),
    [sym_active_char] = ACTIONS(561),
    [sym_comment_char] = ACTIONS(549),
    [sym_text] = ACTIONS(564),
  },
  [190] = {
    [anon_sym_RPAREN] = ACTIONS(567),
  },
  [191] = {
    [anon_sym_end] = ACTIONS(569),
  },
  [192] = {
    [sym_begin_group] = ACTIONS(571),
  },
  [193] = {
    [sym_begin_group] = ACTIONS(573),
  },
  [194] = {
    [sym_end_alignat] = STATE(324),
    [sym_end_token] = STATE(325),
    [sym__escape] = ACTIONS(249),
  },
  [195] = {
    [sym_end_alignat_star] = STATE(324),
    [sym_end_token] = STATE(326),
    [sym__escape] = ACTIONS(249),
  },
  [196] = {
    [sym_begin_group] = ACTIONS(575),
  },
  [197] = {
    [sym_end_dmath] = STATE(324),
    [sym_end_token] = STATE(328),
    [sym__escape] = ACTIONS(249),
  },
  [198] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(329),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [199] = {
    [sym__end_of_line] = ACTIONS(439),
  },
  [200] = {
    [sym__end_of_line] = ACTIONS(443),
  },
  [201] = {
    [sym__text_mode] = STATE(310),
    [sym_at_group] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_text_environment] = STATE(310),
    [sym_display_math] = STATE(310),
    [sym_inline_math] = STATE(310),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(310),
    [sym_escaped] = STATE(310),
    [sym_command] = STATE(310),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(310),
    [sym_opt_text_group] = STATE(310),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(310),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(330),
    [aux_sym_text_mode_repeat1] = STATE(310),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(253),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(447),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(449),
  },
  [202] = {
    [sym_end_dmath_star] = STATE(324),
    [sym_end_token] = STATE(331),
    [sym__escape] = ACTIONS(249),
  },
  [203] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(332),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [204] = {
    [sym_end_dseries] = STATE(324),
    [sym_end_token] = STATE(333),
    [sym__escape] = ACTIONS(249),
  },
  [205] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(334),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [206] = {
    [sym_end_dseries_star] = STATE(324),
    [sym_end_token] = STATE(335),
    [sym__escape] = ACTIONS(249),
  },
  [207] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(336),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [208] = {
    [sym_end_dgroup] = STATE(324),
    [sym_end_token] = STATE(337),
    [sym__escape] = ACTIONS(249),
  },
  [209] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(338),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [210] = {
    [sym_end_dgroup_star] = STATE(324),
    [sym_end_token] = STATE(339),
    [sym__escape] = ACTIONS(249),
  },
  [211] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(340),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [212] = {
    [sym_end_darray] = STATE(324),
    [sym_end_token] = STATE(341),
    [sym__escape] = ACTIONS(249),
  },
  [213] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(342),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [214] = {
    [sym_end_darray_star] = STATE(324),
    [sym_end_token] = STATE(343),
    [sym__escape] = ACTIONS(249),
  },
  [215] = {
    [sym__math_mode] = STATE(87),
    [sym_math_mode] = STATE(344),
    [sym_parameter] = STATE(87),
    [sym_math_environment] = STATE(87),
    [sym_tag] = STATE(87),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(87),
    [sym_command] = STATE(87),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(87),
    [sym_opt_math_group] = STATE(87),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(87),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(87),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(59),
    [sym_begin_group] = ACTIONS(61),
    [sym_alignment_tab] = ACTIONS(83),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(83),
    [sym_subscript] = ACTIONS(83),
    [sym_active_char] = ACTIONS(83),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(85),
  },
  [216] = {
    [sym_begin_group] = ACTIONS(577),
  },
  [217] = {
    [sym_begin_group] = ACTIONS(579),
  },
  [218] = {
    [sym_begin_group] = ACTIONS(581),
  },
  [219] = {
    [sym_begin_group] = ACTIONS(583),
  },
  [220] = {
    [sym_begin_group] = ACTIONS(585),
  },
  [221] = {
    [sym_begin_group] = ACTIONS(587),
  },
  [222] = {
    [sym_begin_group] = ACTIONS(589),
  },
  [223] = {
    [sym_begin_group] = ACTIONS(591),
  },
  [224] = {
    [sym_begin_group] = ACTIONS(593),
  },
  [225] = {
    [sym_begin_group] = ACTIONS(595),
  },
  [226] = {
    [sym_begin_group] = ACTIONS(597),
  },
  [227] = {
    [sym_begin_group] = ACTIONS(599),
  },
  [228] = {
    [sym_begin_group] = ACTIONS(601),
  },
  [229] = {
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
  [230] = {
    [sym_begin_group] = ACTIONS(607),
  },
  [231] = {
    [aux_sym_verbatim_text_repeat1] = STATE(231),
    [sym__escape] = ACTIONS(609),
    [sym__verbatim_token] = ACTIONS(611),
  },
  [232] = {
    [sym_end_Verbatim] = STATE(359),
    [sym_end_token] = STATE(233),
    [sym__escape] = ACTIONS(249),
  },
  [233] = {
    [sym_begin_group] = ACTIONS(614),
  },
  [234] = {
    [sym__verbatim_token] = ACTIONS(439),
  },
  [235] = {
    [sym__verbatim_token] = ACTIONS(443),
  },
  [236] = {
    [sym__text_mode] = STATE(310),
    [sym_at_group] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_text_environment] = STATE(310),
    [sym_display_math] = STATE(310),
    [sym_inline_math] = STATE(310),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(310),
    [sym_escaped] = STATE(310),
    [sym_command] = STATE(310),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(310),
    [sym_opt_text_group] = STATE(310),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(310),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(361),
    [aux_sym_text_mode_repeat1] = STATE(310),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(277),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(447),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(449),
  },
  [237] = {
    [sym_end_Verbatim_star] = STATE(359),
    [sym_end_token] = STATE(238),
    [sym__escape] = ACTIONS(249),
  },
  [238] = {
    [sym_begin_group] = ACTIONS(616),
  },
  [239] = {
    [sym_end_BVerbatim] = STATE(359),
    [sym_end_token] = STATE(240),
    [sym__escape] = ACTIONS(249),
  },
  [240] = {
    [sym_begin_group] = ACTIONS(618),
  },
  [241] = {
    [sym_end_BVerbatim_star] = STATE(359),
    [sym_end_token] = STATE(242),
    [sym__escape] = ACTIONS(249),
  },
  [242] = {
    [sym_begin_group] = ACTIONS(620),
  },
  [243] = {
    [sym_end_LVerbatim] = STATE(359),
    [sym_end_token] = STATE(244),
    [sym__escape] = ACTIONS(249),
  },
  [244] = {
    [sym_begin_group] = ACTIONS(622),
  },
  [245] = {
    [sym_end_LVerbatim_star] = STATE(359),
    [sym_end_token] = STATE(246),
    [sym__escape] = ACTIONS(249),
  },
  [246] = {
    [sym_begin_group] = ACTIONS(624),
  },
  [247] = {
    [sym_end_lstlisting] = STATE(359),
    [sym_end_token] = STATE(248),
    [sym__escape] = ACTIONS(249),
  },
  [248] = {
    [sym_begin_group] = ACTIONS(626),
  },
  [249] = {
    [sym__verbatim_token] = ACTIONS(195),
  },
  [250] = {
    [sym__text_mode] = STATE(173),
    [sym_at_group] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_environment] = STATE(173),
    [sym_display_math] = STATE(173),
    [sym_inline_math] = STATE(173),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(628),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(201),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(203),
  },
  [251] = {
    [sym_end_minted] = STATE(359),
    [sym_end_token] = STATE(369),
    [sym__escape] = ACTIONS(249),
  },
  [252] = {
    [sym_begin_group] = ACTIONS(630),
  },
  [253] = {
    [ts_builtin_sym_end] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_RBRACK] = ACTIONS(634),
    [sym__escape] = ACTIONS(634),
    [sym_begin_group] = ACTIONS(634),
    [sym_end_group] = ACTIONS(634),
    [sym_math_shift] = ACTIONS(634),
    [sym_alignment_tab] = ACTIONS(634),
    [sym_parameter_char] = ACTIONS(634),
    [sym_superscript] = ACTIONS(634),
    [sym_subscript] = ACTIONS(634),
    [sym_active_char] = ACTIONS(634),
    [sym_comment_char] = ACTIONS(634),
    [sym_text] = ACTIONS(632),
  },
  [254] = {
    [ts_builtin_sym_end] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(638),
    [anon_sym_RBRACK] = ACTIONS(638),
    [sym__escape] = ACTIONS(638),
    [sym_begin_group] = ACTIONS(638),
    [sym_end_group] = ACTIONS(638),
    [sym_math_shift] = ACTIONS(638),
    [sym_alignment_tab] = ACTIONS(638),
    [sym_parameter_char] = ACTIONS(638),
    [sym_superscript] = ACTIONS(638),
    [sym_subscript] = ACTIONS(638),
    [sym_active_char] = ACTIONS(638),
    [sym_comment_char] = ACTIONS(638),
    [sym_text] = ACTIONS(636),
  },
  [255] = {
    [sym__text_mode] = STATE(255),
    [sym_at_group] = STATE(255),
    [sym_parameter] = STATE(255),
    [sym_text_environment] = STATE(255),
    [sym_display_math] = STATE(255),
    [sym_inline_math] = STATE(255),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(255),
    [sym_escaped] = STATE(255),
    [sym_command] = STATE(255),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(255),
    [sym_opt_text_group] = STATE(255),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(255),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(255),
    [anon_sym_LBRACK] = ACTIONS(453),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(459),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(640),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(640),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(640),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(643),
  },
  [256] = {
    [sym_end_group] = ACTIONS(646),
  },
  [257] = {
    [sym_end_group] = ACTIONS(648),
  },
  [258] = {
    [sym_end_group] = ACTIONS(650),
  },
  [259] = {
    [sym_end_group] = ACTIONS(652),
  },
  [260] = {
    [sym_end_group] = ACTIONS(654),
  },
  [261] = {
    [sym_end_group] = ACTIONS(656),
  },
  [262] = {
    [sym_end_group] = ACTIONS(658),
  },
  [263] = {
    [sym_end_group] = ACTIONS(660),
  },
  [264] = {
    [sym_end_group] = ACTIONS(662),
  },
  [265] = {
    [sym_end_group] = ACTIONS(664),
  },
  [266] = {
    [sym_end_group] = ACTIONS(666),
  },
  [267] = {
    [sym_end_group] = ACTIONS(668),
  },
  [268] = {
    [sym_end_group] = ACTIONS(670),
  },
  [269] = {
    [sym_end_group] = ACTIONS(672),
  },
  [270] = {
    [sym_end_group] = ACTIONS(674),
  },
  [271] = {
    [sym_end_group] = ACTIONS(676),
  },
  [272] = {
    [sym_end_group] = ACTIONS(678),
  },
  [273] = {
    [sym_end_group] = ACTIONS(680),
  },
  [274] = {
    [sym_end_group] = ACTIONS(682),
  },
  [275] = {
    [sym_end_group] = ACTIONS(684),
  },
  [276] = {
    [sym_end_group] = ACTIONS(686),
  },
  [277] = {
    [sym_end_group] = ACTIONS(688),
  },
  [278] = {
    [sym_end_group] = ACTIONS(690),
  },
  [279] = {
    [sym_end_group] = ACTIONS(692),
  },
  [280] = {
    [sym_end_group] = ACTIONS(694),
  },
  [281] = {
    [sym_end_group] = ACTIONS(696),
  },
  [282] = {
    [sym_end_group] = ACTIONS(698),
  },
  [283] = {
    [sym_end_group] = ACTIONS(700),
  },
  [284] = {
    [sym_end_group] = ACTIONS(702),
  },
  [285] = {
    [sym_end_group] = ACTIONS(704),
  },
  [286] = {
    [sym_end_group] = ACTIONS(706),
  },
  [287] = {
    [sym_end_group] = ACTIONS(708),
  },
  [288] = {
    [sym_end_group] = ACTIONS(710),
  },
  [289] = {
    [sym_end_group] = ACTIONS(712),
  },
  [290] = {
    [sym_end_group] = ACTIONS(714),
  },
  [291] = {
    [sym_end_group] = ACTIONS(716),
  },
  [292] = {
    [ts_builtin_sym_end] = ACTIONS(718),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_RBRACK] = ACTIONS(720),
    [sym__escape] = ACTIONS(720),
    [sym_begin_group] = ACTIONS(720),
    [sym_end_group] = ACTIONS(720),
    [sym_math_shift] = ACTIONS(720),
    [sym_alignment_tab] = ACTIONS(720),
    [sym_parameter_char] = ACTIONS(720),
    [sym_superscript] = ACTIONS(720),
    [sym_subscript] = ACTIONS(720),
    [sym_active_char] = ACTIONS(720),
    [sym_comment_char] = ACTIONS(720),
    [sym_text] = ACTIONS(718),
  },
  [293] = {
    [sym_begin_group] = ACTIONS(439),
  },
  [294] = {
    [sym_begin_group] = ACTIONS(443),
  },
  [295] = {
    [sym__text_mode] = STATE(310),
    [sym_at_group] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_text_environment] = STATE(310),
    [sym_display_math] = STATE(310),
    [sym_inline_math] = STATE(310),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(310),
    [sym_escaped] = STATE(310),
    [sym_command] = STATE(310),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(310),
    [sym_opt_text_group] = STATE(310),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(310),
    [sym_begin_opt] = STATE(59),
    [sym_end_opt] = STATE(406),
    [aux_sym_text_mode_repeat1] = STATE(310),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(381),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(447),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(447),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(447),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(449),
  },
  [296] = {
    [ts_builtin_sym_end] = ACTIONS(722),
    [anon_sym_LBRACK] = ACTIONS(724),
    [anon_sym_RBRACK] = ACTIONS(724),
    [sym__escape] = ACTIONS(724),
    [sym_begin_group] = ACTIONS(724),
    [sym_end_group] = ACTIONS(724),
    [sym_math_shift] = ACTIONS(724),
    [sym_alignment_tab] = ACTIONS(724),
    [sym_parameter_char] = ACTIONS(724),
    [sym_superscript] = ACTIONS(724),
    [sym_subscript] = ACTIONS(724),
    [sym_active_char] = ACTIONS(724),
    [sym_comment_char] = ACTIONS(724),
    [sym_text] = ACTIONS(722),
  },
  [297] = {
    [ts_builtin_sym_end] = ACTIONS(726),
    [anon_sym_LBRACK] = ACTIONS(728),
    [anon_sym_RBRACK] = ACTIONS(728),
    [sym__escape] = ACTIONS(728),
    [sym_begin_group] = ACTIONS(728),
    [sym_end_group] = ACTIONS(728),
    [sym_math_shift] = ACTIONS(728),
    [sym_alignment_tab] = ACTIONS(728),
    [sym_parameter_char] = ACTIONS(728),
    [sym_superscript] = ACTIONS(728),
    [sym_subscript] = ACTIONS(728),
    [sym_active_char] = ACTIONS(728),
    [sym_comment_char] = ACTIONS(728),
    [sym_text] = ACTIONS(726),
  },
  [298] = {
    [anon_sym_EQ] = ACTIONS(167),
  },
  [299] = {
    [sym_number] = ACTIONS(730),
  },
  [300] = {
    [ts_builtin_sym_end] = ACTIONS(732),
    [anon_sym_LBRACK] = ACTIONS(734),
    [anon_sym_RBRACK] = ACTIONS(734),
    [sym__escape] = ACTIONS(734),
    [sym_begin_group] = ACTIONS(734),
    [sym_end_group] = ACTIONS(734),
    [sym_math_shift] = ACTIONS(734),
    [sym_alignment_tab] = ACTIONS(734),
    [sym_parameter_char] = ACTIONS(734),
    [sym_superscript] = ACTIONS(734),
    [sym_subscript] = ACTIONS(734),
    [sym_active_char] = ACTIONS(734),
    [sym_comment_char] = ACTIONS(734),
    [sym_text] = ACTIONS(732),
  },
  [301] = {
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [sym__escape] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_end_group] = ACTIONS(736),
    [sym_math_shift] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_parameter_char] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_active_char] = ACTIONS(736),
    [sym_comment_char] = ACTIONS(736),
    [sym_text] = ACTIONS(738),
  },
  [302] = {
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_SLASH_LBRACK_CARET_LPAREN_RPAREN_BSLASH_LBRACK_BSLASH_RBRACK_RBRACK_SLASH] = ACTIONS(33),
    [anon_sym_begin] = ACTIONS(35),
    [anon_sym_documentclass] = ACTIONS(37),
    [anon_sym_usepackage] = ACTIONS(39),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(41),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(45),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(47),
    [sym__at_name] = ACTIONS(405),
  },
  [303] = {
    [anon_sym_LBRACK] = ACTIONS(740),
    [anon_sym_RBRACK] = ACTIONS(740),
    [sym__escape] = ACTIONS(740),
    [sym_begin_group] = ACTIONS(740),
    [sym_end_group] = ACTIONS(740),
    [sym_math_shift] = ACTIONS(740),
    [sym_alignment_tab] = ACTIONS(740),
    [sym_parameter_char] = ACTIONS(740),
    [sym_superscript] = ACTIONS(740),
    [sym_subscript] = ACTIONS(740),
    [sym_active_char] = ACTIONS(740),
    [sym_comment_char] = ACTIONS(740),
    [sym_text] = ACTIONS(742),
  },
  [304] = {
    [sym__at_text_mode] = STATE(409),
    [sym_parameter] = STATE(409),
    [sym_text_environment] = STATE(409),
    [sym_display_math] = STATE(409),
    [sym_inline_math] = STATE(409),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(409),
    [sym_escaped] = STATE(409),
    [sym_at_command] = STATE(409),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(409),
    [sym_opt_at_text_group] = STATE(409),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(409),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(409),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(135),
    [sym_end_group] = ACTIONS(744),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(746),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(746),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(748),
  },
  [305] = {
    [anon_sym_LBRACK] = ACTIONS(750),
    [anon_sym_RBRACK] = ACTIONS(750),
    [sym__escape] = ACTIONS(750),
    [sym_begin_group] = ACTIONS(750),
    [sym_end_group] = ACTIONS(750),
    [sym_math_shift] = ACTIONS(750),
    [sym_alignment_tab] = ACTIONS(750),
    [sym_parameter_char] = ACTIONS(750),
    [sym_superscript] = ACTIONS(750),
    [sym_subscript] = ACTIONS(750),
    [sym_active_char] = ACTIONS(750),
    [sym_comment_char] = ACTIONS(750),
    [sym_text] = ACTIONS(752),
  },
  [306] = {
    [sym__at_text_mode] = STATE(411),
    [sym_parameter] = STATE(411),
    [sym_text_environment] = STATE(411),
    [sym_display_math] = STATE(411),
    [sym_inline_math] = STATE(411),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(411),
    [sym_escaped] = STATE(411),
    [sym_at_command] = STATE(411),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(411),
    [sym_opt_at_text_group] = STATE(411),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(411),
    [sym_begin_opt] = STATE(166),
    [sym_end_opt] = STATE(410),
    [aux_sym_at_group_repeat1] = STATE(411),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(147),
    [sym__escape] = ACTIONS(407),
    [sym_begin_group] = ACTIONS(135),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(754),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(754),
    [sym_subscript] = ACTIONS(139),
    [sym_active_char] = ACTIONS(754),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(756),
  },
  [307] = {
    [ts_builtin_sym_end] = ACTIONS(758),
    [anon_sym_LBRACK] = ACTIONS(760),
    [anon_sym_RBRACK] = ACTIONS(760),
    [sym__escape] = ACTIONS(760),
    [sym_begin_group] = ACTIONS(760),
    [sym_end_group] = ACTIONS(760),
    [sym_math_shift] = ACTIONS(760),
    [sym_alignment_tab] = ACTIONS(760),
    [sym_parameter_char] = ACTIONS(760),
    [sym_superscript] = ACTIONS(760),
    [sym_subscript] = ACTIONS(760),
    [sym_active_char] = ACTIONS(760),
    [sym_comment_char] = ACTIONS(760),
    [sym_text] = ACTIONS(758),
  },
  [308] = {
    [sym__at_text_mode] = STATE(308),
    [sym_parameter] = STATE(308),
    [sym_text_environment] = STATE(308),
    [sym_display_math] = STATE(308),
    [sym_inline_math] = STATE(308),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(308),
    [sym_escaped] = STATE(308),
    [sym_at_command] = STATE(308),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(308),
    [sym_opt_at_text_group] = STATE(308),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(308),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(308),
    [anon_sym_LBRACK] = ACTIONS(762),
    [sym__escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(768),
    [sym_math_shift] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(774),
    [sym_parameter_char] = ACTIONS(777),
    [sym_superscript] = ACTIONS(774),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(774),
    [sym_comment_char] = ACTIONS(783),
    [sym_text] = ACTIONS(786),
  },
  [309] = {
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(791),
    [anon_sym_RBRACK] = ACTIONS(791),
    [sym__escape] = ACTIONS(791),
    [sym_begin_group] = ACTIONS(791),
    [sym_end_group] = ACTIONS(791),
    [sym_math_shift] = ACTIONS(791),
    [sym_alignment_tab] = ACTIONS(791),
    [sym_parameter_char] = ACTIONS(791),
    [sym_superscript] = ACTIONS(791),
    [sym_subscript] = ACTIONS(791),
    [sym_active_char] = ACTIONS(791),
    [sym_comment_char] = ACTIONS(791),
    [sym_text] = ACTIONS(789),
  },
  [310] = {
    [sym__text_mode] = STATE(310),
    [sym_at_group] = STATE(310),
    [sym_parameter] = STATE(310),
    [sym_text_environment] = STATE(310),
    [sym_display_math] = STATE(310),
    [sym_inline_math] = STATE(310),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(310),
    [sym_escaped] = STATE(310),
    [sym_command] = STATE(310),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(310),
    [sym_opt_text_group] = STATE(310),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(310),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(310),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_RBRACK] = ACTIONS(484),
    [sym__escape] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(459),
    [sym_math_shift] = ACTIONS(462),
    [sym_alignment_tab] = ACTIONS(793),
    [sym_parameter_char] = ACTIONS(468),
    [sym_superscript] = ACTIONS(793),
    [sym_subscript] = ACTIONS(471),
    [sym_active_char] = ACTIONS(793),
    [sym_comment_char] = ACTIONS(474),
    [sym_text] = ACTIONS(796),
  },
  [311] = {
    [anon_sym_LBRACK] = ACTIONS(799),
    [anon_sym_RBRACK] = ACTIONS(799),
    [sym__escape] = ACTIONS(799),
    [sym_begin_group] = ACTIONS(799),
    [sym_end_group] = ACTIONS(799),
    [sym_math_shift] = ACTIONS(799),
    [sym_alignment_tab] = ACTIONS(799),
    [sym_parameter_char] = ACTIONS(799),
    [sym_superscript] = ACTIONS(799),
    [sym_subscript] = ACTIONS(799),
    [sym_active_char] = ACTIONS(799),
    [sym_comment_char] = ACTIONS(799),
    [sym_text] = ACTIONS(801),
  },
  [312] = {
    [sym__math_mode] = STATE(312),
    [sym_parameter] = STATE(312),
    [sym_math_environment] = STATE(312),
    [sym_tag] = STATE(312),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(312),
    [sym_command] = STATE(312),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(312),
    [sym_opt_math_group] = STATE(312),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(312),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(312),
    [anon_sym_LBRACK] = ACTIONS(532),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(538),
    [sym_end_group] = ACTIONS(541),
    [sym_alignment_tab] = ACTIONS(803),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(803),
    [sym_subscript] = ACTIONS(803),
    [sym_active_char] = ACTIONS(803),
    [sym_comment_char] = ACTIONS(549),
    [sym_text] = ACTIONS(806),
  },
  [313] = {
    [sym_math_shift] = ACTIONS(809),
  },
  [314] = {
    [anon_sym_LBRACK] = ACTIONS(811),
    [anon_sym_RBRACK] = ACTIONS(811),
    [sym__escape] = ACTIONS(811),
    [sym_begin_group] = ACTIONS(811),
    [sym_end_group] = ACTIONS(811),
    [sym_math_shift] = ACTIONS(811),
    [sym_alignment_tab] = ACTIONS(811),
    [sym_parameter_char] = ACTIONS(811),
    [sym_superscript] = ACTIONS(811),
    [sym_subscript] = ACTIONS(811),
    [sym_active_char] = ACTIONS(811),
    [sym_comment_char] = ACTIONS(811),
    [sym_text] = ACTIONS(813),
  },
  [315] = {
    [sym_end_group] = ACTIONS(815),
  },
  [316] = {
    [sym__text_mode] = STATE(173),
    [sym_at_group] = STATE(173),
    [sym_parameter] = STATE(173),
    [sym_text_environment] = STATE(173),
    [sym_display_math] = STATE(173),
    [sym_inline_math] = STATE(173),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(173),
    [sym_escaped] = STATE(173),
    [sym_command] = STATE(173),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_makeatletter] = STATE(57),
    [sym_makeatletter_token] = STATE(58),
    [sym_text_group] = STATE(173),
    [sym_opt_text_group] = STATE(173),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(173),
    [sym_begin_opt] = STATE(59),
    [aux_sym_text_mode_repeat1] = STATE(173),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym__escape] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_end_group] = ACTIONS(817),
    [sym_math_shift] = ACTIONS(13),
    [sym_alignment_tab] = ACTIONS(201),
    [sym_parameter_char] = ACTIONS(17),
    [sym_superscript] = ACTIONS(201),
    [sym_subscript] = ACTIONS(19),
    [sym_active_char] = ACTIONS(201),
    [sym_comment_char] = ACTIONS(21),
    [sym_text] = ACTIONS(203),
  },
  [317] = {
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
    [sym_text] = ACTIONS(821),
  },
  [318] = {
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
    [sym__escape] = ACTIONS(823),
    [sym_begin_group] = ACTIONS(823),
    [sym_end_group] = ACTIONS(823),
    [sym_math_shift] = ACTIONS(823),
    [sym_alignment_tab] = ACTIONS(823),
    [sym_parameter_char] = ACTIONS(823),
    [sym_superscript] = ACTIONS(823),
    [sym_subscript] = ACTIONS(823),
    [sym_active_char] = ACTIONS(823),
    [sym_comment_char] = ACTIONS(823),
    [sym_text] = ACTIONS(825),
  },
  [319] = {
    [sym__math_mode] = STATE(319),
    [sym_parameter] = STATE(319),
    [sym_math_environment] = STATE(319),
    [sym_tag] = STATE(319),
    [sym_tag_token] = STATE(79),
    [sym_escaped] = STATE(319),
    [sym_command] = STATE(319),
    [sym_begin] = STATE(80),
    [sym_begin_token] = STATE(81),
    [sym_documentclass] = STATE(50),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(50),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(50),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(50),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(50),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(50),
    [sym_catcode_token] = STATE(56),
    [sym_math_group] = STATE(319),
    [sym_opt_math_group] = STATE(319),
    [sym_token] = STATE(50),
    [sym_comment] = STATE(319),
    [sym_begin_opt] = STATE(82),
    [aux_sym_math_mode_repeat1] = STATE(319),
    [anon_sym_LBRACK] = ACTIONS(532),
    [anon_sym_RBRACK] = ACTIONS(541),
    [sym__escape] = ACTIONS(535),
    [sym_begin_group] = ACTIONS(538),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(546),
    [sym_superscript] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_active_char] = ACTIONS(827),
    [sym_comment_char] = ACTIONS(549),
    [sym_text] = ACTIONS(830),
  },
  [320] = {
    [ts_builtin_sym_end] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(835),
    [anon_sym_RBRACK] = ACTIONS(835),
    [sym__escape] = ACTIONS(835),
    [sym_begin_group] = ACTIONS(835),
    [sym_end_group] = ACTIONS(835),
    [sym_math_shift] = ACTIONS(835),
    [sym_alignment_tab] = ACTIONS(835),
    [sym_parameter_char] = ACTIONS(835),
    [sym_superscript] = ACTIONS(835),
    [sym_subscript] = ACTIONS(835),
    [sym_active_char] = ACTIONS(835),
    [sym_comment_char] = ACTIONS(835),
    [sym_text] = ACTIONS(833),
  },
  [321] = {
    [ts_builtin_sym_end] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(839),
    [anon_sym_RBRACK] = ACTIONS(839),
    [sym__escape] = ACTIONS(839),
    [sym_begin_group] = ACTIONS(839),
    [sym_end_group] = ACTIONS(839),
    [sym_math_shift] = ACTIONS(839),
    [sym_alignment_tab] = ACTIONS(839),
    [sym_parameter_char] = ACTIONS(839),
    [sym_superscript] = ACTIONS(839),
    [sym_subscript] = ACTIONS(839),
    [sym_active_char] = ACTIONS(839),
    [sym_comment_char] = ACTIONS(839),
    [sym_text] = ACTIONS(837),
  },
  [322] = {
    [anon_sym_align] = ACTIONS(841),
  },
  [323] = {
    [anon_sym_align_STAR] = ACTIONS(843),
  },
  [324] = {
    [ts_builtin_sym_end] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_RBRACK] = ACTIONS(847),
    [sym__escape] = ACTIONS(847),
    [sym_begin_group] = ACTIONS(847),
    [sym_end_group] = ACTIONS(847),
    [sym_math_shift] = ACTIONS(847),
    [sym_alignment_tab] = ACTIONS(847),
    [sym_parameter_char] = ACTIONS(847),
    [sym_superscript] = ACTIONS(847),
    [sym_subscript] = ACTIONS(847),
    [sym_active_char] = ACTIONS(847),
    [sym_comment_char] = ACTIONS(847),
    [sym_text] = ACTIONS(845),
  },
  [325] = {
    [sym_begin_group] = ACTIONS(849),
  },
  [326] = {
    [sym_begin_group] = ACTIONS(851),
  },
  [327] = {
    [anon_sym_displaymath] = ACTIONS(853),
  },
  [328] = {
    [sym_begin_group] = ACTIONS(855),
  },
  [329] = {
    [sym_end_dmath] = STATE(412),
    [sym_end_token] = STATE(328),
    [sym__escape] = ACTIONS(249),
  },
  [330] = {
    [sym__end_of_line] = ACTIONS(789),
  },
  [331] = {
    [sym_begin_group] = ACTIONS(857),
  },
  [332] = {
    [sym_end_dmath_star] = STATE(412),
    [sym_end_token] = STATE(331),
    [sym__escape] = ACTIONS(249),
  },
  [333] = {
    [sym_begin_group] = ACTIONS(859),
  },
  [334] = {
    [sym_end_dseries] = STATE(412),
    [sym_end_token] = STATE(333),
    [sym__escape] = ACTIONS(249),
  },
  [335] = {
    [sym_begin_group] = ACTIONS(861),
  },
  [336] = {
    [sym_end_dseries_star] = STATE(412),
    [sym_end_token] = STATE(335),
    [sym__escape] = ACTIONS(249),
  },
  [337] = {
    [sym_begin_group] = ACTIONS(863),
  },
  [338] = {
    [sym_end_dgroup] = STATE(412),
    [sym_end_token] = STATE(337),
    [sym__escape] = ACTIONS(249),
  },
  [339] = {
    [sym_begin_group] = ACTIONS(865),
  },
  [340] = {
    [sym_end_dgroup_star] = STATE(412),
    [sym_end_token] = STATE(339),
    [sym__escape] = ACTIONS(249),
  },
  [341] = {
    [sym_begin_group] = ACTIONS(867),
  },
  [342] = {
    [sym_end_darray] = STATE(412),
    [sym_end_token] = STATE(341),
    [sym__escape] = ACTIONS(249),
  },
  [343] = {
    [sym_begin_group] = ACTIONS(869),
  },
  [344] = {
    [sym_end_darray_star] = STATE(412),
    [sym_end_token] = STATE(343),
    [sym__escape] = ACTIONS(249),
  },
  [345] = {
    [anon_sym_eqnarray] = ACTIONS(871),
  },
  [346] = {
    [anon_sym_eqnarray_STAR] = ACTIONS(873),
  },
  [347] = {
    [anon_sym_equation] = ACTIONS(875),
  },
  [348] = {
    [anon_sym_equation_STAR] = ACTIONS(877),
  },
  [349] = {
    [anon_sym_flalign] = ACTIONS(879),
  },
  [350] = {
    [anon_sym_flalign_STAR] = ACTIONS(881),
  },
  [351] = {
    [anon_sym_gather] = ACTIONS(883),
  },
  [352] = {
    [anon_sym_gather_STAR] = ACTIONS(885),
  },
  [353] = {
    [anon_sym_multiline] = ACTIONS(887),
  },
  [354] = {
    [anon_sym_multiline_STAR] = ACTIONS(889),
  },
  [355] = {
    [anon_sym_split] = ACTIONS(891),
  },
  [356] = {
    [anon_sym_split_STAR] = ACTIONS(893),
  },
  [357] = {
    [anon_sym_math] = ACTIONS(895),
  },
  [358] = {
    [anon_sym_verbatim] = ACTIONS(897),
  },
  [359] = {
    [ts_builtin_sym_end] = ACTIONS(899),
    [anon_sym_LBRACK] = ACTIONS(901),
    [anon_sym_RBRACK] = ACTIONS(901),
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
  [360] = {
    [anon_sym_Verbatim] = ACTIONS(903),
  },
  [361] = {
    [sym__verbatim_token] = ACTIONS(789),
  },
  [362] = {
    [anon_sym_Verbatim_STAR] = ACTIONS(905),
  },
  [363] = {
    [anon_sym_BVerbatim] = ACTIONS(907),
  },
  [364] = {
    [anon_sym_BVerbatim_STAR] = ACTIONS(909),
  },
  [365] = {
    [anon_sym_LVerbatim] = ACTIONS(911),
  },
  [366] = {
    [anon_sym_LVerbatim_STAR] = ACTIONS(913),
  },
  [367] = {
    [anon_sym_lstlisting] = ACTIONS(915),
  },
  [368] = {
    [sym__verbatim_token] = ACTIONS(480),
  },
  [369] = {
    [sym_begin_group] = ACTIONS(917),
  },
  [370] = {
    [anon_sym_LBRACK] = ACTIONS(919),
    [sym__escape] = ACTIONS(919),
    [sym_begin_group] = ACTIONS(919),
    [sym_alignment_tab] = ACTIONS(919),
    [sym_parameter_char] = ACTIONS(919),
    [sym_superscript] = ACTIONS(919),
    [sym_subscript] = ACTIONS(919),
    [sym_active_char] = ACTIONS(919),
    [sym_comment_char] = ACTIONS(919),
    [sym_text] = ACTIONS(921),
  },
  [371] = {
    [anon_sym_LBRACK] = ACTIONS(923),
    [sym__escape] = ACTIONS(923),
    [sym_begin_group] = ACTIONS(923),
    [sym_alignment_tab] = ACTIONS(923),
    [sym_parameter_char] = ACTIONS(923),
    [sym_superscript] = ACTIONS(923),
    [sym_subscript] = ACTIONS(923),
    [sym_active_char] = ACTIONS(923),
    [sym_comment_char] = ACTIONS(923),
    [sym_text] = ACTIONS(925),
  },
  [372] = {
    [sym_begin_group] = ACTIONS(927),
  },
  [373] = {
    [sym_begin_group] = ACTIONS(929),
  },
  [374] = {
    [anon_sym_LBRACK] = ACTIONS(931),
    [sym__escape] = ACTIONS(931),
    [sym_begin_group] = ACTIONS(931),
    [sym_alignment_tab] = ACTIONS(931),
    [sym_parameter_char] = ACTIONS(931),
    [sym_superscript] = ACTIONS(931),
    [sym_subscript] = ACTIONS(931),
    [sym_active_char] = ACTIONS(931),
    [sym_comment_char] = ACTIONS(931),
    [sym_text] = ACTIONS(933),
  },
  [375] = {
    [anon_sym_LBRACK] = ACTIONS(935),
    [sym__end_of_line] = ACTIONS(937),
  },
  [376] = {
    [anon_sym_LBRACK] = ACTIONS(939),
    [sym__end_of_line] = ACTIONS(941),
  },
  [377] = {
    [anon_sym_LBRACK] = ACTIONS(943),
    [sym__end_of_line] = ACTIONS(945),
  },
  [378] = {
    [anon_sym_LBRACK] = ACTIONS(947),
    [sym__end_of_line] = ACTIONS(949),
  },
  [379] = {
    [anon_sym_LBRACK] = ACTIONS(951),
    [sym__end_of_line] = ACTIONS(953),
  },
  [380] = {
    [anon_sym_LBRACK] = ACTIONS(955),
    [sym__end_of_line] = ACTIONS(957),
  },
  [381] = {
    [anon_sym_LBRACK] = ACTIONS(959),
    [sym__end_of_line] = ACTIONS(961),
  },
  [382] = {
    [anon_sym_LBRACK] = ACTIONS(963),
    [sym__end_of_line] = ACTIONS(965),
  },
  [383] = {
    [anon_sym_LBRACK] = ACTIONS(967),
    [sym__escape] = ACTIONS(967),
    [sym_begin_group] = ACTIONS(967),
    [sym_alignment_tab] = ACTIONS(967),
    [sym_parameter_char] = ACTIONS(967),
    [sym_superscript] = ACTIONS(967),
    [sym_subscript] = ACTIONS(967),
    [sym_active_char] = ACTIONS(967),
    [sym_comment_char] = ACTIONS(967),
    [sym_text] = ACTIONS(969),
  },
  [384] = {
    [anon_sym_LBRACK] = ACTIONS(971),
    [sym__escape] = ACTIONS(971),
    [sym_begin_group] = ACTIONS(971),
    [sym_alignment_tab] = ACTIONS(971),
    [sym_parameter_char] = ACTIONS(971),
    [sym_superscript] = ACTIONS(971),
    [sym_subscript] = ACTIONS(971),
    [sym_active_char] = ACTIONS(971),
    [sym_comment_char] = ACTIONS(971),
    [sym_text] = ACTIONS(973),
  },
  [385] = {
    [anon_sym_LBRACK] = ACTIONS(975),
    [sym__escape] = ACTIONS(975),
    [sym_begin_group] = ACTIONS(975),
    [sym_alignment_tab] = ACTIONS(975),
    [sym_parameter_char] = ACTIONS(975),
    [sym_superscript] = ACTIONS(975),
    [sym_subscript] = ACTIONS(975),
    [sym_active_char] = ACTIONS(975),
    [sym_comment_char] = ACTIONS(975),
    [sym_text] = ACTIONS(977),
  },
  [386] = {
    [anon_sym_LBRACK] = ACTIONS(979),
    [sym__escape] = ACTIONS(979),
    [sym_begin_group] = ACTIONS(979),
    [sym_alignment_tab] = ACTIONS(979),
    [sym_parameter_char] = ACTIONS(979),
    [sym_superscript] = ACTIONS(979),
    [sym_subscript] = ACTIONS(979),
    [sym_active_char] = ACTIONS(979),
    [sym_comment_char] = ACTIONS(979),
    [sym_text] = ACTIONS(981),
  },
  [387] = {
    [anon_sym_LBRACK] = ACTIONS(983),
    [sym__escape] = ACTIONS(983),
    [sym_begin_group] = ACTIONS(983),
    [sym_alignment_tab] = ACTIONS(983),
    [sym_parameter_char] = ACTIONS(983),
    [sym_superscript] = ACTIONS(983),
    [sym_subscript] = ACTIONS(983),
    [sym_active_char] = ACTIONS(983),
    [sym_comment_char] = ACTIONS(983),
    [sym_text] = ACTIONS(985),
  },
  [388] = {
    [anon_sym_LBRACK] = ACTIONS(987),
    [sym__escape] = ACTIONS(987),
    [sym_begin_group] = ACTIONS(987),
    [sym_alignment_tab] = ACTIONS(987),
    [sym_parameter_char] = ACTIONS(987),
    [sym_superscript] = ACTIONS(987),
    [sym_subscript] = ACTIONS(987),
    [sym_active_char] = ACTIONS(987),
    [sym_comment_char] = ACTIONS(987),
    [sym_text] = ACTIONS(989),
  },
  [389] = {
    [anon_sym_LBRACK] = ACTIONS(991),
    [sym__escape] = ACTIONS(991),
    [sym_begin_group] = ACTIONS(991),
    [sym_alignment_tab] = ACTIONS(991),
    [sym_parameter_char] = ACTIONS(991),
    [sym_superscript] = ACTIONS(991),
    [sym_subscript] = ACTIONS(991),
    [sym_active_char] = ACTIONS(991),
    [sym_comment_char] = ACTIONS(991),
    [sym_text] = ACTIONS(993),
  },
  [390] = {
    [anon_sym_LBRACK] = ACTIONS(995),
    [sym__escape] = ACTIONS(995),
    [sym_begin_group] = ACTIONS(995),
    [sym_alignment_tab] = ACTIONS(995),
    [sym_parameter_char] = ACTIONS(995),
    [sym_superscript] = ACTIONS(995),
    [sym_subscript] = ACTIONS(995),
    [sym_active_char] = ACTIONS(995),
    [sym_comment_char] = ACTIONS(995),
    [sym_text] = ACTIONS(997),
  },
  [391] = {
    [anon_sym_LBRACK] = ACTIONS(999),
    [sym__escape] = ACTIONS(999),
    [sym_begin_group] = ACTIONS(999),
    [sym_alignment_tab] = ACTIONS(999),
    [sym_parameter_char] = ACTIONS(999),
    [sym_superscript] = ACTIONS(999),
    [sym_subscript] = ACTIONS(999),
    [sym_active_char] = ACTIONS(999),
    [sym_comment_char] = ACTIONS(999),
    [sym_text] = ACTIONS(1001),
  },
  [392] = {
    [anon_sym_LBRACK] = ACTIONS(1003),
    [sym__escape] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_active_char] = ACTIONS(1003),
    [sym_comment_char] = ACTIONS(1003),
    [sym_text] = ACTIONS(1005),
  },
  [393] = {
    [anon_sym_LBRACK] = ACTIONS(1007),
    [sym__escape] = ACTIONS(1007),
    [sym_begin_group] = ACTIONS(1007),
    [sym_alignment_tab] = ACTIONS(1007),
    [sym_parameter_char] = ACTIONS(1007),
    [sym_superscript] = ACTIONS(1007),
    [sym_subscript] = ACTIONS(1007),
    [sym_active_char] = ACTIONS(1007),
    [sym_comment_char] = ACTIONS(1007),
    [sym_text] = ACTIONS(1009),
  },
  [394] = {
    [anon_sym_LBRACK] = ACTIONS(1011),
    [sym__escape] = ACTIONS(1011),
    [sym_begin_group] = ACTIONS(1011),
    [sym_alignment_tab] = ACTIONS(1011),
    [sym_parameter_char] = ACTIONS(1011),
    [sym_superscript] = ACTIONS(1011),
    [sym_subscript] = ACTIONS(1011),
    [sym_active_char] = ACTIONS(1011),
    [sym_comment_char] = ACTIONS(1011),
    [sym_text] = ACTIONS(1013),
  },
  [395] = {
    [anon_sym_LBRACK] = ACTIONS(1015),
    [sym__escape] = ACTIONS(1015),
    [sym_begin_group] = ACTIONS(1015),
    [sym_alignment_tab] = ACTIONS(1015),
    [sym_parameter_char] = ACTIONS(1015),
    [sym_superscript] = ACTIONS(1015),
    [sym_subscript] = ACTIONS(1015),
    [sym_active_char] = ACTIONS(1015),
    [sym_comment_char] = ACTIONS(1015),
    [sym_text] = ACTIONS(1017),
  },
  [396] = {
    [sym__verbatim_token] = ACTIONS(1019),
  },
  [397] = {
    [anon_sym_LBRACK] = ACTIONS(1021),
    [sym__verbatim_token] = ACTIONS(1021),
  },
  [398] = {
    [anon_sym_LBRACK] = ACTIONS(1023),
    [sym__verbatim_token] = ACTIONS(1023),
  },
  [399] = {
    [anon_sym_LBRACK] = ACTIONS(1025),
    [sym__verbatim_token] = ACTIONS(1025),
  },
  [400] = {
    [anon_sym_LBRACK] = ACTIONS(1027),
    [sym__verbatim_token] = ACTIONS(1027),
  },
  [401] = {
    [anon_sym_LBRACK] = ACTIONS(1029),
    [sym__verbatim_token] = ACTIONS(1029),
  },
  [402] = {
    [anon_sym_LBRACK] = ACTIONS(1031),
    [sym__verbatim_token] = ACTIONS(1031),
  },
  [403] = {
    [anon_sym_LBRACK] = ACTIONS(1033),
    [sym__verbatim_token] = ACTIONS(1033),
  },
  [404] = {
    [sym_begin_group] = ACTIONS(1035),
  },
  [405] = {
    [ts_builtin_sym_end] = ACTIONS(1037),
    [anon_sym_LBRACK] = ACTIONS(1039),
    [anon_sym_RBRACK] = ACTIONS(1039),
    [sym__escape] = ACTIONS(1039),
    [sym_begin_group] = ACTIONS(1039),
    [sym_end_group] = ACTIONS(1039),
    [sym_math_shift] = ACTIONS(1039),
    [sym_alignment_tab] = ACTIONS(1039),
    [sym_parameter_char] = ACTIONS(1039),
    [sym_superscript] = ACTIONS(1039),
    [sym_subscript] = ACTIONS(1039),
    [sym_active_char] = ACTIONS(1039),
    [sym_comment_char] = ACTIONS(1039),
    [sym_text] = ACTIONS(1037),
  },
  [406] = {
    [sym_begin_group] = ACTIONS(789),
  },
  [407] = {
    [ts_builtin_sym_end] = ACTIONS(1041),
    [anon_sym_LBRACK] = ACTIONS(1043),
    [anon_sym_RBRACK] = ACTIONS(1043),
    [sym__escape] = ACTIONS(1043),
    [sym_begin_group] = ACTIONS(1043),
    [sym_end_group] = ACTIONS(1043),
    [sym_math_shift] = ACTIONS(1043),
    [sym_alignment_tab] = ACTIONS(1043),
    [sym_parameter_char] = ACTIONS(1043),
    [sym_superscript] = ACTIONS(1043),
    [sym_subscript] = ACTIONS(1043),
    [sym_active_char] = ACTIONS(1043),
    [sym_comment_char] = ACTIONS(1043),
    [sym_text] = ACTIONS(1041),
  },
  [408] = {
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
    [sym_text] = ACTIONS(1047),
  },
  [409] = {
    [sym__at_text_mode] = STATE(409),
    [sym_parameter] = STATE(409),
    [sym_text_environment] = STATE(409),
    [sym_display_math] = STATE(409),
    [sym_inline_math] = STATE(409),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(409),
    [sym_escaped] = STATE(409),
    [sym_at_command] = STATE(409),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(409),
    [sym_opt_at_text_group] = STATE(409),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(409),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(409),
    [anon_sym_LBRACK] = ACTIONS(762),
    [sym__escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(768),
    [sym_end_group] = ACTIONS(1049),
    [sym_math_shift] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(1051),
    [sym_parameter_char] = ACTIONS(777),
    [sym_superscript] = ACTIONS(1051),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(1051),
    [sym_comment_char] = ACTIONS(783),
    [sym_text] = ACTIONS(1054),
  },
  [410] = {
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
    [sym_text] = ACTIONS(1059),
  },
  [411] = {
    [sym__at_text_mode] = STATE(411),
    [sym_parameter] = STATE(411),
    [sym_text_environment] = STATE(411),
    [sym_display_math] = STATE(411),
    [sym_inline_math] = STATE(411),
    [sym_begin_display_math] = STATE(11),
    [sym_begin_inline_math] = STATE(12),
    [sym_begin_align] = STATE(13),
    [sym_begin_align_star] = STATE(14),
    [sym_begin_alignat] = STATE(15),
    [sym_begin_alignat_star] = STATE(16),
    [sym_begin_displaymath] = STATE(17),
    [sym_begin_dmath] = STATE(18),
    [sym_begin_dmath_star] = STATE(19),
    [sym_begin_dseries] = STATE(20),
    [sym_begin_dseries_star] = STATE(21),
    [sym_begin_dgroup] = STATE(22),
    [sym_begin_dgroup_star] = STATE(23),
    [sym_begin_darray] = STATE(24),
    [sym_begin_darray_star] = STATE(25),
    [sym_begin_eqnarray] = STATE(26),
    [sym_begin_eqnarray_star] = STATE(27),
    [sym_begin_equation] = STATE(28),
    [sym_begin_equation_star] = STATE(29),
    [sym_begin_flalign] = STATE(30),
    [sym_begin_flalign_star] = STATE(31),
    [sym_begin_gather] = STATE(32),
    [sym_begin_gather_star] = STATE(33),
    [sym_begin_multiline] = STATE(34),
    [sym_begin_multiline_star] = STATE(35),
    [sym_begin_split] = STATE(36),
    [sym_begin_split_star] = STATE(37),
    [sym_begin_math] = STATE(38),
    [sym_begin_verbatim] = STATE(39),
    [sym_begin_Verbatim] = STATE(40),
    [sym_begin_Verbatim_star] = STATE(41),
    [sym_begin_BVerbatim] = STATE(42),
    [sym_begin_BVerbatim_star] = STATE(43),
    [sym_begin_LVerbatim] = STATE(44),
    [sym_begin_LVerbatim_star] = STATE(45),
    [sym_begin_lstlisting] = STATE(46),
    [sym_begin_minted] = STATE(47),
    [sym_verbatim_environment] = STATE(411),
    [sym_escaped] = STATE(411),
    [sym_at_command] = STATE(411),
    [sym_begin] = STATE(48),
    [sym_begin_token] = STATE(49),
    [sym_documentclass] = STATE(163),
    [sym_documentclass_token] = STATE(51),
    [sym_usepackage] = STATE(163),
    [sym_usepackage_token] = STATE(52),
    [sym_include] = STATE(163),
    [sym_include_token] = STATE(53),
    [sym_section] = STATE(163),
    [sym_section_token] = STATE(54),
    [sym_storage] = STATE(163),
    [sym_storage_token] = STATE(55),
    [sym_catcode] = STATE(163),
    [sym_catcode_token] = STATE(56),
    [sym_at_text_group] = STATE(411),
    [sym_opt_at_text_group] = STATE(411),
    [sym_at_token] = STATE(163),
    [sym_comment] = STATE(411),
    [sym_begin_opt] = STATE(166),
    [aux_sym_at_group_repeat1] = STATE(411),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(1049),
    [sym__escape] = ACTIONS(765),
    [sym_begin_group] = ACTIONS(768),
    [sym_math_shift] = ACTIONS(771),
    [sym_alignment_tab] = ACTIONS(1061),
    [sym_parameter_char] = ACTIONS(777),
    [sym_superscript] = ACTIONS(1061),
    [sym_subscript] = ACTIONS(780),
    [sym_active_char] = ACTIONS(1061),
    [sym_comment_char] = ACTIONS(783),
    [sym_text] = ACTIONS(1064),
  },
  [412] = {
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
  [413] = {
    [anon_sym_LBRACK] = ACTIONS(1071),
    [anon_sym_RBRACK] = ACTIONS(1071),
    [sym__escape] = ACTIONS(1071),
    [sym_begin_group] = ACTIONS(1071),
    [sym_end_group] = ACTIONS(1071),
    [sym_math_shift] = ACTIONS(1071),
    [sym_alignment_tab] = ACTIONS(1071),
    [sym_parameter_char] = ACTIONS(1071),
    [sym_superscript] = ACTIONS(1071),
    [sym_subscript] = ACTIONS(1071),
    [sym_active_char] = ACTIONS(1071),
    [sym_comment_char] = ACTIONS(1071),
    [sym_text] = ACTIONS(1073),
  },
  [414] = {
    [sym_end_group] = ACTIONS(1075),
  },
  [415] = {
    [sym_end_group] = ACTIONS(1077),
  },
  [416] = {
    [anon_sym_alignat] = ACTIONS(1079),
  },
  [417] = {
    [anon_sym_alignat_STAR] = ACTIONS(1081),
  },
  [418] = {
    [sym_end_group] = ACTIONS(1083),
  },
  [419] = {
    [anon_sym_dmath] = ACTIONS(1085),
  },
  [420] = {
    [anon_sym_dmath_STAR] = ACTIONS(1087),
  },
  [421] = {
    [anon_sym_dseries] = ACTIONS(1089),
  },
  [422] = {
    [anon_sym_dseries_STAR] = ACTIONS(1091),
  },
  [423] = {
    [anon_sym_dgroup] = ACTIONS(1093),
  },
  [424] = {
    [anon_sym_dgroup_STAR] = ACTIONS(1095),
  },
  [425] = {
    [anon_sym_darray] = ACTIONS(1097),
  },
  [426] = {
    [anon_sym_darray_STAR] = ACTIONS(1099),
  },
  [427] = {
    [sym_end_group] = ACTIONS(1101),
  },
  [428] = {
    [sym_end_group] = ACTIONS(1103),
  },
  [429] = {
    [sym_end_group] = ACTIONS(1105),
  },
  [430] = {
    [sym_end_group] = ACTIONS(1107),
  },
  [431] = {
    [sym_end_group] = ACTIONS(1109),
  },
  [432] = {
    [sym_end_group] = ACTIONS(1111),
  },
  [433] = {
    [sym_end_group] = ACTIONS(1113),
  },
  [434] = {
    [sym_end_group] = ACTIONS(1115),
  },
  [435] = {
    [sym_end_group] = ACTIONS(1117),
  },
  [436] = {
    [sym_end_group] = ACTIONS(1119),
  },
  [437] = {
    [sym_end_group] = ACTIONS(1121),
  },
  [438] = {
    [sym_end_group] = ACTIONS(1123),
  },
  [439] = {
    [sym_end_group] = ACTIONS(1125),
  },
  [440] = {
    [sym_end_group] = ACTIONS(1127),
  },
  [441] = {
    [sym_end_group] = ACTIONS(1129),
  },
  [442] = {
    [sym_end_group] = ACTIONS(1131),
  },
  [443] = {
    [sym_end_group] = ACTIONS(1133),
  },
  [444] = {
    [sym_end_group] = ACTIONS(1135),
  },
  [445] = {
    [sym_end_group] = ACTIONS(1137),
  },
  [446] = {
    [sym_end_group] = ACTIONS(1139),
  },
  [447] = {
    [sym_end_group] = ACTIONS(1141),
  },
  [448] = {
    [anon_sym_minted] = ACTIONS(1143),
  },
  [449] = {
    [ts_builtin_sym_end] = ACTIONS(1145),
    [anon_sym_LBRACK] = ACTIONS(1147),
    [anon_sym_RBRACK] = ACTIONS(1147),
    [sym__escape] = ACTIONS(1147),
    [sym_begin_group] = ACTIONS(1147),
    [sym_end_group] = ACTIONS(1147),
    [sym_math_shift] = ACTIONS(1147),
    [sym_alignment_tab] = ACTIONS(1147),
    [sym_parameter_char] = ACTIONS(1147),
    [sym_superscript] = ACTIONS(1147),
    [sym_subscript] = ACTIONS(1147),
    [sym_active_char] = ACTIONS(1147),
    [sym_comment_char] = ACTIONS(1147),
    [sym_text] = ACTIONS(1145),
  },
  [450] = {
    [ts_builtin_sym_end] = ACTIONS(1149),
    [anon_sym_LBRACK] = ACTIONS(1151),
    [anon_sym_RBRACK] = ACTIONS(1151),
    [sym__escape] = ACTIONS(1151),
    [sym_begin_group] = ACTIONS(1151),
    [sym_end_group] = ACTIONS(1151),
    [sym_math_shift] = ACTIONS(1151),
    [sym_alignment_tab] = ACTIONS(1151),
    [sym_parameter_char] = ACTIONS(1151),
    [sym_superscript] = ACTIONS(1151),
    [sym_subscript] = ACTIONS(1151),
    [sym_active_char] = ACTIONS(1151),
    [sym_comment_char] = ACTIONS(1151),
    [sym_text] = ACTIONS(1149),
  },
  [451] = {
    [sym_end_group] = ACTIONS(1153),
  },
  [452] = {
    [sym_end_group] = ACTIONS(1155),
  },
  [453] = {
    [ts_builtin_sym_end] = ACTIONS(1157),
    [anon_sym_LBRACK] = ACTIONS(1159),
    [anon_sym_RBRACK] = ACTIONS(1159),
    [sym__escape] = ACTIONS(1159),
    [sym_begin_group] = ACTIONS(1159),
    [sym_end_group] = ACTIONS(1159),
    [sym_math_shift] = ACTIONS(1159),
    [sym_alignment_tab] = ACTIONS(1159),
    [sym_parameter_char] = ACTIONS(1159),
    [sym_superscript] = ACTIONS(1159),
    [sym_subscript] = ACTIONS(1159),
    [sym_active_char] = ACTIONS(1159),
    [sym_comment_char] = ACTIONS(1159),
    [sym_text] = ACTIONS(1157),
  },
  [454] = {
    [sym_end_group] = ACTIONS(1161),
  },
  [455] = {
    [sym_end_group] = ACTIONS(1163),
  },
  [456] = {
    [sym_end_group] = ACTIONS(1165),
  },
  [457] = {
    [sym_end_group] = ACTIONS(1167),
  },
  [458] = {
    [sym_end_group] = ACTIONS(1169),
  },
  [459] = {
    [sym_end_group] = ACTIONS(1171),
  },
  [460] = {
    [sym_end_group] = ACTIONS(1173),
  },
  [461] = {
    [sym_end_group] = ACTIONS(1175),
  },
  [462] = {
    [ts_builtin_sym_end] = ACTIONS(1177),
    [anon_sym_LBRACK] = ACTIONS(1179),
    [anon_sym_RBRACK] = ACTIONS(1179),
    [sym__escape] = ACTIONS(1179),
    [sym_begin_group] = ACTIONS(1179),
    [sym_end_group] = ACTIONS(1179),
    [sym_math_shift] = ACTIONS(1179),
    [sym_alignment_tab] = ACTIONS(1179),
    [sym_parameter_char] = ACTIONS(1179),
    [sym_superscript] = ACTIONS(1179),
    [sym_subscript] = ACTIONS(1179),
    [sym_active_char] = ACTIONS(1179),
    [sym_comment_char] = ACTIONS(1179),
    [sym_text] = ACTIONS(1177),
  },
  [463] = {
    [ts_builtin_sym_end] = ACTIONS(1181),
    [anon_sym_LBRACK] = ACTIONS(1183),
    [anon_sym_RBRACK] = ACTIONS(1183),
    [sym__escape] = ACTIONS(1183),
    [sym_begin_group] = ACTIONS(1183),
    [sym_end_group] = ACTIONS(1183),
    [sym_math_shift] = ACTIONS(1183),
    [sym_alignment_tab] = ACTIONS(1183),
    [sym_parameter_char] = ACTIONS(1183),
    [sym_superscript] = ACTIONS(1183),
    [sym_subscript] = ACTIONS(1183),
    [sym_active_char] = ACTIONS(1183),
    [sym_comment_char] = ACTIONS(1183),
    [sym_text] = ACTIONS(1181),
  },
  [464] = {
    [ts_builtin_sym_end] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1187),
    [anon_sym_RBRACK] = ACTIONS(1187),
    [sym__escape] = ACTIONS(1187),
    [sym_begin_group] = ACTIONS(1187),
    [sym_end_group] = ACTIONS(1187),
    [sym_math_shift] = ACTIONS(1187),
    [sym_alignment_tab] = ACTIONS(1187),
    [sym_parameter_char] = ACTIONS(1187),
    [sym_superscript] = ACTIONS(1187),
    [sym_subscript] = ACTIONS(1187),
    [sym_active_char] = ACTIONS(1187),
    [sym_comment_char] = ACTIONS(1187),
    [sym_text] = ACTIONS(1185),
  },
  [465] = {
    [ts_builtin_sym_end] = ACTIONS(1189),
    [anon_sym_LBRACK] = ACTIONS(1191),
    [anon_sym_RBRACK] = ACTIONS(1191),
    [sym__escape] = ACTIONS(1191),
    [sym_begin_group] = ACTIONS(1191),
    [sym_end_group] = ACTIONS(1191),
    [sym_math_shift] = ACTIONS(1191),
    [sym_alignment_tab] = ACTIONS(1191),
    [sym_parameter_char] = ACTIONS(1191),
    [sym_superscript] = ACTIONS(1191),
    [sym_subscript] = ACTIONS(1191),
    [sym_active_char] = ACTIONS(1191),
    [sym_comment_char] = ACTIONS(1191),
    [sym_text] = ACTIONS(1189),
  },
  [466] = {
    [ts_builtin_sym_end] = ACTIONS(1193),
    [anon_sym_LBRACK] = ACTIONS(1195),
    [anon_sym_RBRACK] = ACTIONS(1195),
    [sym__escape] = ACTIONS(1195),
    [sym_begin_group] = ACTIONS(1195),
    [sym_end_group] = ACTIONS(1195),
    [sym_math_shift] = ACTIONS(1195),
    [sym_alignment_tab] = ACTIONS(1195),
    [sym_parameter_char] = ACTIONS(1195),
    [sym_superscript] = ACTIONS(1195),
    [sym_subscript] = ACTIONS(1195),
    [sym_active_char] = ACTIONS(1195),
    [sym_comment_char] = ACTIONS(1195),
    [sym_text] = ACTIONS(1193),
  },
  [467] = {
    [ts_builtin_sym_end] = ACTIONS(1197),
    [anon_sym_LBRACK] = ACTIONS(1199),
    [anon_sym_RBRACK] = ACTIONS(1199),
    [sym__escape] = ACTIONS(1199),
    [sym_begin_group] = ACTIONS(1199),
    [sym_end_group] = ACTIONS(1199),
    [sym_math_shift] = ACTIONS(1199),
    [sym_alignment_tab] = ACTIONS(1199),
    [sym_parameter_char] = ACTIONS(1199),
    [sym_superscript] = ACTIONS(1199),
    [sym_subscript] = ACTIONS(1199),
    [sym_active_char] = ACTIONS(1199),
    [sym_comment_char] = ACTIONS(1199),
    [sym_text] = ACTIONS(1197),
  },
  [468] = {
    [ts_builtin_sym_end] = ACTIONS(1201),
    [anon_sym_LBRACK] = ACTIONS(1203),
    [anon_sym_RBRACK] = ACTIONS(1203),
    [sym__escape] = ACTIONS(1203),
    [sym_begin_group] = ACTIONS(1203),
    [sym_end_group] = ACTIONS(1203),
    [sym_math_shift] = ACTIONS(1203),
    [sym_alignment_tab] = ACTIONS(1203),
    [sym_parameter_char] = ACTIONS(1203),
    [sym_superscript] = ACTIONS(1203),
    [sym_subscript] = ACTIONS(1203),
    [sym_active_char] = ACTIONS(1203),
    [sym_comment_char] = ACTIONS(1203),
    [sym_text] = ACTIONS(1201),
  },
  [469] = {
    [ts_builtin_sym_end] = ACTIONS(1205),
    [anon_sym_LBRACK] = ACTIONS(1207),
    [anon_sym_RBRACK] = ACTIONS(1207),
    [sym__escape] = ACTIONS(1207),
    [sym_begin_group] = ACTIONS(1207),
    [sym_end_group] = ACTIONS(1207),
    [sym_math_shift] = ACTIONS(1207),
    [sym_alignment_tab] = ACTIONS(1207),
    [sym_parameter_char] = ACTIONS(1207),
    [sym_superscript] = ACTIONS(1207),
    [sym_subscript] = ACTIONS(1207),
    [sym_active_char] = ACTIONS(1207),
    [sym_comment_char] = ACTIONS(1207),
    [sym_text] = ACTIONS(1205),
  },
  [470] = {
    [ts_builtin_sym_end] = ACTIONS(1209),
    [anon_sym_LBRACK] = ACTIONS(1211),
    [anon_sym_RBRACK] = ACTIONS(1211),
    [sym__escape] = ACTIONS(1211),
    [sym_begin_group] = ACTIONS(1211),
    [sym_end_group] = ACTIONS(1211),
    [sym_math_shift] = ACTIONS(1211),
    [sym_alignment_tab] = ACTIONS(1211),
    [sym_parameter_char] = ACTIONS(1211),
    [sym_superscript] = ACTIONS(1211),
    [sym_subscript] = ACTIONS(1211),
    [sym_active_char] = ACTIONS(1211),
    [sym_comment_char] = ACTIONS(1211),
    [sym_text] = ACTIONS(1209),
  },
  [471] = {
    [ts_builtin_sym_end] = ACTIONS(1213),
    [anon_sym_LBRACK] = ACTIONS(1215),
    [anon_sym_RBRACK] = ACTIONS(1215),
    [sym__escape] = ACTIONS(1215),
    [sym_begin_group] = ACTIONS(1215),
    [sym_end_group] = ACTIONS(1215),
    [sym_math_shift] = ACTIONS(1215),
    [sym_alignment_tab] = ACTIONS(1215),
    [sym_parameter_char] = ACTIONS(1215),
    [sym_superscript] = ACTIONS(1215),
    [sym_subscript] = ACTIONS(1215),
    [sym_active_char] = ACTIONS(1215),
    [sym_comment_char] = ACTIONS(1215),
    [sym_text] = ACTIONS(1213),
  },
  [472] = {
    [ts_builtin_sym_end] = ACTIONS(1217),
    [anon_sym_LBRACK] = ACTIONS(1219),
    [anon_sym_RBRACK] = ACTIONS(1219),
    [sym__escape] = ACTIONS(1219),
    [sym_begin_group] = ACTIONS(1219),
    [sym_end_group] = ACTIONS(1219),
    [sym_math_shift] = ACTIONS(1219),
    [sym_alignment_tab] = ACTIONS(1219),
    [sym_parameter_char] = ACTIONS(1219),
    [sym_superscript] = ACTIONS(1219),
    [sym_subscript] = ACTIONS(1219),
    [sym_active_char] = ACTIONS(1219),
    [sym_comment_char] = ACTIONS(1219),
    [sym_text] = ACTIONS(1217),
  },
  [473] = {
    [ts_builtin_sym_end] = ACTIONS(1221),
    [anon_sym_LBRACK] = ACTIONS(1223),
    [anon_sym_RBRACK] = ACTIONS(1223),
    [sym__escape] = ACTIONS(1223),
    [sym_begin_group] = ACTIONS(1223),
    [sym_end_group] = ACTIONS(1223),
    [sym_math_shift] = ACTIONS(1223),
    [sym_alignment_tab] = ACTIONS(1223),
    [sym_parameter_char] = ACTIONS(1223),
    [sym_superscript] = ACTIONS(1223),
    [sym_subscript] = ACTIONS(1223),
    [sym_active_char] = ACTIONS(1223),
    [sym_comment_char] = ACTIONS(1223),
    [sym_text] = ACTIONS(1221),
  },
  [474] = {
    [ts_builtin_sym_end] = ACTIONS(1225),
    [anon_sym_LBRACK] = ACTIONS(1227),
    [anon_sym_RBRACK] = ACTIONS(1227),
    [sym__escape] = ACTIONS(1227),
    [sym_begin_group] = ACTIONS(1227),
    [sym_end_group] = ACTIONS(1227),
    [sym_math_shift] = ACTIONS(1227),
    [sym_alignment_tab] = ACTIONS(1227),
    [sym_parameter_char] = ACTIONS(1227),
    [sym_superscript] = ACTIONS(1227),
    [sym_subscript] = ACTIONS(1227),
    [sym_active_char] = ACTIONS(1227),
    [sym_comment_char] = ACTIONS(1227),
    [sym_text] = ACTIONS(1225),
  },
  [475] = {
    [ts_builtin_sym_end] = ACTIONS(1229),
    [anon_sym_LBRACK] = ACTIONS(1231),
    [anon_sym_RBRACK] = ACTIONS(1231),
    [sym__escape] = ACTIONS(1231),
    [sym_begin_group] = ACTIONS(1231),
    [sym_end_group] = ACTIONS(1231),
    [sym_math_shift] = ACTIONS(1231),
    [sym_alignment_tab] = ACTIONS(1231),
    [sym_parameter_char] = ACTIONS(1231),
    [sym_superscript] = ACTIONS(1231),
    [sym_subscript] = ACTIONS(1231),
    [sym_active_char] = ACTIONS(1231),
    [sym_comment_char] = ACTIONS(1231),
    [sym_text] = ACTIONS(1229),
  },
  [476] = {
    [ts_builtin_sym_end] = ACTIONS(1233),
    [anon_sym_LBRACK] = ACTIONS(1235),
    [anon_sym_RBRACK] = ACTIONS(1235),
    [sym__escape] = ACTIONS(1235),
    [sym_begin_group] = ACTIONS(1235),
    [sym_end_group] = ACTIONS(1235),
    [sym_math_shift] = ACTIONS(1235),
    [sym_alignment_tab] = ACTIONS(1235),
    [sym_parameter_char] = ACTIONS(1235),
    [sym_superscript] = ACTIONS(1235),
    [sym_subscript] = ACTIONS(1235),
    [sym_active_char] = ACTIONS(1235),
    [sym_comment_char] = ACTIONS(1235),
    [sym_text] = ACTIONS(1233),
  },
  [477] = {
    [ts_builtin_sym_end] = ACTIONS(1237),
    [anon_sym_LBRACK] = ACTIONS(1239),
    [anon_sym_RBRACK] = ACTIONS(1239),
    [sym__escape] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1239),
    [sym_end_group] = ACTIONS(1239),
    [sym_math_shift] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_parameter_char] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [sym_subscript] = ACTIONS(1239),
    [sym_active_char] = ACTIONS(1239),
    [sym_comment_char] = ACTIONS(1239),
    [sym_text] = ACTIONS(1237),
  },
  [478] = {
    [ts_builtin_sym_end] = ACTIONS(1241),
    [anon_sym_LBRACK] = ACTIONS(1243),
    [anon_sym_RBRACK] = ACTIONS(1243),
    [sym__escape] = ACTIONS(1243),
    [sym_begin_group] = ACTIONS(1243),
    [sym_end_group] = ACTIONS(1243),
    [sym_math_shift] = ACTIONS(1243),
    [sym_alignment_tab] = ACTIONS(1243),
    [sym_parameter_char] = ACTIONS(1243),
    [sym_superscript] = ACTIONS(1243),
    [sym_subscript] = ACTIONS(1243),
    [sym_active_char] = ACTIONS(1243),
    [sym_comment_char] = ACTIONS(1243),
    [sym_text] = ACTIONS(1241),
  },
  [479] = {
    [ts_builtin_sym_end] = ACTIONS(1245),
    [anon_sym_LBRACK] = ACTIONS(1247),
    [anon_sym_RBRACK] = ACTIONS(1247),
    [sym__escape] = ACTIONS(1247),
    [sym_begin_group] = ACTIONS(1247),
    [sym_end_group] = ACTIONS(1247),
    [sym_math_shift] = ACTIONS(1247),
    [sym_alignment_tab] = ACTIONS(1247),
    [sym_parameter_char] = ACTIONS(1247),
    [sym_superscript] = ACTIONS(1247),
    [sym_subscript] = ACTIONS(1247),
    [sym_active_char] = ACTIONS(1247),
    [sym_comment_char] = ACTIONS(1247),
    [sym_text] = ACTIONS(1245),
  },
  [480] = {
    [ts_builtin_sym_end] = ACTIONS(1249),
    [anon_sym_LBRACK] = ACTIONS(1251),
    [anon_sym_RBRACK] = ACTIONS(1251),
    [sym__escape] = ACTIONS(1251),
    [sym_begin_group] = ACTIONS(1251),
    [sym_end_group] = ACTIONS(1251),
    [sym_math_shift] = ACTIONS(1251),
    [sym_alignment_tab] = ACTIONS(1251),
    [sym_parameter_char] = ACTIONS(1251),
    [sym_superscript] = ACTIONS(1251),
    [sym_subscript] = ACTIONS(1251),
    [sym_active_char] = ACTIONS(1251),
    [sym_comment_char] = ACTIONS(1251),
    [sym_text] = ACTIONS(1249),
  },
  [481] = {
    [ts_builtin_sym_end] = ACTIONS(1253),
    [anon_sym_LBRACK] = ACTIONS(1255),
    [anon_sym_RBRACK] = ACTIONS(1255),
    [sym__escape] = ACTIONS(1255),
    [sym_begin_group] = ACTIONS(1255),
    [sym_end_group] = ACTIONS(1255),
    [sym_math_shift] = ACTIONS(1255),
    [sym_alignment_tab] = ACTIONS(1255),
    [sym_parameter_char] = ACTIONS(1255),
    [sym_superscript] = ACTIONS(1255),
    [sym_subscript] = ACTIONS(1255),
    [sym_active_char] = ACTIONS(1255),
    [sym_comment_char] = ACTIONS(1255),
    [sym_text] = ACTIONS(1253),
  },
  [482] = {
    [ts_builtin_sym_end] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(1259),
    [anon_sym_RBRACK] = ACTIONS(1259),
    [sym__escape] = ACTIONS(1259),
    [sym_begin_group] = ACTIONS(1259),
    [sym_end_group] = ACTIONS(1259),
    [sym_math_shift] = ACTIONS(1259),
    [sym_alignment_tab] = ACTIONS(1259),
    [sym_parameter_char] = ACTIONS(1259),
    [sym_superscript] = ACTIONS(1259),
    [sym_subscript] = ACTIONS(1259),
    [sym_active_char] = ACTIONS(1259),
    [sym_comment_char] = ACTIONS(1259),
    [sym_text] = ACTIONS(1257),
  },
  [483] = {
    [sym_end_group] = ACTIONS(1261),
  },
  [484] = {
    [ts_builtin_sym_end] = ACTIONS(1263),
    [anon_sym_LBRACK] = ACTIONS(1265),
    [anon_sym_RBRACK] = ACTIONS(1265),
    [sym__escape] = ACTIONS(1265),
    [sym_begin_group] = ACTIONS(1265),
    [sym_end_group] = ACTIONS(1265),
    [sym_math_shift] = ACTIONS(1265),
    [sym_alignment_tab] = ACTIONS(1265),
    [sym_parameter_char] = ACTIONS(1265),
    [sym_superscript] = ACTIONS(1265),
    [sym_subscript] = ACTIONS(1265),
    [sym_active_char] = ACTIONS(1265),
    [sym_comment_char] = ACTIONS(1265),
    [sym_text] = ACTIONS(1263),
  },
  [485] = {
    [ts_builtin_sym_end] = ACTIONS(1267),
    [anon_sym_LBRACK] = ACTIONS(1269),
    [anon_sym_RBRACK] = ACTIONS(1269),
    [sym__escape] = ACTIONS(1269),
    [sym_begin_group] = ACTIONS(1269),
    [sym_end_group] = ACTIONS(1269),
    [sym_math_shift] = ACTIONS(1269),
    [sym_alignment_tab] = ACTIONS(1269),
    [sym_parameter_char] = ACTIONS(1269),
    [sym_superscript] = ACTIONS(1269),
    [sym_subscript] = ACTIONS(1269),
    [sym_active_char] = ACTIONS(1269),
    [sym_comment_char] = ACTIONS(1269),
    [sym_text] = ACTIONS(1267),
  },
  [486] = {
    [ts_builtin_sym_end] = ACTIONS(1271),
    [anon_sym_LBRACK] = ACTIONS(1273),
    [anon_sym_RBRACK] = ACTIONS(1273),
    [sym__escape] = ACTIONS(1273),
    [sym_begin_group] = ACTIONS(1273),
    [sym_end_group] = ACTIONS(1273),
    [sym_math_shift] = ACTIONS(1273),
    [sym_alignment_tab] = ACTIONS(1273),
    [sym_parameter_char] = ACTIONS(1273),
    [sym_superscript] = ACTIONS(1273),
    [sym_subscript] = ACTIONS(1273),
    [sym_active_char] = ACTIONS(1273),
    [sym_comment_char] = ACTIONS(1273),
    [sym_text] = ACTIONS(1271),
  },
  [487] = {
    [ts_builtin_sym_end] = ACTIONS(1275),
    [anon_sym_LBRACK] = ACTIONS(1277),
    [anon_sym_RBRACK] = ACTIONS(1277),
    [sym__escape] = ACTIONS(1277),
    [sym_begin_group] = ACTIONS(1277),
    [sym_end_group] = ACTIONS(1277),
    [sym_math_shift] = ACTIONS(1277),
    [sym_alignment_tab] = ACTIONS(1277),
    [sym_parameter_char] = ACTIONS(1277),
    [sym_superscript] = ACTIONS(1277),
    [sym_subscript] = ACTIONS(1277),
    [sym_active_char] = ACTIONS(1277),
    [sym_comment_char] = ACTIONS(1277),
    [sym_text] = ACTIONS(1275),
  },
  [488] = {
    [ts_builtin_sym_end] = ACTIONS(1279),
    [anon_sym_LBRACK] = ACTIONS(1281),
    [anon_sym_RBRACK] = ACTIONS(1281),
    [sym__escape] = ACTIONS(1281),
    [sym_begin_group] = ACTIONS(1281),
    [sym_end_group] = ACTIONS(1281),
    [sym_math_shift] = ACTIONS(1281),
    [sym_alignment_tab] = ACTIONS(1281),
    [sym_parameter_char] = ACTIONS(1281),
    [sym_superscript] = ACTIONS(1281),
    [sym_subscript] = ACTIONS(1281),
    [sym_active_char] = ACTIONS(1281),
    [sym_comment_char] = ACTIONS(1281),
    [sym_text] = ACTIONS(1279),
  },
  [489] = {
    [ts_builtin_sym_end] = ACTIONS(1283),
    [anon_sym_LBRACK] = ACTIONS(1285),
    [anon_sym_RBRACK] = ACTIONS(1285),
    [sym__escape] = ACTIONS(1285),
    [sym_begin_group] = ACTIONS(1285),
    [sym_end_group] = ACTIONS(1285),
    [sym_math_shift] = ACTIONS(1285),
    [sym_alignment_tab] = ACTIONS(1285),
    [sym_parameter_char] = ACTIONS(1285),
    [sym_superscript] = ACTIONS(1285),
    [sym_subscript] = ACTIONS(1285),
    [sym_active_char] = ACTIONS(1285),
    [sym_comment_char] = ACTIONS(1285),
    [sym_text] = ACTIONS(1283),
  },
  [490] = {
    [ts_builtin_sym_end] = ACTIONS(1287),
    [anon_sym_LBRACK] = ACTIONS(1289),
    [anon_sym_RBRACK] = ACTIONS(1289),
    [sym__escape] = ACTIONS(1289),
    [sym_begin_group] = ACTIONS(1289),
    [sym_end_group] = ACTIONS(1289),
    [sym_math_shift] = ACTIONS(1289),
    [sym_alignment_tab] = ACTIONS(1289),
    [sym_parameter_char] = ACTIONS(1289),
    [sym_superscript] = ACTIONS(1289),
    [sym_subscript] = ACTIONS(1289),
    [sym_active_char] = ACTIONS(1289),
    [sym_comment_char] = ACTIONS(1289),
    [sym_text] = ACTIONS(1287),
  },
  [491] = {
    [ts_builtin_sym_end] = ACTIONS(1291),
    [anon_sym_LBRACK] = ACTIONS(1293),
    [anon_sym_RBRACK] = ACTIONS(1293),
    [sym__escape] = ACTIONS(1293),
    [sym_begin_group] = ACTIONS(1293),
    [sym_end_group] = ACTIONS(1293),
    [sym_math_shift] = ACTIONS(1293),
    [sym_alignment_tab] = ACTIONS(1293),
    [sym_parameter_char] = ACTIONS(1293),
    [sym_superscript] = ACTIONS(1293),
    [sym_subscript] = ACTIONS(1293),
    [sym_active_char] = ACTIONS(1293),
    [sym_comment_char] = ACTIONS(1293),
    [sym_text] = ACTIONS(1291),
  },
  [492] = {
    [ts_builtin_sym_end] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(1297),
    [anon_sym_RBRACK] = ACTIONS(1297),
    [sym__escape] = ACTIONS(1297),
    [sym_begin_group] = ACTIONS(1297),
    [sym_end_group] = ACTIONS(1297),
    [sym_math_shift] = ACTIONS(1297),
    [sym_alignment_tab] = ACTIONS(1297),
    [sym_parameter_char] = ACTIONS(1297),
    [sym_superscript] = ACTIONS(1297),
    [sym_subscript] = ACTIONS(1297),
    [sym_active_char] = ACTIONS(1297),
    [sym_comment_char] = ACTIONS(1297),
    [sym_text] = ACTIONS(1295),
  },
  [493] = {
    [ts_builtin_sym_end] = ACTIONS(1299),
    [anon_sym_LBRACK] = ACTIONS(1301),
    [anon_sym_RBRACK] = ACTIONS(1301),
    [sym__escape] = ACTIONS(1301),
    [sym_begin_group] = ACTIONS(1301),
    [sym_end_group] = ACTIONS(1301),
    [sym_math_shift] = ACTIONS(1301),
    [sym_alignment_tab] = ACTIONS(1301),
    [sym_parameter_char] = ACTIONS(1301),
    [sym_superscript] = ACTIONS(1301),
    [sym_subscript] = ACTIONS(1301),
    [sym_active_char] = ACTIONS(1301),
    [sym_comment_char] = ACTIONS(1301),
    [sym_text] = ACTIONS(1299),
  },
  [494] = {
    [ts_builtin_sym_end] = ACTIONS(1303),
    [anon_sym_LBRACK] = ACTIONS(1305),
    [anon_sym_RBRACK] = ACTIONS(1305),
    [sym__escape] = ACTIONS(1305),
    [sym_begin_group] = ACTIONS(1305),
    [sym_end_group] = ACTIONS(1305),
    [sym_math_shift] = ACTIONS(1305),
    [sym_alignment_tab] = ACTIONS(1305),
    [sym_parameter_char] = ACTIONS(1305),
    [sym_superscript] = ACTIONS(1305),
    [sym_subscript] = ACTIONS(1305),
    [sym_active_char] = ACTIONS(1305),
    [sym_comment_char] = ACTIONS(1305),
    [sym_text] = ACTIONS(1303),
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
  [15] = {.count = 1, .reusable = false}, SHIFT(60),
  [17] = {.count = 1, .reusable = false}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(60),
  [25] = {.count = 1, .reusable = false}, REDUCE(sym_begin_opt, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [29] = {.count = 1, .reusable = false}, SHIFT(61),
  [31] = {.count = 1, .reusable = false}, SHIFT(62),
  [33] = {.count = 1, .reusable = false}, SHIFT(63),
  [35] = {.count = 1, .reusable = false}, SHIFT(64),
  [37] = {.count = 1, .reusable = false}, SHIFT(65),
  [39] = {.count = 1, .reusable = false}, SHIFT(66),
  [41] = {.count = 1, .reusable = false}, SHIFT(67),
  [43] = {.count = 1, .reusable = false}, SHIFT(68),
  [45] = {.count = 1, .reusable = false}, SHIFT(69),
  [47] = {.count = 1, .reusable = false}, SHIFT(70),
  [49] = {.count = 1, .reusable = false}, SHIFT(71),
  [51] = {.count = 1, .reusable = false}, SHIFT(72),
  [53] = {.count = 1, .reusable = false}, SHIFT(73),
  [55] = {.count = 1, .reusable = false}, SHIFT(74),
  [57] = {.count = 1, .reusable = true}, SHIFT(74),
  [59] = {.count = 1, .reusable = false}, SHIFT(75),
  [61] = {.count = 1, .reusable = false}, SHIFT(76),
  [63] = {.count = 1, .reusable = false}, SHIFT(77),
  [65] = {.count = 1, .reusable = false}, SHIFT(83),
  [67] = {.count = 1, .reusable = true}, SHIFT(83),
  [69] = {.count = 1, .reusable = true}, SHIFT(84),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [75] = {.count = 1, .reusable = true}, SHIFT(85),
  [77] = {.count = 1, .reusable = false}, SHIFT(85),
  [79] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [83] = {.count = 1, .reusable = false}, SHIFT(87),
  [85] = {.count = 1, .reusable = true}, SHIFT(87),
  [87] = {.count = 1, .reusable = true}, SHIFT(4),
  [89] = {.count = 1, .reusable = true}, SHIFT(94),
  [91] = {.count = 1, .reusable = true}, SHIFT(97),
  [93] = {.count = 1, .reusable = true}, SHIFT(99),
  [95] = {.count = 1, .reusable = true}, SHIFT(101),
  [97] = {.count = 1, .reusable = true}, SHIFT(103),
  [99] = {.count = 1, .reusable = true}, SHIFT(105),
  [101] = {.count = 1, .reusable = true}, SHIFT(107),
  [103] = {.count = 1, .reusable = true}, SHIFT(109),
  [105] = {.count = 1, .reusable = true}, SHIFT(125),
  [107] = {.count = 1, .reusable = false}, SHIFT(125),
  [109] = {.count = 1, .reusable = true}, SHIFT(141),
  [111] = {.count = 1, .reusable = false}, SHIFT(143),
  [113] = {.count = 1, .reusable = false}, SHIFT(146),
  [115] = {.count = 1, .reusable = true}, SHIFT(146),
  [117] = {.count = 1, .reusable = true}, SHIFT(147),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_command, 1),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_command, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(2),
  [125] = {.count = 1, .reusable = true}, SHIFT(149),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_storage, 1),
  [131] = {.count = 1, .reusable = true}, SHIFT(158),
  [133] = {.count = 1, .reusable = false}, SHIFT(160),
  [135] = {.count = 1, .reusable = false}, SHIFT(161),
  [137] = {.count = 1, .reusable = false}, SHIFT(167),
  [139] = {.count = 1, .reusable = false}, SHIFT(162),
  [141] = {.count = 1, .reusable = true}, SHIFT(167),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter, 1),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [147] = {.count = 1, .reusable = false}, SHIFT(168),
  [149] = {.count = 1, .reusable = false}, SHIFT(170),
  [151] = {.count = 1, .reusable = true}, SHIFT(170),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [155] = {.count = 1, .reusable = false}, SHIFT(171),
  [157] = {.count = 1, .reusable = true}, SHIFT(171),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_begin_display_math, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_begin_inline_math, 2),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_escaped, 2),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 2),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 2),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 2),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 2),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 2),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_storage_token, 2),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 2),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_makeatletter_token, 2),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 2),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_token, 2),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_token, 2),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 2),
  [199] = {.count = 1, .reusable = false}, SHIFT(172),
  [201] = {.count = 1, .reusable = false}, SHIFT(173),
  [203] = {.count = 1, .reusable = true}, SHIFT(173),
  [205] = {.count = 1, .reusable = false}, SHIFT(174),
  [207] = {.count = 1, .reusable = false}, SHIFT(175),
  [209] = {.count = 1, .reusable = false}, SHIFT(176),
  [211] = {.count = 1, .reusable = true}, SHIFT(176),
  [213] = {.count = 1, .reusable = true}, SHIFT(178),
  [215] = {.count = 1, .reusable = true}, SHIFT(179),
  [217] = {.count = 1, .reusable = false}, SHIFT(181),
  [219] = {.count = 1, .reusable = false}, SHIFT(183),
  [221] = {.count = 1, .reusable = true}, SHIFT(183),
  [223] = {.count = 1, .reusable = false}, SHIFT(185),
  [225] = {.count = 1, .reusable = true}, SHIFT(185),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_math_mode, 1),
  [229] = {.count = 1, .reusable = false}, SHIFT(186),
  [231] = {.count = 1, .reusable = true}, SHIFT(186),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_parameter, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_comment, 2),
  [241] = {.count = 1, .reusable = true}, SHIFT(187),
  [243] = {.count = 1, .reusable = false}, SHIFT(189),
  [245] = {.count = 1, .reusable = true}, SHIFT(189),
  [247] = {.count = 1, .reusable = true}, SHIFT(190),
  [249] = {.count = 1, .reusable = true}, SHIFT(191),
  [251] = {.count = 1, .reusable = true}, SHIFT(198),
  [253] = {.count = 1, .reusable = false}, SHIFT(199),
  [255] = {.count = 1, .reusable = false}, SHIFT(201),
  [257] = {.count = 1, .reusable = true}, SHIFT(201),
  [259] = {.count = 1, .reusable = true}, SHIFT(203),
  [261] = {.count = 1, .reusable = true}, SHIFT(205),
  [263] = {.count = 1, .reusable = true}, SHIFT(207),
  [265] = {.count = 1, .reusable = true}, SHIFT(209),
  [267] = {.count = 1, .reusable = true}, SHIFT(211),
  [269] = {.count = 1, .reusable = true}, SHIFT(213),
  [271] = {.count = 1, .reusable = true}, SHIFT(215),
  [273] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_text, 1),
  [275] = {.count = 1, .reusable = false}, SHIFT(231),
  [277] = {.count = 1, .reusable = false}, SHIFT(234),
  [279] = {.count = 1, .reusable = false}, SHIFT(236),
  [281] = {.count = 1, .reusable = true}, SHIFT(236),
  [283] = {.count = 1, .reusable = false}, SHIFT(249),
  [285] = {.count = 1, .reusable = false}, SHIFT(250),
  [287] = {.count = 1, .reusable = true}, SHIFT(250),
  [289] = {.count = 1, .reusable = false}, SHIFT(252),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 2),
  [293] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 2),
  [295] = {.count = 1, .reusable = false}, SHIFT(255),
  [297] = {.count = 1, .reusable = true}, SHIFT(255),
  [299] = {.count = 1, .reusable = false}, SHIFT(256),
  [301] = {.count = 1, .reusable = false}, SHIFT(257),
  [303] = {.count = 1, .reusable = false}, SHIFT(258),
  [305] = {.count = 1, .reusable = false}, SHIFT(259),
  [307] = {.count = 1, .reusable = false}, SHIFT(260),
  [309] = {.count = 1, .reusable = false}, SHIFT(261),
  [311] = {.count = 1, .reusable = false}, SHIFT(262),
  [313] = {.count = 1, .reusable = false}, SHIFT(263),
  [315] = {.count = 1, .reusable = false}, SHIFT(264),
  [317] = {.count = 1, .reusable = false}, SHIFT(265),
  [319] = {.count = 1, .reusable = false}, SHIFT(266),
  [321] = {.count = 1, .reusable = false}, SHIFT(267),
  [323] = {.count = 1, .reusable = false}, SHIFT(268),
  [325] = {.count = 1, .reusable = false}, SHIFT(269),
  [327] = {.count = 1, .reusable = false}, SHIFT(270),
  [329] = {.count = 1, .reusable = false}, SHIFT(271),
  [331] = {.count = 1, .reusable = false}, SHIFT(272),
  [333] = {.count = 1, .reusable = false}, SHIFT(273),
  [335] = {.count = 1, .reusable = false}, SHIFT(274),
  [337] = {.count = 1, .reusable = false}, SHIFT(275),
  [339] = {.count = 1, .reusable = false}, SHIFT(276),
  [341] = {.count = 1, .reusable = false}, SHIFT(277),
  [343] = {.count = 1, .reusable = false}, SHIFT(278),
  [345] = {.count = 1, .reusable = false}, SHIFT(279),
  [347] = {.count = 1, .reusable = false}, SHIFT(280),
  [349] = {.count = 1, .reusable = false}, SHIFT(281),
  [351] = {.count = 1, .reusable = false}, SHIFT(282),
  [353] = {.count = 1, .reusable = false}, SHIFT(283),
  [355] = {.count = 1, .reusable = false}, SHIFT(284),
  [357] = {.count = 1, .reusable = false}, SHIFT(285),
  [359] = {.count = 1, .reusable = false}, SHIFT(286),
  [361] = {.count = 1, .reusable = false}, SHIFT(287),
  [363] = {.count = 1, .reusable = false}, SHIFT(288),
  [365] = {.count = 1, .reusable = false}, SHIFT(289),
  [367] = {.count = 1, .reusable = false}, SHIFT(290),
  [369] = {.count = 1, .reusable = false}, SHIFT(291),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_begin, 2),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2),
  [375] = {.count = 1, .reusable = true}, SHIFT(291),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 2),
  [381] = {.count = 1, .reusable = false}, SHIFT(293),
  [383] = {.count = 1, .reusable = false}, SHIFT(295),
  [385] = {.count = 1, .reusable = true}, SHIFT(295),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 2),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_include, 2),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_section, 2),
  [399] = {.count = 1, .reusable = true}, SHIFT(298),
  [401] = {.count = 1, .reusable = true}, SHIFT(299),
  [403] = {.count = 1, .reusable = false}, SHIFT(300),
  [405] = {.count = 1, .reusable = false}, SHIFT(301),
  [407] = {.count = 1, .reusable = false}, SHIFT(302),
  [409] = {.count = 1, .reusable = false}, SHIFT(303),
  [411] = {.count = 1, .reusable = false}, SHIFT(304),
  [413] = {.count = 1, .reusable = true}, SHIFT(304),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym__at_text_mode, 1, .alias_sequence_id = 1),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_at_command, 1),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_at_command, 1),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 2),
  [425] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 2),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [429] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother, 1),
  [431] = {.count = 1, .reusable = false}, SHIFT(306),
  [433] = {.count = 1, .reusable = true}, SHIFT(306),
  [435] = {.count = 1, .reusable = false}, SHIFT(308),
  [437] = {.count = 1, .reusable = true}, SHIFT(308),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_end_opt, 1),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 2),
  [447] = {.count = 1, .reusable = false}, SHIFT(310),
  [449] = {.count = 1, .reusable = true}, SHIFT(310),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [453] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [456] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [459] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [462] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [465] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(171),
  [468] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [471] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [474] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(8),
  [477] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(171),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [482] = {.count = 1, .reusable = false}, REDUCE(sym_text_group, 3),
  [484] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [486] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(173),
  [489] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(173),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 2),
  [494] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 2),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [498] = {.count = 1, .reusable = false}, SHIFT(311),
  [500] = {.count = 1, .reusable = false}, SHIFT(312),
  [502] = {.count = 1, .reusable = true}, SHIFT(312),
  [504] = {.count = 1, .reusable = true}, SHIFT(313),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math, 3),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_inline_math, 3),
  [510] = {.count = 1, .reusable = false}, SHIFT(314),
  [512] = {.count = 1, .reusable = false}, SHIFT(316),
  [514] = {.count = 1, .reusable = true}, SHIFT(316),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym_tag, 2),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [520] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 2),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 2),
  [524] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 2),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 2),
  [528] = {.count = 1, .reusable = false}, SHIFT(319),
  [530] = {.count = 1, .reusable = true}, SHIFT(319),
  [532] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(2),
  [535] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(75),
  [538] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(76),
  [541] = {.count = 1, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(186),
  [546] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [549] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(8),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(186),
  [555] = {.count = 1, .reusable = true}, SHIFT(320),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 3),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 3),
  [561] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(189),
  [564] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(189),
  [567] = {.count = 1, .reusable = true}, SHIFT(321),
  [569] = {.count = 1, .reusable = true}, SHIFT(252),
  [571] = {.count = 1, .reusable = true}, SHIFT(322),
  [573] = {.count = 1, .reusable = true}, SHIFT(323),
  [575] = {.count = 1, .reusable = true}, SHIFT(327),
  [577] = {.count = 1, .reusable = true}, SHIFT(345),
  [579] = {.count = 1, .reusable = true}, SHIFT(346),
  [581] = {.count = 1, .reusable = true}, SHIFT(347),
  [583] = {.count = 1, .reusable = true}, SHIFT(348),
  [585] = {.count = 1, .reusable = true}, SHIFT(349),
  [587] = {.count = 1, .reusable = true}, SHIFT(350),
  [589] = {.count = 1, .reusable = true}, SHIFT(351),
  [591] = {.count = 1, .reusable = true}, SHIFT(352),
  [593] = {.count = 1, .reusable = true}, SHIFT(353),
  [595] = {.count = 1, .reusable = true}, SHIFT(354),
  [597] = {.count = 1, .reusable = true}, SHIFT(355),
  [599] = {.count = 1, .reusable = true}, SHIFT(356),
  [601] = {.count = 1, .reusable = true}, SHIFT(357),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 3),
  [607] = {.count = 1, .reusable = true}, SHIFT(358),
  [609] = {.count = 1, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [611] = {.count = 2, .reusable = false}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(231),
  [614] = {.count = 1, .reusable = true}, SHIFT(360),
  [616] = {.count = 1, .reusable = true}, SHIFT(362),
  [618] = {.count = 1, .reusable = true}, SHIFT(363),
  [620] = {.count = 1, .reusable = true}, SHIFT(364),
  [622] = {.count = 1, .reusable = true}, SHIFT(365),
  [624] = {.count = 1, .reusable = true}, SHIFT(366),
  [626] = {.count = 1, .reusable = true}, SHIFT(367),
  [628] = {.count = 1, .reusable = false}, SHIFT(368),
  [630] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 2),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_end, 2),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_text_environment, 3),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_text_environment, 3),
  [640] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(255),
  [643] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(255),
  [646] = {.count = 1, .reusable = true}, SHIFT(370),
  [648] = {.count = 1, .reusable = true}, SHIFT(371),
  [650] = {.count = 1, .reusable = true}, SHIFT(372),
  [652] = {.count = 1, .reusable = true}, SHIFT(373),
  [654] = {.count = 1, .reusable = true}, SHIFT(374),
  [656] = {.count = 1, .reusable = true}, SHIFT(375),
  [658] = {.count = 1, .reusable = true}, SHIFT(376),
  [660] = {.count = 1, .reusable = true}, SHIFT(377),
  [662] = {.count = 1, .reusable = true}, SHIFT(378),
  [664] = {.count = 1, .reusable = true}, SHIFT(379),
  [666] = {.count = 1, .reusable = true}, SHIFT(380),
  [668] = {.count = 1, .reusable = true}, SHIFT(381),
  [670] = {.count = 1, .reusable = true}, SHIFT(382),
  [672] = {.count = 1, .reusable = true}, SHIFT(383),
  [674] = {.count = 1, .reusable = true}, SHIFT(384),
  [676] = {.count = 1, .reusable = true}, SHIFT(385),
  [678] = {.count = 1, .reusable = true}, SHIFT(386),
  [680] = {.count = 1, .reusable = true}, SHIFT(387),
  [682] = {.count = 1, .reusable = true}, SHIFT(388),
  [684] = {.count = 1, .reusable = true}, SHIFT(389),
  [686] = {.count = 1, .reusable = true}, SHIFT(390),
  [688] = {.count = 1, .reusable = true}, SHIFT(391),
  [690] = {.count = 1, .reusable = true}, SHIFT(392),
  [692] = {.count = 1, .reusable = true}, SHIFT(393),
  [694] = {.count = 1, .reusable = true}, SHIFT(394),
  [696] = {.count = 1, .reusable = true}, SHIFT(395),
  [698] = {.count = 1, .reusable = true}, SHIFT(396),
  [700] = {.count = 1, .reusable = true}, SHIFT(397),
  [702] = {.count = 1, .reusable = true}, SHIFT(398),
  [704] = {.count = 1, .reusable = true}, SHIFT(399),
  [706] = {.count = 1, .reusable = true}, SHIFT(400),
  [708] = {.count = 1, .reusable = true}, SHIFT(401),
  [710] = {.count = 1, .reusable = true}, SHIFT(402),
  [712] = {.count = 1, .reusable = true}, SHIFT(403),
  [714] = {.count = 1, .reusable = true}, SHIFT(404),
  [716] = {.count = 1, .reusable = true}, SHIFT(405),
  [718] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [720] = {.count = 1, .reusable = false}, REDUCE(sym_documentclass, 3),
  [722] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [724] = {.count = 1, .reusable = false}, REDUCE(sym_usepackage, 3),
  [726] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_section, 3),
  [730] = {.count = 1, .reusable = true}, SHIFT(407),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 2),
  [734] = {.count = 1, .reusable = false}, REDUCE(sym_makeatother_token, 2),
  [736] = {.count = 1, .reusable = false}, REDUCE(sym_at_token, 2),
  [738] = {.count = 1, .reusable = true}, REDUCE(sym_at_token, 2),
  [740] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 2),
  [742] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 2),
  [744] = {.count = 1, .reusable = false}, SHIFT(408),
  [746] = {.count = 1, .reusable = false}, SHIFT(409),
  [748] = {.count = 1, .reusable = true}, SHIFT(409),
  [750] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 2),
  [752] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 2),
  [754] = {.count = 1, .reusable = false}, SHIFT(411),
  [756] = {.count = 1, .reusable = true}, SHIFT(411),
  [758] = {.count = 1, .reusable = true}, REDUCE(sym_at_group, 3),
  [760] = {.count = 1, .reusable = false}, REDUCE(sym_at_group, 3),
  [762] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(2),
  [765] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(302),
  [768] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(161),
  [771] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(5),
  [774] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(308),
  [777] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(6),
  [780] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(162),
  [783] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(8),
  [786] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(308),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [791] = {.count = 1, .reusable = false}, REDUCE(sym_opt_text_group, 3),
  [793] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(310),
  [796] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(310),
  [799] = {.count = 1, .reusable = false}, REDUCE(sym_math_group, 3),
  [801] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [803] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(312),
  [806] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(312),
  [809] = {.count = 1, .reusable = true}, SHIFT(412),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 2),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [815] = {.count = 1, .reusable = true}, SHIFT(413),
  [817] = {.count = 1, .reusable = false}, REDUCE(sym_text_mode, 1),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_math_environment, 3),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_math_environment, 3),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_opt_math_group, 3),
  [825] = {.count = 1, .reusable = true}, REDUCE(sym_opt_math_group, 3),
  [827] = {.count = 2, .reusable = false}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(319),
  [830] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(319),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [835] = {.count = 1, .reusable = false}, REDUCE(sym_end_display_math, 2),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [839] = {.count = 1, .reusable = false}, REDUCE(sym_end_inline_math, 2),
  [841] = {.count = 1, .reusable = true}, SHIFT(414),
  [843] = {.count = 1, .reusable = true}, SHIFT(415),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 4),
  [847] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 4),
  [849] = {.count = 1, .reusable = true}, SHIFT(416),
  [851] = {.count = 1, .reusable = true}, SHIFT(417),
  [853] = {.count = 1, .reusable = true}, SHIFT(418),
  [855] = {.count = 1, .reusable = true}, SHIFT(419),
  [857] = {.count = 1, .reusable = true}, SHIFT(420),
  [859] = {.count = 1, .reusable = true}, SHIFT(421),
  [861] = {.count = 1, .reusable = true}, SHIFT(422),
  [863] = {.count = 1, .reusable = true}, SHIFT(423),
  [865] = {.count = 1, .reusable = true}, SHIFT(424),
  [867] = {.count = 1, .reusable = true}, SHIFT(425),
  [869] = {.count = 1, .reusable = true}, SHIFT(426),
  [871] = {.count = 1, .reusable = true}, SHIFT(427),
  [873] = {.count = 1, .reusable = true}, SHIFT(428),
  [875] = {.count = 1, .reusable = true}, SHIFT(429),
  [877] = {.count = 1, .reusable = true}, SHIFT(430),
  [879] = {.count = 1, .reusable = true}, SHIFT(431),
  [881] = {.count = 1, .reusable = true}, SHIFT(432),
  [883] = {.count = 1, .reusable = true}, SHIFT(433),
  [885] = {.count = 1, .reusable = true}, SHIFT(434),
  [887] = {.count = 1, .reusable = true}, SHIFT(435),
  [889] = {.count = 1, .reusable = true}, SHIFT(436),
  [891] = {.count = 1, .reusable = true}, SHIFT(437),
  [893] = {.count = 1, .reusable = true}, SHIFT(438),
  [895] = {.count = 1, .reusable = true}, SHIFT(439),
  [897] = {.count = 1, .reusable = true}, SHIFT(440),
  [899] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_environment, 4),
  [901] = {.count = 1, .reusable = false}, REDUCE(sym_verbatim_environment, 4),
  [903] = {.count = 1, .reusable = true}, SHIFT(441),
  [905] = {.count = 1, .reusable = true}, SHIFT(442),
  [907] = {.count = 1, .reusable = true}, SHIFT(443),
  [909] = {.count = 1, .reusable = true}, SHIFT(444),
  [911] = {.count = 1, .reusable = true}, SHIFT(445),
  [913] = {.count = 1, .reusable = true}, SHIFT(446),
  [915] = {.count = 1, .reusable = true}, SHIFT(447),
  [917] = {.count = 1, .reusable = true}, SHIFT(448),
  [919] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align, 4),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align, 4),
  [923] = {.count = 1, .reusable = false}, REDUCE(sym_begin_align_star, 4),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_begin_align_star, 4),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat, 4),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym_begin_alignat_star, 4),
  [931] = {.count = 1, .reusable = false}, REDUCE(sym_begin_displaymath, 4),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_begin_displaymath, 4),
  [935] = {.count = 1, .reusable = false}, REDUCE(sym_begin_dmath, 4),
  [937] = {.count = 1, .reusable = true}, REDUCE(sym_begin_dmath, 4),
  [939] = {.count = 1, .reusable = false}, REDUCE(sym_begin_dmath_star, 4),
  [941] = {.count = 1, .reusable = true}, REDUCE(sym_begin_dmath_star, 4),
  [943] = {.count = 1, .reusable = false}, REDUCE(sym_begin_dseries, 4),
  [945] = {.count = 1, .reusable = true}, REDUCE(sym_begin_dseries, 4),
  [947] = {.count = 1, .reusable = false}, REDUCE(sym_begin_dseries_star, 4),
  [949] = {.count = 1, .reusable = true}, REDUCE(sym_begin_dseries_star, 4),
  [951] = {.count = 1, .reusable = false}, REDUCE(sym_begin_dgroup, 4),
  [953] = {.count = 1, .reusable = true}, REDUCE(sym_begin_dgroup, 4),
  [955] = {.count = 1, .reusable = false}, REDUCE(sym_begin_dgroup_star, 4),
  [957] = {.count = 1, .reusable = true}, REDUCE(sym_begin_dgroup_star, 4),
  [959] = {.count = 1, .reusable = false}, REDUCE(sym_begin_darray, 4),
  [961] = {.count = 1, .reusable = true}, REDUCE(sym_begin_darray, 4),
  [963] = {.count = 1, .reusable = false}, REDUCE(sym_begin_darray_star, 4),
  [965] = {.count = 1, .reusable = true}, REDUCE(sym_begin_darray_star, 4),
  [967] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray, 4),
  [969] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray, 4),
  [971] = {.count = 1, .reusable = false}, REDUCE(sym_begin_eqnarray_star, 4),
  [973] = {.count = 1, .reusable = true}, REDUCE(sym_begin_eqnarray_star, 4),
  [975] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation, 4),
  [977] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation, 4),
  [979] = {.count = 1, .reusable = false}, REDUCE(sym_begin_equation_star, 4),
  [981] = {.count = 1, .reusable = true}, REDUCE(sym_begin_equation_star, 4),
  [983] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign, 4),
  [985] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign, 4),
  [987] = {.count = 1, .reusable = false}, REDUCE(sym_begin_flalign_star, 4),
  [989] = {.count = 1, .reusable = true}, REDUCE(sym_begin_flalign_star, 4),
  [991] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather, 4),
  [993] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather, 4),
  [995] = {.count = 1, .reusable = false}, REDUCE(sym_begin_gather_star, 4),
  [997] = {.count = 1, .reusable = true}, REDUCE(sym_begin_gather_star, 4),
  [999] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multiline, 4),
  [1001] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multiline, 4),
  [1003] = {.count = 1, .reusable = false}, REDUCE(sym_begin_multiline_star, 4),
  [1005] = {.count = 1, .reusable = true}, REDUCE(sym_begin_multiline_star, 4),
  [1007] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split, 4),
  [1009] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split, 4),
  [1011] = {.count = 1, .reusable = false}, REDUCE(sym_begin_split_star, 4),
  [1013] = {.count = 1, .reusable = true}, REDUCE(sym_begin_split_star, 4),
  [1015] = {.count = 1, .reusable = false}, REDUCE(sym_begin_math, 4),
  [1017] = {.count = 1, .reusable = true}, REDUCE(sym_begin_math, 4),
  [1019] = {.count = 1, .reusable = true}, REDUCE(sym_begin_verbatim, 4),
  [1021] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim, 4),
  [1023] = {.count = 1, .reusable = false}, REDUCE(sym_begin_Verbatim_star, 4),
  [1025] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim, 4),
  [1027] = {.count = 1, .reusable = false}, REDUCE(sym_begin_BVerbatim_star, 4),
  [1029] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim, 4),
  [1031] = {.count = 1, .reusable = false}, REDUCE(sym_begin_LVerbatim_star, 4),
  [1033] = {.count = 1, .reusable = false}, REDUCE(sym_begin_lstlisting, 4),
  [1035] = {.count = 1, .reusable = true}, REDUCE(sym_begin_minted, 4),
  [1037] = {.count = 1, .reusable = true}, REDUCE(sym_simple_text_group, 3),
  [1039] = {.count = 1, .reusable = false}, REDUCE(sym_simple_text_group, 3),
  [1041] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1043] = {.count = 1, .reusable = false}, REDUCE(sym_catcode, 4),
  [1045] = {.count = 1, .reusable = false}, REDUCE(sym_at_text_group, 3),
  [1047] = {.count = 1, .reusable = true}, REDUCE(sym_at_text_group, 3),
  [1049] = {.count = 1, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2),
  [1051] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(409),
  [1054] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(409),
  [1057] = {.count = 1, .reusable = false}, REDUCE(sym_opt_at_text_group, 3),
  [1059] = {.count = 1, .reusable = true}, REDUCE(sym_opt_at_text_group, 3),
  [1061] = {.count = 2, .reusable = false}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(411),
  [1064] = {.count = 2, .reusable = true}, REDUCE(aux_sym_at_group_repeat1, 2), SHIFT_REPEAT(411),
  [1067] = {.count = 1, .reusable = true}, REDUCE(sym_display_math, 5),
  [1069] = {.count = 1, .reusable = false}, REDUCE(sym_display_math, 5),
  [1071] = {.count = 1, .reusable = false}, REDUCE(sym_math_text_group, 3),
  [1073] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1075] = {.count = 1, .reusable = true}, SHIFT(449),
  [1077] = {.count = 1, .reusable = true}, SHIFT(450),
  [1079] = {.count = 1, .reusable = true}, SHIFT(451),
  [1081] = {.count = 1, .reusable = true}, SHIFT(452),
  [1083] = {.count = 1, .reusable = true}, SHIFT(453),
  [1085] = {.count = 1, .reusable = true}, SHIFT(454),
  [1087] = {.count = 1, .reusable = true}, SHIFT(455),
  [1089] = {.count = 1, .reusable = true}, SHIFT(456),
  [1091] = {.count = 1, .reusable = true}, SHIFT(457),
  [1093] = {.count = 1, .reusable = true}, SHIFT(458),
  [1095] = {.count = 1, .reusable = true}, SHIFT(459),
  [1097] = {.count = 1, .reusable = true}, SHIFT(460),
  [1099] = {.count = 1, .reusable = true}, SHIFT(461),
  [1101] = {.count = 1, .reusable = true}, SHIFT(462),
  [1103] = {.count = 1, .reusable = true}, SHIFT(463),
  [1105] = {.count = 1, .reusable = true}, SHIFT(464),
  [1107] = {.count = 1, .reusable = true}, SHIFT(465),
  [1109] = {.count = 1, .reusable = true}, SHIFT(466),
  [1111] = {.count = 1, .reusable = true}, SHIFT(467),
  [1113] = {.count = 1, .reusable = true}, SHIFT(468),
  [1115] = {.count = 1, .reusable = true}, SHIFT(469),
  [1117] = {.count = 1, .reusable = true}, SHIFT(470),
  [1119] = {.count = 1, .reusable = true}, SHIFT(471),
  [1121] = {.count = 1, .reusable = true}, SHIFT(472),
  [1123] = {.count = 1, .reusable = true}, SHIFT(473),
  [1125] = {.count = 1, .reusable = true}, SHIFT(474),
  [1127] = {.count = 1, .reusable = true}, SHIFT(475),
  [1129] = {.count = 1, .reusable = true}, SHIFT(476),
  [1131] = {.count = 1, .reusable = true}, SHIFT(477),
  [1133] = {.count = 1, .reusable = true}, SHIFT(478),
  [1135] = {.count = 1, .reusable = true}, SHIFT(479),
  [1137] = {.count = 1, .reusable = true}, SHIFT(480),
  [1139] = {.count = 1, .reusable = true}, SHIFT(481),
  [1141] = {.count = 1, .reusable = true}, SHIFT(482),
  [1143] = {.count = 1, .reusable = true}, SHIFT(483),
  [1145] = {.count = 1, .reusable = true}, REDUCE(sym_end_align, 4),
  [1147] = {.count = 1, .reusable = false}, REDUCE(sym_end_align, 4),
  [1149] = {.count = 1, .reusable = true}, REDUCE(sym_end_align_star, 4),
  [1151] = {.count = 1, .reusable = false}, REDUCE(sym_end_align_star, 4),
  [1153] = {.count = 1, .reusable = true}, SHIFT(484),
  [1155] = {.count = 1, .reusable = true}, SHIFT(485),
  [1157] = {.count = 1, .reusable = true}, REDUCE(sym_end_displaymath, 4),
  [1159] = {.count = 1, .reusable = false}, REDUCE(sym_end_displaymath, 4),
  [1161] = {.count = 1, .reusable = true}, SHIFT(486),
  [1163] = {.count = 1, .reusable = true}, SHIFT(487),
  [1165] = {.count = 1, .reusable = true}, SHIFT(488),
  [1167] = {.count = 1, .reusable = true}, SHIFT(489),
  [1169] = {.count = 1, .reusable = true}, SHIFT(490),
  [1171] = {.count = 1, .reusable = true}, SHIFT(491),
  [1173] = {.count = 1, .reusable = true}, SHIFT(492),
  [1175] = {.count = 1, .reusable = true}, SHIFT(493),
  [1177] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray, 4),
  [1179] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray, 4),
  [1181] = {.count = 1, .reusable = true}, REDUCE(sym_end_eqnarray_star, 4),
  [1183] = {.count = 1, .reusable = false}, REDUCE(sym_end_eqnarray_star, 4),
  [1185] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation, 4),
  [1187] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation, 4),
  [1189] = {.count = 1, .reusable = true}, REDUCE(sym_end_equation_star, 4),
  [1191] = {.count = 1, .reusable = false}, REDUCE(sym_end_equation_star, 4),
  [1193] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign, 4),
  [1195] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign, 4),
  [1197] = {.count = 1, .reusable = true}, REDUCE(sym_end_flalign_star, 4),
  [1199] = {.count = 1, .reusable = false}, REDUCE(sym_end_flalign_star, 4),
  [1201] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather, 4),
  [1203] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather, 4),
  [1205] = {.count = 1, .reusable = true}, REDUCE(sym_end_gather_star, 4),
  [1207] = {.count = 1, .reusable = false}, REDUCE(sym_end_gather_star, 4),
  [1209] = {.count = 1, .reusable = true}, REDUCE(sym_end_multiline, 4),
  [1211] = {.count = 1, .reusable = false}, REDUCE(sym_end_multiline, 4),
  [1213] = {.count = 1, .reusable = true}, REDUCE(sym_end_multiline_star, 4),
  [1215] = {.count = 1, .reusable = false}, REDUCE(sym_end_multiline_star, 4),
  [1217] = {.count = 1, .reusable = true}, REDUCE(sym_end_split, 4),
  [1219] = {.count = 1, .reusable = false}, REDUCE(sym_end_split, 4),
  [1221] = {.count = 1, .reusable = true}, REDUCE(sym_end_split_star, 4),
  [1223] = {.count = 1, .reusable = false}, REDUCE(sym_end_split_star, 4),
  [1225] = {.count = 1, .reusable = true}, REDUCE(sym_end_math, 4),
  [1227] = {.count = 1, .reusable = false}, REDUCE(sym_end_math, 4),
  [1229] = {.count = 1, .reusable = true}, REDUCE(sym_end_verbatim, 4),
  [1231] = {.count = 1, .reusable = false}, REDUCE(sym_end_verbatim, 4),
  [1233] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim, 4),
  [1235] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim, 4),
  [1237] = {.count = 1, .reusable = true}, REDUCE(sym_end_Verbatim_star, 4),
  [1239] = {.count = 1, .reusable = false}, REDUCE(sym_end_Verbatim_star, 4),
  [1241] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim, 4),
  [1243] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim, 4),
  [1245] = {.count = 1, .reusable = true}, REDUCE(sym_end_BVerbatim_star, 4),
  [1247] = {.count = 1, .reusable = false}, REDUCE(sym_end_BVerbatim_star, 4),
  [1249] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim, 4),
  [1251] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim, 4),
  [1253] = {.count = 1, .reusable = true}, REDUCE(sym_end_LVerbatim_star, 4),
  [1255] = {.count = 1, .reusable = false}, REDUCE(sym_end_LVerbatim_star, 4),
  [1257] = {.count = 1, .reusable = true}, REDUCE(sym_end_lstlisting, 4),
  [1259] = {.count = 1, .reusable = false}, REDUCE(sym_end_lstlisting, 4),
  [1261] = {.count = 1, .reusable = true}, SHIFT(494),
  [1263] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat, 4),
  [1265] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat, 4),
  [1267] = {.count = 1, .reusable = true}, REDUCE(sym_end_alignat_star, 4),
  [1269] = {.count = 1, .reusable = false}, REDUCE(sym_end_alignat_star, 4),
  [1271] = {.count = 1, .reusable = true}, REDUCE(sym_end_dmath, 4),
  [1273] = {.count = 1, .reusable = false}, REDUCE(sym_end_dmath, 4),
  [1275] = {.count = 1, .reusable = true}, REDUCE(sym_end_dmath_star, 4),
  [1277] = {.count = 1, .reusable = false}, REDUCE(sym_end_dmath_star, 4),
  [1279] = {.count = 1, .reusable = true}, REDUCE(sym_end_dseries, 4),
  [1281] = {.count = 1, .reusable = false}, REDUCE(sym_end_dseries, 4),
  [1283] = {.count = 1, .reusable = true}, REDUCE(sym_end_dseries_star, 4),
  [1285] = {.count = 1, .reusable = false}, REDUCE(sym_end_dseries_star, 4),
  [1287] = {.count = 1, .reusable = true}, REDUCE(sym_end_dgroup, 4),
  [1289] = {.count = 1, .reusable = false}, REDUCE(sym_end_dgroup, 4),
  [1291] = {.count = 1, .reusable = true}, REDUCE(sym_end_dgroup_star, 4),
  [1293] = {.count = 1, .reusable = false}, REDUCE(sym_end_dgroup_star, 4),
  [1295] = {.count = 1, .reusable = true}, REDUCE(sym_end_darray, 4),
  [1297] = {.count = 1, .reusable = false}, REDUCE(sym_end_darray, 4),
  [1299] = {.count = 1, .reusable = true}, REDUCE(sym_end_darray_star, 4),
  [1301] = {.count = 1, .reusable = false}, REDUCE(sym_end_darray_star, 4),
  [1303] = {.count = 1, .reusable = true}, REDUCE(sym_end_minted, 4),
  [1305] = {.count = 1, .reusable = false}, REDUCE(sym_end_minted, 4),
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
