#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 899
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 2
#define TOKEN_COUNT 74
#define EXTERNAL_TOKEN_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  sym__escape = 1,
  sym__explsyntaxoff_word = 2,
  sym__explsyntaxon_word = 3,
  sym__makeatletter_word = 4,
  sym__makeatother_word = 5,
  sym__non_letter_or_other = 6,
  sym__providesexplclass_word = 7,
  sym__providesexplfile_word = 8,
  sym__providesexplpackage_word = 9,
  sym__space = 10,
  sym__token_end = 11,
  sym_active_char = 12,
  sym_alignment_tab = 13,
  sym_begin_group = 14,
  sym_comment = 15,
  sym_end_group = 16,
  sym_eol = 17,
  sym_magic_comment = 18,
  sym_math_shift = 19,
  sym_parameter_char = 20,
  sym_subscript = 21,
  sym_superscript = 22,
  sym_verb_body = 23,
  sym_verb_delim = 24,
  sym_verb_line = 25,
  anon_sym_verb = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  sym_display_math_env_name = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  sym_inline_math_env_name = 32,
  anon_sym_tag = 33,
  sym_verbatim_env_name = 34,
  anon_sym_begin = 35,
  anon_sym_end = 36,
  anon_sym_documentclass = 37,
  anon_sym_usepackage = 38,
  aux_sym_SLASHinclude_PIPEinput_SLASH = 39,
  anon_sym_STAR = 40,
  aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH = 41,
  aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH = 42,
  anon_sym_EQ = 43,
  aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH = 44,
  anon_sym_emph = 45,
  anon_sym_footnote = 46,
  anon_sym_textbf = 47,
  anon_sym_textit = 48,
  anon_sym_texttt = 49,
  aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH = 50,
  aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH = 51,
  aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH = 52,
  anon_sym_to = 53,
  anon_sym_spread = 54,
  aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH = 55,
  aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH = 56,
  aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH = 57,
  aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH = 58,
  aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH = 59,
  anon_sym_setbox = 60,
  aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH = 61,
  anon_sym_plus = 62,
  anon_sym_minus = 63,
  anon_sym_href = 64,
  aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH = 65,
  anon_sym_hyperbaseurl = 66,
  anon_sym_hyperimage = 67,
  anon_sym_hyperref = 68,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH = 69,
  aux_sym_SLASH_DOT_SLASH = 70,
  sym_unit = 71,
  sym_decimal = 72,
  sym_number = 73,
  sym_document = 74,
  sym__common = 75,
  sym_inline_verbatim = 76,
  sym_verb_token = 77,
  sym__text_mode = 78,
  sym_text_mode = 79,
  sym__math_mode = 80,
  sym_math_mode = 81,
  sym_parameter = 82,
  sym_text_env = 83,
  sym_math_env = 84,
  sym__display_math = 85,
  sym_tex_display_math = 86,
  sym_latex_display_math = 87,
  sym_begin_display_math = 88,
  sym_end_display_math = 89,
  sym_display_math_env = 90,
  sym_display_math_begin = 91,
  sym_display_math_end = 92,
  sym_display_math_env_group = 93,
  sym__inline_math = 94,
  sym_tex_inline_math = 95,
  sym_latex_inline_math = 96,
  sym_begin_inline_math = 97,
  sym_end_inline_math = 98,
  sym_inline_math_env = 99,
  sym_inline_math_begin = 100,
  sym_inline_math_end = 101,
  sym_inline_math_env_group = 102,
  sym_tag = 103,
  sym_tag_token = 104,
  sym_verbatim_env = 105,
  sym_verbatim_begin = 106,
  sym_verbatim_end = 107,
  sym_verbatim_text = 108,
  sym_verbatim_env_group = 109,
  sym_begin = 110,
  sym_begin_token = 111,
  sym_end = 112,
  sym_end_token = 113,
  sym_documentclass = 114,
  sym_documentclass_token = 115,
  sym_usepackage = 116,
  sym_usepackage_token = 117,
  sym_include = 118,
  sym_include_token = 119,
  sym_providesexplclass = 120,
  sym_providesexplclass_token = 121,
  sym_providesexplfile = 122,
  sym_providesexplfile_token = 123,
  sym_providesexplpackage = 124,
  sym_providesexplpackage_token = 125,
  sym_section = 126,
  sym_section_token = 127,
  sym_storage = 128,
  sym_storage_token = 129,
  sym_catcode = 130,
  sym_catcode_token = 131,
  sym_emph = 132,
  sym_emph_token = 133,
  sym_footnote = 134,
  sym_footnote_token = 135,
  sym_textbf = 136,
  sym_textbf_token = 137,
  sym_textit = 138,
  sym_textit_token = 139,
  sym_texttt = 140,
  sym_texttt_token = 141,
  sym_makeatletter = 142,
  sym_makeatletter_token = 143,
  sym_makeatother = 144,
  sym_makeatother_token = 145,
  sym_explsyntaxon = 146,
  sym_explsyntaxon_token = 147,
  sym_explsyntaxoff = 148,
  sym_explsyntaxoff_token = 149,
  sym_dimension_assign = 150,
  sym_glue_assign = 151,
  sym_glue_token = 152,
  sym_dimension_token = 153,
  sym_glue_space = 154,
  sym_glue_space_token = 155,
  sym_makebox = 156,
  sym_strut = 157,
  sym_strut_token = 158,
  sym_phantom_smash = 159,
  sym_phantom_smash_token = 160,
  sym_makebox_token = 161,
  sym_usebox = 162,
  sym_usebox_token = 163,
  sym_movebox = 164,
  sym_movebox_token = 165,
  sym__box = 166,
  sym_setbox = 167,
  sym_setbox_token = 168,
  sym_box_dimension_assign = 169,
  sym_box_dimension_token = 170,
  sym_glue = 171,
  sym_box_dimension_ref = 172,
  sym_dimension = 173,
  sym_href = 174,
  sym_href_token = 175,
  sym_url = 176,
  sym_url_token = 177,
  sym_hyperbaseurl = 178,
  sym_hyperbaseurl_token = 179,
  sym_hyperimage = 180,
  sym_hyperimage_token = 181,
  sym_hyperref = 182,
  sym_hyperref_token = 183,
  sym_text_group = 184,
  sym_name_group = 185,
  sym_opt_text_group = 186,
  sym_math_group = 187,
  sym_math_text_group = 188,
  sym_begin_opt = 189,
  sym_end_opt = 190,
  sym_text = 191,
  sym_token = 192,
  sym_escaped = 193,
  aux_sym_text_mode_repeat1 = 194,
  aux_sym_math_mode_repeat1 = 195,
  aux_sym_parameter_repeat1 = 196,
  aux_sym_verbatim_text_repeat1 = 197,
  aux_sym_text_repeat1 = 198,
  aux_sym_token_repeat1 = 199,
  anon_alias_sym_name = 200,
  anon_alias_sym_text = 201,
};

static const char *ts_symbol_names[] = {
  [sym__escape] = "_escape",
  [sym__explsyntaxoff_word] = "_explsyntaxoff_word",
  [sym__explsyntaxon_word] = "_explsyntaxon_word",
  [sym__makeatletter_word] = "_makeatletter_word",
  [sym__makeatother_word] = "_makeatother_word",
  [sym__non_letter_or_other] = "_non_letter_or_other",
  [sym__providesexplclass_word] = "_providesexplclass_word",
  [sym__providesexplfile_word] = "_providesexplfile_word",
  [sym__providesexplpackage_word] = "_providesexplpackage_word",
  [sym__space] = "_space",
  [sym__token_end] = "_token_end",
  [sym_active_char] = "active_char",
  [sym_alignment_tab] = "alignment_tab",
  [sym_begin_group] = "begin_group",
  [sym_comment] = "comment",
  [sym_end_group] = "end_group",
  [sym_eol] = "eol",
  [sym_magic_comment] = "magic_comment",
  [sym_math_shift] = "math_shift",
  [sym_parameter_char] = "parameter_char",
  [sym_subscript] = "subscript",
  [sym_superscript] = "superscript",
  [sym_verb_body] = "verb_body",
  [sym_verb_delim] = "verb_delim",
  [sym_verb_line] = "_verb_line",
  [ts_builtin_sym_end] = "END",
  [anon_sym_verb] = "verb",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_display_math_env_name] = "display_math_env_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_inline_math_env_name] = "inline_math_env_name",
  [anon_sym_tag] = "tag",
  [sym_verbatim_env_name] = "verbatim_env_name",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [anon_sym_documentclass] = "documentclass",
  [anon_sym_usepackage] = "usepackage",
  [aux_sym_SLASHinclude_PIPEinput_SLASH] = "/include|input/",
  [anon_sym_STAR] = "*",
  [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = "/section|subsection|subsubsection|paragraph|subparagraph|chapter|part|addpart|addchap|addsec|minisec/",
  [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = "/[egx]?def/",
  [anon_sym_EQ] = "=",
  [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = "/k?catcode`/",
  [anon_sym_emph] = "emph",
  [anon_sym_footnote] = "footnote",
  [anon_sym_textbf] = "textbf",
  [anon_sym_textit] = "textit",
  [anon_sym_texttt] = "texttt",
  [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = "/(((above|below)display(short)?|baseline|left|line|normalbaseline|normalline|parfill|par|right|splittop|tab|top|x?space)skip)|(small|mid|big)skipamount/",
  [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = "/(h|v)(offset|size|badness|fuzz)|boxmaxdepth|displayindent|displaywidth|emergencystretch|hangindent|lineskiplimit|maxdepth|normallineskiplimit|overfullrule|page(fil{1,3)stretch|page(depth|goal|shrink|total)|parindent|predisplaysize|prevdepth|splitmaxdepth/",
  [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = "/[hmv]skip|(h|top|v)glue/",
  [anon_sym_to] = "to",
  [anon_sym_spread] = "spread",
  [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = "/(math)?strut|null/",
  [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = "/[hv]?phantom|smash/",
  [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = "/[hv]box|vtop/",
  [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = "/(un[hv])?(box|copy)/",
  [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = "/move(left|right)|raise|lower/",
  [anon_sym_setbox] = "setbox",
  [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = "/ht|dp|wd/",
  [anon_sym_plus] = "plus",
  [anon_sym_minus] = "minus",
  [anon_sym_href] = "href",
  [aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH] = "/(nolink)?url/",
  [anon_sym_hyperbaseurl] = "hyperbaseurl",
  [anon_sym_hyperimage] = "hyperimage",
  [anon_sym_hyperref] = "hyperref",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = "/[^\\]\\[]/",
  [aux_sym_SLASH_DOT_SLASH] = "/./",
  [sym_unit] = "unit",
  [sym_decimal] = "decimal",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__common] = "_common",
  [sym_inline_verbatim] = "inline_verbatim",
  [sym_verb_token] = "verb_token",
  [sym__text_mode] = "_text_mode",
  [sym_text_mode] = "text_mode",
  [sym__math_mode] = "_math_mode",
  [sym_math_mode] = "math_mode",
  [sym_parameter] = "parameter",
  [sym_text_env] = "text_env",
  [sym_math_env] = "math_env",
  [sym__display_math] = "_display_math",
  [sym_tex_display_math] = "tex_display_math",
  [sym_latex_display_math] = "latex_display_math",
  [sym_begin_display_math] = "begin_display_math",
  [sym_end_display_math] = "end_display_math",
  [sym_display_math_env] = "display_math_env",
  [sym_display_math_begin] = "display_math_begin",
  [sym_display_math_end] = "display_math_end",
  [sym_display_math_env_group] = "display_math_env_group",
  [sym__inline_math] = "_inline_math",
  [sym_tex_inline_math] = "tex_inline_math",
  [sym_latex_inline_math] = "latex_inline_math",
  [sym_begin_inline_math] = "begin_inline_math",
  [sym_end_inline_math] = "end_inline_math",
  [sym_inline_math_env] = "inline_math_env",
  [sym_inline_math_begin] = "inline_math_begin",
  [sym_inline_math_end] = "inline_math_end",
  [sym_inline_math_env_group] = "inline_math_env_group",
  [sym_tag] = "tag",
  [sym_tag_token] = "tag_token",
  [sym_verbatim_env] = "verbatim_env",
  [sym_verbatim_begin] = "verbatim_begin",
  [sym_verbatim_end] = "verbatim_end",
  [sym_verbatim_text] = "verbatim_text",
  [sym_verbatim_env_group] = "verbatim_env_group",
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
  [sym_providesexplclass] = "providesexplclass",
  [sym_providesexplclass_token] = "providesexplclass_token",
  [sym_providesexplfile] = "providesexplfile",
  [sym_providesexplfile_token] = "providesexplfile_token",
  [sym_providesexplpackage] = "providesexplpackage",
  [sym_providesexplpackage_token] = "providesexplpackage_token",
  [sym_section] = "section",
  [sym_section_token] = "section_token",
  [sym_storage] = "storage",
  [sym_storage_token] = "storage_token",
  [sym_catcode] = "catcode",
  [sym_catcode_token] = "catcode_token",
  [sym_emph] = "emph",
  [sym_emph_token] = "emph_token",
  [sym_footnote] = "footnote",
  [sym_footnote_token] = "footnote_token",
  [sym_textbf] = "textbf",
  [sym_textbf_token] = "textbf_token",
  [sym_textit] = "textit",
  [sym_textit_token] = "textit_token",
  [sym_texttt] = "texttt",
  [sym_texttt_token] = "texttt_token",
  [sym_makeatletter] = "makeatletter",
  [sym_makeatletter_token] = "makeatletter_token",
  [sym_makeatother] = "makeatother",
  [sym_makeatother_token] = "makeatother_token",
  [sym_explsyntaxon] = "explsyntaxon",
  [sym_explsyntaxon_token] = "explsyntaxon_token",
  [sym_explsyntaxoff] = "explsyntaxoff",
  [sym_explsyntaxoff_token] = "explsyntaxoff_token",
  [sym_dimension_assign] = "dimension_assign",
  [sym_glue_assign] = "glue_assign",
  [sym_glue_token] = "glue_token",
  [sym_dimension_token] = "dimension_token",
  [sym_glue_space] = "glue_space",
  [sym_glue_space_token] = "glue_space_token",
  [sym_makebox] = "makebox",
  [sym_strut] = "strut",
  [sym_strut_token] = "strut_token",
  [sym_phantom_smash] = "phantom_smash",
  [sym_phantom_smash_token] = "phantom_smash_token",
  [sym_makebox_token] = "makebox_token",
  [sym_usebox] = "usebox",
  [sym_usebox_token] = "usebox_token",
  [sym_movebox] = "movebox",
  [sym_movebox_token] = "movebox_token",
  [sym__box] = "_box",
  [sym_setbox] = "setbox",
  [sym_setbox_token] = "setbox_token",
  [sym_box_dimension_assign] = "box_dimension_assign",
  [sym_box_dimension_token] = "box_dimension_token",
  [sym_glue] = "glue",
  [sym_box_dimension_ref] = "box_dimension_ref",
  [sym_dimension] = "dimension",
  [sym_href] = "href",
  [sym_href_token] = "href_token",
  [sym_url] = "url",
  [sym_url_token] = "url_token",
  [sym_hyperbaseurl] = "hyperbaseurl",
  [sym_hyperbaseurl_token] = "hyperbaseurl_token",
  [sym_hyperimage] = "hyperimage",
  [sym_hyperimage_token] = "hyperimage_token",
  [sym_hyperref] = "hyperref",
  [sym_hyperref_token] = "hyperref_token",
  [sym_text_group] = "text_group",
  [sym_name_group] = "name_group",
  [sym_opt_text_group] = "opt_text_group",
  [sym_math_group] = "math_group",
  [sym_math_text_group] = "math_text_group",
  [sym_begin_opt] = "begin_opt",
  [sym_end_opt] = "end_opt",
  [sym_text] = "text",
  [sym_token] = "token",
  [sym_escaped] = "escaped",
  [aux_sym_text_mode_repeat1] = "text_mode_repeat1",
  [aux_sym_math_mode_repeat1] = "math_mode_repeat1",
  [aux_sym_parameter_repeat1] = "parameter_repeat1",
  [aux_sym_verbatim_text_repeat1] = "verbatim_text_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_token_repeat1] = "token_repeat1",
  [anon_alias_sym_name] = "name",
  [anon_alias_sym_text] = "text",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__escape] = {
    .visible = false,
    .named = true,
  },
  [sym__explsyntaxoff_word] = {
    .visible = false,
    .named = true,
  },
  [sym__explsyntaxon_word] = {
    .visible = false,
    .named = true,
  },
  [sym__makeatletter_word] = {
    .visible = false,
    .named = true,
  },
  [sym__makeatother_word] = {
    .visible = false,
    .named = true,
  },
  [sym__non_letter_or_other] = {
    .visible = false,
    .named = true,
  },
  [sym__providesexplclass_word] = {
    .visible = false,
    .named = true,
  },
  [sym__providesexplfile_word] = {
    .visible = false,
    .named = true,
  },
  [sym__providesexplpackage_word] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__token_end] = {
    .visible = false,
    .named = true,
  },
  [sym_active_char] = {
    .visible = true,
    .named = true,
  },
  [sym_alignment_tab] = {
    .visible = true,
    .named = true,
  },
  [sym_begin_group] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_end_group] = {
    .visible = true,
    .named = true,
  },
  [sym_eol] = {
    .visible = true,
    .named = true,
  },
  [sym_magic_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_math_shift] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_char] = {
    .visible = true,
    .named = true,
  },
  [sym_subscript] = {
    .visible = true,
    .named = true,
  },
  [sym_superscript] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_body] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_delim] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_line] = {
    .visible = true,
    .named = false,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_verb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_display_math_env_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_inline_math_env_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [sym_verbatim_env_name] = {
    .visible = true,
    .named = true,
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
  [anon_sym_STAR] = {
    .visible = true,
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
  [anon_sym_emph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_footnote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textbf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_textit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_texttt] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_spread] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_setbox] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_plus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_minus] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_href] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_hyperbaseurl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyperimage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hyperref] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__common] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_verbatim] = {
    .visible = true,
    .named = true,
  },
  [sym_verb_token] = {
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
  [sym_text_env] = {
    .visible = true,
    .named = true,
  },
  [sym_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym__display_math] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_display_math] = {
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
  [sym_display_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_end] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math_env_group] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_math] = {
    .visible = false,
    .named = true,
  },
  [sym_tex_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_latex_inline_math] = {
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
  [sym_inline_math_env] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_end] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_math_env_group] = {
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
  [sym_verbatim_env] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_end] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_text] = {
    .visible = true,
    .named = true,
  },
  [sym_verbatim_env_group] = {
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
  [sym_providesexplclass] = {
    .visible = true,
    .named = true,
  },
  [sym_providesexplclass_token] = {
    .visible = true,
    .named = true,
  },
  [sym_providesexplfile] = {
    .visible = true,
    .named = true,
  },
  [sym_providesexplfile_token] = {
    .visible = true,
    .named = true,
  },
  [sym_providesexplpackage] = {
    .visible = true,
    .named = true,
  },
  [sym_providesexplpackage_token] = {
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
  [sym_emph] = {
    .visible = true,
    .named = true,
  },
  [sym_emph_token] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote] = {
    .visible = true,
    .named = true,
  },
  [sym_footnote_token] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf] = {
    .visible = true,
    .named = true,
  },
  [sym_textbf_token] = {
    .visible = true,
    .named = true,
  },
  [sym_textit] = {
    .visible = true,
    .named = true,
  },
  [sym_textit_token] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt] = {
    .visible = true,
    .named = true,
  },
  [sym_texttt_token] = {
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
  [sym_explsyntaxon] = {
    .visible = true,
    .named = true,
  },
  [sym_explsyntaxon_token] = {
    .visible = true,
    .named = true,
  },
  [sym_explsyntaxoff] = {
    .visible = true,
    .named = true,
  },
  [sym_explsyntaxoff_token] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_glue_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_glue_token] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension_token] = {
    .visible = true,
    .named = true,
  },
  [sym_glue_space] = {
    .visible = true,
    .named = true,
  },
  [sym_glue_space_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makebox] = {
    .visible = true,
    .named = true,
  },
  [sym_strut] = {
    .visible = true,
    .named = true,
  },
  [sym_strut_token] = {
    .visible = true,
    .named = true,
  },
  [sym_phantom_smash] = {
    .visible = true,
    .named = true,
  },
  [sym_phantom_smash_token] = {
    .visible = true,
    .named = true,
  },
  [sym_makebox_token] = {
    .visible = true,
    .named = true,
  },
  [sym_usebox] = {
    .visible = true,
    .named = true,
  },
  [sym_usebox_token] = {
    .visible = true,
    .named = true,
  },
  [sym_movebox] = {
    .visible = true,
    .named = true,
  },
  [sym_movebox_token] = {
    .visible = true,
    .named = true,
  },
  [sym__box] = {
    .visible = false,
    .named = true,
  },
  [sym_setbox] = {
    .visible = true,
    .named = true,
  },
  [sym_setbox_token] = {
    .visible = true,
    .named = true,
  },
  [sym_box_dimension_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_box_dimension_token] = {
    .visible = true,
    .named = true,
  },
  [sym_glue] = {
    .visible = true,
    .named = true,
  },
  [sym_box_dimension_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_href] = {
    .visible = true,
    .named = true,
  },
  [sym_href_token] = {
    .visible = true,
    .named = true,
  },
  [sym_url] = {
    .visible = true,
    .named = true,
  },
  [sym_url_token] = {
    .visible = true,
    .named = true,
  },
  [sym_hyperbaseurl] = {
    .visible = true,
    .named = true,
  },
  [sym_hyperbaseurl_token] = {
    .visible = true,
    .named = true,
  },
  [sym_hyperimage] = {
    .visible = true,
    .named = true,
  },
  [sym_hyperimage_token] = {
    .visible = true,
    .named = true,
  },
  [sym_hyperref] = {
    .visible = true,
    .named = true,
  },
  [sym_hyperref_token] = {
    .visible = true,
    .named = true,
  },
  [sym_text_group] = {
    .visible = true,
    .named = true,
  },
  [sym_name_group] = {
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
  [sym_math_text_group] = {
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_token] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
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
  [aux_sym_parameter_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verbatim_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_token_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_name] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_text] = {
    .visible = true,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = anon_alias_sym_text,
  },
  [2] = {
    [1] = anon_alias_sym_name,
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
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      ADVANCE(2);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'e')
        ADVANCE(122);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'g')
        ADVANCE(147);
      if (lookahead == 'h')
        ADVANCE(148);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'k')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'n')
        ADVANCE(254);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(281);
      if (lookahead == 'r')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(326);
      if (lookahead == 't')
        ADVANCE(357);
      if (lookahead == 'u')
        ADVANCE(370);
      if (lookahead == 'v')
        ADVANCE(385);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'b')
        ADVANCE(12);
      if (lookahead == 'd')
        ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'o')
        ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'v')
        ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'e')
        ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'd')
        ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'i')
        ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 's')
        ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'p')
        ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'l')
        ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'a')
        ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'y')
        ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 's')
        ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'h')
        ADVANCE(24);
      if (lookahead == 'k')
        ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'o')
        ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'r')
        ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 't')
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == 's')
        ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'k')
        ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'i')
        ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'p')
        ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH);
      END_STATE();
    case 32:
      if (lookahead == 'd')
        ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'c')
        ADVANCE(34);
      if (lookahead == 'p')
        ADVANCE(38);
      if (lookahead == 's')
        ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 'h')
        ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'a')
        ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'p')
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH);
      END_STATE();
    case 38:
      if (lookahead == 'a')
        ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'r')
        ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 41:
      if (lookahead == 'e')
        ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'c')
        ADVANCE(37);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'e')
        ADVANCE(50);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'o')
        ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 's')
        ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'e')
        ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == 'l')
        ADVANCE(47);
      END_STATE();
    case 47:
      if (lookahead == 'i')
        ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'n')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'e')
        ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'g')
        ADVANCE(51);
      if (lookahead == 'l')
        ADVANCE(54);
      END_STATE();
    case 51:
      if (lookahead == 'i')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'n')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 54:
      if (lookahead == 'o')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'w')
        ADVANCE(15);
      END_STATE();
    case 56:
      if (lookahead == 'g')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 's')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'k')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'i')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'p')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'a')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'm')
        ADVANCE(63);
      END_STATE();
    case 63:
      if (lookahead == 'o')
        ADVANCE(64);
      END_STATE();
    case 64:
      if (lookahead == 'u')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'n')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 't')
        ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'x')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH);
      if (lookahead == 'm')
        ADVANCE(69);
      END_STATE();
    case 69:
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 70:
      if (lookahead == 'x')
        ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'd')
        ADVANCE(72);
      END_STATE();
    case 72:
      if (lookahead == 'e')
        ADVANCE(73);
      END_STATE();
    case 73:
      if (lookahead == 'p')
        ADVANCE(74);
      END_STATE();
    case 74:
      if (lookahead == 't')
        ADVANCE(75);
      END_STATE();
    case 75:
      if (lookahead == 'h')
        ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'h')
        ADVANCE(85);
      if (lookahead == 'o')
        ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 't')
        ADVANCE(79);
      END_STATE();
    case 79:
      if (lookahead == 'c')
        ADVANCE(80);
      END_STATE();
    case 80:
      if (lookahead == 'o')
        ADVANCE(81);
      END_STATE();
    case 81:
      if (lookahead == 'd')
        ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == 'e')
        ADVANCE(83);
      END_STATE();
    case 83:
      if (lookahead == '`')
        ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH);
      END_STATE();
    case 85:
      if (lookahead == 'a')
        ADVANCE(86);
      END_STATE();
    case 86:
      if (lookahead == 'p')
        ADVANCE(87);
      END_STATE();
    case 87:
      if (lookahead == 't')
        ADVANCE(88);
      END_STATE();
    case 88:
      if (lookahead == 'e')
        ADVANCE(89);
      END_STATE();
    case 89:
      if (lookahead == 'r')
        ADVANCE(37);
      END_STATE();
    case 90:
      if (lookahead == 'p')
        ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'y')
        ADVANCE(92);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'o')
        ADVANCE(109);
      if (lookahead == 'p')
        ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == 'f')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH);
      END_STATE();
    case 96:
      if (lookahead == 's')
        ADVANCE(97);
      END_STATE();
    case 97:
      if (lookahead == 'p')
        ADVANCE(98);
      END_STATE();
    case 98:
      if (lookahead == 'l')
        ADVANCE(99);
      END_STATE();
    case 99:
      if (lookahead == 'a')
        ADVANCE(100);
      END_STATE();
    case 100:
      if (lookahead == 'y')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'i')
        ADVANCE(102);
      if (lookahead == 'w')
        ADVANCE(107);
      END_STATE();
    case 102:
      if (lookahead == 'n')
        ADVANCE(103);
      END_STATE();
    case 103:
      if (lookahead == 'd')
        ADVANCE(104);
      END_STATE();
    case 104:
      if (lookahead == 'e')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'n')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 't')
        ADVANCE(76);
      END_STATE();
    case 107:
      if (lookahead == 'i')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'd')
        ADVANCE(74);
      END_STATE();
    case 109:
      if (lookahead == 'c')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'u')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'm')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'e')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 'n')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 't')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'c')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'a')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 's')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 's')
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_documentclass);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(124);
      END_STATE();
    case 123:
      if (lookahead == 'e')
        ADVANCE(94);
      END_STATE();
    case 124:
      if (lookahead == 'e')
        ADVANCE(125);
      if (lookahead == 'p')
        ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 126:
      if (lookahead == 'g')
        ADVANCE(127);
      END_STATE();
    case 127:
      if (lookahead == 'e')
        ADVANCE(128);
      END_STATE();
    case 128:
      if (lookahead == 'n')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'c')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'y')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 's')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'r')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(135);
      END_STATE();
    case 135:
      if (lookahead == 't')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'c')
        ADVANCE(75);
      END_STATE();
    case 137:
      if (lookahead == 'h')
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_emph);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'o')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 'o')
        ADVANCE(141);
      END_STATE();
    case 141:
      if (lookahead == 't')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'n')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'o')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 't')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_footnote);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(123);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'g')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 'r')
        ADVANCE(178);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(121);
      if (lookahead == 'y')
        ADVANCE(186);
      END_STATE();
    case 149:
      if (lookahead == 'n')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'g')
        ADVANCE(151);
      END_STATE();
    case 151:
      if (lookahead == 'i')
        ADVANCE(102);
      END_STATE();
    case 152:
      if (lookahead == 'a')
        ADVANCE(153);
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 153:
      if (lookahead == 'd')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'n')
        ADVANCE(155);
      END_STATE();
    case 155:
      if (lookahead == 'e')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 's')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 's')
        ADVANCE(76);
      END_STATE();
    case 158:
      if (lookahead == 'x')
        ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH);
      END_STATE();
    case 160:
      if (lookahead == 'u')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'z')
        ADVANCE(162);
      END_STATE();
    case 162:
      if (lookahead == 'z')
        ADVANCE(76);
      END_STATE();
    case 163:
      if (lookahead == 'l')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH);
      END_STATE();
    case 167:
      if (lookahead == 'f')
        ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == 'f')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 's')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'e')
        ADVANCE(106);
      END_STATE();
    case 171:
      if (lookahead == 'h')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 'a')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 'n')
        ADVANCE(174);
      END_STATE();
    case 174:
      if (lookahead == 't')
        ADVANCE(175);
      END_STATE();
    case 175:
      if (lookahead == 'o')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'm')
        ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH);
      END_STATE();
    case 178:
      if (lookahead == 'e')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'f')
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_href);
      END_STATE();
    case 181:
      if (lookahead == 'i')
        ADVANCE(182);
      if (lookahead == 'k')
        ADVANCE(184);
      END_STATE();
    case 182:
      if (lookahead == 'z')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'e')
        ADVANCE(76);
      END_STATE();
    case 184:
      if (lookahead == 'i')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'p')
        ADVANCE(166);
      END_STATE();
    case 186:
      if (lookahead == 'p')
        ADVANCE(187);
      END_STATE();
    case 187:
      if (lookahead == 'e')
        ADVANCE(188);
      END_STATE();
    case 188:
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'b')
        ADVANCE(190);
      if (lookahead == 'i')
        ADVANCE(197);
      if (lookahead == 'r')
        ADVANCE(202);
      END_STATE();
    case 190:
      if (lookahead == 'a')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 's')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'e')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'u')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 'r')
        ADVANCE(195);
      END_STATE();
    case 195:
      if (lookahead == 'l')
        ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_hyperbaseurl);
      END_STATE();
    case 197:
      if (lookahead == 'm')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'a')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'g')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'e')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_hyperimage);
      END_STATE();
    case 202:
      if (lookahead == 'e')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 'f')
        ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_hyperref);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'n')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 'c')
        ADVANCE(207);
      if (lookahead == 'p')
        ADVANCE(212);
      END_STATE();
    case 207:
      if (lookahead == 'l')
        ADVANCE(208);
      END_STATE();
    case 208:
      if (lookahead == 'u')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 'd')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'e')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASHinclude_PIPEinput_SLASH);
      END_STATE();
    case 212:
      if (lookahead == 'u')
        ADVANCE(213);
      END_STATE();
    case 213:
      if (lookahead == 't')
        ADVANCE(211);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'c')
        ADVANCE(215);
      END_STATE();
    case 215:
      if (lookahead == 'a')
        ADVANCE(78);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(217);
      if (lookahead == 'i')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(228);
      END_STATE();
    case 217:
      if (lookahead == 'f')
        ADVANCE(26);
      END_STATE();
    case 218:
      if (lookahead == 'n')
        ADVANCE(219);
      END_STATE();
    case 219:
      if (lookahead == 'e')
        ADVANCE(220);
      END_STATE();
    case 220:
      if (lookahead == 's')
        ADVANCE(221);
      END_STATE();
    case 221:
      if (lookahead == 'k')
        ADVANCE(222);
      END_STATE();
    case 222:
      if (lookahead == 'i')
        ADVANCE(223);
      END_STATE();
    case 223:
      if (lookahead == 'p')
        ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH);
      if (lookahead == 'l')
        ADVANCE(225);
      END_STATE();
    case 225:
      if (lookahead == 'i')
        ADVANCE(226);
      END_STATE();
    case 226:
      if (lookahead == 'm')
        ADVANCE(227);
      END_STATE();
    case 227:
      if (lookahead == 'i')
        ADVANCE(106);
      END_STATE();
    case 228:
      if (lookahead == 'w')
        ADVANCE(229);
      END_STATE();
    case 229:
      if (lookahead == 'e')
        ADVANCE(230);
      END_STATE();
    case 230:
      if (lookahead == 'r')
        ADVANCE(231);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(241);
      if (lookahead == 'o')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(253);
      END_STATE();
    case 233:
      if (lookahead == 't')
        ADVANCE(234);
      if (lookahead == 'x')
        ADVANCE(71);
      END_STATE();
    case 234:
      if (lookahead == 'h')
        ADVANCE(235);
      END_STATE();
    case 235:
      if (lookahead == 's')
        ADVANCE(236);
      END_STATE();
    case 236:
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 237:
      if (lookahead == 'r')
        ADVANCE(238);
      END_STATE();
    case 238:
      if (lookahead == 'u')
        ADVANCE(239);
      END_STATE();
    case 239:
      if (lookahead == 't')
        ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH);
      END_STATE();
    case 241:
      if (lookahead == 'd')
        ADVANCE(57);
      if (lookahead == 'n')
        ADVANCE(242);
      END_STATE();
    case 242:
      if (lookahead == 'i')
        ADVANCE(243);
      END_STATE();
    case 243:
      if (lookahead == 's')
        ADVANCE(41);
      END_STATE();
    case 244:
      if (lookahead == 'v')
        ADVANCE(245);
      END_STATE();
    case 245:
      if (lookahead == 'e')
        ADVANCE(246);
      END_STATE();
    case 246:
      if (lookahead == 'l')
        ADVANCE(247);
      if (lookahead == 'r')
        ADVANCE(250);
      END_STATE();
    case 247:
      if (lookahead == 'e')
        ADVANCE(248);
      END_STATE();
    case 248:
      if (lookahead == 'f')
        ADVANCE(249);
      END_STATE();
    case 249:
      if (lookahead == 't')
        ADVANCE(231);
      END_STATE();
    case 250:
      if (lookahead == 'i')
        ADVANCE(251);
      END_STATE();
    case 251:
      if (lookahead == 'g')
        ADVANCE(252);
      END_STATE();
    case 252:
      if (lookahead == 'h')
        ADVANCE(249);
      END_STATE();
    case 253:
      if (lookahead == 'k')
        ADVANCE(184);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'o')
        ADVANCE(255);
      if (lookahead == 'u')
        ADVANCE(269);
      END_STATE();
    case 255:
      if (lookahead == 'l')
        ADVANCE(256);
      if (lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 256:
      if (lookahead == 'i')
        ADVANCE(257);
      END_STATE();
    case 257:
      if (lookahead == 'n')
        ADVANCE(258);
      END_STATE();
    case 258:
      if (lookahead == 'k')
        ADVANCE(259);
      END_STATE();
    case 259:
      if (lookahead == 'u')
        ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead == 'r')
        ADVANCE(261);
      END_STATE();
    case 261:
      if (lookahead == 'l')
        ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH);
      END_STATE();
    case 263:
      if (lookahead == 'm')
        ADVANCE(264);
      END_STATE();
    case 264:
      if (lookahead == 'a')
        ADVANCE(265);
      END_STATE();
    case 265:
      if (lookahead == 'l')
        ADVANCE(266);
      END_STATE();
    case 266:
      if (lookahead == 'b')
        ADVANCE(267);
      if (lookahead == 'l')
        ADVANCE(268);
      END_STATE();
    case 267:
      if (lookahead == 'a')
        ADVANCE(44);
      END_STATE();
    case 268:
      if (lookahead == 'i')
        ADVANCE(218);
      END_STATE();
    case 269:
      if (lookahead == 'l')
        ADVANCE(270);
      END_STATE();
    case 270:
      if (lookahead == 'l')
        ADVANCE(240);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'v')
        ADVANCE(272);
      END_STATE();
    case 272:
      if (lookahead == 'e')
        ADVANCE(273);
      END_STATE();
    case 273:
      if (lookahead == 'r')
        ADVANCE(274);
      END_STATE();
    case 274:
      if (lookahead == 'f')
        ADVANCE(275);
      END_STATE();
    case 275:
      if (lookahead == 'u')
        ADVANCE(276);
      END_STATE();
    case 276:
      if (lookahead == 'l')
        ADVANCE(277);
      END_STATE();
    case 277:
      if (lookahead == 'l')
        ADVANCE(278);
      END_STATE();
    case 278:
      if (lookahead == 'r')
        ADVANCE(279);
      END_STATE();
    case 279:
      if (lookahead == 'u')
        ADVANCE(280);
      END_STATE();
    case 280:
      if (lookahead == 'l')
        ADVANCE(183);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(282);
      if (lookahead == 'h')
        ADVANCE(172);
      if (lookahead == 'r')
        ADVANCE(310);
      END_STATE();
    case 282:
      if (lookahead == 'g')
        ADVANCE(283);
      if (lookahead == 'r')
        ADVANCE(301);
      END_STATE();
    case 283:
      if (lookahead == 'e')
        ADVANCE(284);
      END_STATE();
    case 284:
      if (lookahead == 'd')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(285);
      if (lookahead == 'g')
        ADVANCE(291);
      if (lookahead == 's')
        ADVANCE(294);
      if (lookahead == 't')
        ADVANCE(299);
      END_STATE();
    case 285:
      if (lookahead == 'i')
        ADVANCE(286);
      END_STATE();
    case 286:
      if (lookahead == 'l')
        ADVANCE(287);
      END_STATE();
    case 287:
      if (lookahead == '{')
        ADVANCE(288);
      END_STATE();
    case 288:
      if (lookahead == '1')
        ADVANCE(289);
      END_STATE();
    case 289:
      if (lookahead == ',')
        ADVANCE(290);
      END_STATE();
    case 290:
      if (lookahead == '3')
        ADVANCE(131);
      END_STATE();
    case 291:
      if (lookahead == 'o')
        ADVANCE(292);
      END_STATE();
    case 292:
      if (lookahead == 'a')
        ADVANCE(293);
      END_STATE();
    case 293:
      if (lookahead == 'l')
        ADVANCE(76);
      END_STATE();
    case 294:
      if (lookahead == 'h')
        ADVANCE(295);
      END_STATE();
    case 295:
      if (lookahead == 'r')
        ADVANCE(296);
      END_STATE();
    case 296:
      if (lookahead == 'i')
        ADVANCE(297);
      END_STATE();
    case 297:
      if (lookahead == 'n')
        ADVANCE(298);
      END_STATE();
    case 298:
      if (lookahead == 'k')
        ADVANCE(76);
      END_STATE();
    case 299:
      if (lookahead == 'o')
        ADVANCE(300);
      END_STATE();
    case 300:
      if (lookahead == 't')
        ADVANCE(292);
      END_STATE();
    case 301:
      if (lookahead == 'a')
        ADVANCE(302);
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'i')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(37);
      END_STATE();
    case 302:
      if (lookahead == 'g')
        ADVANCE(303);
      END_STATE();
    case 303:
      if (lookahead == 'r')
        ADVANCE(304);
      END_STATE();
    case 304:
      if (lookahead == 'a')
        ADVANCE(305);
      END_STATE();
    case 305:
      if (lookahead == 'p')
        ADVANCE(306);
      END_STATE();
    case 306:
      if (lookahead == 'h')
        ADVANCE(37);
      END_STATE();
    case 307:
      if (lookahead == 'i')
        ADVANCE(308);
      END_STATE();
    case 308:
      if (lookahead == 'l')
        ADVANCE(309);
      END_STATE();
    case 309:
      if (lookahead == 'l')
        ADVANCE(27);
      END_STATE();
    case 310:
      if (lookahead == 'e')
        ADVANCE(311);
      END_STATE();
    case 311:
      if (lookahead == 'd')
        ADVANCE(312);
      if (lookahead == 'v')
        ADVANCE(71);
      END_STATE();
    case 312:
      if (lookahead == 'i')
        ADVANCE(313);
      END_STATE();
    case 313:
      if (lookahead == 's')
        ADVANCE(314);
      END_STATE();
    case 314:
      if (lookahead == 'p')
        ADVANCE(315);
      END_STATE();
    case 315:
      if (lookahead == 'l')
        ADVANCE(316);
      END_STATE();
    case 316:
      if (lookahead == 'a')
        ADVANCE(317);
      END_STATE();
    case 317:
      if (lookahead == 'y')
        ADVANCE(318);
      END_STATE();
    case 318:
      if (lookahead == 's')
        ADVANCE(319);
      END_STATE();
    case 319:
      if (lookahead == 'i')
        ADVANCE(182);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(321);
      if (lookahead == 'i')
        ADVANCE(324);
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
      if (lookahead == 'e')
        ADVANCE(231);
      END_STATE();
    case 324:
      if (lookahead == 'g')
        ADVANCE(325);
      END_STATE();
    case 325:
      if (lookahead == 'h')
        ADVANCE(26);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(327);
      if (lookahead == 'm')
        ADVANCE(336);
      if (lookahead == 'p')
        ADVANCE(340);
      if (lookahead == 't')
        ADVANCE(237);
      if (lookahead == 'u')
        ADVANCE(347);
      END_STATE();
    case 327:
      if (lookahead == 'c')
        ADVANCE(328);
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 328:
      if (lookahead == 't')
        ADVANCE(329);
      END_STATE();
    case 329:
      if (lookahead == 'i')
        ADVANCE(330);
      END_STATE();
    case 330:
      if (lookahead == 'o')
        ADVANCE(331);
      END_STATE();
    case 331:
      if (lookahead == 'n')
        ADVANCE(37);
      END_STATE();
    case 332:
      if (lookahead == 'b')
        ADVANCE(333);
      END_STATE();
    case 333:
      if (lookahead == 'o')
        ADVANCE(334);
      END_STATE();
    case 334:
      if (lookahead == 'x')
        ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_setbox);
      END_STATE();
    case 336:
      if (lookahead == 'a')
        ADVANCE(337);
      END_STATE();
    case 337:
      if (lookahead == 'l')
        ADVANCE(338);
      if (lookahead == 's')
        ADVANCE(339);
      END_STATE();
    case 338:
      if (lookahead == 'l')
        ADVANCE(57);
      END_STATE();
    case 339:
      if (lookahead == 'h')
        ADVANCE(177);
      END_STATE();
    case 340:
      if (lookahead == 'a')
        ADVANCE(341);
      if (lookahead == 'l')
        ADVANCE(342);
      END_STATE();
    case 341:
      if (lookahead == 'c')
        ADVANCE(49);
      END_STATE();
    case 342:
      if (lookahead == 'i')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 't')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'm')
        ADVANCE(69);
      if (lookahead == 't')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'o')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'p')
        ADVANCE(27);
      END_STATE();
    case 347:
      if (lookahead == 'b')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'p')
        ADVANCE(349);
      if (lookahead == 's')
        ADVANCE(352);
      END_STATE();
    case 349:
      if (lookahead == 'a')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'r')
        ADVANCE(351);
      END_STATE();
    case 351:
      if (lookahead == 'a')
        ADVANCE(302);
      END_STATE();
    case 352:
      if (lookahead == 'e')
        ADVANCE(353);
      if (lookahead == 'u')
        ADVANCE(354);
      END_STATE();
    case 353:
      if (lookahead == 'c')
        ADVANCE(328);
      END_STATE();
    case 354:
      if (lookahead == 'b')
        ADVANCE(355);
      END_STATE();
    case 355:
      if (lookahead == 's')
        ADVANCE(356);
      END_STATE();
    case 356:
      if (lookahead == 'e')
        ADVANCE(353);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'e')
        ADVANCE(359);
      if (lookahead == 'o')
        ADVANCE(368);
      END_STATE();
    case 358:
      if (lookahead == 'b')
        ADVANCE(27);
      END_STATE();
    case 359:
      if (lookahead == 'x')
        ADVANCE(360);
      END_STATE();
    case 360:
      if (lookahead == 't')
        ADVANCE(361);
      END_STATE();
    case 361:
      if (lookahead == 'b')
        ADVANCE(362);
      if (lookahead == 'i')
        ADVANCE(364);
      if (lookahead == 't')
        ADVANCE(366);
      END_STATE();
    case 362:
      if (lookahead == 'f')
        ADVANCE(363);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_textbf);
      END_STATE();
    case 364:
      if (lookahead == 't')
        ADVANCE(365);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_textit);
      END_STATE();
    case 366:
      if (lookahead == 't')
        ADVANCE(367);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_texttt);
      END_STATE();
    case 368:
      if (lookahead == 'p')
        ADVANCE(369);
      END_STATE();
    case 369:
      if (lookahead == 'g')
        ADVANCE(163);
      if (lookahead == 's')
        ADVANCE(28);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'n')
        ADVANCE(371);
      if (lookahead == 'r')
        ADVANCE(261);
      if (lookahead == 's')
        ADVANCE(376);
      END_STATE();
    case 371:
      if (lookahead == 'h' ||
          lookahead == 'v')
        ADVANCE(372);
      END_STATE();
    case 372:
      if (lookahead == 'b')
        ADVANCE(373);
      if (lookahead == 'c')
        ADVANCE(375);
      END_STATE();
    case 373:
      if (lookahead == 'o')
        ADVANCE(374);
      END_STATE();
    case 374:
      if (lookahead == 'x')
        ADVANCE(92);
      END_STATE();
    case 375:
      if (lookahead == 'o')
        ADVANCE(90);
      END_STATE();
    case 376:
      if (lookahead == 'e')
        ADVANCE(377);
      END_STATE();
    case 377:
      if (lookahead == 'p')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'a')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'c')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'k')
        ADVANCE(381);
      END_STATE();
    case 381:
      if (lookahead == 'a')
        ADVANCE(382);
      END_STATE();
    case 382:
      if (lookahead == 'g')
        ADVANCE(383);
      END_STATE();
    case 383:
      if (lookahead == 'e')
        ADVANCE(384);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_usepackage);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'e')
        ADVANCE(386);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'g')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(389);
      END_STATE();
    case 386:
      if (lookahead == 'r')
        ADVANCE(387);
      END_STATE();
    case 387:
      if (lookahead == 'b')
        ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_verb);
      END_STATE();
    case 389:
      if (lookahead == 'o')
        ADVANCE(390);
      END_STATE();
    case 390:
      if (lookahead == 'p')
        ADVANCE(159);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(121);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 's')
        ADVANCE(393);
      END_STATE();
    case 393:
      if (lookahead == 'p')
        ADVANCE(394);
      END_STATE();
    case 394:
      if (lookahead == 'a')
        ADVANCE(341);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      END_STATE();
    case 396:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 397:
      if (lookahead == '[')
        ADVANCE(7);
      END_STATE();
    case 398:
      if (lookahead == '*')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(7);
      END_STATE();
    case 399:
      if (lookahead == '=')
        ADVANCE(6);
      if (lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(405);
      if (lookahead == 'i')
        ADVANCE(409);
      if (lookahead == 'm')
        ADVANCE(410);
      if (lookahead == 'p')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(400);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(413);
      END_STATE();
    case 400:
      if (lookahead == 'p')
        ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_unit);
      END_STATE();
    case 402:
      if (lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 'm')
        ADVANCE(401);
      END_STATE();
    case 403:
      if (lookahead == 'd')
        ADVANCE(401);
      END_STATE();
    case 404:
      if (lookahead == 'm')
        ADVANCE(401);
      if (lookahead == 'x')
        ADVANCE(401);
      END_STATE();
    case 405:
      if (lookahead == 'i')
        ADVANCE(406);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'l')
        ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'l')
        ADVANCE(408);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == 'l')
        ADVANCE(401);
      END_STATE();
    case 409:
      if (lookahead == 'n')
        ADVANCE(401);
      END_STATE();
    case 410:
      if (lookahead == 'm')
        ADVANCE(401);
      if (lookahead == 'u')
        ADVANCE(401);
      END_STATE();
    case 411:
      if (lookahead == 'c')
        ADVANCE(401);
      if (lookahead == 't')
        ADVANCE(401);
      END_STATE();
    case 412:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(414);
      END_STATE();
    case 415:
      if (lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(405);
      if (lookahead == 'i')
        ADVANCE(409);
      if (lookahead == 'm')
        ADVANCE(410);
      if (lookahead == 'p')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(400);
      if (lookahead == '+' ||
          lookahead == '-')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(413);
      END_STATE();
    case 416:
      if (lookahead == 's')
        ADVANCE(417);
      if (lookahead == 't')
        ADVANCE(423);
      END_STATE();
    case 417:
      if (lookahead == 'p')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'r')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 'e')
        ADVANCE(420);
      END_STATE();
    case 420:
      if (lookahead == 'a')
        ADVANCE(421);
      END_STATE();
    case 421:
      if (lookahead == 'd')
        ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_spread);
      END_STATE();
    case 423:
      if (lookahead == 'o')
        ADVANCE(424);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 425:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(426);
      END_STATE();
    case 427:
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 428:
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'c')
        ADVANCE(430);
      if (lookahead == 'd')
        ADVANCE(431);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'g')
        ADVANCE(147);
      if (lookahead == 'h')
        ADVANCE(434);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'k')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(435);
      if (lookahead == 'n')
        ADVANCE(437);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == 'u')
        ADVANCE(447);
      if (lookahead == 'v')
        ADVANCE(448);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'b')
        ADVANCE(12);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(78);
      if (lookahead == 'o')
        ADVANCE(90);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(94);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'p')
        ADVANCE(121);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(433);
      END_STATE();
    case 433:
      if (lookahead == 'e')
        ADVANCE(125);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'g')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(233);
      if (lookahead == 'i')
        ADVANCE(436);
      if (lookahead == 'o')
        ADVANCE(244);
      if (lookahead == 's')
        ADVANCE(253);
      END_STATE();
    case 436:
      if (lookahead == 'd')
        ADVANCE(57);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'o')
        ADVANCE(438);
      if (lookahead == 'u')
        ADVANCE(269);
      END_STATE();
    case 438:
      if (lookahead == 'r')
        ADVANCE(263);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'h')
        ADVANCE(172);
      if (lookahead == 'r')
        ADVANCE(310);
      END_STATE();
    case 440:
      if (lookahead == 'g')
        ADVANCE(283);
      if (lookahead == 'r')
        ADVANCE(441);
      END_STATE();
    case 441:
      if (lookahead == 'f')
        ADVANCE(307);
      if (lookahead == 'i')
        ADVANCE(102);
      if (lookahead == 's')
        ADVANCE(28);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(443);
      if (lookahead == 'm')
        ADVANCE(336);
      if (lookahead == 'p')
        ADVANCE(340);
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 443:
      if (lookahead == 't')
        ADVANCE(332);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(445);
      if (lookahead == 'o')
        ADVANCE(368);
      END_STATE();
    case 445:
      if (lookahead == 'b')
        ADVANCE(27);
      if (lookahead == 'g')
        ADVANCE(446);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'n')
        ADVANCE(371);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'b')
        ADVANCE(152);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'g')
        ADVANCE(163);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead == 't')
        ADVANCE(389);
      END_STATE();
    case 449:
      if (lookahead == ')')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'c')
        ADVANCE(430);
      if (lookahead == 'd')
        ADVANCE(431);
      if (lookahead == 'e')
        ADVANCE(432);
      if (lookahead == 'g')
        ADVANCE(147);
      if (lookahead == 'h')
        ADVANCE(434);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'k')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(435);
      if (lookahead == 'n')
        ADVANCE(437);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == 'u')
        ADVANCE(447);
      if (lookahead == 'v')
        ADVANCE(448);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 450:
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'c')
        ADVANCE(430);
      if (lookahead == 'd')
        ADVANCE(431);
      if (lookahead == 'e')
        ADVANCE(451);
      if (lookahead == 'g')
        ADVANCE(147);
      if (lookahead == 'h')
        ADVANCE(434);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'k')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(435);
      if (lookahead == 'n')
        ADVANCE(437);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(439);
      if (lookahead == 'r')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 't')
        ADVANCE(444);
      if (lookahead == 'u')
        ADVANCE(447);
      if (lookahead == 'v')
        ADVANCE(448);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(433);
      if (lookahead == 'n')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'd')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 454:
      if (lookahead == 'e')
        ADVANCE(455);
      END_STATE();
    case 455:
      if (lookahead == 'n')
        ADVANCE(452);
      END_STATE();
    case 456:
      if (lookahead == '(')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == 'a')
        ADVANCE(11);
      if (lookahead == 'b')
        ADVANCE(43);
      if (lookahead == 'c')
        ADVANCE(77);
      if (lookahead == 'd')
        ADVANCE(93);
      if (lookahead == 'e')
        ADVANCE(457);
      if (lookahead == 'f')
        ADVANCE(139);
      if (lookahead == 'g')
        ADVANCE(147);
      if (lookahead == 'h')
        ADVANCE(148);
      if (lookahead == 'i')
        ADVANCE(205);
      if (lookahead == 'k')
        ADVANCE(214);
      if (lookahead == 'l')
        ADVANCE(216);
      if (lookahead == 'm')
        ADVANCE(232);
      if (lookahead == 'n')
        ADVANCE(254);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(281);
      if (lookahead == 'r')
        ADVANCE(320);
      if (lookahead == 's')
        ADVANCE(326);
      if (lookahead == 't')
        ADVANCE(357);
      if (lookahead == 'u')
        ADVANCE(370);
      if (lookahead == 'v')
        ADVANCE(385);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead == 'x')
        ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'd')
        ADVANCE(123);
      if (lookahead == 'm')
        ADVANCE(124);
      if (lookahead == 'n')
        ADVANCE(452);
      END_STATE();
    case 458:
      if (lookahead == 'V')
        ADVANCE(459);
      if (lookahead == 'a')
        ADVANCE(468);
      if (lookahead == 'd')
        ADVANCE(478);
      if (lookahead == 'e')
        ADVANCE(504);
      if (lookahead == 'f')
        ADVANCE(512);
      if (lookahead == 'g')
        ADVANCE(517);
      if (lookahead == 'l')
        ADVANCE(522);
      if (lookahead == 'm')
        ADVANCE(531);
      if (lookahead == 's')
        ADVANCE(546);
      if (lookahead == 'v')
        ADVANCE(549);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(2);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(460);
      END_STATE();
    case 460:
      if (lookahead == 'r')
        ADVANCE(461);
      END_STATE();
    case 461:
      if (lookahead == 'b')
        ADVANCE(462);
      END_STATE();
    case 462:
      if (lookahead == 'a')
        ADVANCE(463);
      END_STATE();
    case 463:
      if (lookahead == 't')
        ADVANCE(464);
      END_STATE();
    case 464:
      if (lookahead == 'i')
        ADVANCE(465);
      END_STATE();
    case 465:
      if (lookahead == 'm')
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      if (lookahead == '*')
        ADVANCE(467);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_verbatim_env_name);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'l')
        ADVANCE(469);
      END_STATE();
    case 469:
      if (lookahead == 'i')
        ADVANCE(470);
      if (lookahead == 'l')
        ADVANCE(476);
      END_STATE();
    case 470:
      if (lookahead == 'g')
        ADVANCE(471);
      END_STATE();
    case 471:
      if (lookahead == 'n')
        ADVANCE(472);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(473);
      if (lookahead == 'a')
        ADVANCE(474);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_display_math_env_name);
      END_STATE();
    case 474:
      if (lookahead == 't')
        ADVANCE(475);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_display_math_env_name);
      if (lookahead == '*')
        ADVANCE(473);
      END_STATE();
    case 476:
      if (lookahead == 't')
        ADVANCE(477);
      END_STATE();
    case 477:
      if (lookahead == 't')
        ADVANCE(467);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(479);
      if (lookahead == 'g')
        ADVANCE(483);
      if (lookahead == 'i')
        ADVANCE(487);
      if (lookahead == 'm')
        ADVANCE(496);
      if (lookahead == 's')
        ADVANCE(499);
      END_STATE();
    case 479:
      if (lookahead == 'r')
        ADVANCE(480);
      END_STATE();
    case 480:
      if (lookahead == 'r')
        ADVANCE(481);
      END_STATE();
    case 481:
      if (lookahead == 'a')
        ADVANCE(482);
      END_STATE();
    case 482:
      if (lookahead == 'y')
        ADVANCE(475);
      END_STATE();
    case 483:
      if (lookahead == 'r')
        ADVANCE(484);
      END_STATE();
    case 484:
      if (lookahead == 'o')
        ADVANCE(485);
      END_STATE();
    case 485:
      if (lookahead == 'u')
        ADVANCE(486);
      END_STATE();
    case 486:
      if (lookahead == 'p')
        ADVANCE(475);
      END_STATE();
    case 487:
      if (lookahead == 's')
        ADVANCE(488);
      END_STATE();
    case 488:
      if (lookahead == 'p')
        ADVANCE(489);
      END_STATE();
    case 489:
      if (lookahead == 'l')
        ADVANCE(490);
      END_STATE();
    case 490:
      if (lookahead == 'a')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'y')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'm')
        ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == 'a')
        ADVANCE(494);
      END_STATE();
    case 494:
      if (lookahead == 't')
        ADVANCE(495);
      END_STATE();
    case 495:
      if (lookahead == 'h')
        ADVANCE(473);
      END_STATE();
    case 496:
      if (lookahead == 'a')
        ADVANCE(497);
      END_STATE();
    case 497:
      if (lookahead == 't')
        ADVANCE(498);
      END_STATE();
    case 498:
      if (lookahead == 'h')
        ADVANCE(475);
      END_STATE();
    case 499:
      if (lookahead == 'e')
        ADVANCE(500);
      END_STATE();
    case 500:
      if (lookahead == 'r')
        ADVANCE(501);
      END_STATE();
    case 501:
      if (lookahead == 'i')
        ADVANCE(502);
      END_STATE();
    case 502:
      if (lookahead == 'e')
        ADVANCE(503);
      END_STATE();
    case 503:
      if (lookahead == 's')
        ADVANCE(475);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'q')
        ADVANCE(505);
      END_STATE();
    case 505:
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead == 'u')
        ADVANCE(507);
      END_STATE();
    case 506:
      if (lookahead == 'a')
        ADVANCE(479);
      END_STATE();
    case 507:
      if (lookahead == 'a')
        ADVANCE(508);
      END_STATE();
    case 508:
      if (lookahead == 't')
        ADVANCE(509);
      END_STATE();
    case 509:
      if (lookahead == 'i')
        ADVANCE(510);
      END_STATE();
    case 510:
      if (lookahead == 'o')
        ADVANCE(511);
      END_STATE();
    case 511:
      if (lookahead == 'n')
        ADVANCE(475);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'l')
        ADVANCE(513);
      END_STATE();
    case 513:
      if (lookahead == 'a')
        ADVANCE(514);
      END_STATE();
    case 514:
      if (lookahead == 'l')
        ADVANCE(515);
      END_STATE();
    case 515:
      if (lookahead == 'i')
        ADVANCE(516);
      END_STATE();
    case 516:
      if (lookahead == 'g')
        ADVANCE(511);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(518);
      END_STATE();
    case 518:
      if (lookahead == 't')
        ADVANCE(519);
      END_STATE();
    case 519:
      if (lookahead == 'h')
        ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == 'e')
        ADVANCE(521);
      END_STATE();
    case 521:
      if (lookahead == 'r')
        ADVANCE(475);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 's')
        ADVANCE(523);
      END_STATE();
    case 523:
      if (lookahead == 't')
        ADVANCE(524);
      END_STATE();
    case 524:
      if (lookahead == 'l')
        ADVANCE(525);
      END_STATE();
    case 525:
      if (lookahead == 'i')
        ADVANCE(526);
      END_STATE();
    case 526:
      if (lookahead == 's')
        ADVANCE(527);
      END_STATE();
    case 527:
      if (lookahead == 't')
        ADVANCE(528);
      END_STATE();
    case 528:
      if (lookahead == 'i')
        ADVANCE(529);
      END_STATE();
    case 529:
      if (lookahead == 'n')
        ADVANCE(530);
      END_STATE();
    case 530:
      if (lookahead == 'g')
        ADVANCE(467);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'a')
        ADVANCE(532);
      if (lookahead == 'i')
        ADVANCE(535);
      if (lookahead == 'u')
        ADVANCE(539);
      END_STATE();
    case 532:
      if (lookahead == 't')
        ADVANCE(533);
      END_STATE();
    case 533:
      if (lookahead == 'h')
        ADVANCE(534);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_inline_math_env_name);
      END_STATE();
    case 535:
      if (lookahead == 'n')
        ADVANCE(536);
      END_STATE();
    case 536:
      if (lookahead == 't')
        ADVANCE(537);
      END_STATE();
    case 537:
      if (lookahead == 'e')
        ADVANCE(538);
      END_STATE();
    case 538:
      if (lookahead == 'd')
        ADVANCE(467);
      END_STATE();
    case 539:
      if (lookahead == 'l')
        ADVANCE(540);
      END_STATE();
    case 540:
      if (lookahead == 't')
        ADVANCE(541);
      END_STATE();
    case 541:
      if (lookahead == 'i')
        ADVANCE(542);
      END_STATE();
    case 542:
      if (lookahead == 'l')
        ADVANCE(543);
      END_STATE();
    case 543:
      if (lookahead == 'i')
        ADVANCE(544);
      END_STATE();
    case 544:
      if (lookahead == 'n')
        ADVANCE(545);
      END_STATE();
    case 545:
      if (lookahead == 'e')
        ADVANCE(475);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'p')
        ADVANCE(547);
      END_STATE();
    case 547:
      if (lookahead == 'l')
        ADVANCE(548);
      END_STATE();
    case 548:
      if (lookahead == 'i')
        ADVANCE(474);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'e')
        ADVANCE(550);
      END_STATE();
    case 550:
      if (lookahead == 'r')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'b')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'a')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 't')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'i')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'm')
        ADVANCE(467);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'V')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'e')
        ADVANCE(460);
      END_STATE();
    case 558:
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(2);
      END_STATE();
    case 559:
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 560:
      if (lookahead == 'a')
        ADVANCE(429);
      if (lookahead == 'b')
        ADVANCE(561);
      if (lookahead == 'd')
        ADVANCE(565);
      if (lookahead == 'e')
        ADVANCE(566);
      if (lookahead == 'h')
        ADVANCE(567);
      if (lookahead == 'l')
        ADVANCE(569);
      if (lookahead == 'm')
        ADVANCE(570);
      if (lookahead == 'n')
        ADVANCE(571);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(572);
      if (lookahead == 'r')
        ADVANCE(573);
      if (lookahead == 's')
        ADVANCE(574);
      if (lookahead == 't')
        ADVANCE(577);
      if (lookahead == 'v')
        ADVANCE(578);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead == 'x')
        ADVANCE(579);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(44);
      if (lookahead == 'e')
        ADVANCE(562);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'o')
        ADVANCE(563);
      END_STATE();
    case 562:
      if (lookahead == 'l')
        ADVANCE(54);
      END_STATE();
    case 563:
      if (lookahead == 'x')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'm')
        ADVANCE(69);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'i')
        ADVANCE(96);
      if (lookahead == 'p')
        ADVANCE(121);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'm')
        ADVANCE(433);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(149);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == 's')
        ADVANCE(319);
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 568:
      if (lookahead == 'a')
        ADVANCE(153);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'e')
        ADVANCE(217);
      if (lookahead == 'i')
        ADVANCE(218);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(70);
      if (lookahead == 'i')
        ADVANCE(436);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'o')
        ADVANCE(438);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(440);
      if (lookahead == 'r')
        ADVANCE(310);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'i')
        ADVANCE(324);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'm')
        ADVANCE(575);
      if (lookahead == 'p')
        ADVANCE(340);
      END_STATE();
    case 575:
      if (lookahead == 'a')
        ADVANCE(576);
      END_STATE();
    case 576:
      if (lookahead == 'l')
        ADVANCE(338);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead == 'o')
        ADVANCE(346);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'b')
        ADVANCE(568);
      if (lookahead == 'f')
        ADVANCE(160);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == 's')
        ADVANCE(319);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 's')
        ADVANCE(393);
      END_STATE();
    case 580:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == 'm')
        ADVANCE(581);
      if (lookahead == 'p')
        ADVANCE(586);
      ADVANCE(2);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'i')
        ADVANCE(582);
      END_STATE();
    case 582:
      if (lookahead == 'n')
        ADVANCE(583);
      END_STATE();
    case 583:
      if (lookahead == 'u')
        ADVANCE(584);
      END_STATE();
    case 584:
      if (lookahead == 's')
        ADVANCE(585);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_minus);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH);
      if (lookahead == 'l')
        ADVANCE(587);
      END_STATE();
    case 587:
      if (lookahead == 'u')
        ADVANCE(588);
      END_STATE();
    case 588:
      if (lookahead == 's')
        ADVANCE(589);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_plus);
      END_STATE();
    case 590:
      if (lookahead == 'b')
        ADVANCE(400);
      if (lookahead == 'c')
        ADVANCE(402);
      if (lookahead == 'd')
        ADVANCE(403);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead == 'f')
        ADVANCE(405);
      if (lookahead == 'i')
        ADVANCE(409);
      if (lookahead == 'm')
        ADVANCE(410);
      if (lookahead == 'p')
        ADVANCE(411);
      if (lookahead == 's')
        ADVANCE(400);
      END_STATE();
    case 591:
      if (lookahead == 'b')
        ADVANCE(592);
      if (lookahead == 'd')
        ADVANCE(565);
      if (lookahead == 'e')
        ADVANCE(566);
      if (lookahead == 'h')
        ADVANCE(567);
      if (lookahead == 'l')
        ADVANCE(593);
      if (lookahead == 'm')
        ADVANCE(601);
      if (lookahead == 'n')
        ADVANCE(602);
      if (lookahead == 'o')
        ADVANCE(271);
      if (lookahead == 'p')
        ADVANCE(609);
      if (lookahead == 's')
        ADVANCE(611);
      if (lookahead == 'v')
        ADVANCE(578);
      if (lookahead == 'w')
        ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(395);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'o')
        ADVANCE(563);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'i')
        ADVANCE(594);
      END_STATE();
    case 594:
      if (lookahead == 'n')
        ADVANCE(595);
      END_STATE();
    case 595:
      if (lookahead == 'e')
        ADVANCE(596);
      END_STATE();
    case 596:
      if (lookahead == 's')
        ADVANCE(597);
      END_STATE();
    case 597:
      if (lookahead == 'k')
        ADVANCE(598);
      END_STATE();
    case 598:
      if (lookahead == 'i')
        ADVANCE(599);
      END_STATE();
    case 599:
      if (lookahead == 'p')
        ADVANCE(600);
      END_STATE();
    case 600:
      if (lookahead == 'l')
        ADVANCE(225);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(70);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'o')
        ADVANCE(603);
      END_STATE();
    case 603:
      if (lookahead == 'r')
        ADVANCE(604);
      END_STATE();
    case 604:
      if (lookahead == 'm')
        ADVANCE(605);
      END_STATE();
    case 605:
      if (lookahead == 'a')
        ADVANCE(606);
      END_STATE();
    case 606:
      if (lookahead == 'l')
        ADVANCE(607);
      END_STATE();
    case 607:
      if (lookahead == 'l')
        ADVANCE(608);
      END_STATE();
    case 608:
      if (lookahead == 'i')
        ADVANCE(594);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'a')
        ADVANCE(610);
      if (lookahead == 'r')
        ADVANCE(310);
      END_STATE();
    case 610:
      if (lookahead == 'g')
        ADVANCE(283);
      if (lookahead == 'r')
        ADVANCE(151);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_SLASH_DOT_SLASH);
      if (lookahead == 'p')
        ADVANCE(612);
      END_STATE();
    case 612:
      if (lookahead == 'l')
        ADVANCE(613);
      END_STATE();
    case 613:
      if (lookahead == 'i')
        ADVANCE(614);
      END_STATE();
    case 614:
      if (lookahead == 't')
        ADVANCE(564);
      END_STATE();
    case 615:
      if (lookahead == ']')
        ADVANCE(8);
      END_STATE();
    case 616:
      if (lookahead == ')')
        ADVANCE(4);
      END_STATE();
    case 617:
      if (lookahead == 'm')
        ADVANCE(618);
      END_STATE();
    case 618:
      if (lookahead == 'a')
        ADVANCE(532);
      END_STATE();
    case 619:
      if (lookahead == 'V')
        ADVANCE(557);
      if (lookahead == 'a')
        ADVANCE(620);
      if (lookahead == 'l')
        ADVANCE(622);
      if (lookahead == 'm')
        ADVANCE(623);
      if (lookahead == 'v')
        ADVANCE(624);
      if (lookahead == 'B' ||
          lookahead == 'L')
        ADVANCE(625);
      END_STATE();
    case 620:
      if (lookahead == 'l')
        ADVANCE(621);
      END_STATE();
    case 621:
      if (lookahead == 'l')
        ADVANCE(476);
      END_STATE();
    case 622:
      if (lookahead == 's')
        ADVANCE(523);
      END_STATE();
    case 623:
      if (lookahead == 'i')
        ADVANCE(535);
      END_STATE();
    case 624:
      if (lookahead == 'e')
        ADVANCE(550);
      END_STATE();
    case 625:
      if (lookahead == 'V')
        ADVANCE(557);
      END_STATE();
    case 626:
      if (lookahead == 'b')
        ADVANCE(373);
      if (lookahead == 'c')
        ADVANCE(375);
      if (lookahead == 'h')
        ADVANCE(627);
      if (lookahead == 'l')
        ADVANCE(629);
      if (lookahead == 'm')
        ADVANCE(630);
      if (lookahead == 'n')
        ADVANCE(632);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 'r')
        ADVANCE(633);
      if (lookahead == 's')
        ADVANCE(634);
      if (lookahead == 'u')
        ADVANCE(637);
      if (lookahead == 'v')
        ADVANCE(638);
      END_STATE();
    case 627:
      if (lookahead == 'b')
        ADVANCE(628);
      if (lookahead == 'p')
        ADVANCE(171);
      END_STATE();
    case 628:
      if (lookahead == 'o')
        ADVANCE(158);
      END_STATE();
    case 629:
      if (lookahead == 'o')
        ADVANCE(228);
      END_STATE();
    case 630:
      if (lookahead == 'a')
        ADVANCE(631);
      if (lookahead == 'o')
        ADVANCE(244);
      END_STATE();
    case 631:
      if (lookahead == 't')
        ADVANCE(234);
      END_STATE();
    case 632:
      if (lookahead == 'u')
        ADVANCE(269);
      END_STATE();
    case 633:
      if (lookahead == 'a')
        ADVANCE(321);
      END_STATE();
    case 634:
      if (lookahead == 'm')
        ADVANCE(635);
      if (lookahead == 't')
        ADVANCE(237);
      END_STATE();
    case 635:
      if (lookahead == 'a')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 's')
        ADVANCE(339);
      END_STATE();
    case 637:
      if (lookahead == 'n')
        ADVANCE(371);
      END_STATE();
    case 638:
      if (lookahead == 'b')
        ADVANCE(628);
      if (lookahead == 'p')
        ADVANCE(171);
      if (lookahead == 't')
        ADVANCE(389);
      END_STATE();
    case 639:
      if (lookahead == 'a')
        ADVANCE(640);
      if (lookahead == 'd')
        ADVANCE(642);
      if (lookahead == 'e')
        ADVANCE(643);
      if (lookahead == 'f')
        ADVANCE(644);
      if (lookahead == 'g')
        ADVANCE(645);
      if (lookahead == 'm')
        ADVANCE(646);
      if (lookahead == 's')
        ADVANCE(647);
      END_STATE();
    case 640:
      if (lookahead == 'l')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'i')
        ADVANCE(470);
      END_STATE();
    case 642:
      if (lookahead == 'a')
        ADVANCE(479);
      if (lookahead == 'g')
        ADVANCE(483);
      if (lookahead == 'i')
        ADVANCE(487);
      if (lookahead == 'm')
        ADVANCE(496);
      if (lookahead == 's')
        ADVANCE(499);
      END_STATE();
    case 643:
      if (lookahead == 'q')
        ADVANCE(505);
      END_STATE();
    case 644:
      if (lookahead == 'l')
        ADVANCE(513);
      END_STATE();
    case 645:
      if (lookahead == 'a')
        ADVANCE(518);
      END_STATE();
    case 646:
      if (lookahead == 'u')
        ADVANCE(539);
      END_STATE();
    case 647:
      if (lookahead == 'p')
        ADVANCE(547);
      END_STATE();
    case 648:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == 'm')
        ADVANCE(581);
      ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 9, .external_lex_state = 2},
  [2] = {.lex_state = 10, .external_lex_state = 3},
  [3] = {.lex_state = 9, .external_lex_state = 4},
  [4] = {.lex_state = 9, .external_lex_state = 2},
  [5] = {.lex_state = 9, .external_lex_state = 2},
  [6] = {.lex_state = 9, .external_lex_state = 2},
  [7] = {.lex_state = 9, .external_lex_state = 2},
  [8] = {.lex_state = 396, .external_lex_state = 5},
  [9] = {.lex_state = 396, .external_lex_state = 6},
  [10] = {.lex_state = 396, .external_lex_state = 5},
  [11] = {.lex_state = 9, .external_lex_state = 7},
  [12] = {.lex_state = 9, .external_lex_state = 7},
  [13] = {.lex_state = 9, .external_lex_state = 7},
  [14] = {.lex_state = 9, .external_lex_state = 7},
  [15] = {.lex_state = 396, .external_lex_state = 8},
  [16] = {.lex_state = 9, .external_lex_state = 2},
  [17] = {.lex_state = 396, .external_lex_state = 9},
  [18] = {.lex_state = 397, .external_lex_state = 9},
  [19] = {.lex_state = 397, .external_lex_state = 9},
  [20] = {.lex_state = 396, .external_lex_state = 9},
  [21] = {.lex_state = 396, .external_lex_state = 9},
  [22] = {.lex_state = 396, .external_lex_state = 9},
  [23] = {.lex_state = 396, .external_lex_state = 9},
  [24] = {.lex_state = 398, .external_lex_state = 9},
  [25] = {.lex_state = 9, .external_lex_state = 2},
  [26] = {.lex_state = 396, .external_lex_state = 10},
  [27] = {.lex_state = 396, .external_lex_state = 9},
  [28] = {.lex_state = 397, .external_lex_state = 9},
  [29] = {.lex_state = 396, .external_lex_state = 9},
  [30] = {.lex_state = 396, .external_lex_state = 9},
  [31] = {.lex_state = 396, .external_lex_state = 9},
  [32] = {.lex_state = 9, .external_lex_state = 2},
  [33] = {.lex_state = 9, .external_lex_state = 2},
  [34] = {.lex_state = 9, .external_lex_state = 2},
  [35] = {.lex_state = 9, .external_lex_state = 2},
  [36] = {.lex_state = 399, .external_lex_state = 10},
  [37] = {.lex_state = 399, .external_lex_state = 10},
  [38] = {.lex_state = 415, .external_lex_state = 10},
  [39] = {.lex_state = 9, .external_lex_state = 2},
  [40] = {.lex_state = 396, .external_lex_state = 9},
  [41] = {.lex_state = 416, .external_lex_state = 9},
  [42] = {.lex_state = 425, .external_lex_state = 5},
  [43] = {.lex_state = 415, .external_lex_state = 10},
  [44] = {.lex_state = 425, .external_lex_state = 5},
  [45] = {.lex_state = 425, .external_lex_state = 5},
  [46] = {.lex_state = 397, .external_lex_state = 9},
  [47] = {.lex_state = 396, .external_lex_state = 9},
  [48] = {.lex_state = 396, .external_lex_state = 9},
  [49] = {.lex_state = 396, .external_lex_state = 9},
  [50] = {.lex_state = 397, .external_lex_state = 9},
  [51] = {.lex_state = 9, .external_lex_state = 2},
  [52] = {.lex_state = 425, .external_lex_state = 11},
  [53] = {.lex_state = 9, .external_lex_state = 2},
  [54] = {.lex_state = 396, .external_lex_state = 12},
  [55] = {.lex_state = 396, .external_lex_state = 12},
  [56] = {.lex_state = 396, .external_lex_state = 12},
  [57] = {.lex_state = 396, .external_lex_state = 12},
  [58] = {.lex_state = 9, .external_lex_state = 2},
  [59] = {.lex_state = 396, .external_lex_state = 12},
  [60] = {.lex_state = 396, .external_lex_state = 12},
  [61] = {.lex_state = 396, .external_lex_state = 12},
  [62] = {.lex_state = 396, .external_lex_state = 12},
  [63] = {.lex_state = 9, .external_lex_state = 7},
  [64] = {.lex_state = 9, .external_lex_state = 7},
  [65] = {.lex_state = 396, .external_lex_state = 12},
  [66] = {.lex_state = 396, .external_lex_state = 12},
  [67] = {.lex_state = 396, .external_lex_state = 12},
  [68] = {.lex_state = 396, .external_lex_state = 12},
  [69] = {.lex_state = 396, .external_lex_state = 12},
  [70] = {.lex_state = 396, .external_lex_state = 12},
  [71] = {.lex_state = 396, .external_lex_state = 12},
  [72] = {.lex_state = 396, .external_lex_state = 12},
  [73] = {.lex_state = 396, .external_lex_state = 12},
  [74] = {.lex_state = 396, .external_lex_state = 12},
  [75] = {.lex_state = 396, .external_lex_state = 12},
  [76] = {.lex_state = 396, .external_lex_state = 12},
  [77] = {.lex_state = 396, .external_lex_state = 12},
  [78] = {.lex_state = 396, .external_lex_state = 12},
  [79] = {.lex_state = 396, .external_lex_state = 12},
  [80] = {.lex_state = 396, .external_lex_state = 12},
  [81] = {.lex_state = 396, .external_lex_state = 12},
  [82] = {.lex_state = 396, .external_lex_state = 12},
  [83] = {.lex_state = 396, .external_lex_state = 12},
  [84] = {.lex_state = 396, .external_lex_state = 12},
  [85] = {.lex_state = 396, .external_lex_state = 12},
  [86] = {.lex_state = 396, .external_lex_state = 12},
  [87] = {.lex_state = 396, .external_lex_state = 12},
  [88] = {.lex_state = 396, .external_lex_state = 12},
  [89] = {.lex_state = 396, .external_lex_state = 12},
  [90] = {.lex_state = 396, .external_lex_state = 12},
  [91] = {.lex_state = 396, .external_lex_state = 12},
  [92] = {.lex_state = 427, .external_lex_state = 12},
  [93] = {.lex_state = 10, .external_lex_state = 3},
  [94] = {.lex_state = 9, .external_lex_state = 4},
  [95] = {.lex_state = 9, .external_lex_state = 2},
  [96] = {.lex_state = 9, .external_lex_state = 2},
  [97] = {.lex_state = 9, .external_lex_state = 4},
  [98] = {.lex_state = 9, .external_lex_state = 4},
  [99] = {.lex_state = 9, .external_lex_state = 4},
  [100] = {.lex_state = 396, .external_lex_state = 6},
  [101] = {.lex_state = 9, .external_lex_state = 7},
  [102] = {.lex_state = 9, .external_lex_state = 7},
  [103] = {.lex_state = 9, .external_lex_state = 7},
  [104] = {.lex_state = 9, .external_lex_state = 7},
  [105] = {.lex_state = 396, .external_lex_state = 8},
  [106] = {.lex_state = 9, .external_lex_state = 2},
  [107] = {.lex_state = 397, .external_lex_state = 9},
  [108] = {.lex_state = 397, .external_lex_state = 9},
  [109] = {.lex_state = 396, .external_lex_state = 9},
  [110] = {.lex_state = 396, .external_lex_state = 9},
  [111] = {.lex_state = 396, .external_lex_state = 9},
  [112] = {.lex_state = 396, .external_lex_state = 9},
  [113] = {.lex_state = 398, .external_lex_state = 9},
  [114] = {.lex_state = 9, .external_lex_state = 4},
  [115] = {.lex_state = 396, .external_lex_state = 10},
  [116] = {.lex_state = 396, .external_lex_state = 9},
  [117] = {.lex_state = 397, .external_lex_state = 9},
  [118] = {.lex_state = 396, .external_lex_state = 9},
  [119] = {.lex_state = 396, .external_lex_state = 9},
  [120] = {.lex_state = 396, .external_lex_state = 9},
  [121] = {.lex_state = 9, .external_lex_state = 4},
  [122] = {.lex_state = 9, .external_lex_state = 4},
  [123] = {.lex_state = 9, .external_lex_state = 4},
  [124] = {.lex_state = 9, .external_lex_state = 4},
  [125] = {.lex_state = 399, .external_lex_state = 10},
  [126] = {.lex_state = 399, .external_lex_state = 10},
  [127] = {.lex_state = 415, .external_lex_state = 10},
  [128] = {.lex_state = 9, .external_lex_state = 4},
  [129] = {.lex_state = 396, .external_lex_state = 9},
  [130] = {.lex_state = 416, .external_lex_state = 9},
  [131] = {.lex_state = 425, .external_lex_state = 5},
  [132] = {.lex_state = 415, .external_lex_state = 10},
  [133] = {.lex_state = 425, .external_lex_state = 5},
  [134] = {.lex_state = 425, .external_lex_state = 5},
  [135] = {.lex_state = 397, .external_lex_state = 9},
  [136] = {.lex_state = 396, .external_lex_state = 9},
  [137] = {.lex_state = 396, .external_lex_state = 9},
  [138] = {.lex_state = 396, .external_lex_state = 9},
  [139] = {.lex_state = 397, .external_lex_state = 9},
  [140] = {.lex_state = 9, .external_lex_state = 4},
  [141] = {.lex_state = 425, .external_lex_state = 11},
  [142] = {.lex_state = 9, .external_lex_state = 4},
  [143] = {.lex_state = 428, .external_lex_state = 13},
  [144] = {.lex_state = 9, .external_lex_state = 14},
  [145] = {.lex_state = 9, .external_lex_state = 2},
  [146] = {.lex_state = 396, .external_lex_state = 15},
  [147] = {.lex_state = 396, .external_lex_state = 9},
  [148] = {.lex_state = 9, .external_lex_state = 7},
  [149] = {.lex_state = 396, .external_lex_state = 9},
  [150] = {.lex_state = 415, .external_lex_state = 10},
  [151] = {.lex_state = 425, .external_lex_state = 5},
  [152] = {.lex_state = 9, .external_lex_state = 2},
  [153] = {.lex_state = 9, .external_lex_state = 2},
  [154] = {.lex_state = 9, .external_lex_state = 2},
  [155] = {.lex_state = 396, .external_lex_state = 16},
  [156] = {.lex_state = 428, .external_lex_state = 13},
  [157] = {.lex_state = 9, .external_lex_state = 14},
  [158] = {.lex_state = 9, .external_lex_state = 7},
  [159] = {.lex_state = 9, .external_lex_state = 7},
  [160] = {.lex_state = 396, .external_lex_state = 10},
  [161] = {.lex_state = 396, .external_lex_state = 9},
  [162] = {.lex_state = 9, .external_lex_state = 7},
  [163] = {.lex_state = 396, .external_lex_state = 9},
  [164] = {.lex_state = 9, .external_lex_state = 7},
  [165] = {.lex_state = 396, .external_lex_state = 10},
  [166] = {.lex_state = 9, .external_lex_state = 7},
  [167] = {.lex_state = 9, .external_lex_state = 7},
  [168] = {.lex_state = 9, .external_lex_state = 7},
  [169] = {.lex_state = 9, .external_lex_state = 7},
  [170] = {.lex_state = 399, .external_lex_state = 10},
  [171] = {.lex_state = 399, .external_lex_state = 10},
  [172] = {.lex_state = 415, .external_lex_state = 10},
  [173] = {.lex_state = 9, .external_lex_state = 7},
  [174] = {.lex_state = 396, .external_lex_state = 9},
  [175] = {.lex_state = 416, .external_lex_state = 9},
  [176] = {.lex_state = 425, .external_lex_state = 5},
  [177] = {.lex_state = 415, .external_lex_state = 10},
  [178] = {.lex_state = 425, .external_lex_state = 5},
  [179] = {.lex_state = 425, .external_lex_state = 5},
  [180] = {.lex_state = 9, .external_lex_state = 7},
  [181] = {.lex_state = 9, .external_lex_state = 7},
  [182] = {.lex_state = 425, .external_lex_state = 11},
  [183] = {.lex_state = 9, .external_lex_state = 7},
  [184] = {.lex_state = 396, .external_lex_state = 10},
  [185] = {.lex_state = 449, .external_lex_state = 13},
  [186] = {.lex_state = 396, .external_lex_state = 10},
  [187] = {.lex_state = 9, .external_lex_state = 2},
  [188] = {.lex_state = 450, .external_lex_state = 13},
  [189] = {.lex_state = 396, .external_lex_state = 10},
  [190] = {.lex_state = 9, .external_lex_state = 2},
  [191] = {.lex_state = 396, .external_lex_state = 9},
  [192] = {.lex_state = 454, .external_lex_state = 5},
  [193] = {.lex_state = 9, .external_lex_state = 2},
  [194] = {.lex_state = 396, .external_lex_state = 10},
  [195] = {.lex_state = 396, .external_lex_state = 9},
  [196] = {.lex_state = 396, .external_lex_state = 8},
  [197] = {.lex_state = 456, .external_lex_state = 3},
  [198] = {.lex_state = 9, .external_lex_state = 2},
  [199] = {.lex_state = 396, .external_lex_state = 9},
  [200] = {.lex_state = 9, .external_lex_state = 2},
  [201] = {.lex_state = 458, .external_lex_state = 5},
  [202] = {.lex_state = 397, .external_lex_state = 17},
  [203] = {.lex_state = 9, .external_lex_state = 7},
  [204] = {.lex_state = 397, .external_lex_state = 17},
  [205] = {.lex_state = 9, .external_lex_state = 2},
  [206] = {.lex_state = 558, .external_lex_state = 5},
  [207] = {.lex_state = 9, .external_lex_state = 2},
  [208] = {.lex_state = 396, .external_lex_state = 9},
  [209] = {.lex_state = 9, .external_lex_state = 2},
  [210] = {.lex_state = 9, .external_lex_state = 2},
  [211] = {.lex_state = 396, .external_lex_state = 9},
  [212] = {.lex_state = 9, .external_lex_state = 2},
  [213] = {.lex_state = 9, .external_lex_state = 4},
  [214] = {.lex_state = 396, .external_lex_state = 9},
  [215] = {.lex_state = 396, .external_lex_state = 9},
  [216] = {.lex_state = 396, .external_lex_state = 9},
  [217] = {.lex_state = 397, .external_lex_state = 9},
  [218] = {.lex_state = 9, .external_lex_state = 2},
  [219] = {.lex_state = 396, .external_lex_state = 9},
  [220] = {.lex_state = 396, .external_lex_state = 18},
  [221] = {.lex_state = 559, .external_lex_state = 5},
  [222] = {.lex_state = 9, .external_lex_state = 2},
  [223] = {.lex_state = 9, .external_lex_state = 2},
  [224] = {.lex_state = 396, .external_lex_state = 9},
  [225] = {.lex_state = 9, .external_lex_state = 2},
  [226] = {.lex_state = 9, .external_lex_state = 2},
  [227] = {.lex_state = 9, .external_lex_state = 2},
  [228] = {.lex_state = 560, .external_lex_state = 5},
  [229] = {.lex_state = 415, .external_lex_state = 10},
  [230] = {.lex_state = 580, .external_lex_state = 2},
  [231] = {.lex_state = 590, .external_lex_state = 10},
  [232] = {.lex_state = 9, .external_lex_state = 2},
  [233] = {.lex_state = 425, .external_lex_state = 5},
  [234] = {.lex_state = 9, .external_lex_state = 2},
  [235] = {.lex_state = 580, .external_lex_state = 2},
  [236] = {.lex_state = 591, .external_lex_state = 5},
  [237] = {.lex_state = 415, .external_lex_state = 10},
  [238] = {.lex_state = 9, .external_lex_state = 2},
  [239] = {.lex_state = 590, .external_lex_state = 10},
  [240] = {.lex_state = 425, .external_lex_state = 5},
  [241] = {.lex_state = 9, .external_lex_state = 2},
  [242] = {.lex_state = 9, .external_lex_state = 2},
  [243] = {.lex_state = 9, .external_lex_state = 2},
  [244] = {.lex_state = 415, .external_lex_state = 10},
  [245] = {.lex_state = 9, .external_lex_state = 2},
  [246] = {.lex_state = 9, .external_lex_state = 2},
  [247] = {.lex_state = 591, .external_lex_state = 5},
  [248] = {.lex_state = 396, .external_lex_state = 10},
  [249] = {.lex_state = 590, .external_lex_state = 10},
  [250] = {.lex_state = 425, .external_lex_state = 5},
  [251] = {.lex_state = 396, .external_lex_state = 10},
  [252] = {.lex_state = 559, .external_lex_state = 10},
  [253] = {.lex_state = 399, .external_lex_state = 10},
  [254] = {.lex_state = 396, .external_lex_state = 9},
  [255] = {.lex_state = 396, .external_lex_state = 9},
  [256] = {.lex_state = 9, .external_lex_state = 2},
  [257] = {.lex_state = 9, .external_lex_state = 2},
  [258] = {.lex_state = 396, .external_lex_state = 9},
  [259] = {.lex_state = 9, .external_lex_state = 2},
  [260] = {.lex_state = 396, .external_lex_state = 9},
  [261] = {.lex_state = 9, .external_lex_state = 2},
  [262] = {.lex_state = 9, .external_lex_state = 2},
  [263] = {.lex_state = 425, .external_lex_state = 11},
  [264] = {.lex_state = 9, .external_lex_state = 2},
  [265] = {.lex_state = 9, .external_lex_state = 2},
  [266] = {.lex_state = 9, .external_lex_state = 2},
  [267] = {.lex_state = 9, .external_lex_state = 2},
  [268] = {.lex_state = 9, .external_lex_state = 2},
  [269] = {.lex_state = 396, .external_lex_state = 9},
  [270] = {.lex_state = 396, .external_lex_state = 9},
  [271] = {.lex_state = 396, .external_lex_state = 9},
  [272] = {.lex_state = 396, .external_lex_state = 6},
  [273] = {.lex_state = 396, .external_lex_state = 9},
  [274] = {.lex_state = 397, .external_lex_state = 9},
  [275] = {.lex_state = 397, .external_lex_state = 9},
  [276] = {.lex_state = 396, .external_lex_state = 9},
  [277] = {.lex_state = 398, .external_lex_state = 9},
  [278] = {.lex_state = 9, .external_lex_state = 2},
  [279] = {.lex_state = 396, .external_lex_state = 10},
  [280] = {.lex_state = 396, .external_lex_state = 9},
  [281] = {.lex_state = 397, .external_lex_state = 9},
  [282] = {.lex_state = 396, .external_lex_state = 9},
  [283] = {.lex_state = 396, .external_lex_state = 9},
  [284] = {.lex_state = 396, .external_lex_state = 9},
  [285] = {.lex_state = 399, .external_lex_state = 10},
  [286] = {.lex_state = 399, .external_lex_state = 10},
  [287] = {.lex_state = 415, .external_lex_state = 10},
  [288] = {.lex_state = 9, .external_lex_state = 2},
  [289] = {.lex_state = 396, .external_lex_state = 9},
  [290] = {.lex_state = 416, .external_lex_state = 9},
  [291] = {.lex_state = 425, .external_lex_state = 5},
  [292] = {.lex_state = 415, .external_lex_state = 10},
  [293] = {.lex_state = 425, .external_lex_state = 5},
  [294] = {.lex_state = 425, .external_lex_state = 5},
  [295] = {.lex_state = 397, .external_lex_state = 9},
  [296] = {.lex_state = 396, .external_lex_state = 9},
  [297] = {.lex_state = 396, .external_lex_state = 9},
  [298] = {.lex_state = 396, .external_lex_state = 9},
  [299] = {.lex_state = 397, .external_lex_state = 9},
  [300] = {.lex_state = 9, .external_lex_state = 2},
  [301] = {.lex_state = 427, .external_lex_state = 12},
  [302] = {.lex_state = 396, .external_lex_state = 12},
  [303] = {.lex_state = 396, .external_lex_state = 12},
  [304] = {.lex_state = 396, .external_lex_state = 12},
  [305] = {.lex_state = 396, .external_lex_state = 12},
  [306] = {.lex_state = 9, .external_lex_state = 4},
  [307] = {.lex_state = 396, .external_lex_state = 12},
  [308] = {.lex_state = 396, .external_lex_state = 12},
  [309] = {.lex_state = 427, .external_lex_state = 12},
  [310] = {.lex_state = 9, .external_lex_state = 4},
  [311] = {.lex_state = 9, .external_lex_state = 4},
  [312] = {.lex_state = 9, .external_lex_state = 2},
  [313] = {.lex_state = 396, .external_lex_state = 15},
  [314] = {.lex_state = 396, .external_lex_state = 16},
  [315] = {.lex_state = 396, .external_lex_state = 10},
  [316] = {.lex_state = 396, .external_lex_state = 10},
  [317] = {.lex_state = 449, .external_lex_state = 13},
  [318] = {.lex_state = 396, .external_lex_state = 10},
  [319] = {.lex_state = 9, .external_lex_state = 4},
  [320] = {.lex_state = 396, .external_lex_state = 10},
  [321] = {.lex_state = 9, .external_lex_state = 4},
  [322] = {.lex_state = 396, .external_lex_state = 9},
  [323] = {.lex_state = 9, .external_lex_state = 4},
  [324] = {.lex_state = 396, .external_lex_state = 10},
  [325] = {.lex_state = 396, .external_lex_state = 9},
  [326] = {.lex_state = 9, .external_lex_state = 4},
  [327] = {.lex_state = 396, .external_lex_state = 9},
  [328] = {.lex_state = 9, .external_lex_state = 2},
  [329] = {.lex_state = 558, .external_lex_state = 5},
  [330] = {.lex_state = 9, .external_lex_state = 4},
  [331] = {.lex_state = 396, .external_lex_state = 9},
  [332] = {.lex_state = 9, .external_lex_state = 4},
  [333] = {.lex_state = 396, .external_lex_state = 9},
  [334] = {.lex_state = 9, .external_lex_state = 4},
  [335] = {.lex_state = 396, .external_lex_state = 9},
  [336] = {.lex_state = 396, .external_lex_state = 9},
  [337] = {.lex_state = 396, .external_lex_state = 9},
  [338] = {.lex_state = 397, .external_lex_state = 9},
  [339] = {.lex_state = 9, .external_lex_state = 4},
  [340] = {.lex_state = 396, .external_lex_state = 9},
  [341] = {.lex_state = 559, .external_lex_state = 5},
  [342] = {.lex_state = 9, .external_lex_state = 4},
  [343] = {.lex_state = 9, .external_lex_state = 4},
  [344] = {.lex_state = 396, .external_lex_state = 9},
  [345] = {.lex_state = 9, .external_lex_state = 4},
  [346] = {.lex_state = 9, .external_lex_state = 4},
  [347] = {.lex_state = 9, .external_lex_state = 4},
  [348] = {.lex_state = 560, .external_lex_state = 5},
  [349] = {.lex_state = 415, .external_lex_state = 10},
  [350] = {.lex_state = 580, .external_lex_state = 4},
  [351] = {.lex_state = 590, .external_lex_state = 10},
  [352] = {.lex_state = 9, .external_lex_state = 4},
  [353] = {.lex_state = 425, .external_lex_state = 5},
  [354] = {.lex_state = 9, .external_lex_state = 4},
  [355] = {.lex_state = 580, .external_lex_state = 4},
  [356] = {.lex_state = 591, .external_lex_state = 5},
  [357] = {.lex_state = 415, .external_lex_state = 10},
  [358] = {.lex_state = 9, .external_lex_state = 4},
  [359] = {.lex_state = 590, .external_lex_state = 10},
  [360] = {.lex_state = 425, .external_lex_state = 5},
  [361] = {.lex_state = 9, .external_lex_state = 4},
  [362] = {.lex_state = 9, .external_lex_state = 4},
  [363] = {.lex_state = 9, .external_lex_state = 4},
  [364] = {.lex_state = 415, .external_lex_state = 10},
  [365] = {.lex_state = 9, .external_lex_state = 4},
  [366] = {.lex_state = 9, .external_lex_state = 4},
  [367] = {.lex_state = 396, .external_lex_state = 10},
  [368] = {.lex_state = 559, .external_lex_state = 10},
  [369] = {.lex_state = 399, .external_lex_state = 10},
  [370] = {.lex_state = 396, .external_lex_state = 9},
  [371] = {.lex_state = 396, .external_lex_state = 9},
  [372] = {.lex_state = 9, .external_lex_state = 4},
  [373] = {.lex_state = 9, .external_lex_state = 4},
  [374] = {.lex_state = 396, .external_lex_state = 9},
  [375] = {.lex_state = 9, .external_lex_state = 4},
  [376] = {.lex_state = 396, .external_lex_state = 9},
  [377] = {.lex_state = 9, .external_lex_state = 2},
  [378] = {.lex_state = 9, .external_lex_state = 4},
  [379] = {.lex_state = 9, .external_lex_state = 4},
  [380] = {.lex_state = 9, .external_lex_state = 4},
  [381] = {.lex_state = 396, .external_lex_state = 12},
  [382] = {.lex_state = 428, .external_lex_state = 13},
  [383] = {.lex_state = 9, .external_lex_state = 14},
  [384] = {.lex_state = 9, .external_lex_state = 2},
  [385] = {.lex_state = 9, .external_lex_state = 14},
  [386] = {.lex_state = 9, .external_lex_state = 14},
  [387] = {.lex_state = 396, .external_lex_state = 9},
  [388] = {.lex_state = 9, .external_lex_state = 7},
  [389] = {.lex_state = 396, .external_lex_state = 9},
  [390] = {.lex_state = 9, .external_lex_state = 14},
  [391] = {.lex_state = 396, .external_lex_state = 10},
  [392] = {.lex_state = 9, .external_lex_state = 14},
  [393] = {.lex_state = 9, .external_lex_state = 14},
  [394] = {.lex_state = 9, .external_lex_state = 14},
  [395] = {.lex_state = 9, .external_lex_state = 14},
  [396] = {.lex_state = 399, .external_lex_state = 10},
  [397] = {.lex_state = 399, .external_lex_state = 10},
  [398] = {.lex_state = 415, .external_lex_state = 10},
  [399] = {.lex_state = 9, .external_lex_state = 14},
  [400] = {.lex_state = 396, .external_lex_state = 9},
  [401] = {.lex_state = 416, .external_lex_state = 9},
  [402] = {.lex_state = 425, .external_lex_state = 5},
  [403] = {.lex_state = 415, .external_lex_state = 10},
  [404] = {.lex_state = 425, .external_lex_state = 5},
  [405] = {.lex_state = 425, .external_lex_state = 5},
  [406] = {.lex_state = 9, .external_lex_state = 14},
  [407] = {.lex_state = 9, .external_lex_state = 14},
  [408] = {.lex_state = 425, .external_lex_state = 11},
  [409] = {.lex_state = 9, .external_lex_state = 14},
  [410] = {.lex_state = 396, .external_lex_state = 15},
  [411] = {.lex_state = 396, .external_lex_state = 15},
  [412] = {.lex_state = 9, .external_lex_state = 2},
  [413] = {.lex_state = 9, .external_lex_state = 4},
  [414] = {.lex_state = 9, .external_lex_state = 2},
  [415] = {.lex_state = 9, .external_lex_state = 2},
  [416] = {.lex_state = 9, .external_lex_state = 7},
  [417] = {.lex_state = 558, .external_lex_state = 5},
  [418] = {.lex_state = 9, .external_lex_state = 7},
  [419] = {.lex_state = 396, .external_lex_state = 10},
  [420] = {.lex_state = 559, .external_lex_state = 10},
  [421] = {.lex_state = 9, .external_lex_state = 2},
  [422] = {.lex_state = 9, .external_lex_state = 2},
  [423] = {.lex_state = 396, .external_lex_state = 6},
  [424] = {.lex_state = 396, .external_lex_state = 12},
  [425] = {.lex_state = 396, .external_lex_state = 12},
  [426] = {.lex_state = 396, .external_lex_state = 12},
  [427] = {.lex_state = 396, .external_lex_state = 12},
  [428] = {.lex_state = 9, .external_lex_state = 7},
  [429] = {.lex_state = 396, .external_lex_state = 12},
  [430] = {.lex_state = 396, .external_lex_state = 12},
  [431] = {.lex_state = 427, .external_lex_state = 12},
  [432] = {.lex_state = 9, .external_lex_state = 7},
  [433] = {.lex_state = 9, .external_lex_state = 14},
  [434] = {.lex_state = 615, .external_lex_state = 5},
  [435] = {.lex_state = 9, .external_lex_state = 2},
  [436] = {.lex_state = 9, .external_lex_state = 4},
  [437] = {.lex_state = 9, .external_lex_state = 7},
  [438] = {.lex_state = 9, .external_lex_state = 7},
  [439] = {.lex_state = 396, .external_lex_state = 9},
  [440] = {.lex_state = 9, .external_lex_state = 7},
  [441] = {.lex_state = 9, .external_lex_state = 4},
  [442] = {.lex_state = 9, .external_lex_state = 7},
  [443] = {.lex_state = 559, .external_lex_state = 5},
  [444] = {.lex_state = 560, .external_lex_state = 5},
  [445] = {.lex_state = 415, .external_lex_state = 10},
  [446] = {.lex_state = 580, .external_lex_state = 7},
  [447] = {.lex_state = 590, .external_lex_state = 10},
  [448] = {.lex_state = 9, .external_lex_state = 7},
  [449] = {.lex_state = 425, .external_lex_state = 5},
  [450] = {.lex_state = 9, .external_lex_state = 7},
  [451] = {.lex_state = 580, .external_lex_state = 7},
  [452] = {.lex_state = 591, .external_lex_state = 5},
  [453] = {.lex_state = 415, .external_lex_state = 10},
  [454] = {.lex_state = 9, .external_lex_state = 7},
  [455] = {.lex_state = 590, .external_lex_state = 10},
  [456] = {.lex_state = 425, .external_lex_state = 5},
  [457] = {.lex_state = 9, .external_lex_state = 7},
  [458] = {.lex_state = 9, .external_lex_state = 7},
  [459] = {.lex_state = 9, .external_lex_state = 7},
  [460] = {.lex_state = 415, .external_lex_state = 10},
  [461] = {.lex_state = 9, .external_lex_state = 7},
  [462] = {.lex_state = 9, .external_lex_state = 7},
  [463] = {.lex_state = 396, .external_lex_state = 10},
  [464] = {.lex_state = 559, .external_lex_state = 10},
  [465] = {.lex_state = 399, .external_lex_state = 10},
  [466] = {.lex_state = 9, .external_lex_state = 7},
  [467] = {.lex_state = 9, .external_lex_state = 7},
  [468] = {.lex_state = 9, .external_lex_state = 7},
  [469] = {.lex_state = 9, .external_lex_state = 2},
  [470] = {.lex_state = 396, .external_lex_state = 9},
  [471] = {.lex_state = 9, .external_lex_state = 2},
  [472] = {.lex_state = 616, .external_lex_state = 5},
  [473] = {.lex_state = 9, .external_lex_state = 2},
  [474] = {.lex_state = 396, .external_lex_state = 12},
  [475] = {.lex_state = 9, .external_lex_state = 2},
  [476] = {.lex_state = 617, .external_lex_state = 5},
  [477] = {.lex_state = 9, .external_lex_state = 2},
  [478] = {.lex_state = 9, .external_lex_state = 2},
  [479] = {.lex_state = 619, .external_lex_state = 5},
  [480] = {.lex_state = 9, .external_lex_state = 2},
  [481] = {.lex_state = 396, .external_lex_state = 8},
  [482] = {.lex_state = 9, .external_lex_state = 2},
  [483] = {.lex_state = 9, .external_lex_state = 2},
  [484] = {.lex_state = 9, .external_lex_state = 2},
  [485] = {.lex_state = 396, .external_lex_state = 19},
  [486] = {.lex_state = 396, .external_lex_state = 19},
  [487] = {.lex_state = 396, .external_lex_state = 19},
  [488] = {.lex_state = 396, .external_lex_state = 19},
  [489] = {.lex_state = 558, .external_lex_state = 19},
  [490] = {.lex_state = 9, .external_lex_state = 4},
  [491] = {.lex_state = 9, .external_lex_state = 7},
  [492] = {.lex_state = 396, .external_lex_state = 20},
  [493] = {.lex_state = 396, .external_lex_state = 17},
  [494] = {.lex_state = 9, .external_lex_state = 2},
  [495] = {.lex_state = 396, .external_lex_state = 8},
  [496] = {.lex_state = 396, .external_lex_state = 20},
  [497] = {.lex_state = 396, .external_lex_state = 17},
  [498] = {.lex_state = 9, .external_lex_state = 2},
  [499] = {.lex_state = 9, .external_lex_state = 2},
  [500] = {.lex_state = 9, .external_lex_state = 2},
  [501] = {.lex_state = 9, .external_lex_state = 2},
  [502] = {.lex_state = 396, .external_lex_state = 9},
  [503] = {.lex_state = 9, .external_lex_state = 4},
  [504] = {.lex_state = 396, .external_lex_state = 9},
  [505] = {.lex_state = 396, .external_lex_state = 9},
  [506] = {.lex_state = 396, .external_lex_state = 9},
  [507] = {.lex_state = 9, .external_lex_state = 2},
  [508] = {.lex_state = 396, .external_lex_state = 9},
  [509] = {.lex_state = 559, .external_lex_state = 5},
  [510] = {.lex_state = 425, .external_lex_state = 5},
  [511] = {.lex_state = 9, .external_lex_state = 2},
  [512] = {.lex_state = 396, .external_lex_state = 12},
  [513] = {.lex_state = 396, .external_lex_state = 12},
  [514] = {.lex_state = 427, .external_lex_state = 12},
  [515] = {.lex_state = 9, .external_lex_state = 2},
  [516] = {.lex_state = 580, .external_lex_state = 2},
  [517] = {.lex_state = 9, .external_lex_state = 2},
  [518] = {.lex_state = 580, .external_lex_state = 2},
  [519] = {.lex_state = 415, .external_lex_state = 10},
  [520] = {.lex_state = 415, .external_lex_state = 10},
  [521] = {.lex_state = 396, .external_lex_state = 12},
  [522] = {.lex_state = 9, .external_lex_state = 2},
  [523] = {.lex_state = 9, .external_lex_state = 2},
  [524] = {.lex_state = 9, .external_lex_state = 2},
  [525] = {.lex_state = 591, .external_lex_state = 5},
  [526] = {.lex_state = 396, .external_lex_state = 9},
  [527] = {.lex_state = 590, .external_lex_state = 10},
  [528] = {.lex_state = 425, .external_lex_state = 5},
  [529] = {.lex_state = 396, .external_lex_state = 9},
  [530] = {.lex_state = 427, .external_lex_state = 12},
  [531] = {.lex_state = 396, .external_lex_state = 10},
  [532] = {.lex_state = 396, .external_lex_state = 10},
  [533] = {.lex_state = 626, .external_lex_state = 5},
  [534] = {.lex_state = 9, .external_lex_state = 2},
  [535] = {.lex_state = 396, .external_lex_state = 10},
  [536] = {.lex_state = 9, .external_lex_state = 2},
  [537] = {.lex_state = 415, .external_lex_state = 10},
  [538] = {.lex_state = 9, .external_lex_state = 2},
  [539] = {.lex_state = 9, .external_lex_state = 2},
  [540] = {.lex_state = 396, .external_lex_state = 9},
  [541] = {.lex_state = 9, .external_lex_state = 2},
  [542] = {.lex_state = 396, .external_lex_state = 9},
  [543] = {.lex_state = 9, .external_lex_state = 2},
  [544] = {.lex_state = 9, .external_lex_state = 4},
  [545] = {.lex_state = 9, .external_lex_state = 4},
  [546] = {.lex_state = 9, .external_lex_state = 4},
  [547] = {.lex_state = 9, .external_lex_state = 4},
  [548] = {.lex_state = 9, .external_lex_state = 4},
  [549] = {.lex_state = 9, .external_lex_state = 4},
  [550] = {.lex_state = 9, .external_lex_state = 4},
  [551] = {.lex_state = 9, .external_lex_state = 4},
  [552] = {.lex_state = 396, .external_lex_state = 15},
  [553] = {.lex_state = 396, .external_lex_state = 15},
  [554] = {.lex_state = 9, .external_lex_state = 4},
  [555] = {.lex_state = 396, .external_lex_state = 6},
  [556] = {.lex_state = 615, .external_lex_state = 5},
  [557] = {.lex_state = 9, .external_lex_state = 4},
  [558] = {.lex_state = 9, .external_lex_state = 4},
  [559] = {.lex_state = 396, .external_lex_state = 9},
  [560] = {.lex_state = 9, .external_lex_state = 4},
  [561] = {.lex_state = 616, .external_lex_state = 5},
  [562] = {.lex_state = 9, .external_lex_state = 4},
  [563] = {.lex_state = 9, .external_lex_state = 4},
  [564] = {.lex_state = 617, .external_lex_state = 5},
  [565] = {.lex_state = 9, .external_lex_state = 4},
  [566] = {.lex_state = 9, .external_lex_state = 4},
  [567] = {.lex_state = 619, .external_lex_state = 5},
  [568] = {.lex_state = 9, .external_lex_state = 4},
  [569] = {.lex_state = 9, .external_lex_state = 4},
  [570] = {.lex_state = 9, .external_lex_state = 4},
  [571] = {.lex_state = 396, .external_lex_state = 19},
  [572] = {.lex_state = 9, .external_lex_state = 4},
  [573] = {.lex_state = 9, .external_lex_state = 4},
  [574] = {.lex_state = 396, .external_lex_state = 9},
  [575] = {.lex_state = 396, .external_lex_state = 9},
  [576] = {.lex_state = 396, .external_lex_state = 9},
  [577] = {.lex_state = 9, .external_lex_state = 4},
  [578] = {.lex_state = 396, .external_lex_state = 9},
  [579] = {.lex_state = 425, .external_lex_state = 5},
  [580] = {.lex_state = 9, .external_lex_state = 4},
  [581] = {.lex_state = 396, .external_lex_state = 12},
  [582] = {.lex_state = 396, .external_lex_state = 12},
  [583] = {.lex_state = 427, .external_lex_state = 12},
  [584] = {.lex_state = 9, .external_lex_state = 4},
  [585] = {.lex_state = 580, .external_lex_state = 4},
  [586] = {.lex_state = 9, .external_lex_state = 4},
  [587] = {.lex_state = 580, .external_lex_state = 4},
  [588] = {.lex_state = 415, .external_lex_state = 10},
  [589] = {.lex_state = 415, .external_lex_state = 10},
  [590] = {.lex_state = 396, .external_lex_state = 12},
  [591] = {.lex_state = 9, .external_lex_state = 4},
  [592] = {.lex_state = 9, .external_lex_state = 4},
  [593] = {.lex_state = 9, .external_lex_state = 4},
  [594] = {.lex_state = 396, .external_lex_state = 9},
  [595] = {.lex_state = 626, .external_lex_state = 5},
  [596] = {.lex_state = 9, .external_lex_state = 4},
  [597] = {.lex_state = 396, .external_lex_state = 10},
  [598] = {.lex_state = 9, .external_lex_state = 4},
  [599] = {.lex_state = 415, .external_lex_state = 10},
  [600] = {.lex_state = 9, .external_lex_state = 4},
  [601] = {.lex_state = 9, .external_lex_state = 4},
  [602] = {.lex_state = 396, .external_lex_state = 9},
  [603] = {.lex_state = 9, .external_lex_state = 4},
  [604] = {.lex_state = 396, .external_lex_state = 9},
  [605] = {.lex_state = 9, .external_lex_state = 4},
  [606] = {.lex_state = 396, .external_lex_state = 9},
  [607] = {.lex_state = 396, .external_lex_state = 12},
  [608] = {.lex_state = 396, .external_lex_state = 12},
  [609] = {.lex_state = 396, .external_lex_state = 12},
  [610] = {.lex_state = 396, .external_lex_state = 12},
  [611] = {.lex_state = 9, .external_lex_state = 14},
  [612] = {.lex_state = 396, .external_lex_state = 12},
  [613] = {.lex_state = 396, .external_lex_state = 12},
  [614] = {.lex_state = 427, .external_lex_state = 12},
  [615] = {.lex_state = 9, .external_lex_state = 14},
  [616] = {.lex_state = 9, .external_lex_state = 14},
  [617] = {.lex_state = 9, .external_lex_state = 4},
  [618] = {.lex_state = 9, .external_lex_state = 14},
  [619] = {.lex_state = 9, .external_lex_state = 14},
  [620] = {.lex_state = 396, .external_lex_state = 9},
  [621] = {.lex_state = 9, .external_lex_state = 7},
  [622] = {.lex_state = 9, .external_lex_state = 4},
  [623] = {.lex_state = 9, .external_lex_state = 14},
  [624] = {.lex_state = 559, .external_lex_state = 5},
  [625] = {.lex_state = 560, .external_lex_state = 5},
  [626] = {.lex_state = 415, .external_lex_state = 10},
  [627] = {.lex_state = 580, .external_lex_state = 14},
  [628] = {.lex_state = 590, .external_lex_state = 10},
  [629] = {.lex_state = 9, .external_lex_state = 14},
  [630] = {.lex_state = 425, .external_lex_state = 5},
  [631] = {.lex_state = 9, .external_lex_state = 14},
  [632] = {.lex_state = 580, .external_lex_state = 14},
  [633] = {.lex_state = 591, .external_lex_state = 5},
  [634] = {.lex_state = 415, .external_lex_state = 10},
  [635] = {.lex_state = 9, .external_lex_state = 14},
  [636] = {.lex_state = 590, .external_lex_state = 10},
  [637] = {.lex_state = 425, .external_lex_state = 5},
  [638] = {.lex_state = 9, .external_lex_state = 14},
  [639] = {.lex_state = 9, .external_lex_state = 14},
  [640] = {.lex_state = 9, .external_lex_state = 14},
  [641] = {.lex_state = 415, .external_lex_state = 10},
  [642] = {.lex_state = 9, .external_lex_state = 14},
  [643] = {.lex_state = 9, .external_lex_state = 14},
  [644] = {.lex_state = 396, .external_lex_state = 10},
  [645] = {.lex_state = 559, .external_lex_state = 10},
  [646] = {.lex_state = 399, .external_lex_state = 10},
  [647] = {.lex_state = 9, .external_lex_state = 2},
  [648] = {.lex_state = 9, .external_lex_state = 14},
  [649] = {.lex_state = 9, .external_lex_state = 14},
  [650] = {.lex_state = 9, .external_lex_state = 14},
  [651] = {.lex_state = 9, .external_lex_state = 2},
  [652] = {.lex_state = 396, .external_lex_state = 15},
  [653] = {.lex_state = 9, .external_lex_state = 2},
  [654] = {.lex_state = 396, .external_lex_state = 19},
  [655] = {.lex_state = 9, .external_lex_state = 4},
  [656] = {.lex_state = 9, .external_lex_state = 2},
  [657] = {.lex_state = 396, .external_lex_state = 19},
  [658] = {.lex_state = 396, .external_lex_state = 10},
  [659] = {.lex_state = 9, .external_lex_state = 2},
  [660] = {.lex_state = 9, .external_lex_state = 7},
  [661] = {.lex_state = 9, .external_lex_state = 7},
  [662] = {.lex_state = 9, .external_lex_state = 7},
  [663] = {.lex_state = 9, .external_lex_state = 7},
  [664] = {.lex_state = 9, .external_lex_state = 7},
  [665] = {.lex_state = 9, .external_lex_state = 7},
  [666] = {.lex_state = 9, .external_lex_state = 7},
  [667] = {.lex_state = 9, .external_lex_state = 7},
  [668] = {.lex_state = 9, .external_lex_state = 2},
  [669] = {.lex_state = 9, .external_lex_state = 7},
  [670] = {.lex_state = 396, .external_lex_state = 19},
  [671] = {.lex_state = 9, .external_lex_state = 7},
  [672] = {.lex_state = 9, .external_lex_state = 7},
  [673] = {.lex_state = 9, .external_lex_state = 7},
  [674] = {.lex_state = 9, .external_lex_state = 4},
  [675] = {.lex_state = 425, .external_lex_state = 5},
  [676] = {.lex_state = 396, .external_lex_state = 12},
  [677] = {.lex_state = 396, .external_lex_state = 12},
  [678] = {.lex_state = 427, .external_lex_state = 12},
  [679] = {.lex_state = 9, .external_lex_state = 7},
  [680] = {.lex_state = 580, .external_lex_state = 7},
  [681] = {.lex_state = 9, .external_lex_state = 7},
  [682] = {.lex_state = 580, .external_lex_state = 7},
  [683] = {.lex_state = 415, .external_lex_state = 10},
  [684] = {.lex_state = 415, .external_lex_state = 10},
  [685] = {.lex_state = 396, .external_lex_state = 12},
  [686] = {.lex_state = 9, .external_lex_state = 7},
  [687] = {.lex_state = 9, .external_lex_state = 7},
  [688] = {.lex_state = 9, .external_lex_state = 7},
  [689] = {.lex_state = 396, .external_lex_state = 9},
  [690] = {.lex_state = 626, .external_lex_state = 5},
  [691] = {.lex_state = 9, .external_lex_state = 7},
  [692] = {.lex_state = 396, .external_lex_state = 10},
  [693] = {.lex_state = 9, .external_lex_state = 7},
  [694] = {.lex_state = 415, .external_lex_state = 10},
  [695] = {.lex_state = 9, .external_lex_state = 7},
  [696] = {.lex_state = 639, .external_lex_state = 5},
  [697] = {.lex_state = 9, .external_lex_state = 2},
  [698] = {.lex_state = 396, .external_lex_state = 9},
  [699] = {.lex_state = 396, .external_lex_state = 19},
  [700] = {.lex_state = 396, .external_lex_state = 19},
  [701] = {.lex_state = 397, .external_lex_state = 17},
  [702] = {.lex_state = 9, .external_lex_state = 7},
  [703] = {.lex_state = 397, .external_lex_state = 17},
  [704] = {.lex_state = 9, .external_lex_state = 2},
  [705] = {.lex_state = 558, .external_lex_state = 19},
  [706] = {.lex_state = 396, .external_lex_state = 20},
  [707] = {.lex_state = 9, .external_lex_state = 4},
  [708] = {.lex_state = 9, .external_lex_state = 7},
  [709] = {.lex_state = 396, .external_lex_state = 20},
  [710] = {.lex_state = 9, .external_lex_state = 21},
  [711] = {.lex_state = 9, .external_lex_state = 21},
  [712] = {.lex_state = 9, .external_lex_state = 2},
  [713] = {.lex_state = 396, .external_lex_state = 8},
  [714] = {.lex_state = 396, .external_lex_state = 20},
  [715] = {.lex_state = 9, .external_lex_state = 2},
  [716] = {.lex_state = 396, .external_lex_state = 9},
  [717] = {.lex_state = 396, .external_lex_state = 9},
  [718] = {.lex_state = 396, .external_lex_state = 9},
  [719] = {.lex_state = 396, .external_lex_state = 9},
  [720] = {.lex_state = 9, .external_lex_state = 2},
  [721] = {.lex_state = 9, .external_lex_state = 2},
  [722] = {.lex_state = 9, .external_lex_state = 2},
  [723] = {.lex_state = 580, .external_lex_state = 2},
  [724] = {.lex_state = 580, .external_lex_state = 2},
  [725] = {.lex_state = 591, .external_lex_state = 5},
  [726] = {.lex_state = 648, .external_lex_state = 2},
  [727] = {.lex_state = 590, .external_lex_state = 10},
  [728] = {.lex_state = 425, .external_lex_state = 5},
  [729] = {.lex_state = 648, .external_lex_state = 2},
  [730] = {.lex_state = 9, .external_lex_state = 2},
  [731] = {.lex_state = 9, .external_lex_state = 2},
  [732] = {.lex_state = 396, .external_lex_state = 12},
  [733] = {.lex_state = 427, .external_lex_state = 12},
  [734] = {.lex_state = 396, .external_lex_state = 9},
  [735] = {.lex_state = 396, .external_lex_state = 9},
  [736] = {.lex_state = 9, .external_lex_state = 2},
  [737] = {.lex_state = 396, .external_lex_state = 10},
  [738] = {.lex_state = 9, .external_lex_state = 2},
  [739] = {.lex_state = 9, .external_lex_state = 2},
  [740] = {.lex_state = 9, .external_lex_state = 2},
  [741] = {.lex_state = 396, .external_lex_state = 9},
  [742] = {.lex_state = 9, .external_lex_state = 4},
  [743] = {.lex_state = 396, .external_lex_state = 15},
  [744] = {.lex_state = 9, .external_lex_state = 4},
  [745] = {.lex_state = 9, .external_lex_state = 4},
  [746] = {.lex_state = 639, .external_lex_state = 5},
  [747] = {.lex_state = 9, .external_lex_state = 4},
  [748] = {.lex_state = 396, .external_lex_state = 19},
  [749] = {.lex_state = 396, .external_lex_state = 19},
  [750] = {.lex_state = 9, .external_lex_state = 4},
  [751] = {.lex_state = 396, .external_lex_state = 9},
  [752] = {.lex_state = 396, .external_lex_state = 9},
  [753] = {.lex_state = 396, .external_lex_state = 9},
  [754] = {.lex_state = 9, .external_lex_state = 4},
  [755] = {.lex_state = 9, .external_lex_state = 4},
  [756] = {.lex_state = 9, .external_lex_state = 4},
  [757] = {.lex_state = 580, .external_lex_state = 4},
  [758] = {.lex_state = 580, .external_lex_state = 4},
  [759] = {.lex_state = 591, .external_lex_state = 5},
  [760] = {.lex_state = 648, .external_lex_state = 4},
  [761] = {.lex_state = 590, .external_lex_state = 10},
  [762] = {.lex_state = 425, .external_lex_state = 5},
  [763] = {.lex_state = 648, .external_lex_state = 4},
  [764] = {.lex_state = 9, .external_lex_state = 4},
  [765] = {.lex_state = 9, .external_lex_state = 4},
  [766] = {.lex_state = 9, .external_lex_state = 4},
  [767] = {.lex_state = 9, .external_lex_state = 4},
  [768] = {.lex_state = 9, .external_lex_state = 4},
  [769] = {.lex_state = 9, .external_lex_state = 4},
  [770] = {.lex_state = 396, .external_lex_state = 9},
  [771] = {.lex_state = 9, .external_lex_state = 14},
  [772] = {.lex_state = 9, .external_lex_state = 14},
  [773] = {.lex_state = 9, .external_lex_state = 14},
  [774] = {.lex_state = 9, .external_lex_state = 14},
  [775] = {.lex_state = 9, .external_lex_state = 14},
  [776] = {.lex_state = 9, .external_lex_state = 14},
  [777] = {.lex_state = 9, .external_lex_state = 14},
  [778] = {.lex_state = 9, .external_lex_state = 14},
  [779] = {.lex_state = 9, .external_lex_state = 14},
  [780] = {.lex_state = 396, .external_lex_state = 19},
  [781] = {.lex_state = 558, .external_lex_state = 5},
  [782] = {.lex_state = 9, .external_lex_state = 14},
  [783] = {.lex_state = 9, .external_lex_state = 14},
  [784] = {.lex_state = 9, .external_lex_state = 14},
  [785] = {.lex_state = 9, .external_lex_state = 4},
  [786] = {.lex_state = 425, .external_lex_state = 5},
  [787] = {.lex_state = 396, .external_lex_state = 12},
  [788] = {.lex_state = 396, .external_lex_state = 12},
  [789] = {.lex_state = 427, .external_lex_state = 12},
  [790] = {.lex_state = 9, .external_lex_state = 14},
  [791] = {.lex_state = 580, .external_lex_state = 14},
  [792] = {.lex_state = 9, .external_lex_state = 14},
  [793] = {.lex_state = 580, .external_lex_state = 14},
  [794] = {.lex_state = 415, .external_lex_state = 10},
  [795] = {.lex_state = 415, .external_lex_state = 10},
  [796] = {.lex_state = 396, .external_lex_state = 12},
  [797] = {.lex_state = 9, .external_lex_state = 14},
  [798] = {.lex_state = 9, .external_lex_state = 14},
  [799] = {.lex_state = 9, .external_lex_state = 14},
  [800] = {.lex_state = 396, .external_lex_state = 9},
  [801] = {.lex_state = 626, .external_lex_state = 5},
  [802] = {.lex_state = 9, .external_lex_state = 14},
  [803] = {.lex_state = 396, .external_lex_state = 10},
  [804] = {.lex_state = 9, .external_lex_state = 14},
  [805] = {.lex_state = 415, .external_lex_state = 10},
  [806] = {.lex_state = 9, .external_lex_state = 14},
  [807] = {.lex_state = 9, .external_lex_state = 2},
  [808] = {.lex_state = 9, .external_lex_state = 2},
  [809] = {.lex_state = 9, .external_lex_state = 7},
  [810] = {.lex_state = 9, .external_lex_state = 7},
  [811] = {.lex_state = 9, .external_lex_state = 7},
  [812] = {.lex_state = 9, .external_lex_state = 7},
  [813] = {.lex_state = 9, .external_lex_state = 7},
  [814] = {.lex_state = 580, .external_lex_state = 7},
  [815] = {.lex_state = 580, .external_lex_state = 7},
  [816] = {.lex_state = 591, .external_lex_state = 5},
  [817] = {.lex_state = 648, .external_lex_state = 7},
  [818] = {.lex_state = 590, .external_lex_state = 10},
  [819] = {.lex_state = 425, .external_lex_state = 5},
  [820] = {.lex_state = 648, .external_lex_state = 7},
  [821] = {.lex_state = 9, .external_lex_state = 7},
  [822] = {.lex_state = 9, .external_lex_state = 7},
  [823] = {.lex_state = 9, .external_lex_state = 7},
  [824] = {.lex_state = 9, .external_lex_state = 7},
  [825] = {.lex_state = 9, .external_lex_state = 7},
  [826] = {.lex_state = 396, .external_lex_state = 19},
  [827] = {.lex_state = 9, .external_lex_state = 2},
  [828] = {.lex_state = 9, .external_lex_state = 2},
  [829] = {.lex_state = 396, .external_lex_state = 20},
  [830] = {.lex_state = 9, .external_lex_state = 7},
  [831] = {.lex_state = 9, .external_lex_state = 21},
  [832] = {.lex_state = 396, .external_lex_state = 8},
  [833] = {.lex_state = 9, .external_lex_state = 2},
  [834] = {.lex_state = 9, .external_lex_state = 2},
  [835] = {.lex_state = 9, .external_lex_state = 2},
  [836] = {.lex_state = 396, .external_lex_state = 12},
  [837] = {.lex_state = 427, .external_lex_state = 12},
  [838] = {.lex_state = 648, .external_lex_state = 2},
  [839] = {.lex_state = 648, .external_lex_state = 2},
  [840] = {.lex_state = 415, .external_lex_state = 10},
  [841] = {.lex_state = 396, .external_lex_state = 9},
  [842] = {.lex_state = 396, .external_lex_state = 9},
  [843] = {.lex_state = 9, .external_lex_state = 2},
  [844] = {.lex_state = 9, .external_lex_state = 4},
  [845] = {.lex_state = 396, .external_lex_state = 19},
  [846] = {.lex_state = 9, .external_lex_state = 4},
  [847] = {.lex_state = 9, .external_lex_state = 4},
  [848] = {.lex_state = 9, .external_lex_state = 4},
  [849] = {.lex_state = 9, .external_lex_state = 4},
  [850] = {.lex_state = 9, .external_lex_state = 4},
  [851] = {.lex_state = 396, .external_lex_state = 12},
  [852] = {.lex_state = 427, .external_lex_state = 12},
  [853] = {.lex_state = 648, .external_lex_state = 4},
  [854] = {.lex_state = 648, .external_lex_state = 4},
  [855] = {.lex_state = 415, .external_lex_state = 10},
  [856] = {.lex_state = 9, .external_lex_state = 4},
  [857] = {.lex_state = 9, .external_lex_state = 14},
  [858] = {.lex_state = 396, .external_lex_state = 19},
  [859] = {.lex_state = 9, .external_lex_state = 14},
  [860] = {.lex_state = 9, .external_lex_state = 14},
  [861] = {.lex_state = 9, .external_lex_state = 14},
  [862] = {.lex_state = 580, .external_lex_state = 14},
  [863] = {.lex_state = 580, .external_lex_state = 14},
  [864] = {.lex_state = 591, .external_lex_state = 5},
  [865] = {.lex_state = 648, .external_lex_state = 14},
  [866] = {.lex_state = 590, .external_lex_state = 10},
  [867] = {.lex_state = 425, .external_lex_state = 5},
  [868] = {.lex_state = 648, .external_lex_state = 14},
  [869] = {.lex_state = 9, .external_lex_state = 14},
  [870] = {.lex_state = 9, .external_lex_state = 14},
  [871] = {.lex_state = 9, .external_lex_state = 14},
  [872] = {.lex_state = 9, .external_lex_state = 14},
  [873] = {.lex_state = 9, .external_lex_state = 14},
  [874] = {.lex_state = 396, .external_lex_state = 12},
  [875] = {.lex_state = 427, .external_lex_state = 12},
  [876] = {.lex_state = 648, .external_lex_state = 7},
  [877] = {.lex_state = 648, .external_lex_state = 7},
  [878] = {.lex_state = 415, .external_lex_state = 10},
  [879] = {.lex_state = 9, .external_lex_state = 2},
  [880] = {.lex_state = 648, .external_lex_state = 2},
  [881] = {.lex_state = 648, .external_lex_state = 2},
  [882] = {.lex_state = 9, .external_lex_state = 2},
  [883] = {.lex_state = 9, .external_lex_state = 4},
  [884] = {.lex_state = 648, .external_lex_state = 4},
  [885] = {.lex_state = 648, .external_lex_state = 4},
  [886] = {.lex_state = 9, .external_lex_state = 4},
  [887] = {.lex_state = 9, .external_lex_state = 14},
  [888] = {.lex_state = 396, .external_lex_state = 12},
  [889] = {.lex_state = 427, .external_lex_state = 12},
  [890] = {.lex_state = 648, .external_lex_state = 14},
  [891] = {.lex_state = 648, .external_lex_state = 14},
  [892] = {.lex_state = 415, .external_lex_state = 10},
  [893] = {.lex_state = 648, .external_lex_state = 7},
  [894] = {.lex_state = 648, .external_lex_state = 7},
  [895] = {.lex_state = 9, .external_lex_state = 7},
  [896] = {.lex_state = 648, .external_lex_state = 14},
  [897] = {.lex_state = 648, .external_lex_state = 14},
  [898] = {.lex_state = 9, .external_lex_state = 14},
};

enum {
  ts_external_token__escape,
  ts_external_token__explsyntaxoff_word,
  ts_external_token__explsyntaxon_word,
  ts_external_token__makeatletter_word,
  ts_external_token__makeatother_word,
  ts_external_token__non_letter_or_other,
  ts_external_token__providesexplclass_word,
  ts_external_token__providesexplfile_word,
  ts_external_token__providesexplpackage_word,
  ts_external_token__space,
  ts_external_token__token_end,
  ts_external_token_active_char,
  ts_external_token_alignment_tab,
  ts_external_token_begin_group,
  ts_external_token_comment,
  ts_external_token_end_group,
  ts_external_token_eol,
  ts_external_token_magic_comment,
  ts_external_token_math_shift,
  ts_external_token_parameter_char,
  ts_external_token_subscript,
  ts_external_token_superscript,
  ts_external_token_verb_body,
  ts_external_token_verb_delim,
  ts_external_token_verb_line,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__escape] = sym__escape,
  [ts_external_token__explsyntaxoff_word] = sym__explsyntaxoff_word,
  [ts_external_token__explsyntaxon_word] = sym__explsyntaxon_word,
  [ts_external_token__makeatletter_word] = sym__makeatletter_word,
  [ts_external_token__makeatother_word] = sym__makeatother_word,
  [ts_external_token__non_letter_or_other] = sym__non_letter_or_other,
  [ts_external_token__providesexplclass_word] = sym__providesexplclass_word,
  [ts_external_token__providesexplfile_word] = sym__providesexplfile_word,
  [ts_external_token__providesexplpackage_word] = sym__providesexplpackage_word,
  [ts_external_token__space] = sym__space,
  [ts_external_token__token_end] = sym__token_end,
  [ts_external_token_active_char] = sym_active_char,
  [ts_external_token_alignment_tab] = sym_alignment_tab,
  [ts_external_token_begin_group] = sym_begin_group,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_end_group] = sym_end_group,
  [ts_external_token_eol] = sym_eol,
  [ts_external_token_magic_comment] = sym_magic_comment,
  [ts_external_token_math_shift] = sym_math_shift,
  [ts_external_token_parameter_char] = sym_parameter_char,
  [ts_external_token_subscript] = sym_subscript,
  [ts_external_token_superscript] = sym_superscript,
  [ts_external_token_verb_body] = sym_verb_body,
  [ts_external_token_verb_delim] = sym_verb_delim,
  [ts_external_token_verb_line] = sym_verb_line,
};

static bool ts_external_scanner_states[22][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__escape] = true,
    [ts_external_token__explsyntaxoff_word] = true,
    [ts_external_token__explsyntaxon_word] = true,
    [ts_external_token__makeatletter_word] = true,
    [ts_external_token__makeatother_word] = true,
    [ts_external_token__non_letter_or_other] = true,
    [ts_external_token__providesexplclass_word] = true,
    [ts_external_token__providesexplfile_word] = true,
    [ts_external_token__providesexplpackage_word] = true,
    [ts_external_token__space] = true,
    [ts_external_token__token_end] = true,
    [ts_external_token_active_char] = true,
    [ts_external_token_alignment_tab] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_end_group] = true,
    [ts_external_token_eol] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_math_shift] = true,
    [ts_external_token_parameter_char] = true,
    [ts_external_token_subscript] = true,
    [ts_external_token_superscript] = true,
    [ts_external_token_verb_body] = true,
    [ts_external_token_verb_delim] = true,
    [ts_external_token_verb_line] = true,
  },
  [2] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_active_char] = true,
    [ts_external_token_alignment_tab] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_math_shift] = true,
    [ts_external_token_parameter_char] = true,
    [ts_external_token_subscript] = true,
    [ts_external_token_superscript] = true,
  },
  [3] = {
    [ts_external_token__explsyntaxoff_word] = true,
    [ts_external_token__explsyntaxon_word] = true,
    [ts_external_token__makeatletter_word] = true,
    [ts_external_token__makeatother_word] = true,
    [ts_external_token__non_letter_or_other] = true,
    [ts_external_token__providesexplclass_word] = true,
    [ts_external_token__providesexplfile_word] = true,
    [ts_external_token__providesexplpackage_word] = true,
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [4] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_active_char] = true,
    [ts_external_token_alignment_tab] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_end_group] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_math_shift] = true,
    [ts_external_token_parameter_char] = true,
    [ts_external_token_subscript] = true,
    [ts_external_token_superscript] = true,
  },
  [5] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [6] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_verb_delim] = true,
  },
  [7] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_active_char] = true,
    [ts_external_token_alignment_tab] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_parameter_char] = true,
    [ts_external_token_subscript] = true,
    [ts_external_token_superscript] = true,
  },
  [8] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_verb_line] = true,
  },
  [9] = {
    [ts_external_token__space] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [10] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [11] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_parameter_char] = true,
  },
  [12] = {
    [ts_external_token__space] = true,
    [ts_external_token__token_end] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [13] = {
    [ts_external_token__explsyntaxoff_word] = true,
    [ts_external_token__explsyntaxon_word] = true,
    [ts_external_token__makeatletter_word] = true,
    [ts_external_token__makeatother_word] = true,
    [ts_external_token__non_letter_or_other] = true,
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [14] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_active_char] = true,
    [ts_external_token_alignment_tab] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_end_group] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_parameter_char] = true,
    [ts_external_token_subscript] = true,
    [ts_external_token_superscript] = true,
  },
  [15] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_math_shift] = true,
  },
  [16] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_verb_body] = true,
  },
  [17] = {
    [ts_external_token__space] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_eol] = true,
    [ts_external_token_magic_comment] = true,
  },
  [18] = {
    [ts_external_token__non_letter_or_other] = true,
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_magic_comment] = true,
  },
  [19] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_end_group] = true,
    [ts_external_token_magic_comment] = true,
  },
  [20] = {
    [ts_external_token__space] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_eol] = true,
    [ts_external_token_magic_comment] = true,
  },
  [21] = {
    [ts_external_token__escape] = true,
    [ts_external_token__space] = true,
    [ts_external_token_active_char] = true,
    [ts_external_token_alignment_tab] = true,
    [ts_external_token_begin_group] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_eol] = true,
    [ts_external_token_magic_comment] = true,
    [ts_external_token_math_shift] = true,
    [ts_external_token_parameter_char] = true,
    [ts_external_token_subscript] = true,
    [ts_external_token_superscript] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__escape] = ACTIONS(1),
    [sym__explsyntaxoff_word] = ACTIONS(1),
    [sym__explsyntaxon_word] = ACTIONS(1),
    [sym__makeatletter_word] = ACTIONS(1),
    [sym__makeatother_word] = ACTIONS(1),
    [sym__non_letter_or_other] = ACTIONS(1),
    [sym__providesexplclass_word] = ACTIONS(1),
    [sym__providesexplfile_word] = ACTIONS(1),
    [sym__providesexplpackage_word] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__token_end] = ACTIONS(1),
    [sym_active_char] = ACTIONS(1),
    [sym_alignment_tab] = ACTIONS(1),
    [sym_begin_group] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_end_group] = ACTIONS(1),
    [sym_eol] = ACTIONS(1),
    [sym_magic_comment] = ACTIONS(1),
    [sym_math_shift] = ACTIONS(1),
    [sym_parameter_char] = ACTIONS(1),
    [sym_subscript] = ACTIONS(1),
    [sym_superscript] = ACTIONS(1),
    [sym_verb_body] = ACTIONS(1),
    [sym_verb_delim] = ACTIONS(1),
    [sym_verb_line] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(8),
    [sym__common] = STATE(51),
    [sym_inline_verbatim] = STATE(51),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(51),
    [sym_text_mode] = STATE(10),
    [sym_parameter] = STATE(51),
    [sym_text_env] = STATE(51),
    [sym__display_math] = STATE(51),
    [sym_tex_display_math] = STATE(51),
    [sym_latex_display_math] = STATE(51),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(51),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(51),
    [sym_tex_inline_math] = STATE(51),
    [sym_latex_inline_math] = STATE(51),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(51),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(51),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(51),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(51),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(51),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(51),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(51),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(51),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(51),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(51),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(51),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(51),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(51),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(51),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(51),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(51),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(51),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(51),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(51),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(51),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(51),
    [sym_glue_assign] = STATE(51),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(51),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(51),
    [sym_strut] = STATE(51),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(51),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(51),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(51),
    [sym_movebox_token] = STATE(43),
    [sym__box] = STATE(51),
    [sym_setbox] = STATE(51),
    [sym_setbox_token] = STATE(44),
    [sym_box_dimension_assign] = STATE(51),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(51),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(51),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(51),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(51),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(51),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(51),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(51),
    [sym_token] = STATE(51),
    [sym_escaped] = STATE(51),
    [aux_sym_text_mode_repeat1] = STATE(51),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(53),
    [sym__escape] = ACTIONS(5),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(9),
    [sym_alignment_tab] = ACTIONS(9),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
    [sym_magic_comment] = ACTIONS(13),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [ts_builtin_sym_end] = ACTIONS(22),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(28),
  },
  [2] = {
    [aux_sym_token_repeat1] = STATE(92),
    [sym__explsyntaxoff_word] = ACTIONS(30),
    [sym__explsyntaxon_word] = ACTIONS(32),
    [sym__makeatletter_word] = ACTIONS(34),
    [sym__makeatother_word] = ACTIONS(36),
    [sym__non_letter_or_other] = ACTIONS(38),
    [sym__providesexplclass_word] = ACTIONS(40),
    [sym__providesexplfile_word] = ACTIONS(42),
    [sym__providesexplpackage_word] = ACTIONS(44),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_verb] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_begin] = ACTIONS(52),
    [anon_sym_documentclass] = ACTIONS(54),
    [anon_sym_usepackage] = ACTIONS(56),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(62),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [anon_sym_emph] = ACTIONS(66),
    [anon_sym_footnote] = ACTIONS(68),
    [anon_sym_textbf] = ACTIONS(70),
    [anon_sym_textit] = ACTIONS(72),
    [anon_sym_texttt] = ACTIONS(74),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [anon_sym_href] = ACTIONS(96),
    [aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH] = ACTIONS(98),
    [anon_sym_hyperbaseurl] = ACTIONS(100),
    [anon_sym_hyperimage] = ACTIONS(102),
    [anon_sym_hyperref] = ACTIONS(104),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(106),
  },
  [3] = {
    [sym__common] = STATE(140),
    [sym_inline_verbatim] = STATE(140),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(140),
    [sym_parameter] = STATE(140),
    [sym_text_env] = STATE(140),
    [sym__display_math] = STATE(140),
    [sym_tex_display_math] = STATE(140),
    [sym_latex_display_math] = STATE(140),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(140),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(140),
    [sym_tex_inline_math] = STATE(140),
    [sym_latex_inline_math] = STATE(140),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(140),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(140),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(140),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(140),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(140),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(140),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(140),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(140),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(140),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(140),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(140),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(140),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(140),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(140),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(140),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(140),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(140),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(140),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(140),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(140),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(140),
    [sym_glue_assign] = STATE(140),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(140),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(140),
    [sym_strut] = STATE(140),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(140),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(140),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(140),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(140),
    [sym_setbox] = STATE(140),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(140),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(140),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(140),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(140),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(140),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(140),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(140),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(140),
    [sym_token] = STATE(140),
    [sym_escaped] = STATE(140),
    [aux_sym_text_mode_repeat1] = STATE(140),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(110),
    [sym_alignment_tab] = ACTIONS(110),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(114),
    [sym_end_group] = ACTIONS(117),
    [sym_magic_comment] = ACTIONS(114),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [4] = {
    [sym__common] = STATE(153),
    [sym__math_mode] = STATE(153),
    [sym_math_mode] = STATE(146),
    [sym_parameter] = STATE(153),
    [sym_math_env] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(147),
    [sym_begin] = STATE(148),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(153),
    [sym_include_token] = STATE(20),
    [sym_storage] = STATE(153),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(153),
    [sym_catcode_token] = STATE(26),
    [sym_makeatletter] = STATE(153),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(153),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(153),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(153),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(153),
    [sym_glue_assign] = STATE(153),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(153),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(153),
    [sym_strut] = STATE(153),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(153),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(153),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(153),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(153),
    [sym_setbox] = STATE(153),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(153),
    [sym_box_dimension_token] = STATE(45),
    [sym_math_group] = STATE(153),
    [sym_begin_opt] = STATE(152),
    [sym_end_opt] = STATE(152),
    [sym_text] = STATE(153),
    [sym_token] = STATE(153),
    [sym_escaped] = STATE(153),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(131),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(140),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [5] = {
    [sym__escape] = ACTIONS(144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(144),
    [sym_alignment_tab] = ACTIONS(144),
    [sym_begin_group] = ACTIONS(144),
    [sym_comment] = ACTIONS(146),
    [sym_magic_comment] = ACTIONS(146),
    [sym_math_shift] = ACTIONS(144),
    [sym_parameter_char] = ACTIONS(144),
    [sym_subscript] = ACTIONS(144),
    [sym_superscript] = ACTIONS(144),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(144),
  },
  [6] = {
    [sym__escape] = ACTIONS(149),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_comment] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [ts_builtin_sym_end] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(149),
  },
  [7] = {
    [sym__escape] = ACTIONS(154),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(154),
    [sym_alignment_tab] = ACTIONS(154),
    [sym_begin_group] = ACTIONS(154),
    [sym_comment] = ACTIONS(156),
    [sym_magic_comment] = ACTIONS(156),
    [sym_math_shift] = ACTIONS(154),
    [sym_parameter_char] = ACTIONS(154),
    [sym_subscript] = ACTIONS(154),
    [sym_superscript] = ACTIONS(154),
    [ts_builtin_sym_end] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(154),
  },
  [8] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(159),
  },
  [9] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_delim] = ACTIONS(161),
  },
  [10] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [ts_builtin_sym_end] = ACTIONS(163),
  },
  [11] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(160),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(165),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [12] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(184),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(165),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [13] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(186),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_end_inline_math] = STATE(187),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(182),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [14] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(189),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_inline_math_end] = STATE(190),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end_token] = STATE(191),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [15] = {
    [sym_verbatim_end] = STATE(193),
    [sym_verbatim_text] = STATE(194),
    [sym_end_token] = STATE(195),
    [aux_sym_verbatim_text_repeat1] = STATE(196),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(188),
  },
  [16] = {
    [sym__common] = STATE(200),
    [sym_inline_verbatim] = STATE(200),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(200),
    [sym_parameter] = STATE(200),
    [sym_text_env] = STATE(200),
    [sym__display_math] = STATE(200),
    [sym_tex_display_math] = STATE(200),
    [sym_latex_display_math] = STATE(200),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(200),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(200),
    [sym_tex_inline_math] = STATE(200),
    [sym_latex_inline_math] = STATE(200),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(200),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(200),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(198),
    [sym_end_token] = STATE(199),
    [sym_documentclass] = STATE(200),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(200),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(200),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(200),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(200),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(200),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(200),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(200),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(200),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(200),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(200),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(200),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(200),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(200),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(200),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(200),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(200),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(200),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(200),
    [sym_glue_assign] = STATE(200),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(200),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(200),
    [sym_strut] = STATE(200),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(200),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(200),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(200),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(200),
    [sym_setbox] = STATE(200),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(200),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(200),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(200),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(200),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(200),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(200),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(200),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(200),
    [sym_token] = STATE(200),
    [sym_escaped] = STATE(200),
    [aux_sym_text_mode_repeat1] = STATE(200),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(190),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(192),
    [sym_alignment_tab] = ACTIONS(192),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(194),
    [sym_magic_comment] = ACTIONS(194),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [17] = {
    [sym_display_math_env_group] = STATE(202),
    [sym_inline_math_env_group] = STATE(203),
    [sym_verbatim_env_group] = STATE(204),
    [sym_name_group] = STATE(205),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(197),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [18] = {
    [sym_name_group] = STATE(207),
    [sym_opt_text_group] = STATE(208),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [19] = {
    [sym_name_group] = STATE(210),
    [sym_opt_text_group] = STATE(211),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [20] = {
    [sym_text_group] = STATE(212),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [21] = {
    [sym_text_group] = STATE(214),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [22] = {
    [sym_text_group] = STATE(215),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [23] = {
    [sym_text_group] = STATE(216),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [24] = {
    [sym_text_group] = STATE(218),
    [sym_opt_text_group] = STATE(219),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(203),
  },
  [25] = {
    [sym__escape] = ACTIONS(205),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(205),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(207),
    [sym_math_shift] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [ts_builtin_sym_end] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(205),
  },
  [26] = {
    [sym_escaped] = STATE(221),
    [sym__escape] = ACTIONS(210),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [27] = {
    [sym_text_group] = STATE(222),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [28] = {
    [sym_text_group] = STATE(223),
    [sym_opt_text_group] = STATE(224),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [29] = {
    [sym_text_group] = STATE(225),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [30] = {
    [sym_text_group] = STATE(226),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [31] = {
    [sym_text_group] = STATE(227),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [32] = {
    [sym__escape] = ACTIONS(212),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(212),
    [sym_alignment_tab] = ACTIONS(212),
    [sym_begin_group] = ACTIONS(212),
    [sym_comment] = ACTIONS(214),
    [sym_magic_comment] = ACTIONS(214),
    [sym_math_shift] = ACTIONS(212),
    [sym_parameter_char] = ACTIONS(212),
    [sym_subscript] = ACTIONS(212),
    [sym_superscript] = ACTIONS(212),
    [ts_builtin_sym_end] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(212),
  },
  [33] = {
    [sym__escape] = ACTIONS(217),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_comment] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(217),
  },
  [34] = {
    [sym__escape] = ACTIONS(222),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(222),
    [sym_alignment_tab] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(222),
    [sym_comment] = ACTIONS(224),
    [sym_magic_comment] = ACTIONS(224),
    [sym_math_shift] = ACTIONS(222),
    [sym_parameter_char] = ACTIONS(222),
    [sym_subscript] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [ts_builtin_sym_end] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(222),
  },
  [35] = {
    [sym__escape] = ACTIONS(227),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_comment] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(227),
  },
  [36] = {
    [sym_glue_token] = STATE(232),
    [sym_dimension_token] = STATE(230),
    [sym_box_dimension_token] = STATE(233),
    [sym_glue] = STATE(234),
    [sym_box_dimension_ref] = STATE(230),
    [sym_dimension] = STATE(235),
    [sym_token] = STATE(230),
    [sym__escape] = ACTIONS(232),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(234),
    [sym_unit] = ACTIONS(236),
    [sym_decimal] = ACTIONS(238),
  },
  [37] = {
    [sym_dimension_token] = STATE(238),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(238),
    [sym_dimension] = STATE(241),
    [sym_token] = STATE(238),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(242),
    [sym_unit] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
  },
  [38] = {
    [sym_glue_token] = STATE(232),
    [sym_dimension_token] = STATE(230),
    [sym_box_dimension_token] = STATE(233),
    [sym_glue] = STATE(242),
    [sym_box_dimension_ref] = STATE(230),
    [sym_dimension] = STATE(235),
    [sym_token] = STATE(230),
    [sym__escape] = ACTIONS(232),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(236),
    [sym_decimal] = ACTIONS(238),
  },
  [39] = {
    [sym__escape] = ACTIONS(248),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(248),
    [sym_alignment_tab] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(248),
    [sym_comment] = ACTIONS(250),
    [sym_magic_comment] = ACTIONS(250),
    [sym_math_shift] = ACTIONS(248),
    [sym_parameter_char] = ACTIONS(248),
    [sym_subscript] = ACTIONS(248),
    [sym_superscript] = ACTIONS(248),
    [ts_builtin_sym_end] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(248),
  },
  [40] = {
    [sym_text_group] = STATE(243),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [41] = {
    [sym_text_group] = STATE(245),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(253),
    [anon_sym_spread] = ACTIONS(253),
  },
  [42] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(255),
  },
  [43] = {
    [sym_dimension_token] = STATE(248),
    [sym_box_dimension_token] = STATE(250),
    [sym_box_dimension_ref] = STATE(248),
    [sym_dimension] = STATE(251),
    [sym_token] = STATE(248),
    [sym__escape] = ACTIONS(257),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(259),
    [sym_decimal] = ACTIONS(261),
  },
  [44] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(263),
  },
  [45] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(265),
  },
  [46] = {
    [sym_text_group] = STATE(254),
    [sym_opt_text_group] = STATE(255),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [47] = {
    [sym_text_group] = STATE(256),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [48] = {
    [sym_text_group] = STATE(257),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [49] = {
    [sym_text_group] = STATE(258),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [50] = {
    [sym_text_group] = STATE(259),
    [sym_opt_text_group] = STATE(260),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [51] = {
    [sym__common] = STATE(261),
    [sym_inline_verbatim] = STATE(261),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(261),
    [sym_parameter] = STATE(261),
    [sym_text_env] = STATE(261),
    [sym__display_math] = STATE(261),
    [sym_tex_display_math] = STATE(261),
    [sym_latex_display_math] = STATE(261),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(261),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(261),
    [sym_tex_inline_math] = STATE(261),
    [sym_latex_inline_math] = STATE(261),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(261),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(261),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(261),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(261),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(261),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(261),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(261),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(261),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(261),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(261),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(261),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(261),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(261),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(261),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(261),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(261),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(261),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(261),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(261),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(261),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(261),
    [sym_glue_assign] = STATE(261),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(261),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(261),
    [sym_strut] = STATE(261),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(261),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(261),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(261),
    [sym_movebox_token] = STATE(43),
    [sym__box] = STATE(261),
    [sym_setbox] = STATE(261),
    [sym_setbox_token] = STATE(44),
    [sym_box_dimension_assign] = STATE(261),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(261),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(261),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(261),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(261),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(261),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(261),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(261),
    [sym_token] = STATE(261),
    [sym_escaped] = STATE(261),
    [aux_sym_text_mode_repeat1] = STATE(261),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(53),
    [sym__escape] = ACTIONS(5),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(267),
    [sym_alignment_tab] = ACTIONS(267),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(269),
    [sym_magic_comment] = ACTIONS(269),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [ts_builtin_sym_end] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(28),
  },
  [52] = {
    [aux_sym_parameter_repeat1] = STATE(263),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_parameter_char] = ACTIONS(274),
    [sym_number] = ACTIONS(276),
  },
  [53] = {
    [aux_sym_text_repeat1] = STATE(264),
    [sym__escape] = ACTIONS(278),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(278),
    [sym_alignment_tab] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(278),
    [sym_comment] = ACTIONS(280),
    [sym_magic_comment] = ACTIONS(280),
    [sym_math_shift] = ACTIONS(278),
    [sym_parameter_char] = ACTIONS(278),
    [sym_subscript] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(283),
  },
  [54] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(285),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [55] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(287),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [56] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(289),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [57] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(291),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [58] = {
    [sym__escape] = ACTIONS(293),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_comment] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(295),
    [sym_math_shift] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(293),
  },
  [59] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(298),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [60] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(300),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [61] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(302),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [62] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(304),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [63] = {
    [sym__escape] = ACTIONS(306),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(306),
    [sym_alignment_tab] = ACTIONS(306),
    [sym_begin_group] = ACTIONS(306),
    [sym_comment] = ACTIONS(308),
    [sym_magic_comment] = ACTIONS(308),
    [sym_parameter_char] = ACTIONS(306),
    [sym_subscript] = ACTIONS(306),
    [sym_superscript] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(306),
  },
  [64] = {
    [sym__escape] = ACTIONS(311),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(311),
    [sym_alignment_tab] = ACTIONS(311),
    [sym_begin_group] = ACTIONS(311),
    [sym_comment] = ACTIONS(313),
    [sym_magic_comment] = ACTIONS(313),
    [sym_parameter_char] = ACTIONS(311),
    [sym_subscript] = ACTIONS(311),
    [sym_superscript] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(311),
  },
  [65] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(316),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [66] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(318),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [67] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(320),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [68] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(322),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [69] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(324),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [70] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(326),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [71] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(328),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [72] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(330),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [73] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(332),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [74] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(334),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [75] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(336),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [76] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(338),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [77] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(340),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [78] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(342),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [79] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(344),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [80] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(346),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [81] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(348),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [82] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(350),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [83] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(352),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [84] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(354),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [85] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(356),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [86] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(358),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [87] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(360),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [88] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(362),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [89] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(364),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [90] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(366),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [91] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(368),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [92] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(370),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [93] = {
    [aux_sym_token_repeat1] = STATE(309),
    [sym__explsyntaxoff_word] = ACTIONS(374),
    [sym__explsyntaxon_word] = ACTIONS(376),
    [sym__makeatletter_word] = ACTIONS(378),
    [sym__makeatother_word] = ACTIONS(380),
    [sym__non_letter_or_other] = ACTIONS(382),
    [sym__providesexplclass_word] = ACTIONS(40),
    [sym__providesexplfile_word] = ACTIONS(42),
    [sym__providesexplpackage_word] = ACTIONS(44),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_verb] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_begin] = ACTIONS(52),
    [anon_sym_documentclass] = ACTIONS(54),
    [anon_sym_usepackage] = ACTIONS(56),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(384),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [anon_sym_emph] = ACTIONS(66),
    [anon_sym_footnote] = ACTIONS(68),
    [anon_sym_textbf] = ACTIONS(70),
    [anon_sym_textit] = ACTIONS(72),
    [anon_sym_texttt] = ACTIONS(74),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [anon_sym_href] = ACTIONS(96),
    [aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH] = ACTIONS(98),
    [anon_sym_hyperbaseurl] = ACTIONS(100),
    [anon_sym_hyperimage] = ACTIONS(102),
    [anon_sym_hyperref] = ACTIONS(104),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(388),
  },
  [94] = {
    [sym__common] = STATE(311),
    [sym_inline_verbatim] = STATE(311),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(311),
    [sym_parameter] = STATE(311),
    [sym_text_env] = STATE(311),
    [sym__display_math] = STATE(311),
    [sym_tex_display_math] = STATE(311),
    [sym_latex_display_math] = STATE(311),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(311),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(311),
    [sym_tex_inline_math] = STATE(311),
    [sym_latex_inline_math] = STATE(311),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(311),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(311),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(311),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(311),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(311),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(311),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(311),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(311),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(311),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(311),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(311),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(311),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(311),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(311),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(311),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(311),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(311),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(311),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(311),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(311),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(311),
    [sym_glue_assign] = STATE(311),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(311),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(311),
    [sym_strut] = STATE(311),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(311),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(311),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(311),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(311),
    [sym_setbox] = STATE(311),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(311),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(311),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(311),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(311),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(311),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(311),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(311),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(311),
    [sym_token] = STATE(311),
    [sym_escaped] = STATE(311),
    [aux_sym_text_mode_repeat1] = STATE(311),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(390),
    [sym_alignment_tab] = ACTIONS(390),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(392),
    [sym_end_group] = ACTIONS(395),
    [sym_magic_comment] = ACTIONS(392),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [95] = {
    [sym__escape] = ACTIONS(397),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_comment] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(397),
  },
  [96] = {
    [sym__common] = STATE(153),
    [sym__math_mode] = STATE(153),
    [sym_math_mode] = STATE(313),
    [sym_parameter] = STATE(153),
    [sym_math_env] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(147),
    [sym_begin] = STATE(148),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(153),
    [sym_include_token] = STATE(20),
    [sym_storage] = STATE(153),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(153),
    [sym_catcode_token] = STATE(26),
    [sym_makeatletter] = STATE(153),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(153),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(153),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(153),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(153),
    [sym_glue_assign] = STATE(153),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(153),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(153),
    [sym_strut] = STATE(153),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(153),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(153),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(153),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(153),
    [sym_setbox] = STATE(153),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(153),
    [sym_box_dimension_token] = STATE(45),
    [sym_math_group] = STATE(153),
    [sym_begin_opt] = STATE(152),
    [sym_end_opt] = STATE(152),
    [sym_text] = STATE(153),
    [sym_token] = STATE(153),
    [sym_escaped] = STATE(153),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(131),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(402),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [97] = {
    [sym__escape] = ACTIONS(144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(144),
    [sym_alignment_tab] = ACTIONS(144),
    [sym_begin_group] = ACTIONS(144),
    [sym_comment] = ACTIONS(146),
    [sym_end_group] = ACTIONS(144),
    [sym_magic_comment] = ACTIONS(146),
    [sym_math_shift] = ACTIONS(144),
    [sym_parameter_char] = ACTIONS(144),
    [sym_subscript] = ACTIONS(144),
    [sym_superscript] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(144),
  },
  [98] = {
    [sym__escape] = ACTIONS(149),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_comment] = ACTIONS(151),
    [sym_end_group] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(151),
    [sym_math_shift] = ACTIONS(149),
    [sym_parameter_char] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(149),
  },
  [99] = {
    [sym__escape] = ACTIONS(154),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(154),
    [sym_alignment_tab] = ACTIONS(154),
    [sym_begin_group] = ACTIONS(154),
    [sym_comment] = ACTIONS(156),
    [sym_end_group] = ACTIONS(154),
    [sym_magic_comment] = ACTIONS(156),
    [sym_math_shift] = ACTIONS(154),
    [sym_parameter_char] = ACTIONS(154),
    [sym_subscript] = ACTIONS(154),
    [sym_superscript] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(154),
  },
  [100] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_delim] = ACTIONS(404),
  },
  [101] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(315),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(165),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [102] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(316),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(165),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [103] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(318),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_end_inline_math] = STATE(319),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(406),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [104] = {
    [sym__common] = STATE(181),
    [sym__math_mode] = STATE(181),
    [sym_math_mode] = STATE(320),
    [sym_parameter] = STATE(181),
    [sym_math_env] = STATE(181),
    [sym_inline_math_end] = STATE(321),
    [sym_tag] = STATE(181),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end_token] = STATE(322),
    [sym_include] = STATE(181),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(181),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(181),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(181),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(181),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(181),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(181),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(181),
    [sym_glue_assign] = STATE(181),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(181),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(181),
    [sym_strut] = STATE(181),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(181),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(181),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(181),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(181),
    [sym_setbox] = STATE(181),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(181),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(181),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(181),
    [sym_token] = STATE(181),
    [sym_escaped] = STATE(181),
    [aux_sym_math_mode_repeat1] = STATE(181),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(167),
    [sym_alignment_tab] = ACTIONS(167),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(171),
    [sym_magic_comment] = ACTIONS(171),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(167),
    [sym_superscript] = ACTIONS(167),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [105] = {
    [sym_verbatim_end] = STATE(323),
    [sym_verbatim_text] = STATE(324),
    [sym_end_token] = STATE(325),
    [aux_sym_verbatim_text_repeat1] = STATE(196),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(188),
  },
  [106] = {
    [sym__common] = STATE(328),
    [sym_inline_verbatim] = STATE(328),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(328),
    [sym_parameter] = STATE(328),
    [sym_text_env] = STATE(328),
    [sym__display_math] = STATE(328),
    [sym_tex_display_math] = STATE(328),
    [sym_latex_display_math] = STATE(328),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(328),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(328),
    [sym_tex_inline_math] = STATE(328),
    [sym_latex_inline_math] = STATE(328),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(328),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(328),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(326),
    [sym_end_token] = STATE(327),
    [sym_documentclass] = STATE(328),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(328),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(328),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(328),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(328),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(328),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(328),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(328),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(328),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(328),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(328),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(328),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(328),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(328),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(328),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(328),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(328),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(328),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(328),
    [sym_glue_assign] = STATE(328),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(328),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(328),
    [sym_strut] = STATE(328),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(328),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(328),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(328),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(328),
    [sym_setbox] = STATE(328),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(328),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(328),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(328),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(328),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(328),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(328),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(328),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(328),
    [sym_token] = STATE(328),
    [sym_escaped] = STATE(328),
    [aux_sym_text_mode_repeat1] = STATE(328),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(190),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(408),
    [sym_alignment_tab] = ACTIONS(408),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(410),
    [sym_magic_comment] = ACTIONS(410),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [107] = {
    [sym_name_group] = STATE(330),
    [sym_opt_text_group] = STATE(331),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(413),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [108] = {
    [sym_name_group] = STATE(332),
    [sym_opt_text_group] = STATE(333),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(413),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [109] = {
    [sym_text_group] = STATE(334),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [110] = {
    [sym_text_group] = STATE(335),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [111] = {
    [sym_text_group] = STATE(336),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [112] = {
    [sym_text_group] = STATE(337),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [113] = {
    [sym_text_group] = STATE(339),
    [sym_opt_text_group] = STATE(340),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_STAR] = ACTIONS(415),
  },
  [114] = {
    [sym__escape] = ACTIONS(205),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(205),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
    [sym_end_group] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(207),
    [sym_math_shift] = ACTIONS(205),
    [sym_parameter_char] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(205),
  },
  [115] = {
    [sym_escaped] = STATE(341),
    [sym__escape] = ACTIONS(210),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [116] = {
    [sym_text_group] = STATE(342),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [117] = {
    [sym_text_group] = STATE(343),
    [sym_opt_text_group] = STATE(344),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [118] = {
    [sym_text_group] = STATE(345),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [119] = {
    [sym_text_group] = STATE(346),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [120] = {
    [sym_text_group] = STATE(347),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [121] = {
    [sym__escape] = ACTIONS(212),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(212),
    [sym_alignment_tab] = ACTIONS(212),
    [sym_begin_group] = ACTIONS(212),
    [sym_comment] = ACTIONS(214),
    [sym_end_group] = ACTIONS(212),
    [sym_magic_comment] = ACTIONS(214),
    [sym_math_shift] = ACTIONS(212),
    [sym_parameter_char] = ACTIONS(212),
    [sym_subscript] = ACTIONS(212),
    [sym_superscript] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(212),
  },
  [122] = {
    [sym__escape] = ACTIONS(217),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_comment] = ACTIONS(219),
    [sym_end_group] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(219),
    [sym_math_shift] = ACTIONS(217),
    [sym_parameter_char] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(217),
  },
  [123] = {
    [sym__escape] = ACTIONS(222),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(222),
    [sym_alignment_tab] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(222),
    [sym_comment] = ACTIONS(224),
    [sym_end_group] = ACTIONS(222),
    [sym_magic_comment] = ACTIONS(224),
    [sym_math_shift] = ACTIONS(222),
    [sym_parameter_char] = ACTIONS(222),
    [sym_subscript] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(222),
  },
  [124] = {
    [sym__escape] = ACTIONS(227),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_comment] = ACTIONS(229),
    [sym_end_group] = ACTIONS(227),
    [sym_magic_comment] = ACTIONS(229),
    [sym_math_shift] = ACTIONS(227),
    [sym_parameter_char] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(227),
  },
  [125] = {
    [sym_glue_token] = STATE(352),
    [sym_dimension_token] = STATE(350),
    [sym_box_dimension_token] = STATE(353),
    [sym_glue] = STATE(354),
    [sym_box_dimension_ref] = STATE(350),
    [sym_dimension] = STATE(355),
    [sym_token] = STATE(350),
    [sym__escape] = ACTIONS(417),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(419),
    [sym_unit] = ACTIONS(421),
    [sym_decimal] = ACTIONS(423),
  },
  [126] = {
    [sym_dimension_token] = STATE(358),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(358),
    [sym_dimension] = STATE(361),
    [sym_token] = STATE(358),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(427),
    [sym_unit] = ACTIONS(429),
    [sym_decimal] = ACTIONS(431),
  },
  [127] = {
    [sym_glue_token] = STATE(352),
    [sym_dimension_token] = STATE(350),
    [sym_box_dimension_token] = STATE(353),
    [sym_glue] = STATE(362),
    [sym_box_dimension_ref] = STATE(350),
    [sym_dimension] = STATE(355),
    [sym_token] = STATE(350),
    [sym__escape] = ACTIONS(417),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(421),
    [sym_decimal] = ACTIONS(423),
  },
  [128] = {
    [sym__escape] = ACTIONS(248),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(248),
    [sym_alignment_tab] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(248),
    [sym_comment] = ACTIONS(250),
    [sym_end_group] = ACTIONS(248),
    [sym_magic_comment] = ACTIONS(250),
    [sym_math_shift] = ACTIONS(248),
    [sym_parameter_char] = ACTIONS(248),
    [sym_subscript] = ACTIONS(248),
    [sym_superscript] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(248),
  },
  [129] = {
    [sym_text_group] = STATE(363),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [130] = {
    [sym_text_group] = STATE(365),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(433),
    [anon_sym_spread] = ACTIONS(433),
  },
  [131] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(435),
  },
  [132] = {
    [sym_dimension_token] = STATE(248),
    [sym_box_dimension_token] = STATE(250),
    [sym_box_dimension_ref] = STATE(248),
    [sym_dimension] = STATE(367),
    [sym_token] = STATE(248),
    [sym__escape] = ACTIONS(257),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(259),
    [sym_decimal] = ACTIONS(261),
  },
  [133] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(437),
  },
  [134] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(439),
  },
  [135] = {
    [sym_text_group] = STATE(370),
    [sym_opt_text_group] = STATE(371),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [136] = {
    [sym_text_group] = STATE(372),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [137] = {
    [sym_text_group] = STATE(373),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [138] = {
    [sym_text_group] = STATE(374),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [139] = {
    [sym_text_group] = STATE(375),
    [sym_opt_text_group] = STATE(376),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [140] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(446),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [141] = {
    [aux_sym_parameter_repeat1] = STATE(263),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_parameter_char] = ACTIONS(274),
    [sym_number] = ACTIONS(448),
  },
  [142] = {
    [aux_sym_text_repeat1] = STATE(380),
    [sym__escape] = ACTIONS(278),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(278),
    [sym_alignment_tab] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(278),
    [sym_comment] = ACTIONS(280),
    [sym_end_group] = ACTIONS(278),
    [sym_magic_comment] = ACTIONS(280),
    [sym_math_shift] = ACTIONS(278),
    [sym_parameter_char] = ACTIONS(278),
    [sym_subscript] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(450),
  },
  [143] = {
    [aux_sym_token_repeat1] = STATE(92),
    [sym__explsyntaxoff_word] = ACTIONS(30),
    [sym__explsyntaxon_word] = ACTIONS(32),
    [sym__makeatletter_word] = ACTIONS(34),
    [sym__makeatother_word] = ACTIONS(36),
    [sym__non_letter_or_other] = ACTIONS(38),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_tag] = ACTIONS(452),
    [anon_sym_begin] = ACTIONS(52),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(62),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(106),
  },
  [144] = {
    [sym__common] = STATE(407),
    [sym__math_mode] = STATE(407),
    [sym_parameter] = STATE(407),
    [sym_math_env] = STATE(407),
    [sym_tag] = STATE(407),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(407),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(407),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(407),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(407),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(407),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(407),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(407),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(407),
    [sym_glue_assign] = STATE(407),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(407),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(407),
    [sym_strut] = STATE(407),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(407),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(407),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(407),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(407),
    [sym_setbox] = STATE(407),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(407),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(407),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(407),
    [sym_token] = STATE(407),
    [sym_escaped] = STATE(407),
    [aux_sym_math_mode_repeat1] = STATE(407),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(454),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(456),
    [sym_alignment_tab] = ACTIONS(456),
    [sym_begin_group] = ACTIONS(458),
    [sym_comment] = ACTIONS(460),
    [sym_end_group] = ACTIONS(463),
    [sym_magic_comment] = ACTIONS(460),
    [sym_parameter_char] = ACTIONS(465),
    [sym_subscript] = ACTIONS(456),
    [sym_superscript] = ACTIONS(456),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(471),
  },
  [145] = {
    [sym__common] = STATE(153),
    [sym__math_mode] = STATE(153),
    [sym_math_mode] = STATE(411),
    [sym_parameter] = STATE(153),
    [sym_math_env] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(147),
    [sym_begin] = STATE(148),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(153),
    [sym_include_token] = STATE(20),
    [sym_storage] = STATE(153),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(153),
    [sym_catcode_token] = STATE(26),
    [sym_makeatletter] = STATE(153),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(153),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(153),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(153),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(153),
    [sym_glue_assign] = STATE(153),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(153),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(153),
    [sym_strut] = STATE(153),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(153),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(153),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(153),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(153),
    [sym_setbox] = STATE(153),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(153),
    [sym_box_dimension_token] = STATE(45),
    [sym_math_group] = STATE(153),
    [sym_begin_opt] = STATE(152),
    [sym_end_opt] = STATE(152),
    [sym_text] = STATE(153),
    [sym_token] = STATE(153),
    [sym_escaped] = STATE(153),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(131),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(473),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [146] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(475),
  },
  [147] = {
    [sym_math_text_group] = STATE(414),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(477),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [148] = {
    [sym__common] = STATE(416),
    [sym__math_mode] = STATE(416),
    [sym_parameter] = STATE(416),
    [sym_math_env] = STATE(416),
    [sym_tag] = STATE(416),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end] = STATE(415),
    [sym_end_token] = STATE(199),
    [sym_include] = STATE(416),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(416),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(416),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(416),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(416),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(416),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(416),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(416),
    [sym_glue_assign] = STATE(416),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(416),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(416),
    [sym_strut] = STATE(416),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(416),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(416),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(416),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(416),
    [sym_setbox] = STATE(416),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(416),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(416),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(416),
    [sym_token] = STATE(416),
    [sym_escaped] = STATE(416),
    [aux_sym_math_mode_repeat1] = STATE(416),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(479),
    [sym_alignment_tab] = ACTIONS(479),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(481),
    [sym_magic_comment] = ACTIONS(481),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(479),
    [sym_superscript] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [149] = {
    [sym_name_group] = STATE(418),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(484),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [150] = {
    [sym_dimension_token] = STATE(248),
    [sym_box_dimension_token] = STATE(250),
    [sym_box_dimension_ref] = STATE(248),
    [sym_dimension] = STATE(419),
    [sym_token] = STATE(248),
    [sym__escape] = ACTIONS(257),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(259),
    [sym_decimal] = ACTIONS(261),
  },
  [151] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(486),
  },
  [152] = {
    [sym__escape] = ACTIONS(488),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(488),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(488),
    [sym_comment] = ACTIONS(490),
    [sym_magic_comment] = ACTIONS(490),
    [sym_math_shift] = ACTIONS(488),
    [sym_parameter_char] = ACTIONS(488),
    [sym_subscript] = ACTIONS(488),
    [sym_superscript] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(488),
  },
  [153] = {
    [sym__common] = STATE(421),
    [sym__math_mode] = STATE(421),
    [sym_parameter] = STATE(421),
    [sym_math_env] = STATE(421),
    [sym_tag] = STATE(421),
    [sym_tag_token] = STATE(147),
    [sym_begin] = STATE(148),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(421),
    [sym_include_token] = STATE(20),
    [sym_storage] = STATE(421),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(421),
    [sym_catcode_token] = STATE(26),
    [sym_makeatletter] = STATE(421),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(421),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(421),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(421),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(421),
    [sym_glue_assign] = STATE(421),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(421),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(421),
    [sym_strut] = STATE(421),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(421),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(421),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(421),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(421),
    [sym_setbox] = STATE(421),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(421),
    [sym_box_dimension_token] = STATE(45),
    [sym_math_group] = STATE(421),
    [sym_begin_opt] = STATE(152),
    [sym_end_opt] = STATE(152),
    [sym_text] = STATE(421),
    [sym_token] = STATE(421),
    [sym_escaped] = STATE(421),
    [aux_sym_math_mode_repeat1] = STATE(421),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(131),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(493),
    [sym_alignment_tab] = ACTIONS(493),
    [sym_begin_group] = ACTIONS(135),
    [sym_comment] = ACTIONS(495),
    [sym_magic_comment] = ACTIONS(495),
    [sym_math_shift] = ACTIONS(498),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(493),
    [sym_superscript] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [154] = {
    [aux_sym_text_repeat1] = STATE(422),
    [sym__escape] = ACTIONS(278),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(278),
    [sym_alignment_tab] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(278),
    [sym_comment] = ACTIONS(280),
    [sym_magic_comment] = ACTIONS(280),
    [sym_math_shift] = ACTIONS(278),
    [sym_parameter_char] = ACTIONS(278),
    [sym_subscript] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(500),
  },
  [155] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_body] = ACTIONS(502),
  },
  [156] = {
    [aux_sym_token_repeat1] = STATE(431),
    [sym__explsyntaxoff_word] = ACTIONS(504),
    [sym__explsyntaxon_word] = ACTIONS(506),
    [sym__makeatletter_word] = ACTIONS(508),
    [sym__makeatother_word] = ACTIONS(510),
    [sym__non_letter_or_other] = ACTIONS(512),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_tag] = ACTIONS(452),
    [anon_sym_begin] = ACTIONS(52),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(514),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(518),
  },
  [157] = {
    [sym__common] = STATE(433),
    [sym__math_mode] = STATE(433),
    [sym_parameter] = STATE(433),
    [sym_math_env] = STATE(433),
    [sym_tag] = STATE(433),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(433),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(433),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(433),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(433),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(433),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(433),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(433),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(433),
    [sym_glue_assign] = STATE(433),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(433),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(433),
    [sym_strut] = STATE(433),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(433),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(433),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(433),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(433),
    [sym_setbox] = STATE(433),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(433),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(433),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(433),
    [sym_token] = STATE(433),
    [sym_escaped] = STATE(433),
    [aux_sym_math_mode_repeat1] = STATE(433),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(454),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(520),
    [sym_alignment_tab] = ACTIONS(520),
    [sym_begin_group] = ACTIONS(458),
    [sym_comment] = ACTIONS(522),
    [sym_end_group] = ACTIONS(525),
    [sym_magic_comment] = ACTIONS(522),
    [sym_parameter_char] = ACTIONS(465),
    [sym_subscript] = ACTIONS(520),
    [sym_superscript] = ACTIONS(520),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(471),
  },
  [158] = {
    [sym__escape] = ACTIONS(149),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_comment] = ACTIONS(151),
    [sym_magic_comment] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(149),
  },
  [159] = {
    [sym__escape] = ACTIONS(154),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(154),
    [sym_alignment_tab] = ACTIONS(154),
    [sym_begin_group] = ACTIONS(154),
    [sym_comment] = ACTIONS(156),
    [sym_magic_comment] = ACTIONS(156),
    [sym_parameter_char] = ACTIONS(154),
    [sym_subscript] = ACTIONS(154),
    [sym_superscript] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(154),
  },
  [160] = {
    [sym_end_display_math] = STATE(435),
    [sym__escape] = ACTIONS(527),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [161] = {
    [sym_math_text_group] = STATE(437),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(529),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [162] = {
    [sym__common] = STATE(440),
    [sym__math_mode] = STATE(440),
    [sym_parameter] = STATE(440),
    [sym_math_env] = STATE(440),
    [sym_tag] = STATE(440),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end] = STATE(438),
    [sym_end_token] = STATE(439),
    [sym_include] = STATE(440),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(440),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(440),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(440),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(440),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(440),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(440),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(440),
    [sym_glue_assign] = STATE(440),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(440),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(440),
    [sym_strut] = STATE(440),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(440),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(440),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(440),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(440),
    [sym_setbox] = STATE(440),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(440),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(440),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(440),
    [sym_token] = STATE(440),
    [sym_escaped] = STATE(440),
    [aux_sym_math_mode_repeat1] = STATE(440),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(531),
    [sym_alignment_tab] = ACTIONS(531),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(533),
    [sym_magic_comment] = ACTIONS(533),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(531),
    [sym_superscript] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [163] = {
    [sym_text_group] = STATE(442),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(536),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [164] = {
    [sym__escape] = ACTIONS(205),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(205),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
    [sym_magic_comment] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(205),
  },
  [165] = {
    [sym_escaped] = STATE(443),
    [sym__escape] = ACTIONS(210),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [166] = {
    [sym__escape] = ACTIONS(212),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(212),
    [sym_alignment_tab] = ACTIONS(212),
    [sym_begin_group] = ACTIONS(212),
    [sym_comment] = ACTIONS(214),
    [sym_magic_comment] = ACTIONS(214),
    [sym_parameter_char] = ACTIONS(212),
    [sym_subscript] = ACTIONS(212),
    [sym_superscript] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(212),
  },
  [167] = {
    [sym__escape] = ACTIONS(217),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_comment] = ACTIONS(219),
    [sym_magic_comment] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(217),
  },
  [168] = {
    [sym__escape] = ACTIONS(222),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(222),
    [sym_alignment_tab] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(222),
    [sym_comment] = ACTIONS(224),
    [sym_magic_comment] = ACTIONS(224),
    [sym_parameter_char] = ACTIONS(222),
    [sym_subscript] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(222),
  },
  [169] = {
    [sym__escape] = ACTIONS(227),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_comment] = ACTIONS(229),
    [sym_magic_comment] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(227),
  },
  [170] = {
    [sym_glue_token] = STATE(448),
    [sym_dimension_token] = STATE(446),
    [sym_box_dimension_token] = STATE(449),
    [sym_glue] = STATE(450),
    [sym_box_dimension_ref] = STATE(446),
    [sym_dimension] = STATE(451),
    [sym_token] = STATE(446),
    [sym__escape] = ACTIONS(538),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(540),
    [sym_unit] = ACTIONS(542),
    [sym_decimal] = ACTIONS(544),
  },
  [171] = {
    [sym_dimension_token] = STATE(454),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(454),
    [sym_dimension] = STATE(457),
    [sym_token] = STATE(454),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(548),
    [sym_unit] = ACTIONS(550),
    [sym_decimal] = ACTIONS(552),
  },
  [172] = {
    [sym_glue_token] = STATE(448),
    [sym_dimension_token] = STATE(446),
    [sym_box_dimension_token] = STATE(449),
    [sym_glue] = STATE(458),
    [sym_box_dimension_ref] = STATE(446),
    [sym_dimension] = STATE(451),
    [sym_token] = STATE(446),
    [sym__escape] = ACTIONS(538),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(542),
    [sym_decimal] = ACTIONS(544),
  },
  [173] = {
    [sym__escape] = ACTIONS(248),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(248),
    [sym_alignment_tab] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(248),
    [sym_comment] = ACTIONS(250),
    [sym_magic_comment] = ACTIONS(250),
    [sym_parameter_char] = ACTIONS(248),
    [sym_subscript] = ACTIONS(248),
    [sym_superscript] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(248),
  },
  [174] = {
    [sym_text_group] = STATE(459),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(536),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [175] = {
    [sym_text_group] = STATE(461),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(536),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(554),
    [anon_sym_spread] = ACTIONS(554),
  },
  [176] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(556),
  },
  [177] = {
    [sym_dimension_token] = STATE(248),
    [sym_box_dimension_token] = STATE(250),
    [sym_box_dimension_ref] = STATE(248),
    [sym_dimension] = STATE(463),
    [sym_token] = STATE(248),
    [sym__escape] = ACTIONS(257),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(259),
    [sym_decimal] = ACTIONS(261),
  },
  [178] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(558),
  },
  [179] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(560),
  },
  [180] = {
    [sym__escape] = ACTIONS(488),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(488),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(488),
    [sym_comment] = ACTIONS(490),
    [sym_magic_comment] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(488),
    [sym_subscript] = ACTIONS(488),
    [sym_superscript] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(488),
  },
  [181] = {
    [sym__common] = STATE(466),
    [sym__math_mode] = STATE(466),
    [sym_parameter] = STATE(466),
    [sym_math_env] = STATE(466),
    [sym_tag] = STATE(466),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(466),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(466),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(466),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(466),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(466),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(466),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(466),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(466),
    [sym_glue_assign] = STATE(466),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(466),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(466),
    [sym_strut] = STATE(466),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(466),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(466),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(466),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(466),
    [sym_setbox] = STATE(466),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(466),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(466),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(466),
    [sym_token] = STATE(466),
    [sym_escaped] = STATE(466),
    [aux_sym_math_mode_repeat1] = STATE(466),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(498),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [182] = {
    [aux_sym_parameter_repeat1] = STATE(263),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_parameter_char] = ACTIONS(274),
    [sym_number] = ACTIONS(567),
  },
  [183] = {
    [aux_sym_text_repeat1] = STATE(468),
    [sym__escape] = ACTIONS(278),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(278),
    [sym_alignment_tab] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(278),
    [sym_comment] = ACTIONS(280),
    [sym_magic_comment] = ACTIONS(280),
    [sym_parameter_char] = ACTIONS(278),
    [sym_subscript] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(569),
  },
  [184] = {
    [sym_display_math_end] = STATE(469),
    [sym_end_token] = STATE(470),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [185] = {
    [aux_sym_token_repeat1] = STATE(431),
    [sym__explsyntaxoff_word] = ACTIONS(504),
    [sym__explsyntaxon_word] = ACTIONS(506),
    [sym__makeatletter_word] = ACTIONS(508),
    [sym__makeatother_word] = ACTIONS(510),
    [sym__non_letter_or_other] = ACTIONS(512),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_tag] = ACTIONS(452),
    [anon_sym_begin] = ACTIONS(52),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(514),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(518),
  },
  [186] = {
    [sym_end_inline_math] = STATE(473),
    [sym__escape] = ACTIONS(573),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [187] = {
    [sym__escape] = ACTIONS(575),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(575),
    [sym_alignment_tab] = ACTIONS(575),
    [sym_begin_group] = ACTIONS(575),
    [sym_comment] = ACTIONS(577),
    [sym_magic_comment] = ACTIONS(577),
    [sym_math_shift] = ACTIONS(575),
    [sym_parameter_char] = ACTIONS(575),
    [sym_subscript] = ACTIONS(575),
    [sym_superscript] = ACTIONS(575),
    [ts_builtin_sym_end] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(575),
  },
  [188] = {
    [aux_sym_token_repeat1] = STATE(431),
    [sym__explsyntaxoff_word] = ACTIONS(504),
    [sym__explsyntaxon_word] = ACTIONS(506),
    [sym__makeatletter_word] = ACTIONS(508),
    [sym__makeatother_word] = ACTIONS(510),
    [sym__non_letter_or_other] = ACTIONS(512),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_tag] = ACTIONS(452),
    [anon_sym_begin] = ACTIONS(52),
    [anon_sym_end] = ACTIONS(580),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(514),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(518),
  },
  [189] = {
    [sym_inline_math_end] = STATE(475),
    [sym_end_token] = STATE(191),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [190] = {
    [sym__escape] = ACTIONS(582),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_begin_group] = ACTIONS(582),
    [sym_comment] = ACTIONS(584),
    [sym_magic_comment] = ACTIONS(584),
    [sym_math_shift] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_superscript] = ACTIONS(582),
    [ts_builtin_sym_end] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(582),
  },
  [191] = {
    [sym_inline_math_env_group] = STATE(477),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(587),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [192] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_end] = ACTIONS(580),
  },
  [193] = {
    [sym__escape] = ACTIONS(589),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(589),
    [sym_comment] = ACTIONS(591),
    [sym_magic_comment] = ACTIONS(591),
    [sym_math_shift] = ACTIONS(589),
    [sym_parameter_char] = ACTIONS(589),
    [sym_subscript] = ACTIONS(589),
    [sym_superscript] = ACTIONS(589),
    [ts_builtin_sym_end] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(589),
  },
  [194] = {
    [sym_verbatim_end] = STATE(478),
    [sym_end_token] = STATE(195),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [195] = {
    [sym_verbatim_env_group] = STATE(480),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(594),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [196] = {
    [aux_sym_verbatim_text_repeat1] = STATE(481),
    [sym__escape] = ACTIONS(596),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(598),
  },
  [197] = {
    [aux_sym_token_repeat1] = STATE(92),
    [sym__explsyntaxoff_word] = ACTIONS(30),
    [sym__explsyntaxon_word] = ACTIONS(32),
    [sym__makeatletter_word] = ACTIONS(34),
    [sym__makeatother_word] = ACTIONS(36),
    [sym__non_letter_or_other] = ACTIONS(38),
    [sym__providesexplclass_word] = ACTIONS(40),
    [sym__providesexplfile_word] = ACTIONS(42),
    [sym__providesexplpackage_word] = ACTIONS(44),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_verb] = ACTIONS(46),
    [anon_sym_LBRACK] = ACTIONS(48),
    [anon_sym_LPAREN] = ACTIONS(50),
    [anon_sym_begin] = ACTIONS(52),
    [anon_sym_end] = ACTIONS(580),
    [anon_sym_documentclass] = ACTIONS(54),
    [anon_sym_usepackage] = ACTIONS(56),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASHsection_PIPEsubsection_PIPEsubsubsection_PIPEparagraph_PIPEsubparagraph_PIPEchapter_PIPEpart_PIPEaddpart_PIPEaddchap_PIPEaddsec_PIPEminisec_SLASH] = ACTIONS(60),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(62),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [anon_sym_emph] = ACTIONS(66),
    [anon_sym_footnote] = ACTIONS(68),
    [anon_sym_textbf] = ACTIONS(70),
    [anon_sym_textit] = ACTIONS(72),
    [anon_sym_texttt] = ACTIONS(74),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [anon_sym_href] = ACTIONS(96),
    [aux_sym_SLASH_LPARENnolink_RPAREN_QMARKurl_SLASH] = ACTIONS(98),
    [anon_sym_hyperbaseurl] = ACTIONS(100),
    [anon_sym_hyperimage] = ACTIONS(102),
    [anon_sym_hyperref] = ACTIONS(104),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(106),
  },
  [198] = {
    [sym__escape] = ACTIONS(600),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_comment] = ACTIONS(602),
    [sym_magic_comment] = ACTIONS(602),
    [sym_math_shift] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [ts_builtin_sym_end] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(600),
  },
  [199] = {
    [sym_name_group] = STATE(482),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [200] = {
    [sym__common] = STATE(484),
    [sym_inline_verbatim] = STATE(484),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(484),
    [sym_parameter] = STATE(484),
    [sym_text_env] = STATE(484),
    [sym__display_math] = STATE(484),
    [sym_tex_display_math] = STATE(484),
    [sym_latex_display_math] = STATE(484),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(484),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(484),
    [sym_tex_inline_math] = STATE(484),
    [sym_latex_inline_math] = STATE(484),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(484),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(484),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(483),
    [sym_end_token] = STATE(199),
    [sym_documentclass] = STATE(484),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(484),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(484),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(484),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(484),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(484),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(484),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(484),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(484),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(484),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(484),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(484),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(484),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(484),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(484),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(484),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(484),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(484),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(484),
    [sym_glue_assign] = STATE(484),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(484),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(484),
    [sym_strut] = STATE(484),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(484),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(484),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(484),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(484),
    [sym_setbox] = STATE(484),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(484),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(484),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(484),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(484),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(484),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(484),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(484),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(484),
    [sym_token] = STATE(484),
    [sym_escaped] = STATE(484),
    [aux_sym_text_mode_repeat1] = STATE(484),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(190),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [201] = {
    [sym_text] = STATE(488),
    [aux_sym_text_repeat1] = STATE(489),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_display_math_env_name] = ACTIONS(610),
    [sym_inline_math_env_name] = ACTIONS(612),
    [sym_verbatim_env_name] = ACTIONS(614),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(616),
  },
  [202] = {
    [sym_text_group] = STATE(492),
    [sym_opt_text_group] = STATE(493),
    [sym_begin_opt] = STATE(494),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(618),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(620),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [203] = {
    [sym__escape] = ACTIONS(622),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(622),
    [sym_alignment_tab] = ACTIONS(622),
    [sym_begin_group] = ACTIONS(622),
    [sym_comment] = ACTIONS(624),
    [sym_magic_comment] = ACTIONS(624),
    [sym_parameter_char] = ACTIONS(622),
    [sym_subscript] = ACTIONS(622),
    [sym_superscript] = ACTIONS(622),
    [anon_sym_LBRACK] = ACTIONS(622),
    [anon_sym_RBRACK] = ACTIONS(622),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(622),
  },
  [204] = {
    [sym_text_group] = STATE(496),
    [sym_opt_text_group] = STATE(497),
    [sym_begin_opt] = STATE(494),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(618),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(627),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [205] = {
    [sym__escape] = ACTIONS(629),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(629),
    [sym_alignment_tab] = ACTIONS(629),
    [sym_begin_group] = ACTIONS(629),
    [sym_comment] = ACTIONS(631),
    [sym_magic_comment] = ACTIONS(631),
    [sym_math_shift] = ACTIONS(629),
    [sym_parameter_char] = ACTIONS(629),
    [sym_subscript] = ACTIONS(629),
    [sym_superscript] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(629),
  },
  [206] = {
    [sym_text] = STATE(488),
    [aux_sym_text_repeat1] = STATE(489),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(634),
  },
  [207] = {
    [sym__escape] = ACTIONS(636),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(636),
    [sym_alignment_tab] = ACTIONS(636),
    [sym_begin_group] = ACTIONS(636),
    [sym_comment] = ACTIONS(638),
    [sym_magic_comment] = ACTIONS(638),
    [sym_math_shift] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(636),
    [sym_subscript] = ACTIONS(636),
    [sym_superscript] = ACTIONS(636),
    [ts_builtin_sym_end] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(636),
  },
  [208] = {
    [sym_name_group] = STATE(498),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [209] = {
    [sym__common] = STATE(500),
    [sym_inline_verbatim] = STATE(500),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(500),
    [sym_parameter] = STATE(500),
    [sym_text_env] = STATE(500),
    [sym__display_math] = STATE(500),
    [sym_tex_display_math] = STATE(500),
    [sym_latex_display_math] = STATE(500),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(500),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(500),
    [sym_tex_inline_math] = STATE(500),
    [sym_latex_inline_math] = STATE(500),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(500),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(500),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(500),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(500),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(500),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(500),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(500),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(500),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(500),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(500),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(500),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(500),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(500),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(500),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(500),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(500),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(500),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(500),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(500),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(500),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(500),
    [sym_glue_assign] = STATE(500),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(500),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(500),
    [sym_strut] = STATE(500),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(500),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(500),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(500),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(500),
    [sym_setbox] = STATE(500),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(500),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(500),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(500),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(500),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(500),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(500),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(500),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(499),
    [sym_text] = STATE(500),
    [sym_token] = STATE(500),
    [sym_escaped] = STATE(500),
    [aux_sym_text_mode_repeat1] = STATE(500),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(5),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(641),
    [sym_alignment_tab] = ACTIONS(641),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(643),
    [sym_magic_comment] = ACTIONS(643),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [210] = {
    [sym__escape] = ACTIONS(646),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(646),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_begin_group] = ACTIONS(646),
    [sym_comment] = ACTIONS(648),
    [sym_magic_comment] = ACTIONS(648),
    [sym_math_shift] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_superscript] = ACTIONS(646),
    [ts_builtin_sym_end] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(646),
  },
  [211] = {
    [sym_name_group] = STATE(501),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(199),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [212] = {
    [sym__escape] = ACTIONS(651),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_comment] = ACTIONS(653),
    [sym_magic_comment] = ACTIONS(653),
    [sym_math_shift] = ACTIONS(651),
    [sym_parameter_char] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [ts_builtin_sym_end] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(651),
  },
  [213] = {
    [sym__common] = STATE(503),
    [sym_inline_verbatim] = STATE(503),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(503),
    [sym_parameter] = STATE(503),
    [sym_text_env] = STATE(503),
    [sym__display_math] = STATE(503),
    [sym_tex_display_math] = STATE(503),
    [sym_latex_display_math] = STATE(503),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(503),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(503),
    [sym_tex_inline_math] = STATE(503),
    [sym_latex_inline_math] = STATE(503),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(503),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(503),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(503),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(503),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(503),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(503),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(503),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(503),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(503),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(503),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(503),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(503),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(503),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(503),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(503),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(503),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(503),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(503),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(503),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(503),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(503),
    [sym_glue_assign] = STATE(503),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(503),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(503),
    [sym_strut] = STATE(503),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(503),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(503),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(503),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(503),
    [sym_setbox] = STATE(503),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(503),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(503),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(503),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(503),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(503),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(503),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(503),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(503),
    [sym_token] = STATE(503),
    [sym_escaped] = STATE(503),
    [aux_sym_text_mode_repeat1] = STATE(503),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(656),
    [sym_alignment_tab] = ACTIONS(656),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(658),
    [sym_end_group] = ACTIONS(661),
    [sym_magic_comment] = ACTIONS(658),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [214] = {
    [sym_text_group] = STATE(504),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [215] = {
    [sym_text_group] = STATE(505),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [216] = {
    [sym_text_group] = STATE(506),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [217] = {
    [sym_text_group] = STATE(507),
    [sym_opt_text_group] = STATE(508),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [218] = {
    [sym__escape] = ACTIONS(663),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(663),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_begin_group] = ACTIONS(663),
    [sym_comment] = ACTIONS(665),
    [sym_magic_comment] = ACTIONS(665),
    [sym_math_shift] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_superscript] = ACTIONS(663),
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(663),
  },
  [219] = {
    [sym_text_group] = STATE(507),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [220] = {
    [sym__non_letter_or_other] = ACTIONS(668),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [221] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(670),
  },
  [222] = {
    [sym__escape] = ACTIONS(672),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_comment] = ACTIONS(674),
    [sym_magic_comment] = ACTIONS(674),
    [sym_math_shift] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [ts_builtin_sym_end] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(672),
  },
  [223] = {
    [sym__escape] = ACTIONS(677),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_comment] = ACTIONS(679),
    [sym_magic_comment] = ACTIONS(679),
    [sym_math_shift] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [ts_builtin_sym_end] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(677),
  },
  [224] = {
    [sym_text_group] = STATE(511),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [225] = {
    [sym__escape] = ACTIONS(682),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(682),
    [sym_alignment_tab] = ACTIONS(682),
    [sym_begin_group] = ACTIONS(682),
    [sym_comment] = ACTIONS(684),
    [sym_magic_comment] = ACTIONS(684),
    [sym_math_shift] = ACTIONS(682),
    [sym_parameter_char] = ACTIONS(682),
    [sym_subscript] = ACTIONS(682),
    [sym_superscript] = ACTIONS(682),
    [ts_builtin_sym_end] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_RBRACK] = ACTIONS(682),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(682),
  },
  [226] = {
    [sym__escape] = ACTIONS(687),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_comment] = ACTIONS(689),
    [sym_magic_comment] = ACTIONS(689),
    [sym_math_shift] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [ts_builtin_sym_end] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(687),
  },
  [227] = {
    [sym__escape] = ACTIONS(692),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_comment] = ACTIONS(694),
    [sym_magic_comment] = ACTIONS(694),
    [sym_math_shift] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [ts_builtin_sym_end] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(692),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(692),
  },
  [228] = {
    [aux_sym_token_repeat1] = STATE(514),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(697),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(699),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(701),
  },
  [229] = {
    [sym_glue_token] = STATE(232),
    [sym_dimension_token] = STATE(230),
    [sym_box_dimension_token] = STATE(233),
    [sym_glue] = STATE(515),
    [sym_box_dimension_ref] = STATE(230),
    [sym_dimension] = STATE(235),
    [sym_token] = STATE(230),
    [sym__escape] = ACTIONS(232),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(236),
    [sym_decimal] = ACTIONS(238),
  },
  [230] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [ts_builtin_sym_end] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_plus] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [231] = {
    [sym_glue_token] = STATE(517),
    [sym_dimension_token] = STATE(516),
    [sym_box_dimension_token] = STATE(233),
    [sym_box_dimension_ref] = STATE(516),
    [sym_token] = STATE(516),
    [sym__escape] = ACTIONS(232),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(710),
  },
  [232] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(712),
  },
  [233] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(717),
  },
  [234] = {
    [sym__escape] = ACTIONS(719),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_comment] = ACTIONS(721),
    [sym_magic_comment] = ACTIONS(721),
    [sym_math_shift] = ACTIONS(719),
    [sym_parameter_char] = ACTIONS(719),
    [sym_subscript] = ACTIONS(719),
    [sym_superscript] = ACTIONS(719),
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(719),
  },
  [235] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [ts_builtin_sym_end] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [anon_sym_plus] = ACTIONS(724),
    [anon_sym_minus] = ACTIONS(726),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(728),
  },
  [236] = {
    [aux_sym_token_repeat1] = STATE(92),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(730),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(106),
  },
  [237] = {
    [sym_dimension_token] = STATE(238),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(238),
    [sym_dimension] = STATE(522),
    [sym_token] = STATE(238),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
  },
  [238] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [ts_builtin_sym_end] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(703),
  },
  [239] = {
    [sym_dimension_token] = STATE(523),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(523),
    [sym_token] = STATE(523),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(732),
  },
  [240] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(734),
  },
  [241] = {
    [sym__escape] = ACTIONS(736),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_comment] = ACTIONS(738),
    [sym_magic_comment] = ACTIONS(738),
    [sym_math_shift] = ACTIONS(736),
    [sym_parameter_char] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [ts_builtin_sym_end] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(736),
  },
  [242] = {
    [sym__escape] = ACTIONS(741),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_comment] = ACTIONS(743),
    [sym_magic_comment] = ACTIONS(743),
    [sym_math_shift] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [ts_builtin_sym_end] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(741),
  },
  [243] = {
    [sym__escape] = ACTIONS(746),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_begin_group] = ACTIONS(746),
    [sym_comment] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(748),
    [sym_math_shift] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_superscript] = ACTIONS(746),
    [ts_builtin_sym_end] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(746),
  },
  [244] = {
    [sym_dimension_token] = STATE(526),
    [sym_box_dimension_token] = STATE(528),
    [sym_box_dimension_ref] = STATE(526),
    [sym_dimension] = STATE(529),
    [sym_token] = STATE(526),
    [sym__escape] = ACTIONS(751),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(753),
    [sym_decimal] = ACTIONS(755),
  },
  [245] = {
    [sym__escape] = ACTIONS(757),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_comment] = ACTIONS(759),
    [sym_magic_comment] = ACTIONS(759),
    [sym_math_shift] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [ts_builtin_sym_end] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(757),
  },
  [246] = {
    [sym__escape] = ACTIONS(762),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(762),
    [sym_alignment_tab] = ACTIONS(762),
    [sym_begin_group] = ACTIONS(762),
    [sym_comment] = ACTIONS(764),
    [sym_magic_comment] = ACTIONS(764),
    [sym_math_shift] = ACTIONS(762),
    [sym_parameter_char] = ACTIONS(762),
    [sym_subscript] = ACTIONS(762),
    [sym_superscript] = ACTIONS(762),
    [ts_builtin_sym_end] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(762),
  },
  [247] = {
    [aux_sym_token_repeat1] = STATE(530),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(767),
  },
  [248] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [249] = {
    [sym_dimension_token] = STATE(531),
    [sym_box_dimension_token] = STATE(250),
    [sym_box_dimension_ref] = STATE(531),
    [sym_token] = STATE(531),
    [sym__escape] = ACTIONS(257),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(769),
  },
  [250] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(771),
  },
  [251] = {
    [sym_makebox] = STATE(534),
    [sym_strut] = STATE(534),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(534),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(534),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(534),
    [sym_movebox_token] = STATE(43),
    [sym__box] = STATE(534),
    [sym__escape] = ACTIONS(773),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [252] = {
    [sym_makebox] = STATE(536),
    [sym_strut] = STATE(536),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(536),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(536),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(536),
    [sym_movebox_token] = STATE(43),
    [sym__box] = STATE(536),
    [sym__escape] = ACTIONS(773),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(775),
  },
  [253] = {
    [sym_dimension_token] = STATE(238),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(238),
    [sym_dimension] = STATE(538),
    [sym_token] = STATE(238),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(777),
    [sym_unit] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
  },
  [254] = {
    [sym_text_group] = STATE(539),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [255] = {
    [sym_text_group] = STATE(540),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [256] = {
    [sym__escape] = ACTIONS(779),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(779),
    [sym_begin_group] = ACTIONS(779),
    [sym_comment] = ACTIONS(781),
    [sym_magic_comment] = ACTIONS(781),
    [sym_math_shift] = ACTIONS(779),
    [sym_parameter_char] = ACTIONS(779),
    [sym_subscript] = ACTIONS(779),
    [sym_superscript] = ACTIONS(779),
    [ts_builtin_sym_end] = ACTIONS(779),
    [anon_sym_LBRACK] = ACTIONS(779),
    [anon_sym_RBRACK] = ACTIONS(779),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(779),
  },
  [257] = {
    [sym__escape] = ACTIONS(784),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(784),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_begin_group] = ACTIONS(784),
    [sym_comment] = ACTIONS(786),
    [sym_magic_comment] = ACTIONS(786),
    [sym_math_shift] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_superscript] = ACTIONS(784),
    [ts_builtin_sym_end] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(784),
  },
  [258] = {
    [sym_text_group] = STATE(541),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [259] = {
    [sym_text_group] = STATE(542),
    [sym__escape] = ACTIONS(789),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(789),
    [sym_alignment_tab] = ACTIONS(789),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(791),
    [sym_magic_comment] = ACTIONS(791),
    [sym_math_shift] = ACTIONS(789),
    [sym_parameter_char] = ACTIONS(789),
    [sym_subscript] = ACTIONS(789),
    [sym_superscript] = ACTIONS(789),
    [ts_builtin_sym_end] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(789),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(789),
  },
  [260] = {
    [sym_text_group] = STATE(543),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [261] = {
    [sym__common] = STATE(261),
    [sym_inline_verbatim] = STATE(261),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(261),
    [sym_parameter] = STATE(261),
    [sym_text_env] = STATE(261),
    [sym__display_math] = STATE(261),
    [sym_tex_display_math] = STATE(261),
    [sym_latex_display_math] = STATE(261),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(261),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(261),
    [sym_tex_inline_math] = STATE(261),
    [sym_latex_inline_math] = STATE(261),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(261),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(261),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(261),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(261),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(261),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(261),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(261),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(261),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(261),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(261),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(261),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(261),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(261),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(261),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(261),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(261),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(261),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(261),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(261),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(261),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(261),
    [sym_glue_assign] = STATE(261),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(261),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(261),
    [sym_strut] = STATE(261),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(261),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(261),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(261),
    [sym_movebox_token] = STATE(43),
    [sym__box] = STATE(261),
    [sym_setbox] = STATE(261),
    [sym_setbox_token] = STATE(44),
    [sym_box_dimension_assign] = STATE(261),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(261),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(261),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(261),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(261),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(261),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(261),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(261),
    [sym_token] = STATE(261),
    [sym_escaped] = STATE(261),
    [aux_sym_text_mode_repeat1] = STATE(261),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(53),
    [sym__escape] = ACTIONS(794),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(797),
    [sym_alignment_tab] = ACTIONS(797),
    [sym_begin_group] = ACTIONS(800),
    [sym_comment] = ACTIONS(803),
    [sym_magic_comment] = ACTIONS(803),
    [sym_math_shift] = ACTIONS(807),
    [sym_parameter_char] = ACTIONS(810),
    [sym_subscript] = ACTIONS(813),
    [sym_superscript] = ACTIONS(813),
    [ts_builtin_sym_end] = ACTIONS(816),
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(821),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(824),
  },
  [262] = {
    [sym__escape] = ACTIONS(827),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(827),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_begin_group] = ACTIONS(827),
    [sym_comment] = ACTIONS(829),
    [sym_magic_comment] = ACTIONS(829),
    [sym_math_shift] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_superscript] = ACTIONS(827),
    [ts_builtin_sym_end] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(827),
  },
  [263] = {
    [aux_sym_parameter_repeat1] = STATE(263),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_parameter_char] = ACTIONS(832),
    [sym_number] = ACTIONS(835),
  },
  [264] = {
    [aux_sym_text_repeat1] = STATE(264),
    [sym__escape] = ACTIONS(837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(837),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_begin_group] = ACTIONS(837),
    [sym_comment] = ACTIONS(839),
    [sym_magic_comment] = ACTIONS(839),
    [sym_math_shift] = ACTIONS(837),
    [sym_parameter_char] = ACTIONS(837),
    [sym_subscript] = ACTIONS(837),
    [sym_superscript] = ACTIONS(837),
    [ts_builtin_sym_end] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(842),
  },
  [265] = {
    [sym__escape] = ACTIONS(845),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(845),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_begin_group] = ACTIONS(845),
    [sym_comment] = ACTIONS(847),
    [sym_magic_comment] = ACTIONS(847),
    [sym_math_shift] = ACTIONS(845),
    [sym_parameter_char] = ACTIONS(845),
    [sym_subscript] = ACTIONS(845),
    [sym_superscript] = ACTIONS(845),
    [ts_builtin_sym_end] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(845),
  },
  [266] = {
    [sym__escape] = ACTIONS(850),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_comment] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(852),
    [sym_math_shift] = ACTIONS(850),
    [sym_parameter_char] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [ts_builtin_sym_end] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(850),
  },
  [267] = {
    [sym__escape] = ACTIONS(855),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_comment] = ACTIONS(857),
    [sym_magic_comment] = ACTIONS(857),
    [sym_math_shift] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [ts_builtin_sym_end] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(855),
  },
  [268] = {
    [sym__escape] = ACTIONS(860),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_comment] = ACTIONS(862),
    [sym_magic_comment] = ACTIONS(862),
    [sym_math_shift] = ACTIONS(860),
    [sym_parameter_char] = ACTIONS(860),
    [sym_subscript] = ACTIONS(860),
    [sym_superscript] = ACTIONS(860),
    [ts_builtin_sym_end] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(860),
  },
  [269] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(865),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [270] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(867),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [271] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(869),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [272] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_delim] = ACTIONS(871),
  },
  [273] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(873),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [274] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(875),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(875),
  },
  [275] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(877),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(877),
  },
  [276] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(879),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [277] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(881),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(881),
    [anon_sym_STAR] = ACTIONS(881),
  },
  [278] = {
    [sym__escape] = ACTIONS(883),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_comment] = ACTIONS(885),
    [sym_magic_comment] = ACTIONS(885),
    [sym_math_shift] = ACTIONS(883),
    [sym_parameter_char] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [ts_builtin_sym_end] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(883),
  },
  [279] = {
    [sym__escape] = ACTIONS(888),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [280] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(890),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [281] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(892),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(892),
  },
  [282] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(894),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [283] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(896),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [284] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(898),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [285] = {
    [sym__escape] = ACTIONS(900),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(900),
    [sym_unit] = ACTIONS(900),
    [sym_decimal] = ACTIONS(900),
  },
  [286] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(902),
    [sym_unit] = ACTIONS(902),
    [sym_decimal] = ACTIONS(902),
  },
  [287] = {
    [sym__escape] = ACTIONS(904),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(904),
    [sym_decimal] = ACTIONS(904),
  },
  [288] = {
    [sym__escape] = ACTIONS(906),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_comment] = ACTIONS(908),
    [sym_magic_comment] = ACTIONS(908),
    [sym_math_shift] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [ts_builtin_sym_end] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(906),
  },
  [289] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(911),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [290] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(913),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(913),
    [anon_sym_spread] = ACTIONS(913),
  },
  [291] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(915),
  },
  [292] = {
    [sym__escape] = ACTIONS(917),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(917),
    [sym_decimal] = ACTIONS(917),
  },
  [293] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(919),
  },
  [294] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(921),
  },
  [295] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(923),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(923),
  },
  [296] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(925),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [297] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(927),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [298] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(929),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [299] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(931),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(931),
  },
  [300] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [ts_builtin_sym_end] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(933),
  },
  [301] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(938),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(940),
  },
  [302] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(943),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [303] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(945),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [304] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(947),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [305] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(949),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [306] = {
    [sym__escape] = ACTIONS(293),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_comment] = ACTIONS(295),
    [sym_end_group] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(295),
    [sym_math_shift] = ACTIONS(293),
    [sym_parameter_char] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(293),
  },
  [307] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(951),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [308] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(953),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [309] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(955),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [310] = {
    [sym__escape] = ACTIONS(397),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_comment] = ACTIONS(399),
    [sym_end_group] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(399),
    [sym_math_shift] = ACTIONS(397),
    [sym_parameter_char] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(397),
  },
  [311] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(957),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [312] = {
    [sym__common] = STATE(153),
    [sym__math_mode] = STATE(153),
    [sym_math_mode] = STATE(553),
    [sym_parameter] = STATE(153),
    [sym_math_env] = STATE(153),
    [sym_tag] = STATE(153),
    [sym_tag_token] = STATE(147),
    [sym_begin] = STATE(148),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(153),
    [sym_include_token] = STATE(20),
    [sym_storage] = STATE(153),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(153),
    [sym_catcode_token] = STATE(26),
    [sym_makeatletter] = STATE(153),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(153),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(153),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(153),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(153),
    [sym_glue_assign] = STATE(153),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(153),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(153),
    [sym_strut] = STATE(153),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(153),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(153),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(153),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(153),
    [sym_setbox] = STATE(153),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(153),
    [sym_box_dimension_token] = STATE(45),
    [sym_math_group] = STATE(153),
    [sym_begin_opt] = STATE(152),
    [sym_end_opt] = STATE(152),
    [sym_text] = STATE(153),
    [sym_token] = STATE(153),
    [sym_escaped] = STATE(153),
    [aux_sym_math_mode_repeat1] = STATE(153),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(131),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(133),
    [sym_alignment_tab] = ACTIONS(133),
    [sym_begin_group] = ACTIONS(135),
    [sym_comment] = ACTIONS(137),
    [sym_magic_comment] = ACTIONS(137),
    [sym_math_shift] = ACTIONS(959),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(133),
    [sym_superscript] = ACTIONS(133),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [313] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(961),
  },
  [314] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_body] = ACTIONS(963),
  },
  [315] = {
    [sym_end_display_math] = STATE(557),
    [sym__escape] = ACTIONS(965),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [316] = {
    [sym_display_math_end] = STATE(558),
    [sym_end_token] = STATE(559),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [317] = {
    [aux_sym_token_repeat1] = STATE(431),
    [sym__explsyntaxoff_word] = ACTIONS(504),
    [sym__explsyntaxon_word] = ACTIONS(506),
    [sym__makeatletter_word] = ACTIONS(508),
    [sym__makeatother_word] = ACTIONS(510),
    [sym__non_letter_or_other] = ACTIONS(512),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(967),
    [anon_sym_tag] = ACTIONS(452),
    [anon_sym_begin] = ACTIONS(52),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(514),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(518),
  },
  [318] = {
    [sym_end_inline_math] = STATE(562),
    [sym__escape] = ACTIONS(969),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [319] = {
    [sym__escape] = ACTIONS(575),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(575),
    [sym_alignment_tab] = ACTIONS(575),
    [sym_begin_group] = ACTIONS(575),
    [sym_comment] = ACTIONS(577),
    [sym_end_group] = ACTIONS(575),
    [sym_magic_comment] = ACTIONS(577),
    [sym_math_shift] = ACTIONS(575),
    [sym_parameter_char] = ACTIONS(575),
    [sym_subscript] = ACTIONS(575),
    [sym_superscript] = ACTIONS(575),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(575),
  },
  [320] = {
    [sym_inline_math_end] = STATE(563),
    [sym_end_token] = STATE(322),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [321] = {
    [sym__escape] = ACTIONS(582),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(582),
    [sym_alignment_tab] = ACTIONS(582),
    [sym_begin_group] = ACTIONS(582),
    [sym_comment] = ACTIONS(584),
    [sym_end_group] = ACTIONS(582),
    [sym_magic_comment] = ACTIONS(584),
    [sym_math_shift] = ACTIONS(582),
    [sym_parameter_char] = ACTIONS(582),
    [sym_subscript] = ACTIONS(582),
    [sym_superscript] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(582),
  },
  [322] = {
    [sym_inline_math_env_group] = STATE(565),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(971),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [323] = {
    [sym__escape] = ACTIONS(589),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(589),
    [sym_alignment_tab] = ACTIONS(589),
    [sym_begin_group] = ACTIONS(589),
    [sym_comment] = ACTIONS(591),
    [sym_end_group] = ACTIONS(589),
    [sym_magic_comment] = ACTIONS(591),
    [sym_math_shift] = ACTIONS(589),
    [sym_parameter_char] = ACTIONS(589),
    [sym_subscript] = ACTIONS(589),
    [sym_superscript] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(589),
  },
  [324] = {
    [sym_verbatim_end] = STATE(566),
    [sym_end_token] = STATE(325),
    [sym__escape] = ACTIONS(186),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [325] = {
    [sym_verbatim_env_group] = STATE(568),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(973),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [326] = {
    [sym__escape] = ACTIONS(600),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(600),
    [sym_alignment_tab] = ACTIONS(600),
    [sym_begin_group] = ACTIONS(600),
    [sym_comment] = ACTIONS(602),
    [sym_end_group] = ACTIONS(600),
    [sym_magic_comment] = ACTIONS(602),
    [sym_math_shift] = ACTIONS(600),
    [sym_parameter_char] = ACTIONS(600),
    [sym_subscript] = ACTIONS(600),
    [sym_superscript] = ACTIONS(600),
    [anon_sym_LBRACK] = ACTIONS(600),
    [anon_sym_RBRACK] = ACTIONS(600),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(600),
  },
  [327] = {
    [sym_name_group] = STATE(569),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(413),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [328] = {
    [sym__common] = STATE(484),
    [sym_inline_verbatim] = STATE(484),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(484),
    [sym_parameter] = STATE(484),
    [sym_text_env] = STATE(484),
    [sym__display_math] = STATE(484),
    [sym_tex_display_math] = STATE(484),
    [sym_latex_display_math] = STATE(484),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(484),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(484),
    [sym_tex_inline_math] = STATE(484),
    [sym_latex_inline_math] = STATE(484),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(484),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(484),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_end] = STATE(570),
    [sym_end_token] = STATE(327),
    [sym_documentclass] = STATE(484),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(484),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(484),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(484),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(484),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(484),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(484),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(484),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(484),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(484),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(484),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(484),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(484),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(484),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(484),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(484),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(484),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(484),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(484),
    [sym_glue_assign] = STATE(484),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(484),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(484),
    [sym_strut] = STATE(484),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(484),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(484),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(484),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(484),
    [sym_setbox] = STATE(484),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(484),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(484),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(484),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(484),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(484),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(484),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(484),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(484),
    [sym_token] = STATE(484),
    [sym_escaped] = STATE(484),
    [aux_sym_text_mode_repeat1] = STATE(484),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(190),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [329] = {
    [sym_text] = STATE(571),
    [aux_sym_text_repeat1] = STATE(489),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(634),
  },
  [330] = {
    [sym__escape] = ACTIONS(636),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(636),
    [sym_alignment_tab] = ACTIONS(636),
    [sym_begin_group] = ACTIONS(636),
    [sym_comment] = ACTIONS(638),
    [sym_end_group] = ACTIONS(636),
    [sym_magic_comment] = ACTIONS(638),
    [sym_math_shift] = ACTIONS(636),
    [sym_parameter_char] = ACTIONS(636),
    [sym_subscript] = ACTIONS(636),
    [sym_superscript] = ACTIONS(636),
    [anon_sym_LBRACK] = ACTIONS(636),
    [anon_sym_RBRACK] = ACTIONS(636),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(636),
  },
  [331] = {
    [sym_name_group] = STATE(572),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(413),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [332] = {
    [sym__escape] = ACTIONS(646),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(646),
    [sym_alignment_tab] = ACTIONS(646),
    [sym_begin_group] = ACTIONS(646),
    [sym_comment] = ACTIONS(648),
    [sym_end_group] = ACTIONS(646),
    [sym_magic_comment] = ACTIONS(648),
    [sym_math_shift] = ACTIONS(646),
    [sym_parameter_char] = ACTIONS(646),
    [sym_subscript] = ACTIONS(646),
    [sym_superscript] = ACTIONS(646),
    [anon_sym_LBRACK] = ACTIONS(646),
    [anon_sym_RBRACK] = ACTIONS(646),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(646),
  },
  [333] = {
    [sym_name_group] = STATE(573),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(413),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [334] = {
    [sym__escape] = ACTIONS(651),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_comment] = ACTIONS(653),
    [sym_end_group] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(653),
    [sym_math_shift] = ACTIONS(651),
    [sym_parameter_char] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(651),
  },
  [335] = {
    [sym_text_group] = STATE(574),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [336] = {
    [sym_text_group] = STATE(575),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [337] = {
    [sym_text_group] = STATE(576),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [338] = {
    [sym_text_group] = STATE(577),
    [sym_opt_text_group] = STATE(578),
    [sym_begin_opt] = STATE(209),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(24),
  },
  [339] = {
    [sym__escape] = ACTIONS(663),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(663),
    [sym_alignment_tab] = ACTIONS(663),
    [sym_begin_group] = ACTIONS(663),
    [sym_comment] = ACTIONS(665),
    [sym_end_group] = ACTIONS(663),
    [sym_magic_comment] = ACTIONS(665),
    [sym_math_shift] = ACTIONS(663),
    [sym_parameter_char] = ACTIONS(663),
    [sym_subscript] = ACTIONS(663),
    [sym_superscript] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_RBRACK] = ACTIONS(663),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(663),
  },
  [340] = {
    [sym_text_group] = STATE(577),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [341] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(975),
  },
  [342] = {
    [sym__escape] = ACTIONS(672),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(672),
    [sym_alignment_tab] = ACTIONS(672),
    [sym_begin_group] = ACTIONS(672),
    [sym_comment] = ACTIONS(674),
    [sym_end_group] = ACTIONS(672),
    [sym_magic_comment] = ACTIONS(674),
    [sym_math_shift] = ACTIONS(672),
    [sym_parameter_char] = ACTIONS(672),
    [sym_subscript] = ACTIONS(672),
    [sym_superscript] = ACTIONS(672),
    [anon_sym_LBRACK] = ACTIONS(672),
    [anon_sym_RBRACK] = ACTIONS(672),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(672),
  },
  [343] = {
    [sym__escape] = ACTIONS(677),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(677),
    [sym_alignment_tab] = ACTIONS(677),
    [sym_begin_group] = ACTIONS(677),
    [sym_comment] = ACTIONS(679),
    [sym_end_group] = ACTIONS(677),
    [sym_magic_comment] = ACTIONS(679),
    [sym_math_shift] = ACTIONS(677),
    [sym_parameter_char] = ACTIONS(677),
    [sym_subscript] = ACTIONS(677),
    [sym_superscript] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_RBRACK] = ACTIONS(677),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(677),
  },
  [344] = {
    [sym_text_group] = STATE(580),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [345] = {
    [sym__escape] = ACTIONS(682),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(682),
    [sym_alignment_tab] = ACTIONS(682),
    [sym_begin_group] = ACTIONS(682),
    [sym_comment] = ACTIONS(684),
    [sym_end_group] = ACTIONS(682),
    [sym_magic_comment] = ACTIONS(684),
    [sym_math_shift] = ACTIONS(682),
    [sym_parameter_char] = ACTIONS(682),
    [sym_subscript] = ACTIONS(682),
    [sym_superscript] = ACTIONS(682),
    [anon_sym_LBRACK] = ACTIONS(682),
    [anon_sym_RBRACK] = ACTIONS(682),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(682),
  },
  [346] = {
    [sym__escape] = ACTIONS(687),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(687),
    [sym_alignment_tab] = ACTIONS(687),
    [sym_begin_group] = ACTIONS(687),
    [sym_comment] = ACTIONS(689),
    [sym_end_group] = ACTIONS(687),
    [sym_magic_comment] = ACTIONS(689),
    [sym_math_shift] = ACTIONS(687),
    [sym_parameter_char] = ACTIONS(687),
    [sym_subscript] = ACTIONS(687),
    [sym_superscript] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(687),
  },
  [347] = {
    [sym__escape] = ACTIONS(692),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(692),
    [sym_alignment_tab] = ACTIONS(692),
    [sym_begin_group] = ACTIONS(692),
    [sym_comment] = ACTIONS(694),
    [sym_end_group] = ACTIONS(692),
    [sym_magic_comment] = ACTIONS(694),
    [sym_math_shift] = ACTIONS(692),
    [sym_parameter_char] = ACTIONS(692),
    [sym_subscript] = ACTIONS(692),
    [sym_superscript] = ACTIONS(692),
    [anon_sym_LBRACK] = ACTIONS(692),
    [anon_sym_RBRACK] = ACTIONS(692),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(692),
  },
  [348] = {
    [aux_sym_token_repeat1] = STATE(583),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(977),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(979),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(981),
  },
  [349] = {
    [sym_glue_token] = STATE(352),
    [sym_dimension_token] = STATE(350),
    [sym_box_dimension_token] = STATE(353),
    [sym_glue] = STATE(584),
    [sym_box_dimension_ref] = STATE(350),
    [sym_dimension] = STATE(355),
    [sym_token] = STATE(350),
    [sym__escape] = ACTIONS(417),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(421),
    [sym_decimal] = ACTIONS(423),
  },
  [350] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_end_group] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_plus] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [351] = {
    [sym_glue_token] = STATE(586),
    [sym_dimension_token] = STATE(585),
    [sym_box_dimension_token] = STATE(353),
    [sym_box_dimension_ref] = STATE(585),
    [sym_token] = STATE(585),
    [sym__escape] = ACTIONS(417),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(983),
  },
  [352] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_end_group] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(712),
  },
  [353] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(985),
  },
  [354] = {
    [sym__escape] = ACTIONS(719),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_comment] = ACTIONS(721),
    [sym_end_group] = ACTIONS(719),
    [sym_magic_comment] = ACTIONS(721),
    [sym_math_shift] = ACTIONS(719),
    [sym_parameter_char] = ACTIONS(719),
    [sym_subscript] = ACTIONS(719),
    [sym_superscript] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(719),
  },
  [355] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_end_group] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(714),
    [sym_math_shift] = ACTIONS(712),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [anon_sym_plus] = ACTIONS(987),
    [anon_sym_minus] = ACTIONS(989),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(728),
  },
  [356] = {
    [aux_sym_token_repeat1] = STATE(309),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(991),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(388),
  },
  [357] = {
    [sym_dimension_token] = STATE(358),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(358),
    [sym_dimension] = STATE(591),
    [sym_token] = STATE(358),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(429),
    [sym_decimal] = ACTIONS(431),
  },
  [358] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_end_group] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(703),
  },
  [359] = {
    [sym_dimension_token] = STATE(592),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(592),
    [sym_token] = STATE(592),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(993),
  },
  [360] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(995),
  },
  [361] = {
    [sym__escape] = ACTIONS(736),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_comment] = ACTIONS(738),
    [sym_end_group] = ACTIONS(736),
    [sym_magic_comment] = ACTIONS(738),
    [sym_math_shift] = ACTIONS(736),
    [sym_parameter_char] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(736),
  },
  [362] = {
    [sym__escape] = ACTIONS(741),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_comment] = ACTIONS(743),
    [sym_end_group] = ACTIONS(741),
    [sym_magic_comment] = ACTIONS(743),
    [sym_math_shift] = ACTIONS(741),
    [sym_parameter_char] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(741),
  },
  [363] = {
    [sym__escape] = ACTIONS(746),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_begin_group] = ACTIONS(746),
    [sym_comment] = ACTIONS(748),
    [sym_end_group] = ACTIONS(746),
    [sym_magic_comment] = ACTIONS(748),
    [sym_math_shift] = ACTIONS(746),
    [sym_parameter_char] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_superscript] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(746),
  },
  [364] = {
    [sym_dimension_token] = STATE(526),
    [sym_box_dimension_token] = STATE(528),
    [sym_box_dimension_ref] = STATE(526),
    [sym_dimension] = STATE(594),
    [sym_token] = STATE(526),
    [sym__escape] = ACTIONS(751),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(753),
    [sym_decimal] = ACTIONS(755),
  },
  [365] = {
    [sym__escape] = ACTIONS(757),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_comment] = ACTIONS(759),
    [sym_end_group] = ACTIONS(757),
    [sym_magic_comment] = ACTIONS(759),
    [sym_math_shift] = ACTIONS(757),
    [sym_parameter_char] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(757),
  },
  [366] = {
    [sym__escape] = ACTIONS(762),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(762),
    [sym_alignment_tab] = ACTIONS(762),
    [sym_begin_group] = ACTIONS(762),
    [sym_comment] = ACTIONS(764),
    [sym_end_group] = ACTIONS(762),
    [sym_magic_comment] = ACTIONS(764),
    [sym_math_shift] = ACTIONS(762),
    [sym_parameter_char] = ACTIONS(762),
    [sym_subscript] = ACTIONS(762),
    [sym_superscript] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(762),
  },
  [367] = {
    [sym_makebox] = STATE(596),
    [sym_strut] = STATE(596),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(596),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(596),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(596),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(596),
    [sym__escape] = ACTIONS(997),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [368] = {
    [sym_makebox] = STATE(598),
    [sym_strut] = STATE(598),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(598),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(598),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(598),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(598),
    [sym__escape] = ACTIONS(997),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(999),
  },
  [369] = {
    [sym_dimension_token] = STATE(358),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(358),
    [sym_dimension] = STATE(600),
    [sym_token] = STATE(358),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1001),
    [sym_unit] = ACTIONS(429),
    [sym_decimal] = ACTIONS(431),
  },
  [370] = {
    [sym_text_group] = STATE(601),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [371] = {
    [sym_text_group] = STATE(602),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [372] = {
    [sym__escape] = ACTIONS(779),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(779),
    [sym_alignment_tab] = ACTIONS(779),
    [sym_begin_group] = ACTIONS(779),
    [sym_comment] = ACTIONS(781),
    [sym_end_group] = ACTIONS(779),
    [sym_magic_comment] = ACTIONS(781),
    [sym_math_shift] = ACTIONS(779),
    [sym_parameter_char] = ACTIONS(779),
    [sym_subscript] = ACTIONS(779),
    [sym_superscript] = ACTIONS(779),
    [anon_sym_LBRACK] = ACTIONS(779),
    [anon_sym_RBRACK] = ACTIONS(779),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(779),
  },
  [373] = {
    [sym__escape] = ACTIONS(784),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(784),
    [sym_alignment_tab] = ACTIONS(784),
    [sym_begin_group] = ACTIONS(784),
    [sym_comment] = ACTIONS(786),
    [sym_end_group] = ACTIONS(784),
    [sym_magic_comment] = ACTIONS(786),
    [sym_math_shift] = ACTIONS(784),
    [sym_parameter_char] = ACTIONS(784),
    [sym_subscript] = ACTIONS(784),
    [sym_superscript] = ACTIONS(784),
    [anon_sym_LBRACK] = ACTIONS(784),
    [anon_sym_RBRACK] = ACTIONS(784),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(784),
  },
  [374] = {
    [sym_text_group] = STATE(603),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [375] = {
    [sym_text_group] = STATE(604),
    [sym__escape] = ACTIONS(789),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(789),
    [sym_alignment_tab] = ACTIONS(789),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(791),
    [sym_end_group] = ACTIONS(789),
    [sym_magic_comment] = ACTIONS(791),
    [sym_math_shift] = ACTIONS(789),
    [sym_parameter_char] = ACTIONS(789),
    [sym_subscript] = ACTIONS(789),
    [sym_superscript] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_RBRACK] = ACTIONS(789),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(789),
  },
  [376] = {
    [sym_text_group] = STATE(605),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [377] = {
    [sym__escape] = ACTIONS(1003),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_comment] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(1005),
    [sym_math_shift] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [ts_builtin_sym_end] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1003),
  },
  [378] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(1008),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1011),
    [sym_alignment_tab] = ACTIONS(1011),
    [sym_begin_group] = ACTIONS(1014),
    [sym_comment] = ACTIONS(1017),
    [sym_end_group] = ACTIONS(816),
    [sym_magic_comment] = ACTIONS(1017),
    [sym_math_shift] = ACTIONS(1021),
    [sym_parameter_char] = ACTIONS(1024),
    [sym_subscript] = ACTIONS(1027),
    [sym_superscript] = ACTIONS(1027),
    [anon_sym_LBRACK] = ACTIONS(1030),
    [anon_sym_RBRACK] = ACTIONS(1033),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1036),
  },
  [379] = {
    [sym__escape] = ACTIONS(827),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(827),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_begin_group] = ACTIONS(827),
    [sym_comment] = ACTIONS(829),
    [sym_end_group] = ACTIONS(827),
    [sym_magic_comment] = ACTIONS(829),
    [sym_math_shift] = ACTIONS(827),
    [sym_parameter_char] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_superscript] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(827),
  },
  [380] = {
    [aux_sym_text_repeat1] = STATE(380),
    [sym__escape] = ACTIONS(837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(837),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_begin_group] = ACTIONS(837),
    [sym_comment] = ACTIONS(839),
    [sym_end_group] = ACTIONS(837),
    [sym_magic_comment] = ACTIONS(839),
    [sym_math_shift] = ACTIONS(837),
    [sym_parameter_char] = ACTIONS(837),
    [sym_subscript] = ACTIONS(837),
    [sym_superscript] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1039),
  },
  [381] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1042),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [382] = {
    [aux_sym_token_repeat1] = STATE(614),
    [sym__explsyntaxoff_word] = ACTIONS(1044),
    [sym__explsyntaxon_word] = ACTIONS(1046),
    [sym__makeatletter_word] = ACTIONS(1048),
    [sym__makeatother_word] = ACTIONS(1050),
    [sym__non_letter_or_other] = ACTIONS(1052),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_tag] = ACTIONS(452),
    [anon_sym_begin] = ACTIONS(52),
    [aux_sym_SLASHinclude_PIPEinput_SLASH] = ACTIONS(58),
    [aux_sym_SLASH_LBRACKegx_RBRACK_QMARKdef_SLASH] = ACTIONS(1054),
    [aux_sym_SLASHk_QMARKcatcode_BQUOTE_SLASH] = ACTIONS(64),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(78),
    [aux_sym_SLASH_LBRACKhmv_RBRACKskip_PIPE_LPARENh_PIPEtop_PIPEv_RPARENglue_SLASH] = ACTIONS(80),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(1056),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(88),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
    [anon_sym_setbox] = ACTIONS(92),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1058),
  },
  [383] = {
    [sym__common] = STATE(616),
    [sym__math_mode] = STATE(616),
    [sym_parameter] = STATE(616),
    [sym_math_env] = STATE(616),
    [sym_tag] = STATE(616),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(616),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(616),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(616),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(616),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(616),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(616),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(616),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(616),
    [sym_glue_assign] = STATE(616),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(616),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(616),
    [sym_strut] = STATE(616),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(616),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(616),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(616),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(616),
    [sym_setbox] = STATE(616),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(616),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(616),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(616),
    [sym_token] = STATE(616),
    [sym_escaped] = STATE(616),
    [aux_sym_math_mode_repeat1] = STATE(616),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(454),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1060),
    [sym_alignment_tab] = ACTIONS(1060),
    [sym_begin_group] = ACTIONS(458),
    [sym_comment] = ACTIONS(1062),
    [sym_end_group] = ACTIONS(1065),
    [sym_magic_comment] = ACTIONS(1062),
    [sym_parameter_char] = ACTIONS(465),
    [sym_subscript] = ACTIONS(1060),
    [sym_superscript] = ACTIONS(1060),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(471),
  },
  [384] = {
    [sym__escape] = ACTIONS(1067),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1067),
    [sym_alignment_tab] = ACTIONS(1067),
    [sym_begin_group] = ACTIONS(1067),
    [sym_comment] = ACTIONS(1069),
    [sym_magic_comment] = ACTIONS(1069),
    [sym_math_shift] = ACTIONS(1067),
    [sym_parameter_char] = ACTIONS(1067),
    [sym_subscript] = ACTIONS(1067),
    [sym_superscript] = ACTIONS(1067),
    [anon_sym_LBRACK] = ACTIONS(1067),
    [anon_sym_RBRACK] = ACTIONS(1067),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1067),
  },
  [385] = {
    [sym__escape] = ACTIONS(149),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(149),
    [sym_alignment_tab] = ACTIONS(149),
    [sym_begin_group] = ACTIONS(149),
    [sym_comment] = ACTIONS(151),
    [sym_end_group] = ACTIONS(149),
    [sym_magic_comment] = ACTIONS(151),
    [sym_parameter_char] = ACTIONS(149),
    [sym_subscript] = ACTIONS(149),
    [sym_superscript] = ACTIONS(149),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_RBRACK] = ACTIONS(149),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(149),
  },
  [386] = {
    [sym__escape] = ACTIONS(154),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(154),
    [sym_alignment_tab] = ACTIONS(154),
    [sym_begin_group] = ACTIONS(154),
    [sym_comment] = ACTIONS(156),
    [sym_end_group] = ACTIONS(154),
    [sym_magic_comment] = ACTIONS(156),
    [sym_parameter_char] = ACTIONS(154),
    [sym_subscript] = ACTIONS(154),
    [sym_superscript] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(154),
  },
  [387] = {
    [sym_math_text_group] = STATE(618),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1072),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [388] = {
    [sym__common] = STATE(621),
    [sym__math_mode] = STATE(621),
    [sym_parameter] = STATE(621),
    [sym_math_env] = STATE(621),
    [sym_tag] = STATE(621),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end] = STATE(619),
    [sym_end_token] = STATE(620),
    [sym_include] = STATE(621),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(621),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(621),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(621),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(621),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(621),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(621),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(621),
    [sym_glue_assign] = STATE(621),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(621),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(621),
    [sym_strut] = STATE(621),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(621),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(621),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(621),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(621),
    [sym_setbox] = STATE(621),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(621),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(621),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(621),
    [sym_token] = STATE(621),
    [sym_escaped] = STATE(621),
    [aux_sym_math_mode_repeat1] = STATE(621),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1074),
    [sym_alignment_tab] = ACTIONS(1074),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(1076),
    [sym_magic_comment] = ACTIONS(1076),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(1074),
    [sym_superscript] = ACTIONS(1074),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [389] = {
    [sym_text_group] = STATE(623),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1079),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [390] = {
    [sym__escape] = ACTIONS(205),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(205),
    [sym_alignment_tab] = ACTIONS(205),
    [sym_begin_group] = ACTIONS(205),
    [sym_comment] = ACTIONS(207),
    [sym_end_group] = ACTIONS(205),
    [sym_magic_comment] = ACTIONS(207),
    [sym_parameter_char] = ACTIONS(205),
    [sym_subscript] = ACTIONS(205),
    [sym_superscript] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(205),
  },
  [391] = {
    [sym_escaped] = STATE(624),
    [sym__escape] = ACTIONS(210),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [392] = {
    [sym__escape] = ACTIONS(212),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(212),
    [sym_alignment_tab] = ACTIONS(212),
    [sym_begin_group] = ACTIONS(212),
    [sym_comment] = ACTIONS(214),
    [sym_end_group] = ACTIONS(212),
    [sym_magic_comment] = ACTIONS(214),
    [sym_parameter_char] = ACTIONS(212),
    [sym_subscript] = ACTIONS(212),
    [sym_superscript] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(212),
  },
  [393] = {
    [sym__escape] = ACTIONS(217),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(217),
    [sym_alignment_tab] = ACTIONS(217),
    [sym_begin_group] = ACTIONS(217),
    [sym_comment] = ACTIONS(219),
    [sym_end_group] = ACTIONS(217),
    [sym_magic_comment] = ACTIONS(219),
    [sym_parameter_char] = ACTIONS(217),
    [sym_subscript] = ACTIONS(217),
    [sym_superscript] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(217),
  },
  [394] = {
    [sym__escape] = ACTIONS(222),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(222),
    [sym_alignment_tab] = ACTIONS(222),
    [sym_begin_group] = ACTIONS(222),
    [sym_comment] = ACTIONS(224),
    [sym_end_group] = ACTIONS(222),
    [sym_magic_comment] = ACTIONS(224),
    [sym_parameter_char] = ACTIONS(222),
    [sym_subscript] = ACTIONS(222),
    [sym_superscript] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(222),
  },
  [395] = {
    [sym__escape] = ACTIONS(227),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(227),
    [sym_alignment_tab] = ACTIONS(227),
    [sym_begin_group] = ACTIONS(227),
    [sym_comment] = ACTIONS(229),
    [sym_end_group] = ACTIONS(227),
    [sym_magic_comment] = ACTIONS(229),
    [sym_parameter_char] = ACTIONS(227),
    [sym_subscript] = ACTIONS(227),
    [sym_superscript] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [anon_sym_RBRACK] = ACTIONS(227),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(227),
  },
  [396] = {
    [sym_glue_token] = STATE(629),
    [sym_dimension_token] = STATE(627),
    [sym_box_dimension_token] = STATE(630),
    [sym_glue] = STATE(631),
    [sym_box_dimension_ref] = STATE(627),
    [sym_dimension] = STATE(632),
    [sym_token] = STATE(627),
    [sym__escape] = ACTIONS(1081),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1083),
    [sym_unit] = ACTIONS(1085),
    [sym_decimal] = ACTIONS(1087),
  },
  [397] = {
    [sym_dimension_token] = STATE(635),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(635),
    [sym_dimension] = STATE(638),
    [sym_token] = STATE(635),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1091),
    [sym_unit] = ACTIONS(1093),
    [sym_decimal] = ACTIONS(1095),
  },
  [398] = {
    [sym_glue_token] = STATE(629),
    [sym_dimension_token] = STATE(627),
    [sym_box_dimension_token] = STATE(630),
    [sym_glue] = STATE(639),
    [sym_box_dimension_ref] = STATE(627),
    [sym_dimension] = STATE(632),
    [sym_token] = STATE(627),
    [sym__escape] = ACTIONS(1081),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1085),
    [sym_decimal] = ACTIONS(1087),
  },
  [399] = {
    [sym__escape] = ACTIONS(248),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(248),
    [sym_alignment_tab] = ACTIONS(248),
    [sym_begin_group] = ACTIONS(248),
    [sym_comment] = ACTIONS(250),
    [sym_end_group] = ACTIONS(248),
    [sym_magic_comment] = ACTIONS(250),
    [sym_parameter_char] = ACTIONS(248),
    [sym_subscript] = ACTIONS(248),
    [sym_superscript] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(248),
    [anon_sym_RBRACK] = ACTIONS(248),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(248),
  },
  [400] = {
    [sym_text_group] = STATE(640),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1079),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [401] = {
    [sym_text_group] = STATE(642),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1079),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_to] = ACTIONS(1097),
    [anon_sym_spread] = ACTIONS(1097),
  },
  [402] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1099),
  },
  [403] = {
    [sym_dimension_token] = STATE(248),
    [sym_box_dimension_token] = STATE(250),
    [sym_box_dimension_ref] = STATE(248),
    [sym_dimension] = STATE(644),
    [sym_token] = STATE(248),
    [sym__escape] = ACTIONS(257),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(259),
    [sym_decimal] = ACTIONS(261),
  },
  [404] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1101),
  },
  [405] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1103),
  },
  [406] = {
    [sym__escape] = ACTIONS(488),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(488),
    [sym_alignment_tab] = ACTIONS(488),
    [sym_begin_group] = ACTIONS(488),
    [sym_comment] = ACTIONS(490),
    [sym_end_group] = ACTIONS(488),
    [sym_magic_comment] = ACTIONS(490),
    [sym_parameter_char] = ACTIONS(488),
    [sym_subscript] = ACTIONS(488),
    [sym_superscript] = ACTIONS(488),
    [anon_sym_LBRACK] = ACTIONS(488),
    [anon_sym_RBRACK] = ACTIONS(488),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(488),
  },
  [407] = {
    [sym__common] = STATE(648),
    [sym__math_mode] = STATE(648),
    [sym_parameter] = STATE(648),
    [sym_math_env] = STATE(648),
    [sym_tag] = STATE(648),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(648),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(648),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(648),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(648),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(648),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(648),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(648),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(648),
    [sym_glue_assign] = STATE(648),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(648),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(648),
    [sym_strut] = STATE(648),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(648),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(648),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(648),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(648),
    [sym_setbox] = STATE(648),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(648),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(648),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(648),
    [sym_token] = STATE(648),
    [sym_escaped] = STATE(648),
    [aux_sym_math_mode_repeat1] = STATE(648),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(454),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1105),
    [sym_alignment_tab] = ACTIONS(1105),
    [sym_begin_group] = ACTIONS(458),
    [sym_comment] = ACTIONS(1107),
    [sym_end_group] = ACTIONS(1110),
    [sym_magic_comment] = ACTIONS(1107),
    [sym_parameter_char] = ACTIONS(465),
    [sym_subscript] = ACTIONS(1105),
    [sym_superscript] = ACTIONS(1105),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(471),
  },
  [408] = {
    [aux_sym_parameter_repeat1] = STATE(263),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_parameter_char] = ACTIONS(274),
    [sym_number] = ACTIONS(1112),
  },
  [409] = {
    [aux_sym_text_repeat1] = STATE(650),
    [sym__escape] = ACTIONS(278),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(278),
    [sym_alignment_tab] = ACTIONS(278),
    [sym_begin_group] = ACTIONS(278),
    [sym_comment] = ACTIONS(280),
    [sym_end_group] = ACTIONS(278),
    [sym_magic_comment] = ACTIONS(280),
    [sym_parameter_char] = ACTIONS(278),
    [sym_subscript] = ACTIONS(278),
    [sym_superscript] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1114),
  },
  [410] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(1116),
  },
  [411] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(1118),
  },
  [412] = {
    [sym__escape] = ACTIONS(1120),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1120),
    [sym_alignment_tab] = ACTIONS(1120),
    [sym_begin_group] = ACTIONS(1120),
    [sym_comment] = ACTIONS(1122),
    [sym_magic_comment] = ACTIONS(1122),
    [sym_math_shift] = ACTIONS(1120),
    [sym_parameter_char] = ACTIONS(1120),
    [sym_subscript] = ACTIONS(1120),
    [sym_superscript] = ACTIONS(1120),
    [ts_builtin_sym_end] = ACTIONS(1120),
    [anon_sym_LBRACK] = ACTIONS(1120),
    [anon_sym_RBRACK] = ACTIONS(1120),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1120),
  },
  [413] = {
    [sym__common] = STATE(655),
    [sym_inline_verbatim] = STATE(655),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(655),
    [sym_text_mode] = STATE(654),
    [sym_parameter] = STATE(655),
    [sym_text_env] = STATE(655),
    [sym__display_math] = STATE(655),
    [sym_tex_display_math] = STATE(655),
    [sym_latex_display_math] = STATE(655),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(655),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(655),
    [sym_tex_inline_math] = STATE(655),
    [sym_latex_inline_math] = STATE(655),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(655),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(655),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(655),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(655),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(655),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(655),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(655),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(655),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(655),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(655),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(655),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(655),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(655),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(655),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(655),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(655),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(655),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(655),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(655),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(655),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(655),
    [sym_glue_assign] = STATE(655),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(655),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(655),
    [sym_strut] = STATE(655),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(655),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(655),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(655),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(655),
    [sym_setbox] = STATE(655),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(655),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(655),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(655),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(655),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(655),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(655),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(655),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(655),
    [sym_token] = STATE(655),
    [sym_escaped] = STATE(655),
    [aux_sym_text_mode_repeat1] = STATE(655),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1125),
    [sym_alignment_tab] = ACTIONS(1125),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(1127),
    [sym_end_group] = ACTIONS(1130),
    [sym_magic_comment] = ACTIONS(1127),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [414] = {
    [sym__escape] = ACTIONS(1132),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_comment] = ACTIONS(1134),
    [sym_magic_comment] = ACTIONS(1134),
    [sym_math_shift] = ACTIONS(1132),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_RBRACK] = ACTIONS(1132),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1132),
  },
  [415] = {
    [sym__escape] = ACTIONS(1137),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1137),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_begin_group] = ACTIONS(1137),
    [sym_comment] = ACTIONS(1139),
    [sym_magic_comment] = ACTIONS(1139),
    [sym_math_shift] = ACTIONS(1137),
    [sym_parameter_char] = ACTIONS(1137),
    [sym_subscript] = ACTIONS(1137),
    [sym_superscript] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(1137),
    [anon_sym_RBRACK] = ACTIONS(1137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1137),
  },
  [416] = {
    [sym__common] = STATE(466),
    [sym__math_mode] = STATE(466),
    [sym_parameter] = STATE(466),
    [sym_math_env] = STATE(466),
    [sym_tag] = STATE(466),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end] = STATE(656),
    [sym_end_token] = STATE(199),
    [sym_include] = STATE(466),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(466),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(466),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(466),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(466),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(466),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(466),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(466),
    [sym_glue_assign] = STATE(466),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(466),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(466),
    [sym_strut] = STATE(466),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(466),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(466),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(466),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(466),
    [sym_setbox] = STATE(466),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(466),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(466),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(466),
    [sym_token] = STATE(466),
    [sym_escaped] = STATE(466),
    [aux_sym_math_mode_repeat1] = STATE(466),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [417] = {
    [sym_text] = STATE(657),
    [aux_sym_text_repeat1] = STATE(489),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(634),
  },
  [418] = {
    [sym__escape] = ACTIONS(629),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(629),
    [sym_alignment_tab] = ACTIONS(629),
    [sym_begin_group] = ACTIONS(629),
    [sym_comment] = ACTIONS(631),
    [sym_magic_comment] = ACTIONS(631),
    [sym_parameter_char] = ACTIONS(629),
    [sym_subscript] = ACTIONS(629),
    [sym_superscript] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(629),
  },
  [419] = {
    [sym_makebox] = STATE(534),
    [sym_strut] = STATE(534),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(534),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(534),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(534),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(534),
    [sym__escape] = ACTIONS(773),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [420] = {
    [sym_makebox] = STATE(536),
    [sym_strut] = STATE(536),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(536),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(536),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(536),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(536),
    [sym__escape] = ACTIONS(773),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1142),
  },
  [421] = {
    [sym__common] = STATE(421),
    [sym__math_mode] = STATE(421),
    [sym_parameter] = STATE(421),
    [sym_math_env] = STATE(421),
    [sym_tag] = STATE(421),
    [sym_tag_token] = STATE(147),
    [sym_begin] = STATE(148),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(421),
    [sym_include_token] = STATE(20),
    [sym_storage] = STATE(421),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(421),
    [sym_catcode_token] = STATE(26),
    [sym_makeatletter] = STATE(421),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(421),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(421),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(421),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(421),
    [sym_glue_assign] = STATE(421),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(421),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(421),
    [sym_strut] = STATE(421),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(421),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(421),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(421),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(421),
    [sym_setbox] = STATE(421),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(421),
    [sym_box_dimension_token] = STATE(45),
    [sym_math_group] = STATE(421),
    [sym_begin_opt] = STATE(152),
    [sym_end_opt] = STATE(152),
    [sym_text] = STATE(421),
    [sym_token] = STATE(421),
    [sym_escaped] = STATE(421),
    [aux_sym_math_mode_repeat1] = STATE(421),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(1144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1147),
    [sym_alignment_tab] = ACTIONS(1147),
    [sym_begin_group] = ACTIONS(1150),
    [sym_comment] = ACTIONS(1153),
    [sym_magic_comment] = ACTIONS(1153),
    [sym_math_shift] = ACTIONS(1157),
    [sym_parameter_char] = ACTIONS(1159),
    [sym_subscript] = ACTIONS(1147),
    [sym_superscript] = ACTIONS(1147),
    [anon_sym_LBRACK] = ACTIONS(1162),
    [anon_sym_RBRACK] = ACTIONS(1165),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1168),
  },
  [422] = {
    [aux_sym_text_repeat1] = STATE(422),
    [sym__escape] = ACTIONS(837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(837),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_begin_group] = ACTIONS(837),
    [sym_comment] = ACTIONS(839),
    [sym_magic_comment] = ACTIONS(839),
    [sym_math_shift] = ACTIONS(837),
    [sym_parameter_char] = ACTIONS(837),
    [sym_subscript] = ACTIONS(837),
    [sym_superscript] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1171),
  },
  [423] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_delim] = ACTIONS(1174),
  },
  [424] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1176),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [425] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1178),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [426] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1180),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [427] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1182),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [428] = {
    [sym__escape] = ACTIONS(293),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_comment] = ACTIONS(295),
    [sym_magic_comment] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(293),
  },
  [429] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1184),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [430] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1186),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [431] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1188),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [432] = {
    [sym__escape] = ACTIONS(1067),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1067),
    [sym_alignment_tab] = ACTIONS(1067),
    [sym_begin_group] = ACTIONS(1067),
    [sym_comment] = ACTIONS(1069),
    [sym_magic_comment] = ACTIONS(1069),
    [sym_parameter_char] = ACTIONS(1067),
    [sym_subscript] = ACTIONS(1067),
    [sym_superscript] = ACTIONS(1067),
    [anon_sym_LBRACK] = ACTIONS(1067),
    [anon_sym_RBRACK] = ACTIONS(1067),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1067),
  },
  [433] = {
    [sym__common] = STATE(648),
    [sym__math_mode] = STATE(648),
    [sym_parameter] = STATE(648),
    [sym_math_env] = STATE(648),
    [sym_tag] = STATE(648),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(648),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(648),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(648),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(648),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(648),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(648),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(648),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(648),
    [sym_glue_assign] = STATE(648),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(648),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(648),
    [sym_strut] = STATE(648),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(648),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(648),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(648),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(648),
    [sym_setbox] = STATE(648),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(648),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(648),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(648),
    [sym_token] = STATE(648),
    [sym_escaped] = STATE(648),
    [aux_sym_math_mode_repeat1] = STATE(648),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(454),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1105),
    [sym_alignment_tab] = ACTIONS(1105),
    [sym_begin_group] = ACTIONS(458),
    [sym_comment] = ACTIONS(1107),
    [sym_end_group] = ACTIONS(1190),
    [sym_magic_comment] = ACTIONS(1107),
    [sym_parameter_char] = ACTIONS(465),
    [sym_subscript] = ACTIONS(1105),
    [sym_superscript] = ACTIONS(1105),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(471),
  },
  [434] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(1192),
  },
  [435] = {
    [sym__escape] = ACTIONS(1194),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1194),
    [sym_alignment_tab] = ACTIONS(1194),
    [sym_begin_group] = ACTIONS(1194),
    [sym_comment] = ACTIONS(1196),
    [sym_magic_comment] = ACTIONS(1196),
    [sym_math_shift] = ACTIONS(1194),
    [sym_parameter_char] = ACTIONS(1194),
    [sym_subscript] = ACTIONS(1194),
    [sym_superscript] = ACTIONS(1194),
    [ts_builtin_sym_end] = ACTIONS(1194),
    [anon_sym_LBRACK] = ACTIONS(1194),
    [anon_sym_RBRACK] = ACTIONS(1194),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1194),
  },
  [436] = {
    [sym__common] = STATE(655),
    [sym_inline_verbatim] = STATE(655),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(655),
    [sym_text_mode] = STATE(670),
    [sym_parameter] = STATE(655),
    [sym_text_env] = STATE(655),
    [sym__display_math] = STATE(655),
    [sym_tex_display_math] = STATE(655),
    [sym_latex_display_math] = STATE(655),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(655),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(655),
    [sym_tex_inline_math] = STATE(655),
    [sym_latex_inline_math] = STATE(655),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(655),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(655),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(655),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(655),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(655),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(655),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(655),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(655),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(655),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(655),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(655),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(655),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(655),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(655),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(655),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(655),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(655),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(655),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(655),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(655),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(655),
    [sym_glue_assign] = STATE(655),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(655),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(655),
    [sym_strut] = STATE(655),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(655),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(655),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(655),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(655),
    [sym_setbox] = STATE(655),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(655),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(655),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(655),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(655),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(655),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(655),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(655),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(655),
    [sym_token] = STATE(655),
    [sym_escaped] = STATE(655),
    [aux_sym_text_mode_repeat1] = STATE(655),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1125),
    [sym_alignment_tab] = ACTIONS(1125),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(1127),
    [sym_end_group] = ACTIONS(1199),
    [sym_magic_comment] = ACTIONS(1127),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [437] = {
    [sym__escape] = ACTIONS(1132),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_comment] = ACTIONS(1134),
    [sym_magic_comment] = ACTIONS(1134),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_RBRACK] = ACTIONS(1132),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1132),
  },
  [438] = {
    [sym__escape] = ACTIONS(1137),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1137),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_begin_group] = ACTIONS(1137),
    [sym_comment] = ACTIONS(1139),
    [sym_magic_comment] = ACTIONS(1139),
    [sym_parameter_char] = ACTIONS(1137),
    [sym_subscript] = ACTIONS(1137),
    [sym_superscript] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(1137),
    [anon_sym_RBRACK] = ACTIONS(1137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1137),
  },
  [439] = {
    [sym_name_group] = STATE(671),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(484),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [440] = {
    [sym__common] = STATE(466),
    [sym__math_mode] = STATE(466),
    [sym_parameter] = STATE(466),
    [sym_math_env] = STATE(466),
    [sym_tag] = STATE(466),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end] = STATE(672),
    [sym_end_token] = STATE(439),
    [sym_include] = STATE(466),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(466),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(466),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(466),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(466),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(466),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(466),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(466),
    [sym_glue_assign] = STATE(466),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(466),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(466),
    [sym_strut] = STATE(466),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(466),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(466),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(466),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(466),
    [sym_setbox] = STATE(466),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(466),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(466),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(466),
    [sym_token] = STATE(466),
    [sym_escaped] = STATE(466),
    [aux_sym_math_mode_repeat1] = STATE(466),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [441] = {
    [sym__common] = STATE(674),
    [sym_inline_verbatim] = STATE(674),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(674),
    [sym_parameter] = STATE(674),
    [sym_text_env] = STATE(674),
    [sym__display_math] = STATE(674),
    [sym_tex_display_math] = STATE(674),
    [sym_latex_display_math] = STATE(674),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(674),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(674),
    [sym_tex_inline_math] = STATE(674),
    [sym_latex_inline_math] = STATE(674),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(674),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(674),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(674),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(674),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(674),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(674),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(674),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(674),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(674),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(674),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(674),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(674),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(674),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(674),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(674),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(674),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(674),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(674),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(674),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(674),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(674),
    [sym_glue_assign] = STATE(674),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(674),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(674),
    [sym_strut] = STATE(674),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(674),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(674),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(674),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(674),
    [sym_setbox] = STATE(674),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(674),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(674),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(674),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(674),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(674),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(674),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(674),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(674),
    [sym_token] = STATE(674),
    [sym_escaped] = STATE(674),
    [aux_sym_text_mode_repeat1] = STATE(674),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1201),
    [sym_alignment_tab] = ACTIONS(1201),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(1203),
    [sym_end_group] = ACTIONS(1206),
    [sym_magic_comment] = ACTIONS(1203),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [442] = {
    [sym__escape] = ACTIONS(651),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_comment] = ACTIONS(653),
    [sym_magic_comment] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(651),
  },
  [443] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1208),
  },
  [444] = {
    [aux_sym_token_repeat1] = STATE(678),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(1210),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1212),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1214),
  },
  [445] = {
    [sym_glue_token] = STATE(448),
    [sym_dimension_token] = STATE(446),
    [sym_box_dimension_token] = STATE(449),
    [sym_glue] = STATE(679),
    [sym_box_dimension_ref] = STATE(446),
    [sym_dimension] = STATE(451),
    [sym_token] = STATE(446),
    [sym__escape] = ACTIONS(538),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(542),
    [sym_decimal] = ACTIONS(544),
  },
  [446] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_plus] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [447] = {
    [sym_glue_token] = STATE(681),
    [sym_dimension_token] = STATE(680),
    [sym_box_dimension_token] = STATE(449),
    [sym_box_dimension_ref] = STATE(680),
    [sym_token] = STATE(680),
    [sym__escape] = ACTIONS(538),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1216),
  },
  [448] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(714),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(712),
  },
  [449] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1218),
  },
  [450] = {
    [sym__escape] = ACTIONS(719),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_comment] = ACTIONS(721),
    [sym_magic_comment] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(719),
    [sym_subscript] = ACTIONS(719),
    [sym_superscript] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(719),
  },
  [451] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_magic_comment] = ACTIONS(714),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [anon_sym_plus] = ACTIONS(1220),
    [anon_sym_minus] = ACTIONS(1222),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(728),
  },
  [452] = {
    [aux_sym_token_repeat1] = STATE(431),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1224),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(518),
  },
  [453] = {
    [sym_dimension_token] = STATE(454),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(454),
    [sym_dimension] = STATE(686),
    [sym_token] = STATE(454),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(550),
    [sym_decimal] = ACTIONS(552),
  },
  [454] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(703),
  },
  [455] = {
    [sym_dimension_token] = STATE(687),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(687),
    [sym_token] = STATE(687),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1226),
  },
  [456] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1228),
  },
  [457] = {
    [sym__escape] = ACTIONS(736),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_comment] = ACTIONS(738),
    [sym_magic_comment] = ACTIONS(738),
    [sym_parameter_char] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(736),
  },
  [458] = {
    [sym__escape] = ACTIONS(741),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_comment] = ACTIONS(743),
    [sym_magic_comment] = ACTIONS(743),
    [sym_parameter_char] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(741),
  },
  [459] = {
    [sym__escape] = ACTIONS(746),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_begin_group] = ACTIONS(746),
    [sym_comment] = ACTIONS(748),
    [sym_magic_comment] = ACTIONS(748),
    [sym_parameter_char] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_superscript] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(746),
  },
  [460] = {
    [sym_dimension_token] = STATE(526),
    [sym_box_dimension_token] = STATE(528),
    [sym_box_dimension_ref] = STATE(526),
    [sym_dimension] = STATE(689),
    [sym_token] = STATE(526),
    [sym__escape] = ACTIONS(751),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(753),
    [sym_decimal] = ACTIONS(755),
  },
  [461] = {
    [sym__escape] = ACTIONS(757),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_comment] = ACTIONS(759),
    [sym_magic_comment] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(757),
  },
  [462] = {
    [sym__escape] = ACTIONS(762),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(762),
    [sym_alignment_tab] = ACTIONS(762),
    [sym_begin_group] = ACTIONS(762),
    [sym_comment] = ACTIONS(764),
    [sym_magic_comment] = ACTIONS(764),
    [sym_parameter_char] = ACTIONS(762),
    [sym_subscript] = ACTIONS(762),
    [sym_superscript] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(762),
  },
  [463] = {
    [sym_makebox] = STATE(691),
    [sym_strut] = STATE(691),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(691),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(691),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(691),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(691),
    [sym__escape] = ACTIONS(1230),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [464] = {
    [sym_makebox] = STATE(693),
    [sym_strut] = STATE(693),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(693),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(693),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(693),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(693),
    [sym__escape] = ACTIONS(1230),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1232),
  },
  [465] = {
    [sym_dimension_token] = STATE(454),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(454),
    [sym_dimension] = STATE(695),
    [sym_token] = STATE(454),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1234),
    [sym_unit] = ACTIONS(550),
    [sym_decimal] = ACTIONS(552),
  },
  [466] = {
    [sym__common] = STATE(466),
    [sym__math_mode] = STATE(466),
    [sym_parameter] = STATE(466),
    [sym_math_env] = STATE(466),
    [sym_tag] = STATE(466),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(466),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(466),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(466),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(466),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(466),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(466),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(466),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(466),
    [sym_glue_assign] = STATE(466),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(466),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(466),
    [sym_strut] = STATE(466),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(466),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(466),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(466),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(466),
    [sym_setbox] = STATE(466),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(466),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(466),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(466),
    [sym_token] = STATE(466),
    [sym_escaped] = STATE(466),
    [aux_sym_math_mode_repeat1] = STATE(466),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(1236),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1239),
    [sym_alignment_tab] = ACTIONS(1239),
    [sym_begin_group] = ACTIONS(1242),
    [sym_comment] = ACTIONS(1245),
    [sym_magic_comment] = ACTIONS(1245),
    [sym_parameter_char] = ACTIONS(1249),
    [sym_subscript] = ACTIONS(1239),
    [sym_superscript] = ACTIONS(1239),
    [anon_sym_LBRACK] = ACTIONS(1252),
    [anon_sym_RBRACK] = ACTIONS(1255),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1258),
  },
  [467] = {
    [sym__escape] = ACTIONS(827),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(827),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_begin_group] = ACTIONS(827),
    [sym_comment] = ACTIONS(829),
    [sym_magic_comment] = ACTIONS(829),
    [sym_parameter_char] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_superscript] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(827),
  },
  [468] = {
    [aux_sym_text_repeat1] = STATE(468),
    [sym__escape] = ACTIONS(837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(837),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_begin_group] = ACTIONS(837),
    [sym_comment] = ACTIONS(839),
    [sym_magic_comment] = ACTIONS(839),
    [sym_parameter_char] = ACTIONS(837),
    [sym_subscript] = ACTIONS(837),
    [sym_superscript] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1261),
  },
  [469] = {
    [sym__escape] = ACTIONS(1264),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1264),
    [sym_alignment_tab] = ACTIONS(1264),
    [sym_begin_group] = ACTIONS(1264),
    [sym_comment] = ACTIONS(1266),
    [sym_magic_comment] = ACTIONS(1266),
    [sym_math_shift] = ACTIONS(1264),
    [sym_parameter_char] = ACTIONS(1264),
    [sym_subscript] = ACTIONS(1264),
    [sym_superscript] = ACTIONS(1264),
    [ts_builtin_sym_end] = ACTIONS(1264),
    [anon_sym_LBRACK] = ACTIONS(1264),
    [anon_sym_RBRACK] = ACTIONS(1264),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1264),
  },
  [470] = {
    [sym_display_math_env_group] = STATE(697),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1269),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [471] = {
    [sym__escape] = ACTIONS(1271),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1271),
    [sym_alignment_tab] = ACTIONS(1271),
    [sym_begin_group] = ACTIONS(1271),
    [sym_comment] = ACTIONS(1273),
    [sym_magic_comment] = ACTIONS(1273),
    [sym_math_shift] = ACTIONS(1271),
    [sym_parameter_char] = ACTIONS(1271),
    [sym_subscript] = ACTIONS(1271),
    [sym_superscript] = ACTIONS(1271),
    [ts_builtin_sym_end] = ACTIONS(1271),
    [anon_sym_LBRACK] = ACTIONS(1271),
    [anon_sym_RBRACK] = ACTIONS(1271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1271),
  },
  [472] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(571),
  },
  [473] = {
    [sym__escape] = ACTIONS(1276),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1276),
    [sym_alignment_tab] = ACTIONS(1276),
    [sym_begin_group] = ACTIONS(1276),
    [sym_comment] = ACTIONS(1278),
    [sym_magic_comment] = ACTIONS(1278),
    [sym_math_shift] = ACTIONS(1276),
    [sym_parameter_char] = ACTIONS(1276),
    [sym_subscript] = ACTIONS(1276),
    [sym_superscript] = ACTIONS(1276),
    [ts_builtin_sym_end] = ACTIONS(1276),
    [anon_sym_LBRACK] = ACTIONS(1276),
    [anon_sym_RBRACK] = ACTIONS(1276),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1276),
  },
  [474] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1281),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [475] = {
    [sym__escape] = ACTIONS(1283),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1283),
    [sym_alignment_tab] = ACTIONS(1283),
    [sym_begin_group] = ACTIONS(1283),
    [sym_comment] = ACTIONS(1285),
    [sym_magic_comment] = ACTIONS(1285),
    [sym_math_shift] = ACTIONS(1283),
    [sym_parameter_char] = ACTIONS(1283),
    [sym_subscript] = ACTIONS(1283),
    [sym_superscript] = ACTIONS(1283),
    [ts_builtin_sym_end] = ACTIONS(1283),
    [anon_sym_LBRACK] = ACTIONS(1283),
    [anon_sym_RBRACK] = ACTIONS(1283),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1283),
  },
  [476] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_inline_math_env_name] = ACTIONS(1288),
  },
  [477] = {
    [sym__escape] = ACTIONS(1290),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1290),
    [sym_alignment_tab] = ACTIONS(1290),
    [sym_begin_group] = ACTIONS(1290),
    [sym_comment] = ACTIONS(1292),
    [sym_magic_comment] = ACTIONS(1292),
    [sym_math_shift] = ACTIONS(1290),
    [sym_parameter_char] = ACTIONS(1290),
    [sym_subscript] = ACTIONS(1290),
    [sym_superscript] = ACTIONS(1290),
    [ts_builtin_sym_end] = ACTIONS(1290),
    [anon_sym_LBRACK] = ACTIONS(1290),
    [anon_sym_RBRACK] = ACTIONS(1290),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1290),
  },
  [478] = {
    [sym__escape] = ACTIONS(1295),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1295),
    [sym_alignment_tab] = ACTIONS(1295),
    [sym_begin_group] = ACTIONS(1295),
    [sym_comment] = ACTIONS(1297),
    [sym_magic_comment] = ACTIONS(1297),
    [sym_math_shift] = ACTIONS(1295),
    [sym_parameter_char] = ACTIONS(1295),
    [sym_subscript] = ACTIONS(1295),
    [sym_superscript] = ACTIONS(1295),
    [ts_builtin_sym_end] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(1295),
    [anon_sym_RBRACK] = ACTIONS(1295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1295),
  },
  [479] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verbatim_env_name] = ACTIONS(1300),
  },
  [480] = {
    [sym__escape] = ACTIONS(1302),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1302),
    [sym_alignment_tab] = ACTIONS(1302),
    [sym_begin_group] = ACTIONS(1302),
    [sym_comment] = ACTIONS(1304),
    [sym_magic_comment] = ACTIONS(1304),
    [sym_math_shift] = ACTIONS(1302),
    [sym_parameter_char] = ACTIONS(1302),
    [sym_subscript] = ACTIONS(1302),
    [sym_superscript] = ACTIONS(1302),
    [ts_builtin_sym_end] = ACTIONS(1302),
    [anon_sym_LBRACK] = ACTIONS(1302),
    [anon_sym_RBRACK] = ACTIONS(1302),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1302),
  },
  [481] = {
    [aux_sym_verbatim_text_repeat1] = STATE(481),
    [sym__escape] = ACTIONS(1307),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(1309),
  },
  [482] = {
    [sym__escape] = ACTIONS(1312),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1312),
    [sym_alignment_tab] = ACTIONS(1312),
    [sym_begin_group] = ACTIONS(1312),
    [sym_comment] = ACTIONS(1314),
    [sym_magic_comment] = ACTIONS(1314),
    [sym_math_shift] = ACTIONS(1312),
    [sym_parameter_char] = ACTIONS(1312),
    [sym_subscript] = ACTIONS(1312),
    [sym_superscript] = ACTIONS(1312),
    [ts_builtin_sym_end] = ACTIONS(1312),
    [anon_sym_LBRACK] = ACTIONS(1312),
    [anon_sym_RBRACK] = ACTIONS(1312),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1312),
  },
  [483] = {
    [sym__escape] = ACTIONS(1317),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1317),
    [sym_alignment_tab] = ACTIONS(1317),
    [sym_begin_group] = ACTIONS(1317),
    [sym_comment] = ACTIONS(1319),
    [sym_magic_comment] = ACTIONS(1319),
    [sym_math_shift] = ACTIONS(1317),
    [sym_parameter_char] = ACTIONS(1317),
    [sym_subscript] = ACTIONS(1317),
    [sym_superscript] = ACTIONS(1317),
    [ts_builtin_sym_end] = ACTIONS(1317),
    [anon_sym_LBRACK] = ACTIONS(1317),
    [anon_sym_RBRACK] = ACTIONS(1317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1317),
  },
  [484] = {
    [sym__common] = STATE(484),
    [sym_inline_verbatim] = STATE(484),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(484),
    [sym_parameter] = STATE(484),
    [sym_text_env] = STATE(484),
    [sym__display_math] = STATE(484),
    [sym_tex_display_math] = STATE(484),
    [sym_latex_display_math] = STATE(484),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(484),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(484),
    [sym_tex_inline_math] = STATE(484),
    [sym_latex_inline_math] = STATE(484),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(484),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(484),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(484),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(484),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(484),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(484),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(484),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(484),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(484),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(484),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(484),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(484),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(484),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(484),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(484),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(484),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(484),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(484),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(484),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(484),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(484),
    [sym_glue_assign] = STATE(484),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(484),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(484),
    [sym_strut] = STATE(484),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(484),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(484),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(484),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(484),
    [sym_setbox] = STATE(484),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(484),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(484),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(484),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(484),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(484),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(484),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(484),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(5),
    [sym_text] = STATE(484),
    [sym_token] = STATE(484),
    [sym_escaped] = STATE(484),
    [aux_sym_text_mode_repeat1] = STATE(484),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(794),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1322),
    [sym_alignment_tab] = ACTIONS(1322),
    [sym_begin_group] = ACTIONS(800),
    [sym_comment] = ACTIONS(1325),
    [sym_magic_comment] = ACTIONS(1325),
    [sym_math_shift] = ACTIONS(807),
    [sym_parameter_char] = ACTIONS(810),
    [sym_subscript] = ACTIONS(813),
    [sym_superscript] = ACTIONS(813),
    [anon_sym_LBRACK] = ACTIONS(818),
    [anon_sym_RBRACK] = ACTIONS(821),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1329),
  },
  [485] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1332),
    [sym_magic_comment] = ACTIONS(7),
  },
  [486] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1334),
    [sym_magic_comment] = ACTIONS(7),
  },
  [487] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1336),
    [sym_magic_comment] = ACTIONS(7),
  },
  [488] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1338),
    [sym_magic_comment] = ACTIONS(7),
  },
  [489] = {
    [aux_sym_text_repeat1] = STATE(705),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(278),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1340),
  },
  [490] = {
    [sym__common] = STATE(707),
    [sym_inline_verbatim] = STATE(707),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(707),
    [sym_parameter] = STATE(707),
    [sym_text_env] = STATE(707),
    [sym__display_math] = STATE(707),
    [sym_tex_display_math] = STATE(707),
    [sym_latex_display_math] = STATE(707),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(707),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(707),
    [sym_tex_inline_math] = STATE(707),
    [sym_latex_inline_math] = STATE(707),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(707),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(707),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(707),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(707),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(707),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(707),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(707),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(707),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(707),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(707),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(707),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(707),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(707),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(707),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(707),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(707),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(707),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(707),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(707),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(707),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(707),
    [sym_glue_assign] = STATE(707),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(707),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(707),
    [sym_strut] = STATE(707),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(707),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(707),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(707),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(707),
    [sym_setbox] = STATE(707),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(707),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(707),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(707),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(707),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(707),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(707),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(707),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(707),
    [sym_token] = STATE(707),
    [sym_escaped] = STATE(707),
    [aux_sym_text_mode_repeat1] = STATE(707),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1342),
    [sym_alignment_tab] = ACTIONS(1342),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(1344),
    [sym_end_group] = ACTIONS(1347),
    [sym_magic_comment] = ACTIONS(1344),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [491] = {
    [sym__escape] = ACTIONS(1349),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1349),
    [sym_alignment_tab] = ACTIONS(1349),
    [sym_begin_group] = ACTIONS(1349),
    [sym_comment] = ACTIONS(1351),
    [sym_magic_comment] = ACTIONS(1351),
    [sym_parameter_char] = ACTIONS(1349),
    [sym_subscript] = ACTIONS(1349),
    [sym_superscript] = ACTIONS(1349),
    [anon_sym_LBRACK] = ACTIONS(1349),
    [anon_sym_RBRACK] = ACTIONS(1349),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1349),
  },
  [492] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1354),
    [sym_magic_comment] = ACTIONS(7),
  },
  [493] = {
    [sym_text_group] = STATE(709),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(618),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1354),
    [sym_magic_comment] = ACTIONS(7),
  },
  [494] = {
    [sym__common] = STATE(712),
    [sym_inline_verbatim] = STATE(712),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(712),
    [sym_parameter] = STATE(712),
    [sym_text_env] = STATE(712),
    [sym__display_math] = STATE(712),
    [sym_tex_display_math] = STATE(712),
    [sym_latex_display_math] = STATE(712),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(712),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(712),
    [sym_tex_inline_math] = STATE(712),
    [sym_latex_inline_math] = STATE(712),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(712),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(712),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(712),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(712),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(712),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(712),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(712),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(712),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(712),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(712),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(712),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(712),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(712),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(712),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(712),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(712),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(712),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(712),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(712),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(712),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(712),
    [sym_glue_assign] = STATE(712),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(712),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(712),
    [sym_strut] = STATE(712),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(712),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(712),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(712),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(712),
    [sym_setbox] = STATE(712),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(712),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(712),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(712),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(712),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(712),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(712),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(712),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(711),
    [sym_text] = STATE(712),
    [sym_token] = STATE(712),
    [sym_escaped] = STATE(712),
    [aux_sym_text_mode_repeat1] = STATE(712),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(5),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1356),
    [sym_alignment_tab] = ACTIONS(1356),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(1358),
    [sym_magic_comment] = ACTIONS(1358),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(1361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [495] = {
    [sym__escape] = ACTIONS(1363),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(1363),
  },
  [496] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1365),
    [sym_magic_comment] = ACTIONS(7),
  },
  [497] = {
    [sym_text_group] = STATE(714),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(618),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1365),
    [sym_magic_comment] = ACTIONS(7),
  },
  [498] = {
    [sym__escape] = ACTIONS(1367),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1367),
    [sym_alignment_tab] = ACTIONS(1367),
    [sym_begin_group] = ACTIONS(1367),
    [sym_comment] = ACTIONS(1369),
    [sym_magic_comment] = ACTIONS(1369),
    [sym_math_shift] = ACTIONS(1367),
    [sym_parameter_char] = ACTIONS(1367),
    [sym_subscript] = ACTIONS(1367),
    [sym_superscript] = ACTIONS(1367),
    [ts_builtin_sym_end] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_RBRACK] = ACTIONS(1367),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1367),
  },
  [499] = {
    [sym__escape] = ACTIONS(144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(144),
    [sym_alignment_tab] = ACTIONS(144),
    [sym_begin_group] = ACTIONS(1372),
    [sym_comment] = ACTIONS(146),
    [sym_magic_comment] = ACTIONS(146),
    [sym_math_shift] = ACTIONS(144),
    [sym_parameter_char] = ACTIONS(144),
    [sym_subscript] = ACTIONS(144),
    [sym_superscript] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(144),
  },
  [500] = {
    [sym__common] = STATE(484),
    [sym_inline_verbatim] = STATE(484),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(484),
    [sym_parameter] = STATE(484),
    [sym_text_env] = STATE(484),
    [sym__display_math] = STATE(484),
    [sym_tex_display_math] = STATE(484),
    [sym_latex_display_math] = STATE(484),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(484),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(484),
    [sym_tex_inline_math] = STATE(484),
    [sym_latex_inline_math] = STATE(484),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(484),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(484),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(484),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(484),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(484),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(484),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(484),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(484),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(484),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(484),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(484),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(484),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(484),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(484),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(484),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(484),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(484),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(484),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(484),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(484),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(484),
    [sym_glue_assign] = STATE(484),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(484),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(484),
    [sym_strut] = STATE(484),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(484),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(484),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(484),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(484),
    [sym_setbox] = STATE(484),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(484),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(484),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(484),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(484),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(484),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(484),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(484),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(715),
    [sym_text] = STATE(484),
    [sym_token] = STATE(484),
    [sym_escaped] = STATE(484),
    [aux_sym_text_mode_repeat1] = STATE(484),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(5),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [501] = {
    [sym__escape] = ACTIONS(1374),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1374),
    [sym_alignment_tab] = ACTIONS(1374),
    [sym_begin_group] = ACTIONS(1374),
    [sym_comment] = ACTIONS(1376),
    [sym_magic_comment] = ACTIONS(1376),
    [sym_math_shift] = ACTIONS(1374),
    [sym_parameter_char] = ACTIONS(1374),
    [sym_subscript] = ACTIONS(1374),
    [sym_superscript] = ACTIONS(1374),
    [ts_builtin_sym_end] = ACTIONS(1374),
    [anon_sym_LBRACK] = ACTIONS(1374),
    [anon_sym_RBRACK] = ACTIONS(1374),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1374),
  },
  [502] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(397),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [503] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(1379),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [504] = {
    [sym_text_group] = STATE(717),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [505] = {
    [sym_text_group] = STATE(718),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [506] = {
    [sym_text_group] = STATE(719),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [507] = {
    [sym__escape] = ACTIONS(1381),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1381),
    [sym_alignment_tab] = ACTIONS(1381),
    [sym_begin_group] = ACTIONS(1381),
    [sym_comment] = ACTIONS(1383),
    [sym_magic_comment] = ACTIONS(1383),
    [sym_math_shift] = ACTIONS(1381),
    [sym_parameter_char] = ACTIONS(1381),
    [sym_subscript] = ACTIONS(1381),
    [sym_superscript] = ACTIONS(1381),
    [ts_builtin_sym_end] = ACTIONS(1381),
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_RBRACK] = ACTIONS(1381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1381),
  },
  [508] = {
    [sym_text_group] = STATE(720),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [509] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(293),
  },
  [510] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1386),
  },
  [511] = {
    [sym__escape] = ACTIONS(1388),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1388),
    [sym_alignment_tab] = ACTIONS(1388),
    [sym_begin_group] = ACTIONS(1388),
    [sym_comment] = ACTIONS(1390),
    [sym_magic_comment] = ACTIONS(1390),
    [sym_math_shift] = ACTIONS(1388),
    [sym_parameter_char] = ACTIONS(1388),
    [sym_subscript] = ACTIONS(1388),
    [sym_superscript] = ACTIONS(1388),
    [ts_builtin_sym_end] = ACTIONS(1388),
    [anon_sym_LBRACK] = ACTIONS(1388),
    [anon_sym_RBRACK] = ACTIONS(1388),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1388),
  },
  [512] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1393),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [513] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1395),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [514] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1397),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [515] = {
    [sym__escape] = ACTIONS(1399),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1399),
    [sym_alignment_tab] = ACTIONS(1399),
    [sym_begin_group] = ACTIONS(1399),
    [sym_comment] = ACTIONS(1401),
    [sym_magic_comment] = ACTIONS(1401),
    [sym_math_shift] = ACTIONS(1399),
    [sym_parameter_char] = ACTIONS(1399),
    [sym_subscript] = ACTIONS(1399),
    [sym_superscript] = ACTIONS(1399),
    [ts_builtin_sym_end] = ACTIONS(1399),
    [anon_sym_LBRACK] = ACTIONS(1399),
    [anon_sym_RBRACK] = ACTIONS(1399),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1399),
  },
  [516] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_math_shift] = ACTIONS(1404),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [ts_builtin_sym_end] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_plus] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [517] = {
    [sym__escape] = ACTIONS(1411),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1411),
    [sym_alignment_tab] = ACTIONS(1411),
    [sym_begin_group] = ACTIONS(1411),
    [sym_comment] = ACTIONS(1413),
    [sym_magic_comment] = ACTIONS(1413),
    [sym_math_shift] = ACTIONS(1411),
    [sym_parameter_char] = ACTIONS(1411),
    [sym_subscript] = ACTIONS(1411),
    [sym_superscript] = ACTIONS(1411),
    [ts_builtin_sym_end] = ACTIONS(1411),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [anon_sym_RBRACK] = ACTIONS(1411),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1411),
  },
  [518] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_math_shift] = ACTIONS(1416),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [ts_builtin_sym_end] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_plus] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [519] = {
    [sym_dimension_token] = STATE(726),
    [sym_box_dimension_token] = STATE(728),
    [sym_box_dimension_ref] = STATE(726),
    [sym_dimension] = STATE(729),
    [sym_token] = STATE(726),
    [sym__escape] = ACTIONS(1423),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1425),
    [sym_decimal] = ACTIONS(1427),
  },
  [520] = {
    [sym_dimension_token] = STATE(238),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(238),
    [sym_dimension] = STATE(730),
    [sym_token] = STATE(238),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
  },
  [521] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1429),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [522] = {
    [sym__escape] = ACTIONS(1431),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1431),
    [sym_alignment_tab] = ACTIONS(1431),
    [sym_begin_group] = ACTIONS(1431),
    [sym_comment] = ACTIONS(1433),
    [sym_magic_comment] = ACTIONS(1433),
    [sym_math_shift] = ACTIONS(1431),
    [sym_parameter_char] = ACTIONS(1431),
    [sym_subscript] = ACTIONS(1431),
    [sym_superscript] = ACTIONS(1431),
    [ts_builtin_sym_end] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(1431),
    [anon_sym_RBRACK] = ACTIONS(1431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1431),
  },
  [523] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_math_shift] = ACTIONS(1404),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [ts_builtin_sym_end] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1404),
  },
  [524] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_math_shift] = ACTIONS(1416),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [ts_builtin_sym_end] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1416),
  },
  [525] = {
    [aux_sym_token_repeat1] = STATE(733),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1436),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1438),
  },
  [526] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [527] = {
    [sym_dimension_token] = STATE(734),
    [sym_box_dimension_token] = STATE(528),
    [sym_box_dimension_ref] = STATE(734),
    [sym_token] = STATE(734),
    [sym__escape] = ACTIONS(751),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1440),
  },
  [528] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1442),
  },
  [529] = {
    [sym_text_group] = STATE(736),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [530] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1444),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [531] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [532] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [533] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(82),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(1446),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
  },
  [534] = {
    [sym__escape] = ACTIONS(1448),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1448),
    [sym_alignment_tab] = ACTIONS(1448),
    [sym_begin_group] = ACTIONS(1448),
    [sym_comment] = ACTIONS(1450),
    [sym_magic_comment] = ACTIONS(1450),
    [sym_math_shift] = ACTIONS(1448),
    [sym_parameter_char] = ACTIONS(1448),
    [sym_subscript] = ACTIONS(1448),
    [sym_superscript] = ACTIONS(1448),
    [ts_builtin_sym_end] = ACTIONS(1448),
    [anon_sym_LBRACK] = ACTIONS(1448),
    [anon_sym_RBRACK] = ACTIONS(1448),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1448),
  },
  [535] = {
    [sym_makebox] = STATE(738),
    [sym_strut] = STATE(738),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(738),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(738),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(738),
    [sym_movebox_token] = STATE(43),
    [sym__box] = STATE(738),
    [sym__escape] = ACTIONS(773),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [536] = {
    [sym__escape] = ACTIONS(1453),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1453),
    [sym_alignment_tab] = ACTIONS(1453),
    [sym_begin_group] = ACTIONS(1453),
    [sym_comment] = ACTIONS(1455),
    [sym_magic_comment] = ACTIONS(1455),
    [sym_math_shift] = ACTIONS(1453),
    [sym_parameter_char] = ACTIONS(1453),
    [sym_subscript] = ACTIONS(1453),
    [sym_superscript] = ACTIONS(1453),
    [ts_builtin_sym_end] = ACTIONS(1453),
    [anon_sym_LBRACK] = ACTIONS(1453),
    [anon_sym_RBRACK] = ACTIONS(1453),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1453),
  },
  [537] = {
    [sym_dimension_token] = STATE(238),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(238),
    [sym_dimension] = STATE(739),
    [sym_token] = STATE(238),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
  },
  [538] = {
    [sym__escape] = ACTIONS(1458),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1458),
    [sym_alignment_tab] = ACTIONS(1458),
    [sym_begin_group] = ACTIONS(1458),
    [sym_comment] = ACTIONS(1460),
    [sym_magic_comment] = ACTIONS(1460),
    [sym_math_shift] = ACTIONS(1458),
    [sym_parameter_char] = ACTIONS(1458),
    [sym_subscript] = ACTIONS(1458),
    [sym_superscript] = ACTIONS(1458),
    [ts_builtin_sym_end] = ACTIONS(1458),
    [anon_sym_LBRACK] = ACTIONS(1458),
    [anon_sym_RBRACK] = ACTIONS(1458),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1458),
  },
  [539] = {
    [sym__escape] = ACTIONS(1463),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1463),
    [sym_alignment_tab] = ACTIONS(1463),
    [sym_begin_group] = ACTIONS(1463),
    [sym_comment] = ACTIONS(1465),
    [sym_magic_comment] = ACTIONS(1465),
    [sym_math_shift] = ACTIONS(1463),
    [sym_parameter_char] = ACTIONS(1463),
    [sym_subscript] = ACTIONS(1463),
    [sym_superscript] = ACTIONS(1463),
    [ts_builtin_sym_end] = ACTIONS(1463),
    [anon_sym_LBRACK] = ACTIONS(1463),
    [anon_sym_RBRACK] = ACTIONS(1463),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1463),
  },
  [540] = {
    [sym_text_group] = STATE(740),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [541] = {
    [sym__escape] = ACTIONS(1468),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1468),
    [sym_alignment_tab] = ACTIONS(1468),
    [sym_begin_group] = ACTIONS(1468),
    [sym_comment] = ACTIONS(1470),
    [sym_magic_comment] = ACTIONS(1470),
    [sym_math_shift] = ACTIONS(1468),
    [sym_parameter_char] = ACTIONS(1468),
    [sym_subscript] = ACTIONS(1468),
    [sym_superscript] = ACTIONS(1468),
    [ts_builtin_sym_end] = ACTIONS(1468),
    [anon_sym_LBRACK] = ACTIONS(1468),
    [anon_sym_RBRACK] = ACTIONS(1468),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1468),
  },
  [542] = {
    [sym_text_group] = STATE(741),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [543] = {
    [sym__escape] = ACTIONS(1473),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1473),
    [sym_alignment_tab] = ACTIONS(1473),
    [sym_begin_group] = ACTIONS(1473),
    [sym_comment] = ACTIONS(1475),
    [sym_magic_comment] = ACTIONS(1475),
    [sym_math_shift] = ACTIONS(1473),
    [sym_parameter_char] = ACTIONS(1473),
    [sym_subscript] = ACTIONS(1473),
    [sym_superscript] = ACTIONS(1473),
    [ts_builtin_sym_end] = ACTIONS(1473),
    [anon_sym_LBRACK] = ACTIONS(1473),
    [anon_sym_RBRACK] = ACTIONS(1473),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1473),
  },
  [544] = {
    [sym__escape] = ACTIONS(845),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(845),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_begin_group] = ACTIONS(845),
    [sym_comment] = ACTIONS(847),
    [sym_end_group] = ACTIONS(845),
    [sym_magic_comment] = ACTIONS(847),
    [sym_math_shift] = ACTIONS(845),
    [sym_parameter_char] = ACTIONS(845),
    [sym_subscript] = ACTIONS(845),
    [sym_superscript] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(845),
  },
  [545] = {
    [sym__escape] = ACTIONS(850),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_comment] = ACTIONS(852),
    [sym_end_group] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(852),
    [sym_math_shift] = ACTIONS(850),
    [sym_parameter_char] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(850),
  },
  [546] = {
    [sym__escape] = ACTIONS(855),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_comment] = ACTIONS(857),
    [sym_end_group] = ACTIONS(855),
    [sym_magic_comment] = ACTIONS(857),
    [sym_math_shift] = ACTIONS(855),
    [sym_parameter_char] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(855),
  },
  [547] = {
    [sym__escape] = ACTIONS(860),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_comment] = ACTIONS(862),
    [sym_end_group] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(862),
    [sym_math_shift] = ACTIONS(860),
    [sym_parameter_char] = ACTIONS(860),
    [sym_subscript] = ACTIONS(860),
    [sym_superscript] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(860),
  },
  [548] = {
    [sym__escape] = ACTIONS(883),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_comment] = ACTIONS(885),
    [sym_end_group] = ACTIONS(883),
    [sym_magic_comment] = ACTIONS(885),
    [sym_math_shift] = ACTIONS(883),
    [sym_parameter_char] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(883),
  },
  [549] = {
    [sym__escape] = ACTIONS(906),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_comment] = ACTIONS(908),
    [sym_end_group] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(908),
    [sym_math_shift] = ACTIONS(906),
    [sym_parameter_char] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(906),
  },
  [550] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_end_group] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(933),
  },
  [551] = {
    [sym__escape] = ACTIONS(1003),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_comment] = ACTIONS(1005),
    [sym_end_group] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(1005),
    [sym_math_shift] = ACTIONS(1003),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1003),
  },
  [552] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(1478),
  },
  [553] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(1480),
  },
  [554] = {
    [sym__escape] = ACTIONS(1120),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1120),
    [sym_alignment_tab] = ACTIONS(1120),
    [sym_begin_group] = ACTIONS(1120),
    [sym_comment] = ACTIONS(1122),
    [sym_end_group] = ACTIONS(1120),
    [sym_magic_comment] = ACTIONS(1122),
    [sym_math_shift] = ACTIONS(1120),
    [sym_parameter_char] = ACTIONS(1120),
    [sym_subscript] = ACTIONS(1120),
    [sym_superscript] = ACTIONS(1120),
    [anon_sym_LBRACK] = ACTIONS(1120),
    [anon_sym_RBRACK] = ACTIONS(1120),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1120),
  },
  [555] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_delim] = ACTIONS(1482),
  },
  [556] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(1484),
  },
  [557] = {
    [sym__escape] = ACTIONS(1194),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1194),
    [sym_alignment_tab] = ACTIONS(1194),
    [sym_begin_group] = ACTIONS(1194),
    [sym_comment] = ACTIONS(1196),
    [sym_end_group] = ACTIONS(1194),
    [sym_magic_comment] = ACTIONS(1196),
    [sym_math_shift] = ACTIONS(1194),
    [sym_parameter_char] = ACTIONS(1194),
    [sym_subscript] = ACTIONS(1194),
    [sym_superscript] = ACTIONS(1194),
    [anon_sym_LBRACK] = ACTIONS(1194),
    [anon_sym_RBRACK] = ACTIONS(1194),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1194),
  },
  [558] = {
    [sym__escape] = ACTIONS(1264),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1264),
    [sym_alignment_tab] = ACTIONS(1264),
    [sym_begin_group] = ACTIONS(1264),
    [sym_comment] = ACTIONS(1266),
    [sym_end_group] = ACTIONS(1264),
    [sym_magic_comment] = ACTIONS(1266),
    [sym_math_shift] = ACTIONS(1264),
    [sym_parameter_char] = ACTIONS(1264),
    [sym_subscript] = ACTIONS(1264),
    [sym_superscript] = ACTIONS(1264),
    [anon_sym_LBRACK] = ACTIONS(1264),
    [anon_sym_RBRACK] = ACTIONS(1264),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1264),
  },
  [559] = {
    [sym_display_math_env_group] = STATE(747),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1486),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [560] = {
    [sym__escape] = ACTIONS(1271),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1271),
    [sym_alignment_tab] = ACTIONS(1271),
    [sym_begin_group] = ACTIONS(1271),
    [sym_comment] = ACTIONS(1273),
    [sym_end_group] = ACTIONS(1271),
    [sym_magic_comment] = ACTIONS(1273),
    [sym_math_shift] = ACTIONS(1271),
    [sym_parameter_char] = ACTIONS(1271),
    [sym_subscript] = ACTIONS(1271),
    [sym_superscript] = ACTIONS(1271),
    [anon_sym_LBRACK] = ACTIONS(1271),
    [anon_sym_RBRACK] = ACTIONS(1271),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1271),
  },
  [561] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(967),
  },
  [562] = {
    [sym__escape] = ACTIONS(1276),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1276),
    [sym_alignment_tab] = ACTIONS(1276),
    [sym_begin_group] = ACTIONS(1276),
    [sym_comment] = ACTIONS(1278),
    [sym_end_group] = ACTIONS(1276),
    [sym_magic_comment] = ACTIONS(1278),
    [sym_math_shift] = ACTIONS(1276),
    [sym_parameter_char] = ACTIONS(1276),
    [sym_subscript] = ACTIONS(1276),
    [sym_superscript] = ACTIONS(1276),
    [anon_sym_LBRACK] = ACTIONS(1276),
    [anon_sym_RBRACK] = ACTIONS(1276),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1276),
  },
  [563] = {
    [sym__escape] = ACTIONS(1283),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1283),
    [sym_alignment_tab] = ACTIONS(1283),
    [sym_begin_group] = ACTIONS(1283),
    [sym_comment] = ACTIONS(1285),
    [sym_end_group] = ACTIONS(1283),
    [sym_magic_comment] = ACTIONS(1285),
    [sym_math_shift] = ACTIONS(1283),
    [sym_parameter_char] = ACTIONS(1283),
    [sym_subscript] = ACTIONS(1283),
    [sym_superscript] = ACTIONS(1283),
    [anon_sym_LBRACK] = ACTIONS(1283),
    [anon_sym_RBRACK] = ACTIONS(1283),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1283),
  },
  [564] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_inline_math_env_name] = ACTIONS(1488),
  },
  [565] = {
    [sym__escape] = ACTIONS(1290),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1290),
    [sym_alignment_tab] = ACTIONS(1290),
    [sym_begin_group] = ACTIONS(1290),
    [sym_comment] = ACTIONS(1292),
    [sym_end_group] = ACTIONS(1290),
    [sym_magic_comment] = ACTIONS(1292),
    [sym_math_shift] = ACTIONS(1290),
    [sym_parameter_char] = ACTIONS(1290),
    [sym_subscript] = ACTIONS(1290),
    [sym_superscript] = ACTIONS(1290),
    [anon_sym_LBRACK] = ACTIONS(1290),
    [anon_sym_RBRACK] = ACTIONS(1290),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1290),
  },
  [566] = {
    [sym__escape] = ACTIONS(1295),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1295),
    [sym_alignment_tab] = ACTIONS(1295),
    [sym_begin_group] = ACTIONS(1295),
    [sym_comment] = ACTIONS(1297),
    [sym_end_group] = ACTIONS(1295),
    [sym_magic_comment] = ACTIONS(1297),
    [sym_math_shift] = ACTIONS(1295),
    [sym_parameter_char] = ACTIONS(1295),
    [sym_subscript] = ACTIONS(1295),
    [sym_superscript] = ACTIONS(1295),
    [anon_sym_LBRACK] = ACTIONS(1295),
    [anon_sym_RBRACK] = ACTIONS(1295),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1295),
  },
  [567] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verbatim_env_name] = ACTIONS(1490),
  },
  [568] = {
    [sym__escape] = ACTIONS(1302),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1302),
    [sym_alignment_tab] = ACTIONS(1302),
    [sym_begin_group] = ACTIONS(1302),
    [sym_comment] = ACTIONS(1304),
    [sym_end_group] = ACTIONS(1302),
    [sym_magic_comment] = ACTIONS(1304),
    [sym_math_shift] = ACTIONS(1302),
    [sym_parameter_char] = ACTIONS(1302),
    [sym_subscript] = ACTIONS(1302),
    [sym_superscript] = ACTIONS(1302),
    [anon_sym_LBRACK] = ACTIONS(1302),
    [anon_sym_RBRACK] = ACTIONS(1302),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1302),
  },
  [569] = {
    [sym__escape] = ACTIONS(1312),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1312),
    [sym_alignment_tab] = ACTIONS(1312),
    [sym_begin_group] = ACTIONS(1312),
    [sym_comment] = ACTIONS(1314),
    [sym_end_group] = ACTIONS(1312),
    [sym_magic_comment] = ACTIONS(1314),
    [sym_math_shift] = ACTIONS(1312),
    [sym_parameter_char] = ACTIONS(1312),
    [sym_subscript] = ACTIONS(1312),
    [sym_superscript] = ACTIONS(1312),
    [anon_sym_LBRACK] = ACTIONS(1312),
    [anon_sym_RBRACK] = ACTIONS(1312),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1312),
  },
  [570] = {
    [sym__escape] = ACTIONS(1317),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1317),
    [sym_alignment_tab] = ACTIONS(1317),
    [sym_begin_group] = ACTIONS(1317),
    [sym_comment] = ACTIONS(1319),
    [sym_end_group] = ACTIONS(1317),
    [sym_magic_comment] = ACTIONS(1319),
    [sym_math_shift] = ACTIONS(1317),
    [sym_parameter_char] = ACTIONS(1317),
    [sym_subscript] = ACTIONS(1317),
    [sym_superscript] = ACTIONS(1317),
    [anon_sym_LBRACK] = ACTIONS(1317),
    [anon_sym_RBRACK] = ACTIONS(1317),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1317),
  },
  [571] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1492),
    [sym_magic_comment] = ACTIONS(7),
  },
  [572] = {
    [sym__escape] = ACTIONS(1367),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1367),
    [sym_alignment_tab] = ACTIONS(1367),
    [sym_begin_group] = ACTIONS(1367),
    [sym_comment] = ACTIONS(1369),
    [sym_end_group] = ACTIONS(1367),
    [sym_magic_comment] = ACTIONS(1369),
    [sym_math_shift] = ACTIONS(1367),
    [sym_parameter_char] = ACTIONS(1367),
    [sym_subscript] = ACTIONS(1367),
    [sym_superscript] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_RBRACK] = ACTIONS(1367),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1367),
  },
  [573] = {
    [sym__escape] = ACTIONS(1374),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1374),
    [sym_alignment_tab] = ACTIONS(1374),
    [sym_begin_group] = ACTIONS(1374),
    [sym_comment] = ACTIONS(1376),
    [sym_end_group] = ACTIONS(1374),
    [sym_magic_comment] = ACTIONS(1376),
    [sym_math_shift] = ACTIONS(1374),
    [sym_parameter_char] = ACTIONS(1374),
    [sym_subscript] = ACTIONS(1374),
    [sym_superscript] = ACTIONS(1374),
    [anon_sym_LBRACK] = ACTIONS(1374),
    [anon_sym_RBRACK] = ACTIONS(1374),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1374),
  },
  [574] = {
    [sym_text_group] = STATE(751),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [575] = {
    [sym_text_group] = STATE(752),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [576] = {
    [sym_text_group] = STATE(753),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [577] = {
    [sym__escape] = ACTIONS(1381),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1381),
    [sym_alignment_tab] = ACTIONS(1381),
    [sym_begin_group] = ACTIONS(1381),
    [sym_comment] = ACTIONS(1383),
    [sym_end_group] = ACTIONS(1381),
    [sym_magic_comment] = ACTIONS(1383),
    [sym_math_shift] = ACTIONS(1381),
    [sym_parameter_char] = ACTIONS(1381),
    [sym_subscript] = ACTIONS(1381),
    [sym_superscript] = ACTIONS(1381),
    [anon_sym_LBRACK] = ACTIONS(1381),
    [anon_sym_RBRACK] = ACTIONS(1381),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1381),
  },
  [578] = {
    [sym_text_group] = STATE(754),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [579] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1494),
  },
  [580] = {
    [sym__escape] = ACTIONS(1388),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1388),
    [sym_alignment_tab] = ACTIONS(1388),
    [sym_begin_group] = ACTIONS(1388),
    [sym_comment] = ACTIONS(1390),
    [sym_end_group] = ACTIONS(1388),
    [sym_magic_comment] = ACTIONS(1390),
    [sym_math_shift] = ACTIONS(1388),
    [sym_parameter_char] = ACTIONS(1388),
    [sym_subscript] = ACTIONS(1388),
    [sym_superscript] = ACTIONS(1388),
    [anon_sym_LBRACK] = ACTIONS(1388),
    [anon_sym_RBRACK] = ACTIONS(1388),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1388),
  },
  [581] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1496),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [582] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1498),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [583] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1500),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [584] = {
    [sym__escape] = ACTIONS(1399),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1399),
    [sym_alignment_tab] = ACTIONS(1399),
    [sym_begin_group] = ACTIONS(1399),
    [sym_comment] = ACTIONS(1401),
    [sym_end_group] = ACTIONS(1399),
    [sym_magic_comment] = ACTIONS(1401),
    [sym_math_shift] = ACTIONS(1399),
    [sym_parameter_char] = ACTIONS(1399),
    [sym_subscript] = ACTIONS(1399),
    [sym_superscript] = ACTIONS(1399),
    [anon_sym_LBRACK] = ACTIONS(1399),
    [anon_sym_RBRACK] = ACTIONS(1399),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1399),
  },
  [585] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_end_group] = ACTIONS(1404),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_math_shift] = ACTIONS(1404),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_plus] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [586] = {
    [sym__escape] = ACTIONS(1411),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1411),
    [sym_alignment_tab] = ACTIONS(1411),
    [sym_begin_group] = ACTIONS(1411),
    [sym_comment] = ACTIONS(1413),
    [sym_end_group] = ACTIONS(1411),
    [sym_magic_comment] = ACTIONS(1413),
    [sym_math_shift] = ACTIONS(1411),
    [sym_parameter_char] = ACTIONS(1411),
    [sym_subscript] = ACTIONS(1411),
    [sym_superscript] = ACTIONS(1411),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [anon_sym_RBRACK] = ACTIONS(1411),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1411),
  },
  [587] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_end_group] = ACTIONS(1416),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_math_shift] = ACTIONS(1416),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_plus] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [588] = {
    [sym_dimension_token] = STATE(760),
    [sym_box_dimension_token] = STATE(762),
    [sym_box_dimension_ref] = STATE(760),
    [sym_dimension] = STATE(763),
    [sym_token] = STATE(760),
    [sym__escape] = ACTIONS(1502),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1504),
    [sym_decimal] = ACTIONS(1506),
  },
  [589] = {
    [sym_dimension_token] = STATE(358),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(358),
    [sym_dimension] = STATE(764),
    [sym_token] = STATE(358),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(429),
    [sym_decimal] = ACTIONS(431),
  },
  [590] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1508),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [591] = {
    [sym__escape] = ACTIONS(1431),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1431),
    [sym_alignment_tab] = ACTIONS(1431),
    [sym_begin_group] = ACTIONS(1431),
    [sym_comment] = ACTIONS(1433),
    [sym_end_group] = ACTIONS(1431),
    [sym_magic_comment] = ACTIONS(1433),
    [sym_math_shift] = ACTIONS(1431),
    [sym_parameter_char] = ACTIONS(1431),
    [sym_subscript] = ACTIONS(1431),
    [sym_superscript] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(1431),
    [anon_sym_RBRACK] = ACTIONS(1431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1431),
  },
  [592] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_end_group] = ACTIONS(1404),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_math_shift] = ACTIONS(1404),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1404),
  },
  [593] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_end_group] = ACTIONS(1416),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_math_shift] = ACTIONS(1416),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1416),
  },
  [594] = {
    [sym_text_group] = STATE(766),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [595] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(386),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(1446),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
  },
  [596] = {
    [sym__escape] = ACTIONS(1448),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1448),
    [sym_alignment_tab] = ACTIONS(1448),
    [sym_begin_group] = ACTIONS(1448),
    [sym_comment] = ACTIONS(1450),
    [sym_end_group] = ACTIONS(1448),
    [sym_magic_comment] = ACTIONS(1450),
    [sym_math_shift] = ACTIONS(1448),
    [sym_parameter_char] = ACTIONS(1448),
    [sym_subscript] = ACTIONS(1448),
    [sym_superscript] = ACTIONS(1448),
    [anon_sym_LBRACK] = ACTIONS(1448),
    [anon_sym_RBRACK] = ACTIONS(1448),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1448),
  },
  [597] = {
    [sym_makebox] = STATE(767),
    [sym_strut] = STATE(767),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(767),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(767),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(767),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(767),
    [sym__escape] = ACTIONS(997),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [598] = {
    [sym__escape] = ACTIONS(1453),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1453),
    [sym_alignment_tab] = ACTIONS(1453),
    [sym_begin_group] = ACTIONS(1453),
    [sym_comment] = ACTIONS(1455),
    [sym_end_group] = ACTIONS(1453),
    [sym_magic_comment] = ACTIONS(1455),
    [sym_math_shift] = ACTIONS(1453),
    [sym_parameter_char] = ACTIONS(1453),
    [sym_subscript] = ACTIONS(1453),
    [sym_superscript] = ACTIONS(1453),
    [anon_sym_LBRACK] = ACTIONS(1453),
    [anon_sym_RBRACK] = ACTIONS(1453),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1453),
  },
  [599] = {
    [sym_dimension_token] = STATE(358),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(358),
    [sym_dimension] = STATE(768),
    [sym_token] = STATE(358),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(429),
    [sym_decimal] = ACTIONS(431),
  },
  [600] = {
    [sym__escape] = ACTIONS(1458),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1458),
    [sym_alignment_tab] = ACTIONS(1458),
    [sym_begin_group] = ACTIONS(1458),
    [sym_comment] = ACTIONS(1460),
    [sym_end_group] = ACTIONS(1458),
    [sym_magic_comment] = ACTIONS(1460),
    [sym_math_shift] = ACTIONS(1458),
    [sym_parameter_char] = ACTIONS(1458),
    [sym_subscript] = ACTIONS(1458),
    [sym_superscript] = ACTIONS(1458),
    [anon_sym_LBRACK] = ACTIONS(1458),
    [anon_sym_RBRACK] = ACTIONS(1458),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1458),
  },
  [601] = {
    [sym__escape] = ACTIONS(1463),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1463),
    [sym_alignment_tab] = ACTIONS(1463),
    [sym_begin_group] = ACTIONS(1463),
    [sym_comment] = ACTIONS(1465),
    [sym_end_group] = ACTIONS(1463),
    [sym_magic_comment] = ACTIONS(1465),
    [sym_math_shift] = ACTIONS(1463),
    [sym_parameter_char] = ACTIONS(1463),
    [sym_subscript] = ACTIONS(1463),
    [sym_superscript] = ACTIONS(1463),
    [anon_sym_LBRACK] = ACTIONS(1463),
    [anon_sym_RBRACK] = ACTIONS(1463),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1463),
  },
  [602] = {
    [sym_text_group] = STATE(769),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [603] = {
    [sym__escape] = ACTIONS(1468),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1468),
    [sym_alignment_tab] = ACTIONS(1468),
    [sym_begin_group] = ACTIONS(1468),
    [sym_comment] = ACTIONS(1470),
    [sym_end_group] = ACTIONS(1468),
    [sym_magic_comment] = ACTIONS(1470),
    [sym_math_shift] = ACTIONS(1468),
    [sym_parameter_char] = ACTIONS(1468),
    [sym_subscript] = ACTIONS(1468),
    [sym_superscript] = ACTIONS(1468),
    [anon_sym_LBRACK] = ACTIONS(1468),
    [anon_sym_RBRACK] = ACTIONS(1468),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1468),
  },
  [604] = {
    [sym_text_group] = STATE(770),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(201),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [605] = {
    [sym__escape] = ACTIONS(1473),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1473),
    [sym_alignment_tab] = ACTIONS(1473),
    [sym_begin_group] = ACTIONS(1473),
    [sym_comment] = ACTIONS(1475),
    [sym_end_group] = ACTIONS(1473),
    [sym_magic_comment] = ACTIONS(1475),
    [sym_math_shift] = ACTIONS(1473),
    [sym_parameter_char] = ACTIONS(1473),
    [sym_subscript] = ACTIONS(1473),
    [sym_superscript] = ACTIONS(1473),
    [anon_sym_LBRACK] = ACTIONS(1473),
    [anon_sym_RBRACK] = ACTIONS(1473),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1473),
  },
  [606] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1510),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [607] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1512),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [608] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1514),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [609] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1516),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [610] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1518),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [611] = {
    [sym__escape] = ACTIONS(293),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(293),
    [sym_alignment_tab] = ACTIONS(293),
    [sym_begin_group] = ACTIONS(293),
    [sym_comment] = ACTIONS(295),
    [sym_end_group] = ACTIONS(293),
    [sym_magic_comment] = ACTIONS(295),
    [sym_parameter_char] = ACTIONS(293),
    [sym_subscript] = ACTIONS(293),
    [sym_superscript] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(293),
  },
  [612] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1520),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [613] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1522),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [614] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1524),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [615] = {
    [sym__escape] = ACTIONS(1067),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1067),
    [sym_alignment_tab] = ACTIONS(1067),
    [sym_begin_group] = ACTIONS(1067),
    [sym_comment] = ACTIONS(1069),
    [sym_end_group] = ACTIONS(1067),
    [sym_magic_comment] = ACTIONS(1069),
    [sym_parameter_char] = ACTIONS(1067),
    [sym_subscript] = ACTIONS(1067),
    [sym_superscript] = ACTIONS(1067),
    [anon_sym_LBRACK] = ACTIONS(1067),
    [anon_sym_RBRACK] = ACTIONS(1067),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1067),
  },
  [616] = {
    [sym__common] = STATE(648),
    [sym__math_mode] = STATE(648),
    [sym_parameter] = STATE(648),
    [sym_math_env] = STATE(648),
    [sym_tag] = STATE(648),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(648),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(648),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(648),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(648),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(648),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(648),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(648),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(648),
    [sym_glue_assign] = STATE(648),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(648),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(648),
    [sym_strut] = STATE(648),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(648),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(648),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(648),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(648),
    [sym_setbox] = STATE(648),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(648),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(648),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(648),
    [sym_token] = STATE(648),
    [sym_escaped] = STATE(648),
    [aux_sym_math_mode_repeat1] = STATE(648),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(454),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1105),
    [sym_alignment_tab] = ACTIONS(1105),
    [sym_begin_group] = ACTIONS(458),
    [sym_comment] = ACTIONS(1107),
    [sym_end_group] = ACTIONS(1526),
    [sym_magic_comment] = ACTIONS(1107),
    [sym_parameter_char] = ACTIONS(465),
    [sym_subscript] = ACTIONS(1105),
    [sym_superscript] = ACTIONS(1105),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(469),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(471),
  },
  [617] = {
    [sym__common] = STATE(655),
    [sym_inline_verbatim] = STATE(655),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(655),
    [sym_text_mode] = STATE(780),
    [sym_parameter] = STATE(655),
    [sym_text_env] = STATE(655),
    [sym__display_math] = STATE(655),
    [sym_tex_display_math] = STATE(655),
    [sym_latex_display_math] = STATE(655),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(655),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(655),
    [sym_tex_inline_math] = STATE(655),
    [sym_latex_inline_math] = STATE(655),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(655),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(655),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(655),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(655),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(655),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(655),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(655),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(655),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(655),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(655),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(655),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(655),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(655),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(655),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(655),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(655),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(655),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(655),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(655),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(655),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(655),
    [sym_glue_assign] = STATE(655),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(655),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(655),
    [sym_strut] = STATE(655),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(655),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(655),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(655),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(655),
    [sym_setbox] = STATE(655),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(655),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(655),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(655),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(655),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(655),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(655),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(655),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(655),
    [sym_token] = STATE(655),
    [sym_escaped] = STATE(655),
    [aux_sym_text_mode_repeat1] = STATE(655),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1125),
    [sym_alignment_tab] = ACTIONS(1125),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(1127),
    [sym_end_group] = ACTIONS(1528),
    [sym_magic_comment] = ACTIONS(1127),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [618] = {
    [sym__escape] = ACTIONS(1132),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1132),
    [sym_alignment_tab] = ACTIONS(1132),
    [sym_begin_group] = ACTIONS(1132),
    [sym_comment] = ACTIONS(1134),
    [sym_end_group] = ACTIONS(1132),
    [sym_magic_comment] = ACTIONS(1134),
    [sym_parameter_char] = ACTIONS(1132),
    [sym_subscript] = ACTIONS(1132),
    [sym_superscript] = ACTIONS(1132),
    [anon_sym_LBRACK] = ACTIONS(1132),
    [anon_sym_RBRACK] = ACTIONS(1132),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1132),
  },
  [619] = {
    [sym__escape] = ACTIONS(1137),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1137),
    [sym_alignment_tab] = ACTIONS(1137),
    [sym_begin_group] = ACTIONS(1137),
    [sym_comment] = ACTIONS(1139),
    [sym_end_group] = ACTIONS(1137),
    [sym_magic_comment] = ACTIONS(1139),
    [sym_parameter_char] = ACTIONS(1137),
    [sym_subscript] = ACTIONS(1137),
    [sym_superscript] = ACTIONS(1137),
    [anon_sym_LBRACK] = ACTIONS(1137),
    [anon_sym_RBRACK] = ACTIONS(1137),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1137),
  },
  [620] = {
    [sym_name_group] = STATE(782),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1530),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [621] = {
    [sym__common] = STATE(466),
    [sym__math_mode] = STATE(466),
    [sym_parameter] = STATE(466),
    [sym_math_env] = STATE(466),
    [sym_tag] = STATE(466),
    [sym_tag_token] = STATE(161),
    [sym_begin] = STATE(162),
    [sym_begin_token] = STATE(149),
    [sym_end] = STATE(783),
    [sym_end_token] = STATE(620),
    [sym_include] = STATE(466),
    [sym_include_token] = STATE(163),
    [sym_storage] = STATE(466),
    [sym_storage_token] = STATE(164),
    [sym_catcode] = STATE(466),
    [sym_catcode_token] = STATE(165),
    [sym_makeatletter] = STATE(466),
    [sym_makeatletter_token] = STATE(166),
    [sym_makeatother] = STATE(466),
    [sym_makeatother_token] = STATE(167),
    [sym_explsyntaxon] = STATE(466),
    [sym_explsyntaxon_token] = STATE(168),
    [sym_explsyntaxoff] = STATE(466),
    [sym_explsyntaxoff_token] = STATE(169),
    [sym_dimension_assign] = STATE(466),
    [sym_glue_assign] = STATE(466),
    [sym_glue_token] = STATE(170),
    [sym_dimension_token] = STATE(171),
    [sym_glue_space] = STATE(466),
    [sym_glue_space_token] = STATE(172),
    [sym_makebox] = STATE(466),
    [sym_strut] = STATE(466),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(466),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(466),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(466),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(466),
    [sym_setbox] = STATE(466),
    [sym_setbox_token] = STATE(178),
    [sym_box_dimension_assign] = STATE(466),
    [sym_box_dimension_token] = STATE(179),
    [sym_math_group] = STATE(466),
    [sym_begin_opt] = STATE(180),
    [sym_end_opt] = STATE(180),
    [sym_text] = STATE(466),
    [sym_token] = STATE(466),
    [sym_escaped] = STATE(466),
    [aux_sym_math_mode_repeat1] = STATE(466),
    [aux_sym_parameter_repeat1] = STATE(182),
    [aux_sym_text_repeat1] = STATE(183),
    [sym__escape] = ACTIONS(184),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(562),
    [sym_alignment_tab] = ACTIONS(562),
    [sym_begin_group] = ACTIONS(169),
    [sym_comment] = ACTIONS(564),
    [sym_magic_comment] = ACTIONS(564),
    [sym_parameter_char] = ACTIONS(174),
    [sym_subscript] = ACTIONS(562),
    [sym_superscript] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(180),
  },
  [622] = {
    [sym__common] = STATE(785),
    [sym_inline_verbatim] = STATE(785),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(785),
    [sym_parameter] = STATE(785),
    [sym_text_env] = STATE(785),
    [sym__display_math] = STATE(785),
    [sym_tex_display_math] = STATE(785),
    [sym_latex_display_math] = STATE(785),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(785),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(785),
    [sym_tex_inline_math] = STATE(785),
    [sym_latex_inline_math] = STATE(785),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(785),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(785),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(785),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(785),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(785),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(785),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(785),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(785),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(785),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(785),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(785),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(785),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(785),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(785),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(785),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(785),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(785),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(785),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(785),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(785),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(785),
    [sym_glue_assign] = STATE(785),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(785),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(785),
    [sym_strut] = STATE(785),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(785),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(785),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(785),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(785),
    [sym_setbox] = STATE(785),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(785),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(785),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(785),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(785),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(785),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(785),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(785),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(785),
    [sym_token] = STATE(785),
    [sym_escaped] = STATE(785),
    [aux_sym_text_mode_repeat1] = STATE(785),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1532),
    [sym_alignment_tab] = ACTIONS(1532),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(1534),
    [sym_end_group] = ACTIONS(1537),
    [sym_magic_comment] = ACTIONS(1534),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [623] = {
    [sym__escape] = ACTIONS(651),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(651),
    [sym_alignment_tab] = ACTIONS(651),
    [sym_begin_group] = ACTIONS(651),
    [sym_comment] = ACTIONS(653),
    [sym_end_group] = ACTIONS(651),
    [sym_magic_comment] = ACTIONS(653),
    [sym_parameter_char] = ACTIONS(651),
    [sym_subscript] = ACTIONS(651),
    [sym_superscript] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(651),
  },
  [624] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1539),
  },
  [625] = {
    [aux_sym_token_repeat1] = STATE(789),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPAREN_LPAREN_LPARENabove_PIPEbelow_RPARENdisplay_LPARENshort_RPAREN_QMARK_PIPEbaseline_PIPEleft_PIPEline_PIPEnormalbaseline_PIPEnormalline_PIPEparfill_PIPEpar_PIPEright_PIPEsplittop_PIPEtab_PIPEtop_PIPEx_QMARKspace_RPARENskip_RPAREN_PIPE_LPARENsmall_PIPEmid_PIPEbig_RPARENskipamount_SLASH] = ACTIONS(1541),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1543),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1545),
  },
  [626] = {
    [sym_glue_token] = STATE(629),
    [sym_dimension_token] = STATE(627),
    [sym_box_dimension_token] = STATE(630),
    [sym_glue] = STATE(790),
    [sym_box_dimension_ref] = STATE(627),
    [sym_dimension] = STATE(632),
    [sym_token] = STATE(627),
    [sym__escape] = ACTIONS(1081),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1085),
    [sym_decimal] = ACTIONS(1087),
  },
  [627] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_end_group] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_plus] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [628] = {
    [sym_glue_token] = STATE(792),
    [sym_dimension_token] = STATE(791),
    [sym_box_dimension_token] = STATE(630),
    [sym_box_dimension_ref] = STATE(791),
    [sym_token] = STATE(791),
    [sym__escape] = ACTIONS(1081),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1547),
  },
  [629] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_end_group] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(714),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(712),
  },
  [630] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1549),
  },
  [631] = {
    [sym__escape] = ACTIONS(719),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(719),
    [sym_alignment_tab] = ACTIONS(719),
    [sym_begin_group] = ACTIONS(719),
    [sym_comment] = ACTIONS(721),
    [sym_end_group] = ACTIONS(719),
    [sym_magic_comment] = ACTIONS(721),
    [sym_parameter_char] = ACTIONS(719),
    [sym_subscript] = ACTIONS(719),
    [sym_superscript] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(719),
    [anon_sym_RBRACK] = ACTIONS(719),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(719),
  },
  [632] = {
    [sym__escape] = ACTIONS(712),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(712),
    [sym_alignment_tab] = ACTIONS(712),
    [sym_begin_group] = ACTIONS(712),
    [sym_comment] = ACTIONS(714),
    [sym_end_group] = ACTIONS(712),
    [sym_magic_comment] = ACTIONS(714),
    [sym_parameter_char] = ACTIONS(712),
    [sym_subscript] = ACTIONS(712),
    [sym_superscript] = ACTIONS(712),
    [anon_sym_LBRACK] = ACTIONS(712),
    [anon_sym_RBRACK] = ACTIONS(712),
    [anon_sym_plus] = ACTIONS(1551),
    [anon_sym_minus] = ACTIONS(1553),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(728),
  },
  [633] = {
    [aux_sym_token_repeat1] = STATE(614),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1555),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1058),
  },
  [634] = {
    [sym_dimension_token] = STATE(635),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(635),
    [sym_dimension] = STATE(797),
    [sym_token] = STATE(635),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1093),
    [sym_decimal] = ACTIONS(1095),
  },
  [635] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_end_group] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(703),
  },
  [636] = {
    [sym_dimension_token] = STATE(798),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(798),
    [sym_token] = STATE(798),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1557),
  },
  [637] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1559),
  },
  [638] = {
    [sym__escape] = ACTIONS(736),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(736),
    [sym_alignment_tab] = ACTIONS(736),
    [sym_begin_group] = ACTIONS(736),
    [sym_comment] = ACTIONS(738),
    [sym_end_group] = ACTIONS(736),
    [sym_magic_comment] = ACTIONS(738),
    [sym_parameter_char] = ACTIONS(736),
    [sym_subscript] = ACTIONS(736),
    [sym_superscript] = ACTIONS(736),
    [anon_sym_LBRACK] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(736),
  },
  [639] = {
    [sym__escape] = ACTIONS(741),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(741),
    [sym_alignment_tab] = ACTIONS(741),
    [sym_begin_group] = ACTIONS(741),
    [sym_comment] = ACTIONS(743),
    [sym_end_group] = ACTIONS(741),
    [sym_magic_comment] = ACTIONS(743),
    [sym_parameter_char] = ACTIONS(741),
    [sym_subscript] = ACTIONS(741),
    [sym_superscript] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(741),
  },
  [640] = {
    [sym__escape] = ACTIONS(746),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(746),
    [sym_alignment_tab] = ACTIONS(746),
    [sym_begin_group] = ACTIONS(746),
    [sym_comment] = ACTIONS(748),
    [sym_end_group] = ACTIONS(746),
    [sym_magic_comment] = ACTIONS(748),
    [sym_parameter_char] = ACTIONS(746),
    [sym_subscript] = ACTIONS(746),
    [sym_superscript] = ACTIONS(746),
    [anon_sym_LBRACK] = ACTIONS(746),
    [anon_sym_RBRACK] = ACTIONS(746),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(746),
  },
  [641] = {
    [sym_dimension_token] = STATE(526),
    [sym_box_dimension_token] = STATE(528),
    [sym_box_dimension_ref] = STATE(526),
    [sym_dimension] = STATE(800),
    [sym_token] = STATE(526),
    [sym__escape] = ACTIONS(751),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(753),
    [sym_decimal] = ACTIONS(755),
  },
  [642] = {
    [sym__escape] = ACTIONS(757),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(757),
    [sym_alignment_tab] = ACTIONS(757),
    [sym_begin_group] = ACTIONS(757),
    [sym_comment] = ACTIONS(759),
    [sym_end_group] = ACTIONS(757),
    [sym_magic_comment] = ACTIONS(759),
    [sym_parameter_char] = ACTIONS(757),
    [sym_subscript] = ACTIONS(757),
    [sym_superscript] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_RBRACK] = ACTIONS(757),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(757),
  },
  [643] = {
    [sym__escape] = ACTIONS(762),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(762),
    [sym_alignment_tab] = ACTIONS(762),
    [sym_begin_group] = ACTIONS(762),
    [sym_comment] = ACTIONS(764),
    [sym_end_group] = ACTIONS(762),
    [sym_magic_comment] = ACTIONS(764),
    [sym_parameter_char] = ACTIONS(762),
    [sym_subscript] = ACTIONS(762),
    [sym_superscript] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [anon_sym_RBRACK] = ACTIONS(762),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(762),
  },
  [644] = {
    [sym_makebox] = STATE(802),
    [sym_strut] = STATE(802),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(802),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(802),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(802),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(802),
    [sym__escape] = ACTIONS(1561),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [645] = {
    [sym_makebox] = STATE(804),
    [sym_strut] = STATE(804),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(804),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(804),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(804),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(804),
    [sym__escape] = ACTIONS(1561),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1563),
  },
  [646] = {
    [sym_dimension_token] = STATE(635),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(635),
    [sym_dimension] = STATE(806),
    [sym_token] = STATE(635),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(1565),
    [sym_unit] = ACTIONS(1093),
    [sym_decimal] = ACTIONS(1095),
  },
  [647] = {
    [sym__escape] = ACTIONS(1567),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1567),
    [sym_alignment_tab] = ACTIONS(1567),
    [sym_begin_group] = ACTIONS(1567),
    [sym_comment] = ACTIONS(1569),
    [sym_magic_comment] = ACTIONS(1569),
    [sym_math_shift] = ACTIONS(1567),
    [sym_parameter_char] = ACTIONS(1567),
    [sym_subscript] = ACTIONS(1567),
    [sym_superscript] = ACTIONS(1567),
    [anon_sym_LBRACK] = ACTIONS(1567),
    [anon_sym_RBRACK] = ACTIONS(1567),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1567),
  },
  [648] = {
    [sym__common] = STATE(648),
    [sym__math_mode] = STATE(648),
    [sym_parameter] = STATE(648),
    [sym_math_env] = STATE(648),
    [sym_tag] = STATE(648),
    [sym_tag_token] = STATE(387),
    [sym_begin] = STATE(388),
    [sym_begin_token] = STATE(149),
    [sym_include] = STATE(648),
    [sym_include_token] = STATE(389),
    [sym_storage] = STATE(648),
    [sym_storage_token] = STATE(390),
    [sym_catcode] = STATE(648),
    [sym_catcode_token] = STATE(391),
    [sym_makeatletter] = STATE(648),
    [sym_makeatletter_token] = STATE(392),
    [sym_makeatother] = STATE(648),
    [sym_makeatother_token] = STATE(393),
    [sym_explsyntaxon] = STATE(648),
    [sym_explsyntaxon_token] = STATE(394),
    [sym_explsyntaxoff] = STATE(648),
    [sym_explsyntaxoff_token] = STATE(395),
    [sym_dimension_assign] = STATE(648),
    [sym_glue_assign] = STATE(648),
    [sym_glue_token] = STATE(396),
    [sym_dimension_token] = STATE(397),
    [sym_glue_space] = STATE(648),
    [sym_glue_space_token] = STATE(398),
    [sym_makebox] = STATE(648),
    [sym_strut] = STATE(648),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(648),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(648),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(648),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(648),
    [sym_setbox] = STATE(648),
    [sym_setbox_token] = STATE(404),
    [sym_box_dimension_assign] = STATE(648),
    [sym_box_dimension_token] = STATE(405),
    [sym_math_group] = STATE(648),
    [sym_begin_opt] = STATE(406),
    [sym_end_opt] = STATE(406),
    [sym_text] = STATE(648),
    [sym_token] = STATE(648),
    [sym_escaped] = STATE(648),
    [aux_sym_math_mode_repeat1] = STATE(648),
    [aux_sym_parameter_repeat1] = STATE(408),
    [aux_sym_text_repeat1] = STATE(409),
    [sym__escape] = ACTIONS(1572),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1575),
    [sym_alignment_tab] = ACTIONS(1575),
    [sym_begin_group] = ACTIONS(1578),
    [sym_comment] = ACTIONS(1581),
    [sym_end_group] = ACTIONS(1157),
    [sym_magic_comment] = ACTIONS(1581),
    [sym_parameter_char] = ACTIONS(1585),
    [sym_subscript] = ACTIONS(1575),
    [sym_superscript] = ACTIONS(1575),
    [anon_sym_LBRACK] = ACTIONS(1588),
    [anon_sym_RBRACK] = ACTIONS(1591),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1594),
  },
  [649] = {
    [sym__escape] = ACTIONS(827),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(827),
    [sym_alignment_tab] = ACTIONS(827),
    [sym_begin_group] = ACTIONS(827),
    [sym_comment] = ACTIONS(829),
    [sym_end_group] = ACTIONS(827),
    [sym_magic_comment] = ACTIONS(829),
    [sym_parameter_char] = ACTIONS(827),
    [sym_subscript] = ACTIONS(827),
    [sym_superscript] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(827),
  },
  [650] = {
    [aux_sym_text_repeat1] = STATE(650),
    [sym__escape] = ACTIONS(837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(837),
    [sym_alignment_tab] = ACTIONS(837),
    [sym_begin_group] = ACTIONS(837),
    [sym_comment] = ACTIONS(839),
    [sym_end_group] = ACTIONS(837),
    [sym_magic_comment] = ACTIONS(839),
    [sym_parameter_char] = ACTIONS(837),
    [sym_subscript] = ACTIONS(837),
    [sym_superscript] = ACTIONS(837),
    [anon_sym_LBRACK] = ACTIONS(837),
    [anon_sym_RBRACK] = ACTIONS(837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1597),
  },
  [651] = {
    [sym__escape] = ACTIONS(1600),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1600),
    [sym_alignment_tab] = ACTIONS(1600),
    [sym_begin_group] = ACTIONS(1600),
    [sym_comment] = ACTIONS(1602),
    [sym_magic_comment] = ACTIONS(1602),
    [sym_math_shift] = ACTIONS(1600),
    [sym_parameter_char] = ACTIONS(1600),
    [sym_subscript] = ACTIONS(1600),
    [sym_superscript] = ACTIONS(1600),
    [ts_builtin_sym_end] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_RBRACK] = ACTIONS(1600),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1600),
  },
  [652] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(1605),
  },
  [653] = {
    [sym__escape] = ACTIONS(1607),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1607),
    [sym_alignment_tab] = ACTIONS(1607),
    [sym_begin_group] = ACTIONS(1607),
    [sym_comment] = ACTIONS(1609),
    [sym_magic_comment] = ACTIONS(1609),
    [sym_math_shift] = ACTIONS(1607),
    [sym_parameter_char] = ACTIONS(1607),
    [sym_subscript] = ACTIONS(1607),
    [sym_superscript] = ACTIONS(1607),
    [anon_sym_LBRACK] = ACTIONS(1607),
    [anon_sym_RBRACK] = ACTIONS(1607),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1607),
  },
  [654] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1612),
    [sym_magic_comment] = ACTIONS(7),
  },
  [655] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(272),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [656] = {
    [sym__escape] = ACTIONS(1614),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1614),
    [sym_alignment_tab] = ACTIONS(1614),
    [sym_begin_group] = ACTIONS(1614),
    [sym_comment] = ACTIONS(1616),
    [sym_magic_comment] = ACTIONS(1616),
    [sym_math_shift] = ACTIONS(1614),
    [sym_parameter_char] = ACTIONS(1614),
    [sym_subscript] = ACTIONS(1614),
    [sym_superscript] = ACTIONS(1614),
    [anon_sym_LBRACK] = ACTIONS(1614),
    [anon_sym_RBRACK] = ACTIONS(1614),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1614),
  },
  [657] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1619),
    [sym_magic_comment] = ACTIONS(7),
  },
  [658] = {
    [sym_makebox] = STATE(738),
    [sym_strut] = STATE(738),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(738),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(738),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(738),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(738),
    [sym__escape] = ACTIONS(773),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [659] = {
    [sym__escape] = ACTIONS(1621),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1621),
    [sym_alignment_tab] = ACTIONS(1621),
    [sym_begin_group] = ACTIONS(1621),
    [sym_comment] = ACTIONS(1623),
    [sym_magic_comment] = ACTIONS(1623),
    [sym_math_shift] = ACTIONS(1621),
    [sym_parameter_char] = ACTIONS(1621),
    [sym_subscript] = ACTIONS(1621),
    [sym_superscript] = ACTIONS(1621),
    [ts_builtin_sym_end] = ACTIONS(1621),
    [anon_sym_LBRACK] = ACTIONS(1621),
    [anon_sym_RBRACK] = ACTIONS(1621),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1621),
  },
  [660] = {
    [sym__escape] = ACTIONS(845),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(845),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_begin_group] = ACTIONS(845),
    [sym_comment] = ACTIONS(847),
    [sym_magic_comment] = ACTIONS(847),
    [sym_parameter_char] = ACTIONS(845),
    [sym_subscript] = ACTIONS(845),
    [sym_superscript] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(845),
  },
  [661] = {
    [sym__escape] = ACTIONS(850),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_comment] = ACTIONS(852),
    [sym_magic_comment] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(850),
  },
  [662] = {
    [sym__escape] = ACTIONS(855),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_comment] = ACTIONS(857),
    [sym_magic_comment] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(855),
  },
  [663] = {
    [sym__escape] = ACTIONS(860),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_comment] = ACTIONS(862),
    [sym_magic_comment] = ACTIONS(862),
    [sym_parameter_char] = ACTIONS(860),
    [sym_subscript] = ACTIONS(860),
    [sym_superscript] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(860),
  },
  [664] = {
    [sym__escape] = ACTIONS(883),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_comment] = ACTIONS(885),
    [sym_magic_comment] = ACTIONS(885),
    [sym_parameter_char] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(883),
  },
  [665] = {
    [sym__escape] = ACTIONS(906),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_comment] = ACTIONS(908),
    [sym_magic_comment] = ACTIONS(908),
    [sym_parameter_char] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(906),
  },
  [666] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(933),
  },
  [667] = {
    [sym__escape] = ACTIONS(1567),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1567),
    [sym_alignment_tab] = ACTIONS(1567),
    [sym_begin_group] = ACTIONS(1567),
    [sym_comment] = ACTIONS(1569),
    [sym_magic_comment] = ACTIONS(1569),
    [sym_parameter_char] = ACTIONS(1567),
    [sym_subscript] = ACTIONS(1567),
    [sym_superscript] = ACTIONS(1567),
    [anon_sym_LBRACK] = ACTIONS(1567),
    [anon_sym_RBRACK] = ACTIONS(1567),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1567),
  },
  [668] = {
    [sym__escape] = ACTIONS(1626),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1626),
    [sym_alignment_tab] = ACTIONS(1626),
    [sym_begin_group] = ACTIONS(1626),
    [sym_comment] = ACTIONS(1628),
    [sym_magic_comment] = ACTIONS(1628),
    [sym_math_shift] = ACTIONS(1626),
    [sym_parameter_char] = ACTIONS(1626),
    [sym_subscript] = ACTIONS(1626),
    [sym_superscript] = ACTIONS(1626),
    [ts_builtin_sym_end] = ACTIONS(1626),
    [anon_sym_LBRACK] = ACTIONS(1626),
    [anon_sym_RBRACK] = ACTIONS(1626),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1626),
  },
  [669] = {
    [sym__escape] = ACTIONS(1607),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1607),
    [sym_alignment_tab] = ACTIONS(1607),
    [sym_begin_group] = ACTIONS(1607),
    [sym_comment] = ACTIONS(1609),
    [sym_magic_comment] = ACTIONS(1609),
    [sym_parameter_char] = ACTIONS(1607),
    [sym_subscript] = ACTIONS(1607),
    [sym_superscript] = ACTIONS(1607),
    [anon_sym_LBRACK] = ACTIONS(1607),
    [anon_sym_RBRACK] = ACTIONS(1607),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1607),
  },
  [670] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1631),
    [sym_magic_comment] = ACTIONS(7),
  },
  [671] = {
    [sym__escape] = ACTIONS(1312),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1312),
    [sym_alignment_tab] = ACTIONS(1312),
    [sym_begin_group] = ACTIONS(1312),
    [sym_comment] = ACTIONS(1314),
    [sym_magic_comment] = ACTIONS(1314),
    [sym_parameter_char] = ACTIONS(1312),
    [sym_subscript] = ACTIONS(1312),
    [sym_superscript] = ACTIONS(1312),
    [anon_sym_LBRACK] = ACTIONS(1312),
    [anon_sym_RBRACK] = ACTIONS(1312),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1312),
  },
  [672] = {
    [sym__escape] = ACTIONS(1614),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1614),
    [sym_alignment_tab] = ACTIONS(1614),
    [sym_begin_group] = ACTIONS(1614),
    [sym_comment] = ACTIONS(1616),
    [sym_magic_comment] = ACTIONS(1616),
    [sym_parameter_char] = ACTIONS(1614),
    [sym_subscript] = ACTIONS(1614),
    [sym_superscript] = ACTIONS(1614),
    [anon_sym_LBRACK] = ACTIONS(1614),
    [anon_sym_RBRACK] = ACTIONS(1614),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1614),
  },
  [673] = {
    [sym__escape] = ACTIONS(397),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_comment] = ACTIONS(399),
    [sym_magic_comment] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(397),
  },
  [674] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(1633),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [675] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1635),
  },
  [676] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1637),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [677] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1639),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [678] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1641),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [679] = {
    [sym__escape] = ACTIONS(1399),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1399),
    [sym_alignment_tab] = ACTIONS(1399),
    [sym_begin_group] = ACTIONS(1399),
    [sym_comment] = ACTIONS(1401),
    [sym_magic_comment] = ACTIONS(1401),
    [sym_parameter_char] = ACTIONS(1399),
    [sym_subscript] = ACTIONS(1399),
    [sym_superscript] = ACTIONS(1399),
    [anon_sym_LBRACK] = ACTIONS(1399),
    [anon_sym_RBRACK] = ACTIONS(1399),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1399),
  },
  [680] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_plus] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [681] = {
    [sym__escape] = ACTIONS(1411),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1411),
    [sym_alignment_tab] = ACTIONS(1411),
    [sym_begin_group] = ACTIONS(1411),
    [sym_comment] = ACTIONS(1413),
    [sym_magic_comment] = ACTIONS(1413),
    [sym_parameter_char] = ACTIONS(1411),
    [sym_subscript] = ACTIONS(1411),
    [sym_superscript] = ACTIONS(1411),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [anon_sym_RBRACK] = ACTIONS(1411),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1411),
  },
  [682] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_plus] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [683] = {
    [sym_dimension_token] = STATE(817),
    [sym_box_dimension_token] = STATE(819),
    [sym_box_dimension_ref] = STATE(817),
    [sym_dimension] = STATE(820),
    [sym_token] = STATE(817),
    [sym__escape] = ACTIONS(1643),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1645),
    [sym_decimal] = ACTIONS(1647),
  },
  [684] = {
    [sym_dimension_token] = STATE(454),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(454),
    [sym_dimension] = STATE(821),
    [sym_token] = STATE(454),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(550),
    [sym_decimal] = ACTIONS(552),
  },
  [685] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1649),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [686] = {
    [sym__escape] = ACTIONS(1431),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1431),
    [sym_alignment_tab] = ACTIONS(1431),
    [sym_begin_group] = ACTIONS(1431),
    [sym_comment] = ACTIONS(1433),
    [sym_magic_comment] = ACTIONS(1433),
    [sym_parameter_char] = ACTIONS(1431),
    [sym_subscript] = ACTIONS(1431),
    [sym_superscript] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(1431),
    [anon_sym_RBRACK] = ACTIONS(1431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1431),
  },
  [687] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1404),
  },
  [688] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1416),
  },
  [689] = {
    [sym_text_group] = STATE(823),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(536),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [690] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(516),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(1446),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
  },
  [691] = {
    [sym__escape] = ACTIONS(1448),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1448),
    [sym_alignment_tab] = ACTIONS(1448),
    [sym_begin_group] = ACTIONS(1448),
    [sym_comment] = ACTIONS(1450),
    [sym_magic_comment] = ACTIONS(1450),
    [sym_parameter_char] = ACTIONS(1448),
    [sym_subscript] = ACTIONS(1448),
    [sym_superscript] = ACTIONS(1448),
    [anon_sym_LBRACK] = ACTIONS(1448),
    [anon_sym_RBRACK] = ACTIONS(1448),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1448),
  },
  [692] = {
    [sym_makebox] = STATE(824),
    [sym_strut] = STATE(824),
    [sym_strut_token] = STATE(173),
    [sym_phantom_smash] = STATE(824),
    [sym_phantom_smash_token] = STATE(174),
    [sym_makebox_token] = STATE(175),
    [sym_usebox] = STATE(824),
    [sym_usebox_token] = STATE(176),
    [sym_movebox] = STATE(824),
    [sym_movebox_token] = STATE(177),
    [sym__box] = STATE(824),
    [sym__escape] = ACTIONS(1230),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [693] = {
    [sym__escape] = ACTIONS(1453),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1453),
    [sym_alignment_tab] = ACTIONS(1453),
    [sym_begin_group] = ACTIONS(1453),
    [sym_comment] = ACTIONS(1455),
    [sym_magic_comment] = ACTIONS(1455),
    [sym_parameter_char] = ACTIONS(1453),
    [sym_subscript] = ACTIONS(1453),
    [sym_superscript] = ACTIONS(1453),
    [anon_sym_LBRACK] = ACTIONS(1453),
    [anon_sym_RBRACK] = ACTIONS(1453),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1453),
  },
  [694] = {
    [sym_dimension_token] = STATE(454),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(454),
    [sym_dimension] = STATE(825),
    [sym_token] = STATE(454),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(550),
    [sym_decimal] = ACTIONS(552),
  },
  [695] = {
    [sym__escape] = ACTIONS(1458),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1458),
    [sym_alignment_tab] = ACTIONS(1458),
    [sym_begin_group] = ACTIONS(1458),
    [sym_comment] = ACTIONS(1460),
    [sym_magic_comment] = ACTIONS(1460),
    [sym_parameter_char] = ACTIONS(1458),
    [sym_subscript] = ACTIONS(1458),
    [sym_superscript] = ACTIONS(1458),
    [anon_sym_LBRACK] = ACTIONS(1458),
    [anon_sym_RBRACK] = ACTIONS(1458),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1458),
  },
  [696] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_display_math_env_name] = ACTIONS(1651),
  },
  [697] = {
    [sym__escape] = ACTIONS(1653),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1653),
    [sym_alignment_tab] = ACTIONS(1653),
    [sym_begin_group] = ACTIONS(1653),
    [sym_comment] = ACTIONS(1655),
    [sym_magic_comment] = ACTIONS(1655),
    [sym_math_shift] = ACTIONS(1653),
    [sym_parameter_char] = ACTIONS(1653),
    [sym_subscript] = ACTIONS(1653),
    [sym_superscript] = ACTIONS(1653),
    [ts_builtin_sym_end] = ACTIONS(1653),
    [anon_sym_LBRACK] = ACTIONS(1653),
    [anon_sym_RBRACK] = ACTIONS(1653),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1653),
  },
  [698] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1658),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [699] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1660),
    [sym_magic_comment] = ACTIONS(7),
  },
  [700] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1662),
    [sym_magic_comment] = ACTIONS(7),
  },
  [701] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1664),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1664),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(1664),
  },
  [702] = {
    [sym__escape] = ACTIONS(1666),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1666),
    [sym_alignment_tab] = ACTIONS(1666),
    [sym_begin_group] = ACTIONS(1666),
    [sym_comment] = ACTIONS(1668),
    [sym_magic_comment] = ACTIONS(1668),
    [sym_parameter_char] = ACTIONS(1666),
    [sym_subscript] = ACTIONS(1666),
    [sym_superscript] = ACTIONS(1666),
    [anon_sym_LBRACK] = ACTIONS(1666),
    [anon_sym_RBRACK] = ACTIONS(1666),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1666),
  },
  [703] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1671),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1671),
    [sym_magic_comment] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(1671),
  },
  [704] = {
    [sym__escape] = ACTIONS(1673),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1673),
    [sym_alignment_tab] = ACTIONS(1673),
    [sym_begin_group] = ACTIONS(1673),
    [sym_comment] = ACTIONS(1675),
    [sym_magic_comment] = ACTIONS(1675),
    [sym_math_shift] = ACTIONS(1673),
    [sym_parameter_char] = ACTIONS(1673),
    [sym_subscript] = ACTIONS(1673),
    [sym_superscript] = ACTIONS(1673),
    [ts_builtin_sym_end] = ACTIONS(1673),
    [anon_sym_LBRACK] = ACTIONS(1673),
    [anon_sym_RBRACK] = ACTIONS(1673),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1673),
  },
  [705] = {
    [aux_sym_text_repeat1] = STATE(705),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(837),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1678),
  },
  [706] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(7),
  },
  [707] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(1681),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [708] = {
    [sym__escape] = ACTIONS(1683),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1683),
    [sym_alignment_tab] = ACTIONS(1683),
    [sym_begin_group] = ACTIONS(1683),
    [sym_comment] = ACTIONS(1685),
    [sym_magic_comment] = ACTIONS(1685),
    [sym_parameter_char] = ACTIONS(1683),
    [sym_subscript] = ACTIONS(1683),
    [sym_superscript] = ACTIONS(1683),
    [anon_sym_LBRACK] = ACTIONS(1683),
    [anon_sym_RBRACK] = ACTIONS(1683),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1683),
  },
  [709] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1688),
    [sym_magic_comment] = ACTIONS(7),
  },
  [710] = {
    [sym__escape] = ACTIONS(154),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(154),
    [sym_alignment_tab] = ACTIONS(154),
    [sym_begin_group] = ACTIONS(154),
    [sym_comment] = ACTIONS(156),
    [sym_eol] = ACTIONS(154),
    [sym_magic_comment] = ACTIONS(156),
    [sym_math_shift] = ACTIONS(154),
    [sym_parameter_char] = ACTIONS(154),
    [sym_subscript] = ACTIONS(154),
    [sym_superscript] = ACTIONS(154),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(154),
  },
  [711] = {
    [sym__escape] = ACTIONS(144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(144),
    [sym_alignment_tab] = ACTIONS(144),
    [sym_begin_group] = ACTIONS(1372),
    [sym_comment] = ACTIONS(146),
    [sym_eol] = ACTIONS(1372),
    [sym_magic_comment] = ACTIONS(146),
    [sym_math_shift] = ACTIONS(144),
    [sym_parameter_char] = ACTIONS(144),
    [sym_subscript] = ACTIONS(144),
    [sym_superscript] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(144),
  },
  [712] = {
    [sym__common] = STATE(484),
    [sym_inline_verbatim] = STATE(484),
    [sym_verb_token] = STATE(9),
    [sym__text_mode] = STATE(484),
    [sym_parameter] = STATE(484),
    [sym_text_env] = STATE(484),
    [sym__display_math] = STATE(484),
    [sym_tex_display_math] = STATE(484),
    [sym_latex_display_math] = STATE(484),
    [sym_begin_display_math] = STATE(11),
    [sym_display_math_env] = STATE(484),
    [sym_display_math_begin] = STATE(12),
    [sym__inline_math] = STATE(484),
    [sym_tex_inline_math] = STATE(484),
    [sym_latex_inline_math] = STATE(484),
    [sym_begin_inline_math] = STATE(13),
    [sym_inline_math_env] = STATE(484),
    [sym_inline_math_begin] = STATE(14),
    [sym_verbatim_env] = STATE(484),
    [sym_verbatim_begin] = STATE(15),
    [sym_begin] = STATE(16),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(484),
    [sym_documentclass_token] = STATE(18),
    [sym_usepackage] = STATE(484),
    [sym_usepackage_token] = STATE(19),
    [sym_include] = STATE(484),
    [sym_include_token] = STATE(20),
    [sym_providesexplclass] = STATE(484),
    [sym_providesexplclass_token] = STATE(21),
    [sym_providesexplfile] = STATE(484),
    [sym_providesexplfile_token] = STATE(22),
    [sym_providesexplpackage] = STATE(484),
    [sym_providesexplpackage_token] = STATE(23),
    [sym_section] = STATE(484),
    [sym_section_token] = STATE(24),
    [sym_storage] = STATE(484),
    [sym_storage_token] = STATE(25),
    [sym_catcode] = STATE(484),
    [sym_catcode_token] = STATE(26),
    [sym_emph] = STATE(484),
    [sym_emph_token] = STATE(27),
    [sym_footnote] = STATE(484),
    [sym_footnote_token] = STATE(28),
    [sym_textbf] = STATE(484),
    [sym_textbf_token] = STATE(29),
    [sym_textit] = STATE(484),
    [sym_textit_token] = STATE(30),
    [sym_texttt] = STATE(484),
    [sym_texttt_token] = STATE(31),
    [sym_makeatletter] = STATE(484),
    [sym_makeatletter_token] = STATE(32),
    [sym_makeatother] = STATE(484),
    [sym_makeatother_token] = STATE(33),
    [sym_explsyntaxon] = STATE(484),
    [sym_explsyntaxon_token] = STATE(34),
    [sym_explsyntaxoff] = STATE(484),
    [sym_explsyntaxoff_token] = STATE(35),
    [sym_dimension_assign] = STATE(484),
    [sym_glue_assign] = STATE(484),
    [sym_glue_token] = STATE(36),
    [sym_dimension_token] = STATE(37),
    [sym_glue_space] = STATE(484),
    [sym_glue_space_token] = STATE(38),
    [sym_makebox] = STATE(484),
    [sym_strut] = STATE(484),
    [sym_strut_token] = STATE(39),
    [sym_phantom_smash] = STATE(484),
    [sym_phantom_smash_token] = STATE(40),
    [sym_makebox_token] = STATE(41),
    [sym_usebox] = STATE(484),
    [sym_usebox_token] = STATE(42),
    [sym_movebox] = STATE(484),
    [sym_movebox_token] = STATE(150),
    [sym__box] = STATE(484),
    [sym_setbox] = STATE(484),
    [sym_setbox_token] = STATE(151),
    [sym_box_dimension_assign] = STATE(484),
    [sym_box_dimension_token] = STATE(45),
    [sym_href] = STATE(484),
    [sym_href_token] = STATE(46),
    [sym_url] = STATE(484),
    [sym_url_token] = STATE(47),
    [sym_hyperbaseurl] = STATE(484),
    [sym_hyperbaseurl_token] = STATE(48),
    [sym_hyperimage] = STATE(484),
    [sym_hyperimage_token] = STATE(49),
    [sym_hyperref] = STATE(484),
    [sym_hyperref_token] = STATE(50),
    [sym_text_group] = STATE(484),
    [sym_begin_opt] = STATE(5),
    [sym_end_opt] = STATE(831),
    [sym_text] = STATE(484),
    [sym_token] = STATE(484),
    [sym_escaped] = STATE(484),
    [aux_sym_text_mode_repeat1] = STATE(484),
    [aux_sym_parameter_repeat1] = STATE(52),
    [aux_sym_text_repeat1] = STATE(154),
    [sym__escape] = ACTIONS(5),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(605),
    [sym_alignment_tab] = ACTIONS(605),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(607),
    [sym_magic_comment] = ACTIONS(607),
    [sym_math_shift] = ACTIONS(16),
    [sym_parameter_char] = ACTIONS(18),
    [sym_subscript] = ACTIONS(20),
    [sym_superscript] = ACTIONS(20),
    [anon_sym_LBRACK] = ACTIONS(24),
    [anon_sym_RBRACK] = ACTIONS(1361),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(142),
  },
  [713] = {
    [sym__escape] = ACTIONS(1690),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(1690),
  },
  [714] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1692),
    [sym_magic_comment] = ACTIONS(7),
  },
  [715] = {
    [sym__escape] = ACTIONS(144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(144),
    [sym_alignment_tab] = ACTIONS(144),
    [sym_begin_group] = ACTIONS(1694),
    [sym_comment] = ACTIONS(146),
    [sym_magic_comment] = ACTIONS(146),
    [sym_math_shift] = ACTIONS(144),
    [sym_parameter_char] = ACTIONS(144),
    [sym_subscript] = ACTIONS(144),
    [sym_superscript] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(144),
  },
  [716] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1003),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [717] = {
    [sym_text_group] = STATE(833),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [718] = {
    [sym_text_group] = STATE(834),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [719] = {
    [sym_text_group] = STATE(835),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [720] = {
    [sym__escape] = ACTIONS(1696),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1696),
    [sym_alignment_tab] = ACTIONS(1696),
    [sym_begin_group] = ACTIONS(1696),
    [sym_comment] = ACTIONS(1698),
    [sym_magic_comment] = ACTIONS(1698),
    [sym_math_shift] = ACTIONS(1696),
    [sym_parameter_char] = ACTIONS(1696),
    [sym_subscript] = ACTIONS(1696),
    [sym_superscript] = ACTIONS(1696),
    [ts_builtin_sym_end] = ACTIONS(1696),
    [anon_sym_LBRACK] = ACTIONS(1696),
    [anon_sym_RBRACK] = ACTIONS(1696),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1696),
  },
  [721] = {
    [sym__escape] = ACTIONS(1701),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1701),
    [sym_alignment_tab] = ACTIONS(1701),
    [sym_begin_group] = ACTIONS(1701),
    [sym_comment] = ACTIONS(1703),
    [sym_magic_comment] = ACTIONS(1703),
    [sym_math_shift] = ACTIONS(1701),
    [sym_parameter_char] = ACTIONS(1701),
    [sym_subscript] = ACTIONS(1701),
    [sym_superscript] = ACTIONS(1701),
    [ts_builtin_sym_end] = ACTIONS(1701),
    [anon_sym_LBRACK] = ACTIONS(1701),
    [anon_sym_RBRACK] = ACTIONS(1701),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1701),
  },
  [722] = {
    [sym__escape] = ACTIONS(900),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(900),
    [sym_alignment_tab] = ACTIONS(900),
    [sym_begin_group] = ACTIONS(900),
    [sym_comment] = ACTIONS(1706),
    [sym_magic_comment] = ACTIONS(1706),
    [sym_math_shift] = ACTIONS(900),
    [sym_parameter_char] = ACTIONS(900),
    [sym_subscript] = ACTIONS(900),
    [sym_superscript] = ACTIONS(900),
    [ts_builtin_sym_end] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(900),
  },
  [723] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_math_shift] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [ts_builtin_sym_end] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_plus] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [724] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [ts_builtin_sym_end] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_plus] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [725] = {
    [aux_sym_token_repeat1] = STATE(837),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1716),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1718),
  },
  [726] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [ts_builtin_sym_end] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [727] = {
    [sym_dimension_token] = STATE(838),
    [sym_box_dimension_token] = STATE(728),
    [sym_box_dimension_ref] = STATE(838),
    [sym_token] = STATE(838),
    [sym__escape] = ACTIONS(1423),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1720),
  },
  [728] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1722),
  },
  [729] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_math_shift] = ACTIONS(1724),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [ts_builtin_sym_end] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [anon_sym_minus] = ACTIONS(1729),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1731),
  },
  [730] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_math_shift] = ACTIONS(1724),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [ts_builtin_sym_end] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1724),
  },
  [731] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_math_shift] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [ts_builtin_sym_end] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(902),
  },
  [732] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1733),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [733] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1735),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [734] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [735] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [736] = {
    [sym__escape] = ACTIONS(1737),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1737),
    [sym_alignment_tab] = ACTIONS(1737),
    [sym_begin_group] = ACTIONS(1737),
    [sym_comment] = ACTIONS(1739),
    [sym_magic_comment] = ACTIONS(1739),
    [sym_math_shift] = ACTIONS(1737),
    [sym_parameter_char] = ACTIONS(1737),
    [sym_subscript] = ACTIONS(1737),
    [sym_superscript] = ACTIONS(1737),
    [ts_builtin_sym_end] = ACTIONS(1737),
    [anon_sym_LBRACK] = ACTIONS(1737),
    [anon_sym_RBRACK] = ACTIONS(1737),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1737),
  },
  [737] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [738] = {
    [sym__escape] = ACTIONS(1742),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1742),
    [sym_alignment_tab] = ACTIONS(1742),
    [sym_begin_group] = ACTIONS(1742),
    [sym_comment] = ACTIONS(1744),
    [sym_magic_comment] = ACTIONS(1744),
    [sym_math_shift] = ACTIONS(1742),
    [sym_parameter_char] = ACTIONS(1742),
    [sym_subscript] = ACTIONS(1742),
    [sym_superscript] = ACTIONS(1742),
    [ts_builtin_sym_end] = ACTIONS(1742),
    [anon_sym_LBRACK] = ACTIONS(1742),
    [anon_sym_RBRACK] = ACTIONS(1742),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1742),
  },
  [739] = {
    [sym__escape] = ACTIONS(1747),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1747),
    [sym_alignment_tab] = ACTIONS(1747),
    [sym_begin_group] = ACTIONS(1747),
    [sym_comment] = ACTIONS(1749),
    [sym_magic_comment] = ACTIONS(1749),
    [sym_math_shift] = ACTIONS(1747),
    [sym_parameter_char] = ACTIONS(1747),
    [sym_subscript] = ACTIONS(1747),
    [sym_superscript] = ACTIONS(1747),
    [ts_builtin_sym_end] = ACTIONS(1747),
    [anon_sym_LBRACK] = ACTIONS(1747),
    [anon_sym_RBRACK] = ACTIONS(1747),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1747),
  },
  [740] = {
    [sym__escape] = ACTIONS(1752),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1752),
    [sym_alignment_tab] = ACTIONS(1752),
    [sym_begin_group] = ACTIONS(1752),
    [sym_comment] = ACTIONS(1754),
    [sym_magic_comment] = ACTIONS(1754),
    [sym_math_shift] = ACTIONS(1752),
    [sym_parameter_char] = ACTIONS(1752),
    [sym_subscript] = ACTIONS(1752),
    [sym_superscript] = ACTIONS(1752),
    [ts_builtin_sym_end] = ACTIONS(1752),
    [anon_sym_LBRACK] = ACTIONS(1752),
    [anon_sym_RBRACK] = ACTIONS(1752),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1752),
  },
  [741] = {
    [sym_text_group] = STATE(843),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(11),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [742] = {
    [sym__escape] = ACTIONS(1600),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1600),
    [sym_alignment_tab] = ACTIONS(1600),
    [sym_begin_group] = ACTIONS(1600),
    [sym_comment] = ACTIONS(1602),
    [sym_end_group] = ACTIONS(1600),
    [sym_magic_comment] = ACTIONS(1602),
    [sym_math_shift] = ACTIONS(1600),
    [sym_parameter_char] = ACTIONS(1600),
    [sym_subscript] = ACTIONS(1600),
    [sym_superscript] = ACTIONS(1600),
    [anon_sym_LBRACK] = ACTIONS(1600),
    [anon_sym_RBRACK] = ACTIONS(1600),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1600),
  },
  [743] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_math_shift] = ACTIONS(1757),
  },
  [744] = {
    [sym__escape] = ACTIONS(1621),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1621),
    [sym_alignment_tab] = ACTIONS(1621),
    [sym_begin_group] = ACTIONS(1621),
    [sym_comment] = ACTIONS(1623),
    [sym_end_group] = ACTIONS(1621),
    [sym_magic_comment] = ACTIONS(1623),
    [sym_math_shift] = ACTIONS(1621),
    [sym_parameter_char] = ACTIONS(1621),
    [sym_subscript] = ACTIONS(1621),
    [sym_superscript] = ACTIONS(1621),
    [anon_sym_LBRACK] = ACTIONS(1621),
    [anon_sym_RBRACK] = ACTIONS(1621),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1621),
  },
  [745] = {
    [sym__escape] = ACTIONS(1626),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1626),
    [sym_alignment_tab] = ACTIONS(1626),
    [sym_begin_group] = ACTIONS(1626),
    [sym_comment] = ACTIONS(1628),
    [sym_end_group] = ACTIONS(1626),
    [sym_magic_comment] = ACTIONS(1628),
    [sym_math_shift] = ACTIONS(1626),
    [sym_parameter_char] = ACTIONS(1626),
    [sym_subscript] = ACTIONS(1626),
    [sym_superscript] = ACTIONS(1626),
    [anon_sym_LBRACK] = ACTIONS(1626),
    [anon_sym_RBRACK] = ACTIONS(1626),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1626),
  },
  [746] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_display_math_env_name] = ACTIONS(1759),
  },
  [747] = {
    [sym__escape] = ACTIONS(1653),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1653),
    [sym_alignment_tab] = ACTIONS(1653),
    [sym_begin_group] = ACTIONS(1653),
    [sym_comment] = ACTIONS(1655),
    [sym_end_group] = ACTIONS(1653),
    [sym_magic_comment] = ACTIONS(1655),
    [sym_math_shift] = ACTIONS(1653),
    [sym_parameter_char] = ACTIONS(1653),
    [sym_subscript] = ACTIONS(1653),
    [sym_superscript] = ACTIONS(1653),
    [anon_sym_LBRACK] = ACTIONS(1653),
    [anon_sym_RBRACK] = ACTIONS(1653),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1653),
  },
  [748] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1761),
    [sym_magic_comment] = ACTIONS(7),
  },
  [749] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1763),
    [sym_magic_comment] = ACTIONS(7),
  },
  [750] = {
    [sym__escape] = ACTIONS(1673),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1673),
    [sym_alignment_tab] = ACTIONS(1673),
    [sym_begin_group] = ACTIONS(1673),
    [sym_comment] = ACTIONS(1675),
    [sym_end_group] = ACTIONS(1673),
    [sym_magic_comment] = ACTIONS(1675),
    [sym_math_shift] = ACTIONS(1673),
    [sym_parameter_char] = ACTIONS(1673),
    [sym_subscript] = ACTIONS(1673),
    [sym_superscript] = ACTIONS(1673),
    [anon_sym_LBRACK] = ACTIONS(1673),
    [anon_sym_RBRACK] = ACTIONS(1673),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1673),
  },
  [751] = {
    [sym_text_group] = STATE(848),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [752] = {
    [sym_text_group] = STATE(849),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [753] = {
    [sym_text_group] = STATE(850),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [754] = {
    [sym__escape] = ACTIONS(1696),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1696),
    [sym_alignment_tab] = ACTIONS(1696),
    [sym_begin_group] = ACTIONS(1696),
    [sym_comment] = ACTIONS(1698),
    [sym_end_group] = ACTIONS(1696),
    [sym_magic_comment] = ACTIONS(1698),
    [sym_math_shift] = ACTIONS(1696),
    [sym_parameter_char] = ACTIONS(1696),
    [sym_subscript] = ACTIONS(1696),
    [sym_superscript] = ACTIONS(1696),
    [anon_sym_LBRACK] = ACTIONS(1696),
    [anon_sym_RBRACK] = ACTIONS(1696),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1696),
  },
  [755] = {
    [sym__escape] = ACTIONS(1701),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1701),
    [sym_alignment_tab] = ACTIONS(1701),
    [sym_begin_group] = ACTIONS(1701),
    [sym_comment] = ACTIONS(1703),
    [sym_end_group] = ACTIONS(1701),
    [sym_magic_comment] = ACTIONS(1703),
    [sym_math_shift] = ACTIONS(1701),
    [sym_parameter_char] = ACTIONS(1701),
    [sym_subscript] = ACTIONS(1701),
    [sym_superscript] = ACTIONS(1701),
    [anon_sym_LBRACK] = ACTIONS(1701),
    [anon_sym_RBRACK] = ACTIONS(1701),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1701),
  },
  [756] = {
    [sym__escape] = ACTIONS(900),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(900),
    [sym_alignment_tab] = ACTIONS(900),
    [sym_begin_group] = ACTIONS(900),
    [sym_comment] = ACTIONS(1706),
    [sym_end_group] = ACTIONS(900),
    [sym_magic_comment] = ACTIONS(1706),
    [sym_math_shift] = ACTIONS(900),
    [sym_parameter_char] = ACTIONS(900),
    [sym_subscript] = ACTIONS(900),
    [sym_superscript] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(900),
  },
  [757] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_end_group] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_math_shift] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_plus] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [758] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_end_group] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_plus] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [759] = {
    [aux_sym_token_repeat1] = STATE(852),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1765),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1767),
  },
  [760] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_end_group] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(705),
    [sym_math_shift] = ACTIONS(703),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [761] = {
    [sym_dimension_token] = STATE(853),
    [sym_box_dimension_token] = STATE(762),
    [sym_box_dimension_ref] = STATE(853),
    [sym_token] = STATE(853),
    [sym__escape] = ACTIONS(1502),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1769),
  },
  [762] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1771),
  },
  [763] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_end_group] = ACTIONS(1724),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_math_shift] = ACTIONS(1724),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [anon_sym_minus] = ACTIONS(1773),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1731),
  },
  [764] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_end_group] = ACTIONS(1724),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_math_shift] = ACTIONS(1724),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1724),
  },
  [765] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_end_group] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_math_shift] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(902),
  },
  [766] = {
    [sym__escape] = ACTIONS(1737),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1737),
    [sym_alignment_tab] = ACTIONS(1737),
    [sym_begin_group] = ACTIONS(1737),
    [sym_comment] = ACTIONS(1739),
    [sym_end_group] = ACTIONS(1737),
    [sym_magic_comment] = ACTIONS(1739),
    [sym_math_shift] = ACTIONS(1737),
    [sym_parameter_char] = ACTIONS(1737),
    [sym_subscript] = ACTIONS(1737),
    [sym_superscript] = ACTIONS(1737),
    [anon_sym_LBRACK] = ACTIONS(1737),
    [anon_sym_RBRACK] = ACTIONS(1737),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1737),
  },
  [767] = {
    [sym__escape] = ACTIONS(1742),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1742),
    [sym_alignment_tab] = ACTIONS(1742),
    [sym_begin_group] = ACTIONS(1742),
    [sym_comment] = ACTIONS(1744),
    [sym_end_group] = ACTIONS(1742),
    [sym_magic_comment] = ACTIONS(1744),
    [sym_math_shift] = ACTIONS(1742),
    [sym_parameter_char] = ACTIONS(1742),
    [sym_subscript] = ACTIONS(1742),
    [sym_superscript] = ACTIONS(1742),
    [anon_sym_LBRACK] = ACTIONS(1742),
    [anon_sym_RBRACK] = ACTIONS(1742),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1742),
  },
  [768] = {
    [sym__escape] = ACTIONS(1747),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1747),
    [sym_alignment_tab] = ACTIONS(1747),
    [sym_begin_group] = ACTIONS(1747),
    [sym_comment] = ACTIONS(1749),
    [sym_end_group] = ACTIONS(1747),
    [sym_magic_comment] = ACTIONS(1749),
    [sym_math_shift] = ACTIONS(1747),
    [sym_parameter_char] = ACTIONS(1747),
    [sym_subscript] = ACTIONS(1747),
    [sym_superscript] = ACTIONS(1747),
    [anon_sym_LBRACK] = ACTIONS(1747),
    [anon_sym_RBRACK] = ACTIONS(1747),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1747),
  },
  [769] = {
    [sym__escape] = ACTIONS(1752),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1752),
    [sym_alignment_tab] = ACTIONS(1752),
    [sym_begin_group] = ACTIONS(1752),
    [sym_comment] = ACTIONS(1754),
    [sym_end_group] = ACTIONS(1752),
    [sym_magic_comment] = ACTIONS(1754),
    [sym_math_shift] = ACTIONS(1752),
    [sym_parameter_char] = ACTIONS(1752),
    [sym_subscript] = ACTIONS(1752),
    [sym_superscript] = ACTIONS(1752),
    [anon_sym_LBRACK] = ACTIONS(1752),
    [anon_sym_RBRACK] = ACTIONS(1752),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1752),
  },
  [770] = {
    [sym_text_group] = STATE(856),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [771] = {
    [sym__escape] = ACTIONS(845),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(845),
    [sym_alignment_tab] = ACTIONS(845),
    [sym_begin_group] = ACTIONS(845),
    [sym_comment] = ACTIONS(847),
    [sym_end_group] = ACTIONS(845),
    [sym_magic_comment] = ACTIONS(847),
    [sym_parameter_char] = ACTIONS(845),
    [sym_subscript] = ACTIONS(845),
    [sym_superscript] = ACTIONS(845),
    [anon_sym_LBRACK] = ACTIONS(845),
    [anon_sym_RBRACK] = ACTIONS(845),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(845),
  },
  [772] = {
    [sym__escape] = ACTIONS(850),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(850),
    [sym_alignment_tab] = ACTIONS(850),
    [sym_begin_group] = ACTIONS(850),
    [sym_comment] = ACTIONS(852),
    [sym_end_group] = ACTIONS(850),
    [sym_magic_comment] = ACTIONS(852),
    [sym_parameter_char] = ACTIONS(850),
    [sym_subscript] = ACTIONS(850),
    [sym_superscript] = ACTIONS(850),
    [anon_sym_LBRACK] = ACTIONS(850),
    [anon_sym_RBRACK] = ACTIONS(850),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(850),
  },
  [773] = {
    [sym__escape] = ACTIONS(855),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(855),
    [sym_alignment_tab] = ACTIONS(855),
    [sym_begin_group] = ACTIONS(855),
    [sym_comment] = ACTIONS(857),
    [sym_end_group] = ACTIONS(855),
    [sym_magic_comment] = ACTIONS(857),
    [sym_parameter_char] = ACTIONS(855),
    [sym_subscript] = ACTIONS(855),
    [sym_superscript] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_RBRACK] = ACTIONS(855),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(855),
  },
  [774] = {
    [sym__escape] = ACTIONS(860),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(860),
    [sym_alignment_tab] = ACTIONS(860),
    [sym_begin_group] = ACTIONS(860),
    [sym_comment] = ACTIONS(862),
    [sym_end_group] = ACTIONS(860),
    [sym_magic_comment] = ACTIONS(862),
    [sym_parameter_char] = ACTIONS(860),
    [sym_subscript] = ACTIONS(860),
    [sym_superscript] = ACTIONS(860),
    [anon_sym_LBRACK] = ACTIONS(860),
    [anon_sym_RBRACK] = ACTIONS(860),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(860),
  },
  [775] = {
    [sym__escape] = ACTIONS(883),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(883),
    [sym_alignment_tab] = ACTIONS(883),
    [sym_begin_group] = ACTIONS(883),
    [sym_comment] = ACTIONS(885),
    [sym_end_group] = ACTIONS(883),
    [sym_magic_comment] = ACTIONS(885),
    [sym_parameter_char] = ACTIONS(883),
    [sym_subscript] = ACTIONS(883),
    [sym_superscript] = ACTIONS(883),
    [anon_sym_LBRACK] = ACTIONS(883),
    [anon_sym_RBRACK] = ACTIONS(883),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(883),
  },
  [776] = {
    [sym__escape] = ACTIONS(906),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(906),
    [sym_alignment_tab] = ACTIONS(906),
    [sym_begin_group] = ACTIONS(906),
    [sym_comment] = ACTIONS(908),
    [sym_end_group] = ACTIONS(906),
    [sym_magic_comment] = ACTIONS(908),
    [sym_parameter_char] = ACTIONS(906),
    [sym_subscript] = ACTIONS(906),
    [sym_superscript] = ACTIONS(906),
    [anon_sym_LBRACK] = ACTIONS(906),
    [anon_sym_RBRACK] = ACTIONS(906),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(906),
  },
  [777] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_end_group] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(933),
  },
  [778] = {
    [sym__escape] = ACTIONS(1567),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1567),
    [sym_alignment_tab] = ACTIONS(1567),
    [sym_begin_group] = ACTIONS(1567),
    [sym_comment] = ACTIONS(1569),
    [sym_end_group] = ACTIONS(1567),
    [sym_magic_comment] = ACTIONS(1569),
    [sym_parameter_char] = ACTIONS(1567),
    [sym_subscript] = ACTIONS(1567),
    [sym_superscript] = ACTIONS(1567),
    [anon_sym_LBRACK] = ACTIONS(1567),
    [anon_sym_RBRACK] = ACTIONS(1567),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1567),
  },
  [779] = {
    [sym__escape] = ACTIONS(1607),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1607),
    [sym_alignment_tab] = ACTIONS(1607),
    [sym_begin_group] = ACTIONS(1607),
    [sym_comment] = ACTIONS(1609),
    [sym_end_group] = ACTIONS(1607),
    [sym_magic_comment] = ACTIONS(1609),
    [sym_parameter_char] = ACTIONS(1607),
    [sym_subscript] = ACTIONS(1607),
    [sym_superscript] = ACTIONS(1607),
    [anon_sym_LBRACK] = ACTIONS(1607),
    [anon_sym_RBRACK] = ACTIONS(1607),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1607),
  },
  [780] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1775),
    [sym_magic_comment] = ACTIONS(7),
  },
  [781] = {
    [sym_text] = STATE(858),
    [aux_sym_text_repeat1] = STATE(489),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(634),
  },
  [782] = {
    [sym__escape] = ACTIONS(1312),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1312),
    [sym_alignment_tab] = ACTIONS(1312),
    [sym_begin_group] = ACTIONS(1312),
    [sym_comment] = ACTIONS(1314),
    [sym_end_group] = ACTIONS(1312),
    [sym_magic_comment] = ACTIONS(1314),
    [sym_parameter_char] = ACTIONS(1312),
    [sym_subscript] = ACTIONS(1312),
    [sym_superscript] = ACTIONS(1312),
    [anon_sym_LBRACK] = ACTIONS(1312),
    [anon_sym_RBRACK] = ACTIONS(1312),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1312),
  },
  [783] = {
    [sym__escape] = ACTIONS(1614),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1614),
    [sym_alignment_tab] = ACTIONS(1614),
    [sym_begin_group] = ACTIONS(1614),
    [sym_comment] = ACTIONS(1616),
    [sym_end_group] = ACTIONS(1614),
    [sym_magic_comment] = ACTIONS(1616),
    [sym_parameter_char] = ACTIONS(1614),
    [sym_subscript] = ACTIONS(1614),
    [sym_superscript] = ACTIONS(1614),
    [anon_sym_LBRACK] = ACTIONS(1614),
    [anon_sym_RBRACK] = ACTIONS(1614),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1614),
  },
  [784] = {
    [sym__escape] = ACTIONS(397),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(397),
    [sym_alignment_tab] = ACTIONS(397),
    [sym_begin_group] = ACTIONS(397),
    [sym_comment] = ACTIONS(399),
    [sym_end_group] = ACTIONS(397),
    [sym_magic_comment] = ACTIONS(399),
    [sym_parameter_char] = ACTIONS(397),
    [sym_subscript] = ACTIONS(397),
    [sym_superscript] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_RBRACK] = ACTIONS(397),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(397),
  },
  [785] = {
    [sym__common] = STATE(378),
    [sym_inline_verbatim] = STATE(378),
    [sym_verb_token] = STATE(100),
    [sym__text_mode] = STATE(378),
    [sym_parameter] = STATE(378),
    [sym_text_env] = STATE(378),
    [sym__display_math] = STATE(378),
    [sym_tex_display_math] = STATE(378),
    [sym_latex_display_math] = STATE(378),
    [sym_begin_display_math] = STATE(101),
    [sym_display_math_env] = STATE(378),
    [sym_display_math_begin] = STATE(102),
    [sym__inline_math] = STATE(378),
    [sym_tex_inline_math] = STATE(378),
    [sym_latex_inline_math] = STATE(378),
    [sym_begin_inline_math] = STATE(103),
    [sym_inline_math_env] = STATE(378),
    [sym_inline_math_begin] = STATE(104),
    [sym_verbatim_env] = STATE(378),
    [sym_verbatim_begin] = STATE(105),
    [sym_begin] = STATE(106),
    [sym_begin_token] = STATE(17),
    [sym_documentclass] = STATE(378),
    [sym_documentclass_token] = STATE(107),
    [sym_usepackage] = STATE(378),
    [sym_usepackage_token] = STATE(108),
    [sym_include] = STATE(378),
    [sym_include_token] = STATE(109),
    [sym_providesexplclass] = STATE(378),
    [sym_providesexplclass_token] = STATE(110),
    [sym_providesexplfile] = STATE(378),
    [sym_providesexplfile_token] = STATE(111),
    [sym_providesexplpackage] = STATE(378),
    [sym_providesexplpackage_token] = STATE(112),
    [sym_section] = STATE(378),
    [sym_section_token] = STATE(113),
    [sym_storage] = STATE(378),
    [sym_storage_token] = STATE(114),
    [sym_catcode] = STATE(378),
    [sym_catcode_token] = STATE(115),
    [sym_emph] = STATE(378),
    [sym_emph_token] = STATE(116),
    [sym_footnote] = STATE(378),
    [sym_footnote_token] = STATE(117),
    [sym_textbf] = STATE(378),
    [sym_textbf_token] = STATE(118),
    [sym_textit] = STATE(378),
    [sym_textit_token] = STATE(119),
    [sym_texttt] = STATE(378),
    [sym_texttt_token] = STATE(120),
    [sym_makeatletter] = STATE(378),
    [sym_makeatletter_token] = STATE(121),
    [sym_makeatother] = STATE(378),
    [sym_makeatother_token] = STATE(122),
    [sym_explsyntaxon] = STATE(378),
    [sym_explsyntaxon_token] = STATE(123),
    [sym_explsyntaxoff] = STATE(378),
    [sym_explsyntaxoff_token] = STATE(124),
    [sym_dimension_assign] = STATE(378),
    [sym_glue_assign] = STATE(378),
    [sym_glue_token] = STATE(125),
    [sym_dimension_token] = STATE(126),
    [sym_glue_space] = STATE(378),
    [sym_glue_space_token] = STATE(127),
    [sym_makebox] = STATE(378),
    [sym_strut] = STATE(378),
    [sym_strut_token] = STATE(128),
    [sym_phantom_smash] = STATE(378),
    [sym_phantom_smash_token] = STATE(129),
    [sym_makebox_token] = STATE(130),
    [sym_usebox] = STATE(378),
    [sym_usebox_token] = STATE(131),
    [sym_movebox] = STATE(378),
    [sym_movebox_token] = STATE(132),
    [sym__box] = STATE(378),
    [sym_setbox] = STATE(378),
    [sym_setbox_token] = STATE(133),
    [sym_box_dimension_assign] = STATE(378),
    [sym_box_dimension_token] = STATE(134),
    [sym_href] = STATE(378),
    [sym_href_token] = STATE(135),
    [sym_url] = STATE(378),
    [sym_url_token] = STATE(136),
    [sym_hyperbaseurl] = STATE(378),
    [sym_hyperbaseurl_token] = STATE(137),
    [sym_hyperimage] = STATE(378),
    [sym_hyperimage_token] = STATE(138),
    [sym_hyperref] = STATE(378),
    [sym_hyperref_token] = STATE(139),
    [sym_text_group] = STATE(378),
    [sym_begin_opt] = STATE(97),
    [sym_end_opt] = STATE(97),
    [sym_text] = STATE(378),
    [sym_token] = STATE(378),
    [sym_escaped] = STATE(378),
    [aux_sym_text_mode_repeat1] = STATE(378),
    [aux_sym_parameter_repeat1] = STATE(141),
    [aux_sym_text_repeat1] = STATE(142),
    [sym__escape] = ACTIONS(108),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(441),
    [sym_alignment_tab] = ACTIONS(441),
    [sym_begin_group] = ACTIONS(112),
    [sym_comment] = ACTIONS(443),
    [sym_end_group] = ACTIONS(1777),
    [sym_magic_comment] = ACTIONS(443),
    [sym_math_shift] = ACTIONS(119),
    [sym_parameter_char] = ACTIONS(121),
    [sym_subscript] = ACTIONS(123),
    [sym_superscript] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(129),
  },
  [786] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1779),
  },
  [787] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1781),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [788] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1783),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [789] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1785),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [790] = {
    [sym__escape] = ACTIONS(1399),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1399),
    [sym_alignment_tab] = ACTIONS(1399),
    [sym_begin_group] = ACTIONS(1399),
    [sym_comment] = ACTIONS(1401),
    [sym_end_group] = ACTIONS(1399),
    [sym_magic_comment] = ACTIONS(1401),
    [sym_parameter_char] = ACTIONS(1399),
    [sym_subscript] = ACTIONS(1399),
    [sym_superscript] = ACTIONS(1399),
    [anon_sym_LBRACK] = ACTIONS(1399),
    [anon_sym_RBRACK] = ACTIONS(1399),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1399),
  },
  [791] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_end_group] = ACTIONS(1404),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_plus] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [792] = {
    [sym__escape] = ACTIONS(1411),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1411),
    [sym_alignment_tab] = ACTIONS(1411),
    [sym_begin_group] = ACTIONS(1411),
    [sym_comment] = ACTIONS(1413),
    [sym_end_group] = ACTIONS(1411),
    [sym_magic_comment] = ACTIONS(1413),
    [sym_parameter_char] = ACTIONS(1411),
    [sym_subscript] = ACTIONS(1411),
    [sym_superscript] = ACTIONS(1411),
    [anon_sym_LBRACK] = ACTIONS(1411),
    [anon_sym_RBRACK] = ACTIONS(1411),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1411),
  },
  [793] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_end_group] = ACTIONS(1416),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_plus] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [794] = {
    [sym_dimension_token] = STATE(865),
    [sym_box_dimension_token] = STATE(867),
    [sym_box_dimension_ref] = STATE(865),
    [sym_dimension] = STATE(868),
    [sym_token] = STATE(865),
    [sym__escape] = ACTIONS(1787),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1789),
    [sym_decimal] = ACTIONS(1791),
  },
  [795] = {
    [sym_dimension_token] = STATE(635),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(635),
    [sym_dimension] = STATE(869),
    [sym_token] = STATE(635),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1093),
    [sym_decimal] = ACTIONS(1095),
  },
  [796] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1793),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [797] = {
    [sym__escape] = ACTIONS(1431),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1431),
    [sym_alignment_tab] = ACTIONS(1431),
    [sym_begin_group] = ACTIONS(1431),
    [sym_comment] = ACTIONS(1433),
    [sym_end_group] = ACTIONS(1431),
    [sym_magic_comment] = ACTIONS(1433),
    [sym_parameter_char] = ACTIONS(1431),
    [sym_subscript] = ACTIONS(1431),
    [sym_superscript] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(1431),
    [anon_sym_RBRACK] = ACTIONS(1431),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1431),
  },
  [798] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_end_group] = ACTIONS(1404),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1404),
  },
  [799] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_end_group] = ACTIONS(1416),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1416),
  },
  [800] = {
    [sym_text_group] = STATE(871),
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(1079),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [801] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENmath_RPAREN_QMARKstrut_PIPEnull_SLASH] = ACTIONS(1056),
    [aux_sym_SLASH_LBRACKhv_RBRACK_QMARKphantom_PIPEsmash_SLASH] = ACTIONS(84),
    [aux_sym_SLASH_LBRACKhv_RBRACKbox_PIPEvtop_SLASH] = ACTIONS(86),
    [aux_sym_SLASH_LPARENun_LBRACKhv_RBRACK_RPAREN_QMARK_LPARENbox_PIPEcopy_RPAREN_SLASH] = ACTIONS(1446),
    [aux_sym_SLASHmove_LPARENleft_PIPEright_RPAREN_PIPEraise_PIPElower_SLASH] = ACTIONS(90),
  },
  [802] = {
    [sym__escape] = ACTIONS(1448),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1448),
    [sym_alignment_tab] = ACTIONS(1448),
    [sym_begin_group] = ACTIONS(1448),
    [sym_comment] = ACTIONS(1450),
    [sym_end_group] = ACTIONS(1448),
    [sym_magic_comment] = ACTIONS(1450),
    [sym_parameter_char] = ACTIONS(1448),
    [sym_subscript] = ACTIONS(1448),
    [sym_superscript] = ACTIONS(1448),
    [anon_sym_LBRACK] = ACTIONS(1448),
    [anon_sym_RBRACK] = ACTIONS(1448),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1448),
  },
  [803] = {
    [sym_makebox] = STATE(872),
    [sym_strut] = STATE(872),
    [sym_strut_token] = STATE(399),
    [sym_phantom_smash] = STATE(872),
    [sym_phantom_smash_token] = STATE(400),
    [sym_makebox_token] = STATE(401),
    [sym_usebox] = STATE(872),
    [sym_usebox_token] = STATE(402),
    [sym_movebox] = STATE(872),
    [sym_movebox_token] = STATE(403),
    [sym__box] = STATE(872),
    [sym__escape] = ACTIONS(1561),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [804] = {
    [sym__escape] = ACTIONS(1453),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1453),
    [sym_alignment_tab] = ACTIONS(1453),
    [sym_begin_group] = ACTIONS(1453),
    [sym_comment] = ACTIONS(1455),
    [sym_end_group] = ACTIONS(1453),
    [sym_magic_comment] = ACTIONS(1455),
    [sym_parameter_char] = ACTIONS(1453),
    [sym_subscript] = ACTIONS(1453),
    [sym_superscript] = ACTIONS(1453),
    [anon_sym_LBRACK] = ACTIONS(1453),
    [anon_sym_RBRACK] = ACTIONS(1453),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1453),
  },
  [805] = {
    [sym_dimension_token] = STATE(635),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(635),
    [sym_dimension] = STATE(873),
    [sym_token] = STATE(635),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1093),
    [sym_decimal] = ACTIONS(1095),
  },
  [806] = {
    [sym__escape] = ACTIONS(1458),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1458),
    [sym_alignment_tab] = ACTIONS(1458),
    [sym_begin_group] = ACTIONS(1458),
    [sym_comment] = ACTIONS(1460),
    [sym_end_group] = ACTIONS(1458),
    [sym_magic_comment] = ACTIONS(1460),
    [sym_parameter_char] = ACTIONS(1458),
    [sym_subscript] = ACTIONS(1458),
    [sym_superscript] = ACTIONS(1458),
    [anon_sym_LBRACK] = ACTIONS(1458),
    [anon_sym_RBRACK] = ACTIONS(1458),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1458),
  },
  [807] = {
    [sym__escape] = ACTIONS(1795),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1795),
    [sym_alignment_tab] = ACTIONS(1795),
    [sym_begin_group] = ACTIONS(1795),
    [sym_comment] = ACTIONS(1797),
    [sym_magic_comment] = ACTIONS(1797),
    [sym_math_shift] = ACTIONS(1795),
    [sym_parameter_char] = ACTIONS(1795),
    [sym_subscript] = ACTIONS(1795),
    [sym_superscript] = ACTIONS(1795),
    [ts_builtin_sym_end] = ACTIONS(1795),
    [anon_sym_LBRACK] = ACTIONS(1795),
    [anon_sym_RBRACK] = ACTIONS(1795),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1795),
  },
  [808] = {
    [sym__escape] = ACTIONS(1800),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1800),
    [sym_alignment_tab] = ACTIONS(1800),
    [sym_begin_group] = ACTIONS(1800),
    [sym_comment] = ACTIONS(1802),
    [sym_magic_comment] = ACTIONS(1802),
    [sym_math_shift] = ACTIONS(1800),
    [sym_parameter_char] = ACTIONS(1800),
    [sym_subscript] = ACTIONS(1800),
    [sym_superscript] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1800),
    [anon_sym_RBRACK] = ACTIONS(1800),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1800),
  },
  [809] = {
    [sym__escape] = ACTIONS(1673),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1673),
    [sym_alignment_tab] = ACTIONS(1673),
    [sym_begin_group] = ACTIONS(1673),
    [sym_comment] = ACTIONS(1675),
    [sym_magic_comment] = ACTIONS(1675),
    [sym_parameter_char] = ACTIONS(1673),
    [sym_subscript] = ACTIONS(1673),
    [sym_superscript] = ACTIONS(1673),
    [anon_sym_LBRACK] = ACTIONS(1673),
    [anon_sym_RBRACK] = ACTIONS(1673),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1673),
  },
  [810] = {
    [sym__escape] = ACTIONS(1800),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1800),
    [sym_alignment_tab] = ACTIONS(1800),
    [sym_begin_group] = ACTIONS(1800),
    [sym_comment] = ACTIONS(1802),
    [sym_magic_comment] = ACTIONS(1802),
    [sym_parameter_char] = ACTIONS(1800),
    [sym_subscript] = ACTIONS(1800),
    [sym_superscript] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1800),
    [anon_sym_RBRACK] = ACTIONS(1800),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1800),
  },
  [811] = {
    [sym__escape] = ACTIONS(1003),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_comment] = ACTIONS(1005),
    [sym_magic_comment] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1003),
  },
  [812] = {
    [sym__escape] = ACTIONS(1701),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1701),
    [sym_alignment_tab] = ACTIONS(1701),
    [sym_begin_group] = ACTIONS(1701),
    [sym_comment] = ACTIONS(1703),
    [sym_magic_comment] = ACTIONS(1703),
    [sym_parameter_char] = ACTIONS(1701),
    [sym_subscript] = ACTIONS(1701),
    [sym_superscript] = ACTIONS(1701),
    [anon_sym_LBRACK] = ACTIONS(1701),
    [anon_sym_RBRACK] = ACTIONS(1701),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1701),
  },
  [813] = {
    [sym__escape] = ACTIONS(900),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(900),
    [sym_alignment_tab] = ACTIONS(900),
    [sym_begin_group] = ACTIONS(900),
    [sym_comment] = ACTIONS(1706),
    [sym_magic_comment] = ACTIONS(1706),
    [sym_parameter_char] = ACTIONS(900),
    [sym_subscript] = ACTIONS(900),
    [sym_superscript] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(900),
  },
  [814] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_plus] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [815] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_plus] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [816] = {
    [aux_sym_token_repeat1] = STATE(875),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1805),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1807),
  },
  [817] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_magic_comment] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [818] = {
    [sym_dimension_token] = STATE(876),
    [sym_box_dimension_token] = STATE(819),
    [sym_box_dimension_ref] = STATE(876),
    [sym_token] = STATE(876),
    [sym__escape] = ACTIONS(1643),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1809),
  },
  [819] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1811),
  },
  [820] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [anon_sym_minus] = ACTIONS(1813),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1731),
  },
  [821] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1724),
  },
  [822] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(902),
  },
  [823] = {
    [sym__escape] = ACTIONS(1737),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1737),
    [sym_alignment_tab] = ACTIONS(1737),
    [sym_begin_group] = ACTIONS(1737),
    [sym_comment] = ACTIONS(1739),
    [sym_magic_comment] = ACTIONS(1739),
    [sym_parameter_char] = ACTIONS(1737),
    [sym_subscript] = ACTIONS(1737),
    [sym_superscript] = ACTIONS(1737),
    [anon_sym_LBRACK] = ACTIONS(1737),
    [anon_sym_RBRACK] = ACTIONS(1737),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1737),
  },
  [824] = {
    [sym__escape] = ACTIONS(1742),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1742),
    [sym_alignment_tab] = ACTIONS(1742),
    [sym_begin_group] = ACTIONS(1742),
    [sym_comment] = ACTIONS(1744),
    [sym_magic_comment] = ACTIONS(1744),
    [sym_parameter_char] = ACTIONS(1742),
    [sym_subscript] = ACTIONS(1742),
    [sym_superscript] = ACTIONS(1742),
    [anon_sym_LBRACK] = ACTIONS(1742),
    [anon_sym_RBRACK] = ACTIONS(1742),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1742),
  },
  [825] = {
    [sym__escape] = ACTIONS(1747),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1747),
    [sym_alignment_tab] = ACTIONS(1747),
    [sym_begin_group] = ACTIONS(1747),
    [sym_comment] = ACTIONS(1749),
    [sym_magic_comment] = ACTIONS(1749),
    [sym_parameter_char] = ACTIONS(1747),
    [sym_subscript] = ACTIONS(1747),
    [sym_superscript] = ACTIONS(1747),
    [anon_sym_LBRACK] = ACTIONS(1747),
    [anon_sym_RBRACK] = ACTIONS(1747),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1747),
  },
  [826] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1815),
    [sym_magic_comment] = ACTIONS(7),
  },
  [827] = {
    [sym__escape] = ACTIONS(1666),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1666),
    [sym_alignment_tab] = ACTIONS(1666),
    [sym_begin_group] = ACTIONS(1666),
    [sym_comment] = ACTIONS(1668),
    [sym_magic_comment] = ACTIONS(1668),
    [sym_math_shift] = ACTIONS(1666),
    [sym_parameter_char] = ACTIONS(1666),
    [sym_subscript] = ACTIONS(1666),
    [sym_superscript] = ACTIONS(1666),
    [ts_builtin_sym_end] = ACTIONS(1666),
    [anon_sym_LBRACK] = ACTIONS(1666),
    [anon_sym_RBRACK] = ACTIONS(1666),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1666),
  },
  [828] = {
    [sym__escape] = ACTIONS(1671),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1671),
    [sym_alignment_tab] = ACTIONS(1671),
    [sym_begin_group] = ACTIONS(1671),
    [sym_comment] = ACTIONS(1817),
    [sym_magic_comment] = ACTIONS(1817),
    [sym_math_shift] = ACTIONS(1671),
    [sym_parameter_char] = ACTIONS(1671),
    [sym_subscript] = ACTIONS(1671),
    [sym_superscript] = ACTIONS(1671),
    [ts_builtin_sym_end] = ACTIONS(1671),
    [anon_sym_LBRACK] = ACTIONS(1671),
    [anon_sym_RBRACK] = ACTIONS(1671),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1671),
  },
  [829] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_eol] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(7),
  },
  [830] = {
    [sym__escape] = ACTIONS(1820),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1820),
    [sym_alignment_tab] = ACTIONS(1820),
    [sym_begin_group] = ACTIONS(1820),
    [sym_comment] = ACTIONS(1822),
    [sym_magic_comment] = ACTIONS(1822),
    [sym_parameter_char] = ACTIONS(1820),
    [sym_subscript] = ACTIONS(1820),
    [sym_superscript] = ACTIONS(1820),
    [anon_sym_LBRACK] = ACTIONS(1820),
    [anon_sym_RBRACK] = ACTIONS(1820),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1820),
  },
  [831] = {
    [sym__escape] = ACTIONS(144),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(144),
    [sym_alignment_tab] = ACTIONS(144),
    [sym_begin_group] = ACTIONS(1694),
    [sym_comment] = ACTIONS(146),
    [sym_eol] = ACTIONS(1694),
    [sym_magic_comment] = ACTIONS(146),
    [sym_math_shift] = ACTIONS(144),
    [sym_parameter_char] = ACTIONS(144),
    [sym_subscript] = ACTIONS(144),
    [sym_superscript] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(144),
  },
  [832] = {
    [sym__escape] = ACTIONS(1825),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_verb_line] = ACTIONS(1825),
  },
  [833] = {
    [sym__escape] = ACTIONS(1827),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1827),
    [sym_alignment_tab] = ACTIONS(1827),
    [sym_begin_group] = ACTIONS(1827),
    [sym_comment] = ACTIONS(1829),
    [sym_magic_comment] = ACTIONS(1829),
    [sym_math_shift] = ACTIONS(1827),
    [sym_parameter_char] = ACTIONS(1827),
    [sym_subscript] = ACTIONS(1827),
    [sym_superscript] = ACTIONS(1827),
    [ts_builtin_sym_end] = ACTIONS(1827),
    [anon_sym_LBRACK] = ACTIONS(1827),
    [anon_sym_RBRACK] = ACTIONS(1827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1827),
  },
  [834] = {
    [sym__escape] = ACTIONS(1832),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1832),
    [sym_alignment_tab] = ACTIONS(1832),
    [sym_begin_group] = ACTIONS(1832),
    [sym_comment] = ACTIONS(1834),
    [sym_magic_comment] = ACTIONS(1834),
    [sym_math_shift] = ACTIONS(1832),
    [sym_parameter_char] = ACTIONS(1832),
    [sym_subscript] = ACTIONS(1832),
    [sym_superscript] = ACTIONS(1832),
    [ts_builtin_sym_end] = ACTIONS(1832),
    [anon_sym_LBRACK] = ACTIONS(1832),
    [anon_sym_RBRACK] = ACTIONS(1832),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1832),
  },
  [835] = {
    [sym__escape] = ACTIONS(1837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1837),
    [sym_alignment_tab] = ACTIONS(1837),
    [sym_begin_group] = ACTIONS(1837),
    [sym_comment] = ACTIONS(1839),
    [sym_magic_comment] = ACTIONS(1839),
    [sym_math_shift] = ACTIONS(1837),
    [sym_parameter_char] = ACTIONS(1837),
    [sym_subscript] = ACTIONS(1837),
    [sym_superscript] = ACTIONS(1837),
    [ts_builtin_sym_end] = ACTIONS(1837),
    [anon_sym_LBRACK] = ACTIONS(1837),
    [anon_sym_RBRACK] = ACTIONS(1837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1837),
  },
  [836] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1842),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [837] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1844),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [838] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_math_shift] = ACTIONS(1404),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [ts_builtin_sym_end] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [839] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_math_shift] = ACTIONS(1416),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [ts_builtin_sym_end] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [840] = {
    [sym_dimension_token] = STATE(238),
    [sym_box_dimension_token] = STATE(240),
    [sym_box_dimension_ref] = STATE(238),
    [sym_dimension] = STATE(882),
    [sym_token] = STATE(238),
    [sym__escape] = ACTIONS(240),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(244),
    [sym_decimal] = ACTIONS(246),
  },
  [841] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [842] = {
    [sym__space] = ACTIONS(7),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [843] = {
    [sym__escape] = ACTIONS(1846),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1846),
    [sym_alignment_tab] = ACTIONS(1846),
    [sym_begin_group] = ACTIONS(1846),
    [sym_comment] = ACTIONS(1848),
    [sym_magic_comment] = ACTIONS(1848),
    [sym_math_shift] = ACTIONS(1846),
    [sym_parameter_char] = ACTIONS(1846),
    [sym_subscript] = ACTIONS(1846),
    [sym_superscript] = ACTIONS(1846),
    [ts_builtin_sym_end] = ACTIONS(1846),
    [anon_sym_LBRACK] = ACTIONS(1846),
    [anon_sym_RBRACK] = ACTIONS(1846),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1846),
  },
  [844] = {
    [sym__escape] = ACTIONS(1795),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1795),
    [sym_alignment_tab] = ACTIONS(1795),
    [sym_begin_group] = ACTIONS(1795),
    [sym_comment] = ACTIONS(1797),
    [sym_end_group] = ACTIONS(1795),
    [sym_magic_comment] = ACTIONS(1797),
    [sym_math_shift] = ACTIONS(1795),
    [sym_parameter_char] = ACTIONS(1795),
    [sym_subscript] = ACTIONS(1795),
    [sym_superscript] = ACTIONS(1795),
    [anon_sym_LBRACK] = ACTIONS(1795),
    [anon_sym_RBRACK] = ACTIONS(1795),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1795),
  },
  [845] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1851),
    [sym_magic_comment] = ACTIONS(7),
  },
  [846] = {
    [sym__escape] = ACTIONS(1666),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1666),
    [sym_alignment_tab] = ACTIONS(1666),
    [sym_begin_group] = ACTIONS(1666),
    [sym_comment] = ACTIONS(1668),
    [sym_end_group] = ACTIONS(1666),
    [sym_magic_comment] = ACTIONS(1668),
    [sym_math_shift] = ACTIONS(1666),
    [sym_parameter_char] = ACTIONS(1666),
    [sym_subscript] = ACTIONS(1666),
    [sym_superscript] = ACTIONS(1666),
    [anon_sym_LBRACK] = ACTIONS(1666),
    [anon_sym_RBRACK] = ACTIONS(1666),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1666),
  },
  [847] = {
    [sym__escape] = ACTIONS(1671),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1671),
    [sym_alignment_tab] = ACTIONS(1671),
    [sym_begin_group] = ACTIONS(1671),
    [sym_comment] = ACTIONS(1817),
    [sym_end_group] = ACTIONS(1671),
    [sym_magic_comment] = ACTIONS(1817),
    [sym_math_shift] = ACTIONS(1671),
    [sym_parameter_char] = ACTIONS(1671),
    [sym_subscript] = ACTIONS(1671),
    [sym_superscript] = ACTIONS(1671),
    [anon_sym_LBRACK] = ACTIONS(1671),
    [anon_sym_RBRACK] = ACTIONS(1671),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1671),
  },
  [848] = {
    [sym__escape] = ACTIONS(1827),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1827),
    [sym_alignment_tab] = ACTIONS(1827),
    [sym_begin_group] = ACTIONS(1827),
    [sym_comment] = ACTIONS(1829),
    [sym_end_group] = ACTIONS(1827),
    [sym_magic_comment] = ACTIONS(1829),
    [sym_math_shift] = ACTIONS(1827),
    [sym_parameter_char] = ACTIONS(1827),
    [sym_subscript] = ACTIONS(1827),
    [sym_superscript] = ACTIONS(1827),
    [anon_sym_LBRACK] = ACTIONS(1827),
    [anon_sym_RBRACK] = ACTIONS(1827),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1827),
  },
  [849] = {
    [sym__escape] = ACTIONS(1832),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1832),
    [sym_alignment_tab] = ACTIONS(1832),
    [sym_begin_group] = ACTIONS(1832),
    [sym_comment] = ACTIONS(1834),
    [sym_end_group] = ACTIONS(1832),
    [sym_magic_comment] = ACTIONS(1834),
    [sym_math_shift] = ACTIONS(1832),
    [sym_parameter_char] = ACTIONS(1832),
    [sym_subscript] = ACTIONS(1832),
    [sym_superscript] = ACTIONS(1832),
    [anon_sym_LBRACK] = ACTIONS(1832),
    [anon_sym_RBRACK] = ACTIONS(1832),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1832),
  },
  [850] = {
    [sym__escape] = ACTIONS(1837),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1837),
    [sym_alignment_tab] = ACTIONS(1837),
    [sym_begin_group] = ACTIONS(1837),
    [sym_comment] = ACTIONS(1839),
    [sym_end_group] = ACTIONS(1837),
    [sym_magic_comment] = ACTIONS(1839),
    [sym_math_shift] = ACTIONS(1837),
    [sym_parameter_char] = ACTIONS(1837),
    [sym_subscript] = ACTIONS(1837),
    [sym_superscript] = ACTIONS(1837),
    [anon_sym_LBRACK] = ACTIONS(1837),
    [anon_sym_RBRACK] = ACTIONS(1837),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1837),
  },
  [851] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1853),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [852] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1855),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [853] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_end_group] = ACTIONS(1404),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_math_shift] = ACTIONS(1404),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [854] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_end_group] = ACTIONS(1416),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_math_shift] = ACTIONS(1416),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [855] = {
    [sym_dimension_token] = STATE(358),
    [sym_box_dimension_token] = STATE(360),
    [sym_box_dimension_ref] = STATE(358),
    [sym_dimension] = STATE(886),
    [sym_token] = STATE(358),
    [sym__escape] = ACTIONS(425),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(429),
    [sym_decimal] = ACTIONS(431),
  },
  [856] = {
    [sym__escape] = ACTIONS(1846),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1846),
    [sym_alignment_tab] = ACTIONS(1846),
    [sym_begin_group] = ACTIONS(1846),
    [sym_comment] = ACTIONS(1848),
    [sym_end_group] = ACTIONS(1846),
    [sym_magic_comment] = ACTIONS(1848),
    [sym_math_shift] = ACTIONS(1846),
    [sym_parameter_char] = ACTIONS(1846),
    [sym_subscript] = ACTIONS(1846),
    [sym_superscript] = ACTIONS(1846),
    [anon_sym_LBRACK] = ACTIONS(1846),
    [anon_sym_RBRACK] = ACTIONS(1846),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1846),
  },
  [857] = {
    [sym__escape] = ACTIONS(1800),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1800),
    [sym_alignment_tab] = ACTIONS(1800),
    [sym_begin_group] = ACTIONS(1800),
    [sym_comment] = ACTIONS(1802),
    [sym_end_group] = ACTIONS(1800),
    [sym_magic_comment] = ACTIONS(1802),
    [sym_parameter_char] = ACTIONS(1800),
    [sym_subscript] = ACTIONS(1800),
    [sym_superscript] = ACTIONS(1800),
    [anon_sym_LBRACK] = ACTIONS(1800),
    [anon_sym_RBRACK] = ACTIONS(1800),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1800),
  },
  [858] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_end_group] = ACTIONS(1857),
    [sym_magic_comment] = ACTIONS(7),
  },
  [859] = {
    [sym__escape] = ACTIONS(1003),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1003),
    [sym_alignment_tab] = ACTIONS(1003),
    [sym_begin_group] = ACTIONS(1003),
    [sym_comment] = ACTIONS(1005),
    [sym_end_group] = ACTIONS(1003),
    [sym_magic_comment] = ACTIONS(1005),
    [sym_parameter_char] = ACTIONS(1003),
    [sym_subscript] = ACTIONS(1003),
    [sym_superscript] = ACTIONS(1003),
    [anon_sym_LBRACK] = ACTIONS(1003),
    [anon_sym_RBRACK] = ACTIONS(1003),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1003),
  },
  [860] = {
    [sym__escape] = ACTIONS(1701),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1701),
    [sym_alignment_tab] = ACTIONS(1701),
    [sym_begin_group] = ACTIONS(1701),
    [sym_comment] = ACTIONS(1703),
    [sym_end_group] = ACTIONS(1701),
    [sym_magic_comment] = ACTIONS(1703),
    [sym_parameter_char] = ACTIONS(1701),
    [sym_subscript] = ACTIONS(1701),
    [sym_superscript] = ACTIONS(1701),
    [anon_sym_LBRACK] = ACTIONS(1701),
    [anon_sym_RBRACK] = ACTIONS(1701),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1701),
  },
  [861] = {
    [sym__escape] = ACTIONS(900),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(900),
    [sym_alignment_tab] = ACTIONS(900),
    [sym_begin_group] = ACTIONS(900),
    [sym_comment] = ACTIONS(1706),
    [sym_end_group] = ACTIONS(900),
    [sym_magic_comment] = ACTIONS(1706),
    [sym_parameter_char] = ACTIONS(900),
    [sym_subscript] = ACTIONS(900),
    [sym_superscript] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(900),
  },
  [862] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_end_group] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_plus] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [863] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_end_group] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_plus] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [864] = {
    [aux_sym_token_repeat1] = STATE(889),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_LPARENh_PIPEv_RPAREN_LPARENoffset_PIPEsize_PIPEbadness_PIPEfuzz_RPAREN_PIPEboxmaxdepth_PIPEdisplayindent_PIPEdisplaywidth_PIPEemergencystretch_PIPEhangindent_PIPElineskiplimit_PIPEmaxdepth_PIPEnormallineskiplimit_PIPEoverfullrule_PIPEpage_LPARENfil_LBRACE1_COMMA3_RPARENstretch_PIPEpage_LPARENdepth_PIPEgoal_PIPEshrink_PIPEtotal_RPAREN_PIPEparindent_PIPEpredisplaysize_PIPEprevdepth_PIPEsplitmaxdepth_SLASH] = ACTIONS(1859),
    [aux_sym_SLASHht_PIPEdp_PIPEwd_SLASH] = ACTIONS(94),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(1861),
  },
  [865] = {
    [sym__escape] = ACTIONS(703),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(703),
    [sym_alignment_tab] = ACTIONS(703),
    [sym_begin_group] = ACTIONS(703),
    [sym_comment] = ACTIONS(705),
    [sym_end_group] = ACTIONS(703),
    [sym_magic_comment] = ACTIONS(705),
    [sym_parameter_char] = ACTIONS(703),
    [sym_subscript] = ACTIONS(703),
    [sym_superscript] = ACTIONS(703),
    [anon_sym_LBRACK] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_minus] = ACTIONS(703),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(708),
  },
  [866] = {
    [sym_dimension_token] = STATE(890),
    [sym_box_dimension_token] = STATE(867),
    [sym_box_dimension_ref] = STATE(890),
    [sym_token] = STATE(890),
    [sym__escape] = ACTIONS(1787),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1863),
  },
  [867] = {
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_number] = ACTIONS(1865),
  },
  [868] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_end_group] = ACTIONS(1724),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [anon_sym_minus] = ACTIONS(1867),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1731),
  },
  [869] = {
    [sym__escape] = ACTIONS(1724),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1724),
    [sym_alignment_tab] = ACTIONS(1724),
    [sym_begin_group] = ACTIONS(1724),
    [sym_comment] = ACTIONS(1726),
    [sym_end_group] = ACTIONS(1724),
    [sym_magic_comment] = ACTIONS(1726),
    [sym_parameter_char] = ACTIONS(1724),
    [sym_subscript] = ACTIONS(1724),
    [sym_superscript] = ACTIONS(1724),
    [anon_sym_LBRACK] = ACTIONS(1724),
    [anon_sym_RBRACK] = ACTIONS(1724),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1724),
  },
  [870] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_end_group] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(902),
  },
  [871] = {
    [sym__escape] = ACTIONS(1737),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1737),
    [sym_alignment_tab] = ACTIONS(1737),
    [sym_begin_group] = ACTIONS(1737),
    [sym_comment] = ACTIONS(1739),
    [sym_end_group] = ACTIONS(1737),
    [sym_magic_comment] = ACTIONS(1739),
    [sym_parameter_char] = ACTIONS(1737),
    [sym_subscript] = ACTIONS(1737),
    [sym_superscript] = ACTIONS(1737),
    [anon_sym_LBRACK] = ACTIONS(1737),
    [anon_sym_RBRACK] = ACTIONS(1737),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1737),
  },
  [872] = {
    [sym__escape] = ACTIONS(1742),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1742),
    [sym_alignment_tab] = ACTIONS(1742),
    [sym_begin_group] = ACTIONS(1742),
    [sym_comment] = ACTIONS(1744),
    [sym_end_group] = ACTIONS(1742),
    [sym_magic_comment] = ACTIONS(1744),
    [sym_parameter_char] = ACTIONS(1742),
    [sym_subscript] = ACTIONS(1742),
    [sym_superscript] = ACTIONS(1742),
    [anon_sym_LBRACK] = ACTIONS(1742),
    [anon_sym_RBRACK] = ACTIONS(1742),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1742),
  },
  [873] = {
    [sym__escape] = ACTIONS(1747),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1747),
    [sym_alignment_tab] = ACTIONS(1747),
    [sym_begin_group] = ACTIONS(1747),
    [sym_comment] = ACTIONS(1749),
    [sym_end_group] = ACTIONS(1747),
    [sym_magic_comment] = ACTIONS(1749),
    [sym_parameter_char] = ACTIONS(1747),
    [sym_subscript] = ACTIONS(1747),
    [sym_superscript] = ACTIONS(1747),
    [anon_sym_LBRACK] = ACTIONS(1747),
    [anon_sym_RBRACK] = ACTIONS(1747),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1747),
  },
  [874] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1869),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [875] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1871),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [876] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [877] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [878] = {
    [sym_dimension_token] = STATE(454),
    [sym_box_dimension_token] = STATE(456),
    [sym_box_dimension_ref] = STATE(454),
    [sym_dimension] = STATE(895),
    [sym_token] = STATE(454),
    [sym__escape] = ACTIONS(546),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(550),
    [sym_decimal] = ACTIONS(552),
  },
  [879] = {
    [sym__escape] = ACTIONS(1664),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1664),
    [sym_alignment_tab] = ACTIONS(1664),
    [sym_begin_group] = ACTIONS(1664),
    [sym_comment] = ACTIONS(1873),
    [sym_magic_comment] = ACTIONS(1873),
    [sym_math_shift] = ACTIONS(1664),
    [sym_parameter_char] = ACTIONS(1664),
    [sym_subscript] = ACTIONS(1664),
    [sym_superscript] = ACTIONS(1664),
    [ts_builtin_sym_end] = ACTIONS(1664),
    [anon_sym_LBRACK] = ACTIONS(1664),
    [anon_sym_RBRACK] = ACTIONS(1664),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1664),
  },
  [880] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_math_shift] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [ts_builtin_sym_end] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [881] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [ts_builtin_sym_end] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [882] = {
    [sym__escape] = ACTIONS(1876),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1876),
    [sym_alignment_tab] = ACTIONS(1876),
    [sym_begin_group] = ACTIONS(1876),
    [sym_comment] = ACTIONS(1878),
    [sym_magic_comment] = ACTIONS(1878),
    [sym_math_shift] = ACTIONS(1876),
    [sym_parameter_char] = ACTIONS(1876),
    [sym_subscript] = ACTIONS(1876),
    [sym_superscript] = ACTIONS(1876),
    [ts_builtin_sym_end] = ACTIONS(1876),
    [anon_sym_LBRACK] = ACTIONS(1876),
    [anon_sym_RBRACK] = ACTIONS(1876),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1876),
  },
  [883] = {
    [sym__escape] = ACTIONS(1664),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1664),
    [sym_alignment_tab] = ACTIONS(1664),
    [sym_begin_group] = ACTIONS(1664),
    [sym_comment] = ACTIONS(1873),
    [sym_end_group] = ACTIONS(1664),
    [sym_magic_comment] = ACTIONS(1873),
    [sym_math_shift] = ACTIONS(1664),
    [sym_parameter_char] = ACTIONS(1664),
    [sym_subscript] = ACTIONS(1664),
    [sym_superscript] = ACTIONS(1664),
    [anon_sym_LBRACK] = ACTIONS(1664),
    [anon_sym_RBRACK] = ACTIONS(1664),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1664),
  },
  [884] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_end_group] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_math_shift] = ACTIONS(902),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [885] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_end_group] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(935),
    [sym_math_shift] = ACTIONS(933),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [886] = {
    [sym__escape] = ACTIONS(1876),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1876),
    [sym_alignment_tab] = ACTIONS(1876),
    [sym_begin_group] = ACTIONS(1876),
    [sym_comment] = ACTIONS(1878),
    [sym_end_group] = ACTIONS(1876),
    [sym_magic_comment] = ACTIONS(1878),
    [sym_math_shift] = ACTIONS(1876),
    [sym_parameter_char] = ACTIONS(1876),
    [sym_subscript] = ACTIONS(1876),
    [sym_superscript] = ACTIONS(1876),
    [anon_sym_LBRACK] = ACTIONS(1876),
    [anon_sym_RBRACK] = ACTIONS(1876),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1876),
  },
  [887] = {
    [sym__escape] = ACTIONS(1673),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1673),
    [sym_alignment_tab] = ACTIONS(1673),
    [sym_begin_group] = ACTIONS(1673),
    [sym_comment] = ACTIONS(1675),
    [sym_end_group] = ACTIONS(1673),
    [sym_magic_comment] = ACTIONS(1675),
    [sym_parameter_char] = ACTIONS(1673),
    [sym_subscript] = ACTIONS(1673),
    [sym_superscript] = ACTIONS(1673),
    [anon_sym_LBRACK] = ACTIONS(1673),
    [anon_sym_RBRACK] = ACTIONS(1673),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1673),
  },
  [888] = {
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1881),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
  },
  [889] = {
    [aux_sym_token_repeat1] = STATE(301),
    [sym__space] = ACTIONS(7),
    [sym__token_end] = ACTIONS(1883),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [aux_sym_SLASH_DOT_SLASH] = ACTIONS(372),
  },
  [890] = {
    [sym__escape] = ACTIONS(1404),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1404),
    [sym_alignment_tab] = ACTIONS(1404),
    [sym_begin_group] = ACTIONS(1404),
    [sym_comment] = ACTIONS(1406),
    [sym_end_group] = ACTIONS(1404),
    [sym_magic_comment] = ACTIONS(1406),
    [sym_parameter_char] = ACTIONS(1404),
    [sym_subscript] = ACTIONS(1404),
    [sym_superscript] = ACTIONS(1404),
    [anon_sym_LBRACK] = ACTIONS(1404),
    [anon_sym_RBRACK] = ACTIONS(1404),
    [anon_sym_minus] = ACTIONS(1404),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1409),
  },
  [891] = {
    [sym__escape] = ACTIONS(1416),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1416),
    [sym_alignment_tab] = ACTIONS(1416),
    [sym_begin_group] = ACTIONS(1416),
    [sym_comment] = ACTIONS(1418),
    [sym_end_group] = ACTIONS(1416),
    [sym_magic_comment] = ACTIONS(1418),
    [sym_parameter_char] = ACTIONS(1416),
    [sym_subscript] = ACTIONS(1416),
    [sym_superscript] = ACTIONS(1416),
    [anon_sym_LBRACK] = ACTIONS(1416),
    [anon_sym_RBRACK] = ACTIONS(1416),
    [anon_sym_minus] = ACTIONS(1416),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1421),
  },
  [892] = {
    [sym_dimension_token] = STATE(635),
    [sym_box_dimension_token] = STATE(637),
    [sym_box_dimension_ref] = STATE(635),
    [sym_dimension] = STATE(898),
    [sym_token] = STATE(635),
    [sym__escape] = ACTIONS(1089),
    [sym__space] = ACTIONS(7),
    [sym_comment] = ACTIONS(7),
    [sym_magic_comment] = ACTIONS(7),
    [sym_unit] = ACTIONS(1093),
    [sym_decimal] = ACTIONS(1095),
  },
  [893] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [894] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_magic_comment] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [895] = {
    [sym__escape] = ACTIONS(1876),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1876),
    [sym_alignment_tab] = ACTIONS(1876),
    [sym_begin_group] = ACTIONS(1876),
    [sym_comment] = ACTIONS(1878),
    [sym_magic_comment] = ACTIONS(1878),
    [sym_parameter_char] = ACTIONS(1876),
    [sym_subscript] = ACTIONS(1876),
    [sym_superscript] = ACTIONS(1876),
    [anon_sym_LBRACK] = ACTIONS(1876),
    [anon_sym_RBRACK] = ACTIONS(1876),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1876),
  },
  [896] = {
    [sym__escape] = ACTIONS(902),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(902),
    [sym_alignment_tab] = ACTIONS(902),
    [sym_begin_group] = ACTIONS(902),
    [sym_comment] = ACTIONS(1709),
    [sym_end_group] = ACTIONS(902),
    [sym_magic_comment] = ACTIONS(1709),
    [sym_parameter_char] = ACTIONS(902),
    [sym_subscript] = ACTIONS(902),
    [sym_superscript] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_minus] = ACTIONS(902),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1712),
  },
  [897] = {
    [sym__escape] = ACTIONS(933),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(933),
    [sym_alignment_tab] = ACTIONS(933),
    [sym_begin_group] = ACTIONS(933),
    [sym_comment] = ACTIONS(935),
    [sym_end_group] = ACTIONS(933),
    [sym_magic_comment] = ACTIONS(935),
    [sym_parameter_char] = ACTIONS(933),
    [sym_subscript] = ACTIONS(933),
    [sym_superscript] = ACTIONS(933),
    [anon_sym_LBRACK] = ACTIONS(933),
    [anon_sym_RBRACK] = ACTIONS(933),
    [anon_sym_minus] = ACTIONS(933),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1714),
  },
  [898] = {
    [sym__escape] = ACTIONS(1876),
    [sym__space] = ACTIONS(7),
    [sym_active_char] = ACTIONS(1876),
    [sym_alignment_tab] = ACTIONS(1876),
    [sym_begin_group] = ACTIONS(1876),
    [sym_comment] = ACTIONS(1878),
    [sym_end_group] = ACTIONS(1876),
    [sym_magic_comment] = ACTIONS(1878),
    [sym_parameter_char] = ACTIONS(1876),
    [sym_subscript] = ACTIONS(1876),
    [sym_superscript] = ACTIONS(1876),
    [anon_sym_LBRACK] = ACTIONS(1876),
    [anon_sym_RBRACK] = ACTIONS(1876),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_RBRACK_BSLASH_LBRACK_RBRACK_SLASH] = ACTIONS(1876),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(51),
  [11] = {.count = 1, .reusable = true}, SHIFT(3),
  [13] = {.count = 2, .reusable = true}, SHIFT(51), SHIFT_EXTRA(),
  [16] = {.count = 1, .reusable = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = true}, SHIFT(52),
  [20] = {.count = 1, .reusable = true}, SHIFT(5),
  [22] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [24] = {.count = 1, .reusable = true}, SHIFT(6),
  [26] = {.count = 1, .reusable = true}, SHIFT(7),
  [28] = {.count = 1, .reusable = true}, SHIFT(53),
  [30] = {.count = 1, .reusable = true}, SHIFT(54),
  [32] = {.count = 1, .reusable = true}, SHIFT(55),
  [34] = {.count = 1, .reusable = true}, SHIFT(56),
  [36] = {.count = 1, .reusable = true}, SHIFT(57),
  [38] = {.count = 1, .reusable = true}, SHIFT(58),
  [40] = {.count = 1, .reusable = true}, SHIFT(59),
  [42] = {.count = 1, .reusable = true}, SHIFT(60),
  [44] = {.count = 1, .reusable = true}, SHIFT(61),
  [46] = {.count = 1, .reusable = true}, SHIFT(62),
  [48] = {.count = 1, .reusable = true}, SHIFT(63),
  [50] = {.count = 1, .reusable = true}, SHIFT(64),
  [52] = {.count = 1, .reusable = true}, SHIFT(65),
  [54] = {.count = 1, .reusable = true}, SHIFT(66),
  [56] = {.count = 1, .reusable = true}, SHIFT(67),
  [58] = {.count = 1, .reusable = true}, SHIFT(68),
  [60] = {.count = 1, .reusable = true}, SHIFT(69),
  [62] = {.count = 1, .reusable = true}, SHIFT(70),
  [64] = {.count = 1, .reusable = true}, SHIFT(71),
  [66] = {.count = 1, .reusable = true}, SHIFT(72),
  [68] = {.count = 1, .reusable = true}, SHIFT(73),
  [70] = {.count = 1, .reusable = true}, SHIFT(74),
  [72] = {.count = 1, .reusable = true}, SHIFT(75),
  [74] = {.count = 1, .reusable = true}, SHIFT(76),
  [76] = {.count = 1, .reusable = false}, SHIFT(77),
  [78] = {.count = 1, .reusable = true}, SHIFT(78),
  [80] = {.count = 1, .reusable = true}, SHIFT(79),
  [82] = {.count = 1, .reusable = true}, SHIFT(80),
  [84] = {.count = 1, .reusable = true}, SHIFT(81),
  [86] = {.count = 1, .reusable = true}, SHIFT(82),
  [88] = {.count = 1, .reusable = false}, SHIFT(83),
  [90] = {.count = 1, .reusable = true}, SHIFT(84),
  [92] = {.count = 1, .reusable = true}, SHIFT(85),
  [94] = {.count = 1, .reusable = true}, SHIFT(86),
  [96] = {.count = 1, .reusable = true}, SHIFT(87),
  [98] = {.count = 1, .reusable = true}, SHIFT(88),
  [100] = {.count = 1, .reusable = true}, SHIFT(89),
  [102] = {.count = 1, .reusable = true}, SHIFT(90),
  [104] = {.count = 1, .reusable = true}, SHIFT(91),
  [106] = {.count = 1, .reusable = false}, SHIFT(92),
  [108] = {.count = 1, .reusable = true}, SHIFT(93),
  [110] = {.count = 1, .reusable = true}, SHIFT(140),
  [112] = {.count = 1, .reusable = true}, SHIFT(94),
  [114] = {.count = 2, .reusable = true}, SHIFT(140), SHIFT_EXTRA(),
  [117] = {.count = 1, .reusable = true}, SHIFT(95),
  [119] = {.count = 1, .reusable = true}, SHIFT(96),
  [121] = {.count = 1, .reusable = true}, SHIFT(141),
  [123] = {.count = 1, .reusable = true}, SHIFT(97),
  [125] = {.count = 1, .reusable = true}, SHIFT(98),
  [127] = {.count = 1, .reusable = true}, SHIFT(99),
  [129] = {.count = 1, .reusable = true}, SHIFT(142),
  [131] = {.count = 1, .reusable = true}, SHIFT(143),
  [133] = {.count = 1, .reusable = true}, SHIFT(153),
  [135] = {.count = 1, .reusable = true}, SHIFT(144),
  [137] = {.count = 2, .reusable = true}, SHIFT(153), SHIFT_EXTRA(),
  [140] = {.count = 1, .reusable = true}, SHIFT(145),
  [142] = {.count = 1, .reusable = true}, SHIFT(154),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1),
  [146] = {.count = 2, .reusable = true}, REDUCE(sym__text_mode, 1, .alias_sequence_id = 1), SHIFT_EXTRA(),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_begin_opt, 1),
  [151] = {.count = 2, .reusable = true}, REDUCE(sym_begin_opt, 1), SHIFT_EXTRA(),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_end_opt, 1),
  [156] = {.count = 2, .reusable = true}, REDUCE(sym_end_opt, 1), SHIFT_EXTRA(),
  [159] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [161] = {.count = 1, .reusable = true}, SHIFT(155),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [165] = {.count = 1, .reusable = true}, SHIFT(156),
  [167] = {.count = 1, .reusable = true}, SHIFT(181),
  [169] = {.count = 1, .reusable = true}, SHIFT(157),
  [171] = {.count = 2, .reusable = true}, SHIFT(181), SHIFT_EXTRA(),
  [174] = {.count = 1, .reusable = true}, SHIFT(182),
  [176] = {.count = 1, .reusable = true}, SHIFT(158),
  [178] = {.count = 1, .reusable = true}, SHIFT(159),
  [180] = {.count = 1, .reusable = true}, SHIFT(183),
  [182] = {.count = 1, .reusable = true}, SHIFT(185),
  [184] = {.count = 1, .reusable = true}, SHIFT(188),
  [186] = {.count = 1, .reusable = true}, SHIFT(192),
  [188] = {.count = 1, .reusable = true}, SHIFT(196),
  [190] = {.count = 1, .reusable = true}, SHIFT(197),
  [192] = {.count = 1, .reusable = true}, SHIFT(200),
  [194] = {.count = 2, .reusable = true}, SHIFT(200), SHIFT_EXTRA(),
  [197] = {.count = 1, .reusable = true}, SHIFT(201),
  [199] = {.count = 1, .reusable = true}, SHIFT(206),
  [201] = {.count = 1, .reusable = true}, SHIFT(213),
  [203] = {.count = 1, .reusable = true}, SHIFT(217),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_storage, 1),
  [207] = {.count = 2, .reusable = true}, REDUCE(sym_storage, 1), SHIFT_EXTRA(),
  [210] = {.count = 1, .reusable = true}, SHIFT(220),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter, 1),
  [214] = {.count = 2, .reusable = true}, REDUCE(sym_makeatletter, 1), SHIFT_EXTRA(),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother, 1),
  [219] = {.count = 2, .reusable = true}, REDUCE(sym_makeatother, 1), SHIFT_EXTRA(),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_explsyntaxon, 1),
  [224] = {.count = 2, .reusable = true}, REDUCE(sym_explsyntaxon, 1), SHIFT_EXTRA(),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_explsyntaxoff, 1),
  [229] = {.count = 2, .reusable = true}, REDUCE(sym_explsyntaxoff, 1), SHIFT_EXTRA(),
  [232] = {.count = 1, .reusable = true}, SHIFT(228),
  [234] = {.count = 1, .reusable = true}, SHIFT(229),
  [236] = {.count = 1, .reusable = true}, SHIFT(230),
  [238] = {.count = 1, .reusable = true}, SHIFT(231),
  [240] = {.count = 1, .reusable = true}, SHIFT(236),
  [242] = {.count = 1, .reusable = true}, SHIFT(237),
  [244] = {.count = 1, .reusable = true}, SHIFT(238),
  [246] = {.count = 1, .reusable = true}, SHIFT(239),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_strut, 1),
  [250] = {.count = 2, .reusable = true}, REDUCE(sym_strut, 1), SHIFT_EXTRA(),
  [253] = {.count = 1, .reusable = true}, SHIFT(244),
  [255] = {.count = 1, .reusable = true}, SHIFT(246),
  [257] = {.count = 1, .reusable = true}, SHIFT(247),
  [259] = {.count = 1, .reusable = true}, SHIFT(248),
  [261] = {.count = 1, .reusable = true}, SHIFT(249),
  [263] = {.count = 1, .reusable = true}, SHIFT(252),
  [265] = {.count = 1, .reusable = true}, SHIFT(253),
  [267] = {.count = 1, .reusable = true}, SHIFT(261),
  [269] = {.count = 2, .reusable = true}, SHIFT(261), SHIFT_EXTRA(),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_text_mode, 1),
  [274] = {.count = 1, .reusable = true}, SHIFT(263),
  [276] = {.count = 1, .reusable = true}, SHIFT(262),
  [278] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [280] = {.count = 2, .reusable = true}, REDUCE(sym_text, 1), SHIFT_EXTRA(),
  [283] = {.count = 1, .reusable = true}, SHIFT(264),
  [285] = {.count = 1, .reusable = true}, SHIFT(265),
  [287] = {.count = 1, .reusable = true}, SHIFT(266),
  [289] = {.count = 1, .reusable = true}, SHIFT(267),
  [291] = {.count = 1, .reusable = true}, SHIFT(268),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_escaped, 2),
  [295] = {.count = 2, .reusable = true}, REDUCE(sym_escaped, 2), SHIFT_EXTRA(),
  [298] = {.count = 1, .reusable = true}, SHIFT(269),
  [300] = {.count = 1, .reusable = true}, SHIFT(270),
  [302] = {.count = 1, .reusable = true}, SHIFT(271),
  [304] = {.count = 1, .reusable = true}, SHIFT(272),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_begin_display_math, 2),
  [308] = {.count = 2, .reusable = true}, REDUCE(sym_begin_display_math, 2), SHIFT_EXTRA(),
  [311] = {.count = 1, .reusable = true}, REDUCE(sym_begin_inline_math, 2),
  [313] = {.count = 2, .reusable = true}, REDUCE(sym_begin_inline_math, 2), SHIFT_EXTRA(),
  [316] = {.count = 1, .reusable = true}, SHIFT(273),
  [318] = {.count = 1, .reusable = true}, SHIFT(274),
  [320] = {.count = 1, .reusable = true}, SHIFT(275),
  [322] = {.count = 1, .reusable = true}, SHIFT(276),
  [324] = {.count = 1, .reusable = true}, SHIFT(277),
  [326] = {.count = 1, .reusable = true}, SHIFT(278),
  [328] = {.count = 1, .reusable = true}, SHIFT(279),
  [330] = {.count = 1, .reusable = true}, SHIFT(280),
  [332] = {.count = 1, .reusable = true}, SHIFT(281),
  [334] = {.count = 1, .reusable = true}, SHIFT(282),
  [336] = {.count = 1, .reusable = true}, SHIFT(283),
  [338] = {.count = 1, .reusable = true}, SHIFT(284),
  [340] = {.count = 1, .reusable = true}, SHIFT(285),
  [342] = {.count = 1, .reusable = true}, SHIFT(286),
  [344] = {.count = 1, .reusable = true}, SHIFT(287),
  [346] = {.count = 1, .reusable = true}, SHIFT(288),
  [348] = {.count = 1, .reusable = true}, SHIFT(289),
  [350] = {.count = 1, .reusable = true}, SHIFT(290),
  [352] = {.count = 1, .reusable = true}, SHIFT(291),
  [354] = {.count = 1, .reusable = true}, SHIFT(292),
  [356] = {.count = 1, .reusable = true}, SHIFT(293),
  [358] = {.count = 1, .reusable = true}, SHIFT(294),
  [360] = {.count = 1, .reusable = true}, SHIFT(295),
  [362] = {.count = 1, .reusable = true}, SHIFT(296),
  [364] = {.count = 1, .reusable = true}, SHIFT(297),
  [366] = {.count = 1, .reusable = true}, SHIFT(298),
  [368] = {.count = 1, .reusable = true}, SHIFT(299),
  [370] = {.count = 1, .reusable = true}, SHIFT(300),
  [372] = {.count = 1, .reusable = true}, SHIFT(301),
  [374] = {.count = 1, .reusable = true}, SHIFT(302),
  [376] = {.count = 1, .reusable = true}, SHIFT(303),
  [378] = {.count = 1, .reusable = true}, SHIFT(304),
  [380] = {.count = 1, .reusable = true}, SHIFT(305),
  [382] = {.count = 1, .reusable = true}, SHIFT(306),
  [384] = {.count = 1, .reusable = true}, SHIFT(307),
  [386] = {.count = 1, .reusable = true}, SHIFT(308),
  [388] = {.count = 1, .reusable = false}, SHIFT(309),
  [390] = {.count = 1, .reusable = true}, SHIFT(311),
  [392] = {.count = 2, .reusable = true}, SHIFT(311), SHIFT_EXTRA(),
  [395] = {.count = 1, .reusable = true}, SHIFT(310),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 2),
  [399] = {.count = 2, .reusable = true}, REDUCE(sym_text_group, 2), SHIFT_EXTRA(),
  [402] = {.count = 1, .reusable = true}, SHIFT(312),
  [404] = {.count = 1, .reusable = true}, SHIFT(314),
  [406] = {.count = 1, .reusable = true}, SHIFT(317),
  [408] = {.count = 1, .reusable = true}, SHIFT(328),
  [410] = {.count = 2, .reusable = true}, SHIFT(328), SHIFT_EXTRA(),
  [413] = {.count = 1, .reusable = true}, SHIFT(329),
  [415] = {.count = 1, .reusable = true}, SHIFT(338),
  [417] = {.count = 1, .reusable = true}, SHIFT(348),
  [419] = {.count = 1, .reusable = true}, SHIFT(349),
  [421] = {.count = 1, .reusable = true}, SHIFT(350),
  [423] = {.count = 1, .reusable = true}, SHIFT(351),
  [425] = {.count = 1, .reusable = true}, SHIFT(356),
  [427] = {.count = 1, .reusable = true}, SHIFT(357),
  [429] = {.count = 1, .reusable = true}, SHIFT(358),
  [431] = {.count = 1, .reusable = true}, SHIFT(359),
  [433] = {.count = 1, .reusable = true}, SHIFT(364),
  [435] = {.count = 1, .reusable = true}, SHIFT(366),
  [437] = {.count = 1, .reusable = true}, SHIFT(368),
  [439] = {.count = 1, .reusable = true}, SHIFT(369),
  [441] = {.count = 1, .reusable = true}, SHIFT(378),
  [443] = {.count = 2, .reusable = true}, SHIFT(378), SHIFT_EXTRA(),
  [446] = {.count = 1, .reusable = true}, SHIFT(377),
  [448] = {.count = 1, .reusable = true}, SHIFT(379),
  [450] = {.count = 1, .reusable = true}, SHIFT(380),
  [452] = {.count = 1, .reusable = true}, SHIFT(381),
  [454] = {.count = 1, .reusable = true}, SHIFT(382),
  [456] = {.count = 1, .reusable = true}, SHIFT(407),
  [458] = {.count = 1, .reusable = true}, SHIFT(383),
  [460] = {.count = 2, .reusable = true}, SHIFT(407), SHIFT_EXTRA(),
  [463] = {.count = 1, .reusable = true}, SHIFT(384),
  [465] = {.count = 1, .reusable = true}, SHIFT(408),
  [467] = {.count = 1, .reusable = true}, SHIFT(385),
  [469] = {.count = 1, .reusable = true}, SHIFT(386),
  [471] = {.count = 1, .reusable = true}, SHIFT(409),
  [473] = {.count = 1, .reusable = true}, SHIFT(410),
  [475] = {.count = 1, .reusable = true}, SHIFT(412),
  [477] = {.count = 1, .reusable = true}, SHIFT(413),
  [479] = {.count = 1, .reusable = true}, SHIFT(416),
  [481] = {.count = 2, .reusable = true}, SHIFT(416), SHIFT_EXTRA(),
  [484] = {.count = 1, .reusable = true}, SHIFT(417),
  [486] = {.count = 1, .reusable = true}, SHIFT(420),
  [488] = {.count = 1, .reusable = true}, REDUCE(sym__math_mode, 1, .alias_sequence_id = 1),
  [490] = {.count = 2, .reusable = true}, REDUCE(sym__math_mode, 1, .alias_sequence_id = 1), SHIFT_EXTRA(),
  [493] = {.count = 1, .reusable = true}, SHIFT(421),
  [495] = {.count = 2, .reusable = true}, SHIFT(421), SHIFT_EXTRA(),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_math_mode, 1),
  [500] = {.count = 1, .reusable = true}, SHIFT(422),
  [502] = {.count = 1, .reusable = true}, SHIFT(423),
  [504] = {.count = 1, .reusable = true}, SHIFT(424),
  [506] = {.count = 1, .reusable = true}, SHIFT(425),
  [508] = {.count = 1, .reusable = true}, SHIFT(426),
  [510] = {.count = 1, .reusable = true}, SHIFT(427),
  [512] = {.count = 1, .reusable = true}, SHIFT(428),
  [514] = {.count = 1, .reusable = true}, SHIFT(429),
  [516] = {.count = 1, .reusable = true}, SHIFT(430),
  [518] = {.count = 1, .reusable = false}, SHIFT(431),
  [520] = {.count = 1, .reusable = true}, SHIFT(433),
  [522] = {.count = 2, .reusable = true}, SHIFT(433), SHIFT_EXTRA(),
  [525] = {.count = 1, .reusable = true}, SHIFT(432),
  [527] = {.count = 1, .reusable = true}, SHIFT(434),
  [529] = {.count = 1, .reusable = true}, SHIFT(436),
  [531] = {.count = 1, .reusable = true}, SHIFT(440),
  [533] = {.count = 2, .reusable = true}, SHIFT(440), SHIFT_EXTRA(),
  [536] = {.count = 1, .reusable = true}, SHIFT(441),
  [538] = {.count = 1, .reusable = true}, SHIFT(444),
  [540] = {.count = 1, .reusable = true}, SHIFT(445),
  [542] = {.count = 1, .reusable = true}, SHIFT(446),
  [544] = {.count = 1, .reusable = true}, SHIFT(447),
  [546] = {.count = 1, .reusable = true}, SHIFT(452),
  [548] = {.count = 1, .reusable = true}, SHIFT(453),
  [550] = {.count = 1, .reusable = true}, SHIFT(454),
  [552] = {.count = 1, .reusable = true}, SHIFT(455),
  [554] = {.count = 1, .reusable = true}, SHIFT(460),
  [556] = {.count = 1, .reusable = true}, SHIFT(462),
  [558] = {.count = 1, .reusable = true}, SHIFT(464),
  [560] = {.count = 1, .reusable = true}, SHIFT(465),
  [562] = {.count = 1, .reusable = true}, SHIFT(466),
  [564] = {.count = 2, .reusable = true}, SHIFT(466), SHIFT_EXTRA(),
  [567] = {.count = 1, .reusable = true}, SHIFT(467),
  [569] = {.count = 1, .reusable = true}, SHIFT(468),
  [571] = {.count = 1, .reusable = true}, SHIFT(471),
  [573] = {.count = 1, .reusable = true}, SHIFT(472),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 2),
  [577] = {.count = 2, .reusable = true}, REDUCE(sym_latex_inline_math, 2), SHIFT_EXTRA(),
  [580] = {.count = 1, .reusable = true}, SHIFT(474),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 2),
  [584] = {.count = 2, .reusable = true}, REDUCE(sym_inline_math_env, 2), SHIFT_EXTRA(),
  [587] = {.count = 1, .reusable = true}, SHIFT(476),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 2),
  [591] = {.count = 2, .reusable = true}, REDUCE(sym_verbatim_env, 2), SHIFT_EXTRA(),
  [594] = {.count = 1, .reusable = true}, SHIFT(479),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_text, 1),
  [598] = {.count = 1, .reusable = true}, SHIFT(481),
  [600] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 2),
  [602] = {.count = 2, .reusable = true}, REDUCE(sym_text_env, 2), SHIFT_EXTRA(),
  [605] = {.count = 1, .reusable = true}, SHIFT(484),
  [607] = {.count = 2, .reusable = true}, SHIFT(484), SHIFT_EXTRA(),
  [610] = {.count = 1, .reusable = true}, SHIFT(485),
  [612] = {.count = 1, .reusable = true}, SHIFT(486),
  [614] = {.count = 1, .reusable = true}, SHIFT(487),
  [616] = {.count = 1, .reusable = false}, SHIFT(489),
  [618] = {.count = 1, .reusable = true}, SHIFT(490),
  [620] = {.count = 1, .reusable = true}, SHIFT(491),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_begin, 2),
  [624] = {.count = 2, .reusable = true}, REDUCE(sym_inline_math_begin, 2), SHIFT_EXTRA(),
  [627] = {.count = 1, .reusable = true}, SHIFT(495),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_begin, 2),
  [631] = {.count = 2, .reusable = true}, REDUCE(sym_begin, 2), SHIFT_EXTRA(),
  [634] = {.count = 1, .reusable = true}, SHIFT(489),
  [636] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 2),
  [638] = {.count = 2, .reusable = true}, REDUCE(sym_documentclass, 2), SHIFT_EXTRA(),
  [641] = {.count = 1, .reusable = true}, SHIFT(500),
  [643] = {.count = 2, .reusable = true}, SHIFT(500), SHIFT_EXTRA(),
  [646] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 2),
  [648] = {.count = 2, .reusable = true}, REDUCE(sym_usepackage, 2), SHIFT_EXTRA(),
  [651] = {.count = 1, .reusable = true}, REDUCE(sym_include, 2),
  [653] = {.count = 2, .reusable = true}, REDUCE(sym_include, 2), SHIFT_EXTRA(),
  [656] = {.count = 1, .reusable = true}, SHIFT(503),
  [658] = {.count = 2, .reusable = true}, SHIFT(503), SHIFT_EXTRA(),
  [661] = {.count = 1, .reusable = true}, SHIFT(502),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_section, 2),
  [665] = {.count = 2, .reusable = true}, REDUCE(sym_section, 2), SHIFT_EXTRA(),
  [668] = {.count = 1, .reusable = true}, SHIFT(509),
  [670] = {.count = 1, .reusable = true}, SHIFT(510),
  [672] = {.count = 1, .reusable = true}, REDUCE(sym_emph, 2),
  [674] = {.count = 2, .reusable = true}, REDUCE(sym_emph, 2), SHIFT_EXTRA(),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 2),
  [679] = {.count = 2, .reusable = true}, REDUCE(sym_footnote, 2), SHIFT_EXTRA(),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_textbf, 2),
  [684] = {.count = 2, .reusable = true}, REDUCE(sym_textbf, 2), SHIFT_EXTRA(),
  [687] = {.count = 1, .reusable = true}, REDUCE(sym_textit, 2),
  [689] = {.count = 2, .reusable = true}, REDUCE(sym_textit, 2), SHIFT_EXTRA(),
  [692] = {.count = 1, .reusable = true}, REDUCE(sym_texttt, 2),
  [694] = {.count = 2, .reusable = true}, REDUCE(sym_texttt, 2), SHIFT_EXTRA(),
  [697] = {.count = 1, .reusable = false}, SHIFT(512),
  [699] = {.count = 1, .reusable = true}, SHIFT(513),
  [701] = {.count = 1, .reusable = false}, SHIFT(514),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_dimension, 1),
  [705] = {.count = 2, .reusable = true}, REDUCE(sym_dimension, 1), SHIFT_EXTRA(),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_dimension, 1),
  [710] = {.count = 1, .reusable = true}, SHIFT(516),
  [712] = {.count = 1, .reusable = true}, REDUCE(sym_glue, 1),
  [714] = {.count = 2, .reusable = true}, REDUCE(sym_glue, 1), SHIFT_EXTRA(),
  [717] = {.count = 1, .reusable = true}, SHIFT(518),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_glue_assign, 2),
  [721] = {.count = 2, .reusable = true}, REDUCE(sym_glue_assign, 2), SHIFT_EXTRA(),
  [724] = {.count = 1, .reusable = true}, SHIFT(519),
  [726] = {.count = 1, .reusable = true}, SHIFT(520),
  [728] = {.count = 1, .reusable = false}, REDUCE(sym_glue, 1),
  [730] = {.count = 1, .reusable = true}, SHIFT(521),
  [732] = {.count = 1, .reusable = true}, SHIFT(523),
  [734] = {.count = 1, .reusable = true}, SHIFT(524),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_dimension_assign, 2),
  [738] = {.count = 2, .reusable = true}, REDUCE(sym_dimension_assign, 2), SHIFT_EXTRA(),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym_glue_space, 2),
  [743] = {.count = 2, .reusable = true}, REDUCE(sym_glue_space, 2), SHIFT_EXTRA(),
  [746] = {.count = 1, .reusable = true}, REDUCE(sym_phantom_smash, 2),
  [748] = {.count = 2, .reusable = true}, REDUCE(sym_phantom_smash, 2), SHIFT_EXTRA(),
  [751] = {.count = 1, .reusable = true}, SHIFT(525),
  [753] = {.count = 1, .reusable = true}, SHIFT(526),
  [755] = {.count = 1, .reusable = true}, SHIFT(527),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_makebox, 2),
  [759] = {.count = 2, .reusable = true}, REDUCE(sym_makebox, 2), SHIFT_EXTRA(),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_usebox, 2),
  [764] = {.count = 2, .reusable = true}, REDUCE(sym_usebox, 2), SHIFT_EXTRA(),
  [767] = {.count = 1, .reusable = false}, SHIFT(530),
  [769] = {.count = 1, .reusable = true}, SHIFT(531),
  [771] = {.count = 1, .reusable = true}, SHIFT(532),
  [773] = {.count = 1, .reusable = true}, SHIFT(533),
  [775] = {.count = 1, .reusable = true}, SHIFT(535),
  [777] = {.count = 1, .reusable = true}, SHIFT(537),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_url, 2),
  [781] = {.count = 2, .reusable = true}, REDUCE(sym_url, 2), SHIFT_EXTRA(),
  [784] = {.count = 1, .reusable = true}, REDUCE(sym_hyperbaseurl, 2),
  [786] = {.count = 2, .reusable = true}, REDUCE(sym_hyperbaseurl, 2), SHIFT_EXTRA(),
  [789] = {.count = 1, .reusable = true}, REDUCE(sym_hyperref, 2),
  [791] = {.count = 2, .reusable = true}, REDUCE(sym_hyperref, 2), SHIFT_EXTRA(),
  [794] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(2),
  [797] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(261),
  [800] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(3),
  [803] = {.count = 3, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(261), SHIFT_EXTRA(),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(4),
  [810] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(52),
  [813] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(5),
  [816] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2),
  [818] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(6),
  [821] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(7),
  [824] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(53),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_parameter, 2),
  [829] = {.count = 2, .reusable = true}, REDUCE(sym_parameter, 2), SHIFT_EXTRA(),
  [832] = {.count = 2, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2), SHIFT_REPEAT(263),
  [835] = {.count = 1, .reusable = true}, REDUCE(aux_sym_parameter_repeat1, 2),
  [837] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [839] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_EXTRA(),
  [842] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(264),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_explsyntaxoff_token, 3),
  [847] = {.count = 2, .reusable = true}, REDUCE(sym_explsyntaxoff_token, 3), SHIFT_EXTRA(),
  [850] = {.count = 1, .reusable = true}, REDUCE(sym_explsyntaxon_token, 3),
  [852] = {.count = 2, .reusable = true}, REDUCE(sym_explsyntaxon_token, 3), SHIFT_EXTRA(),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_makeatletter_token, 3),
  [857] = {.count = 2, .reusable = true}, REDUCE(sym_makeatletter_token, 3), SHIFT_EXTRA(),
  [860] = {.count = 1, .reusable = true}, REDUCE(sym_makeatother_token, 3),
  [862] = {.count = 2, .reusable = true}, REDUCE(sym_makeatother_token, 3), SHIFT_EXTRA(),
  [865] = {.count = 1, .reusable = true}, REDUCE(sym_providesexplclass_token, 3),
  [867] = {.count = 1, .reusable = true}, REDUCE(sym_providesexplfile_token, 3),
  [869] = {.count = 1, .reusable = true}, REDUCE(sym_providesexplpackage_token, 3),
  [871] = {.count = 1, .reusable = true}, REDUCE(sym_verb_token, 3),
  [873] = {.count = 1, .reusable = true}, REDUCE(sym_begin_token, 3),
  [875] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass_token, 3),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage_token, 3),
  [879] = {.count = 1, .reusable = true}, REDUCE(sym_include_token, 3),
  [881] = {.count = 1, .reusable = true}, REDUCE(sym_section_token, 3),
  [883] = {.count = 1, .reusable = true}, REDUCE(sym_storage_token, 3),
  [885] = {.count = 2, .reusable = true}, REDUCE(sym_storage_token, 3), SHIFT_EXTRA(),
  [888] = {.count = 1, .reusable = true}, REDUCE(sym_catcode_token, 3),
  [890] = {.count = 1, .reusable = true}, REDUCE(sym_emph_token, 3),
  [892] = {.count = 1, .reusable = true}, REDUCE(sym_footnote_token, 3),
  [894] = {.count = 1, .reusable = true}, REDUCE(sym_textbf_token, 3),
  [896] = {.count = 1, .reusable = true}, REDUCE(sym_textit_token, 3),
  [898] = {.count = 1, .reusable = true}, REDUCE(sym_texttt_token, 3),
  [900] = {.count = 1, .reusable = true}, REDUCE(sym_glue_token, 3),
  [902] = {.count = 1, .reusable = true}, REDUCE(sym_dimension_token, 3),
  [904] = {.count = 1, .reusable = true}, REDUCE(sym_glue_space_token, 3),
  [906] = {.count = 1, .reusable = true}, REDUCE(sym_strut_token, 3),
  [908] = {.count = 2, .reusable = true}, REDUCE(sym_strut_token, 3), SHIFT_EXTRA(),
  [911] = {.count = 1, .reusable = true}, REDUCE(sym_phantom_smash_token, 3),
  [913] = {.count = 1, .reusable = true}, REDUCE(sym_makebox_token, 3),
  [915] = {.count = 1, .reusable = true}, REDUCE(sym_usebox_token, 3),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_movebox_token, 3),
  [919] = {.count = 1, .reusable = true}, REDUCE(sym_setbox_token, 3),
  [921] = {.count = 1, .reusable = true}, REDUCE(sym_box_dimension_token, 3),
  [923] = {.count = 1, .reusable = true}, REDUCE(sym_href_token, 3),
  [925] = {.count = 1, .reusable = true}, REDUCE(sym_url_token, 3),
  [927] = {.count = 1, .reusable = true}, REDUCE(sym_hyperbaseurl_token, 3),
  [929] = {.count = 1, .reusable = true}, REDUCE(sym_hyperimage_token, 3),
  [931] = {.count = 1, .reusable = true}, REDUCE(sym_hyperref_token, 3),
  [933] = {.count = 1, .reusable = true}, REDUCE(sym_token, 3),
  [935] = {.count = 2, .reusable = true}, REDUCE(sym_token, 3), SHIFT_EXTRA(),
  [938] = {.count = 1, .reusable = true}, REDUCE(aux_sym_token_repeat1, 2),
  [940] = {.count = 2, .reusable = true}, REDUCE(aux_sym_token_repeat1, 2), SHIFT_REPEAT(301),
  [943] = {.count = 1, .reusable = true}, SHIFT(544),
  [945] = {.count = 1, .reusable = true}, SHIFT(545),
  [947] = {.count = 1, .reusable = true}, SHIFT(546),
  [949] = {.count = 1, .reusable = true}, SHIFT(547),
  [951] = {.count = 1, .reusable = true}, SHIFT(548),
  [953] = {.count = 1, .reusable = true}, SHIFT(549),
  [955] = {.count = 1, .reusable = true}, SHIFT(550),
  [957] = {.count = 1, .reusable = true}, SHIFT(551),
  [959] = {.count = 1, .reusable = true}, SHIFT(552),
  [961] = {.count = 1, .reusable = true}, SHIFT(554),
  [963] = {.count = 1, .reusable = true}, SHIFT(555),
  [965] = {.count = 1, .reusable = true}, SHIFT(556),
  [967] = {.count = 1, .reusable = true}, SHIFT(560),
  [969] = {.count = 1, .reusable = true}, SHIFT(561),
  [971] = {.count = 1, .reusable = true}, SHIFT(564),
  [973] = {.count = 1, .reusable = true}, SHIFT(567),
  [975] = {.count = 1, .reusable = true}, SHIFT(579),
  [977] = {.count = 1, .reusable = false}, SHIFT(581),
  [979] = {.count = 1, .reusable = true}, SHIFT(582),
  [981] = {.count = 1, .reusable = false}, SHIFT(583),
  [983] = {.count = 1, .reusable = true}, SHIFT(585),
  [985] = {.count = 1, .reusable = true}, SHIFT(587),
  [987] = {.count = 1, .reusable = true}, SHIFT(588),
  [989] = {.count = 1, .reusable = true}, SHIFT(589),
  [991] = {.count = 1, .reusable = true}, SHIFT(590),
  [993] = {.count = 1, .reusable = true}, SHIFT(592),
  [995] = {.count = 1, .reusable = true}, SHIFT(593),
  [997] = {.count = 1, .reusable = true}, SHIFT(595),
  [999] = {.count = 1, .reusable = true}, SHIFT(597),
  [1001] = {.count = 1, .reusable = true}, SHIFT(599),
  [1003] = {.count = 1, .reusable = true}, REDUCE(sym_text_group, 3),
  [1005] = {.count = 2, .reusable = true}, REDUCE(sym_text_group, 3), SHIFT_EXTRA(),
  [1008] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(93),
  [1011] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(378),
  [1014] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(94),
  [1017] = {.count = 3, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(378), SHIFT_EXTRA(),
  [1021] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(96),
  [1024] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(141),
  [1027] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(97),
  [1030] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(98),
  [1033] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(99),
  [1036] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(142),
  [1039] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(380),
  [1042] = {.count = 1, .reusable = true}, SHIFT(606),
  [1044] = {.count = 1, .reusable = true}, SHIFT(607),
  [1046] = {.count = 1, .reusable = true}, SHIFT(608),
  [1048] = {.count = 1, .reusable = true}, SHIFT(609),
  [1050] = {.count = 1, .reusable = true}, SHIFT(610),
  [1052] = {.count = 1, .reusable = true}, SHIFT(611),
  [1054] = {.count = 1, .reusable = true}, SHIFT(612),
  [1056] = {.count = 1, .reusable = true}, SHIFT(613),
  [1058] = {.count = 1, .reusable = false}, SHIFT(614),
  [1060] = {.count = 1, .reusable = true}, SHIFT(616),
  [1062] = {.count = 2, .reusable = true}, SHIFT(616), SHIFT_EXTRA(),
  [1065] = {.count = 1, .reusable = true}, SHIFT(615),
  [1067] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 2),
  [1069] = {.count = 2, .reusable = true}, REDUCE(sym_math_group, 2), SHIFT_EXTRA(),
  [1072] = {.count = 1, .reusable = true}, SHIFT(617),
  [1074] = {.count = 1, .reusable = true}, SHIFT(621),
  [1076] = {.count = 2, .reusable = true}, SHIFT(621), SHIFT_EXTRA(),
  [1079] = {.count = 1, .reusable = true}, SHIFT(622),
  [1081] = {.count = 1, .reusable = true}, SHIFT(625),
  [1083] = {.count = 1, .reusable = true}, SHIFT(626),
  [1085] = {.count = 1, .reusable = true}, SHIFT(627),
  [1087] = {.count = 1, .reusable = true}, SHIFT(628),
  [1089] = {.count = 1, .reusable = true}, SHIFT(633),
  [1091] = {.count = 1, .reusable = true}, SHIFT(634),
  [1093] = {.count = 1, .reusable = true}, SHIFT(635),
  [1095] = {.count = 1, .reusable = true}, SHIFT(636),
  [1097] = {.count = 1, .reusable = true}, SHIFT(641),
  [1099] = {.count = 1, .reusable = true}, SHIFT(643),
  [1101] = {.count = 1, .reusable = true}, SHIFT(645),
  [1103] = {.count = 1, .reusable = true}, SHIFT(646),
  [1105] = {.count = 1, .reusable = true}, SHIFT(648),
  [1107] = {.count = 2, .reusable = true}, SHIFT(648), SHIFT_EXTRA(),
  [1110] = {.count = 1, .reusable = true}, SHIFT(647),
  [1112] = {.count = 1, .reusable = true}, SHIFT(649),
  [1114] = {.count = 1, .reusable = true}, SHIFT(650),
  [1116] = {.count = 1, .reusable = true}, SHIFT(651),
  [1118] = {.count = 1, .reusable = true}, SHIFT(652),
  [1120] = {.count = 1, .reusable = true}, REDUCE(sym_tex_inline_math, 3),
  [1122] = {.count = 2, .reusable = true}, REDUCE(sym_tex_inline_math, 3), SHIFT_EXTRA(),
  [1125] = {.count = 1, .reusable = true}, SHIFT(655),
  [1127] = {.count = 2, .reusable = true}, SHIFT(655), SHIFT_EXTRA(),
  [1130] = {.count = 1, .reusable = true}, SHIFT(653),
  [1132] = {.count = 1, .reusable = true}, REDUCE(sym_tag, 2),
  [1134] = {.count = 2, .reusable = true}, REDUCE(sym_tag, 2), SHIFT_EXTRA(),
  [1137] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 2),
  [1139] = {.count = 2, .reusable = true}, REDUCE(sym_math_env, 2), SHIFT_EXTRA(),
  [1142] = {.count = 1, .reusable = true}, SHIFT(658),
  [1144] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(143),
  [1147] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(421),
  [1150] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(144),
  [1153] = {.count = 3, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(421), SHIFT_EXTRA(),
  [1157] = {.count = 1, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2),
  [1159] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(52),
  [1162] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(6),
  [1165] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(7),
  [1168] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(154),
  [1171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(422),
  [1174] = {.count = 1, .reusable = true}, SHIFT(659),
  [1176] = {.count = 1, .reusable = true}, SHIFT(660),
  [1178] = {.count = 1, .reusable = true}, SHIFT(661),
  [1180] = {.count = 1, .reusable = true}, SHIFT(662),
  [1182] = {.count = 1, .reusable = true}, SHIFT(663),
  [1184] = {.count = 1, .reusable = true}, SHIFT(664),
  [1186] = {.count = 1, .reusable = true}, SHIFT(665),
  [1188] = {.count = 1, .reusable = true}, SHIFT(666),
  [1190] = {.count = 1, .reusable = true}, SHIFT(667),
  [1192] = {.count = 1, .reusable = true}, SHIFT(668),
  [1194] = {.count = 1, .reusable = true}, REDUCE(sym_latex_display_math, 3),
  [1196] = {.count = 2, .reusable = true}, REDUCE(sym_latex_display_math, 3), SHIFT_EXTRA(),
  [1199] = {.count = 1, .reusable = true}, SHIFT(669),
  [1201] = {.count = 1, .reusable = true}, SHIFT(674),
  [1203] = {.count = 2, .reusable = true}, SHIFT(674), SHIFT_EXTRA(),
  [1206] = {.count = 1, .reusable = true}, SHIFT(673),
  [1208] = {.count = 1, .reusable = true}, SHIFT(675),
  [1210] = {.count = 1, .reusable = false}, SHIFT(676),
  [1212] = {.count = 1, .reusable = true}, SHIFT(677),
  [1214] = {.count = 1, .reusable = false}, SHIFT(678),
  [1216] = {.count = 1, .reusable = true}, SHIFT(680),
  [1218] = {.count = 1, .reusable = true}, SHIFT(682),
  [1220] = {.count = 1, .reusable = true}, SHIFT(683),
  [1222] = {.count = 1, .reusable = true}, SHIFT(684),
  [1224] = {.count = 1, .reusable = true}, SHIFT(685),
  [1226] = {.count = 1, .reusable = true}, SHIFT(687),
  [1228] = {.count = 1, .reusable = true}, SHIFT(688),
  [1230] = {.count = 1, .reusable = true}, SHIFT(690),
  [1232] = {.count = 1, .reusable = true}, SHIFT(692),
  [1234] = {.count = 1, .reusable = true}, SHIFT(694),
  [1236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(156),
  [1239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(466),
  [1242] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(157),
  [1245] = {.count = 3, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(466), SHIFT_EXTRA(),
  [1249] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(182),
  [1252] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(158),
  [1255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(159),
  [1258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(183),
  [1261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(468),
  [1264] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env, 3),
  [1266] = {.count = 2, .reusable = true}, REDUCE(sym_display_math_env, 3), SHIFT_EXTRA(),
  [1269] = {.count = 1, .reusable = true}, SHIFT(696),
  [1271] = {.count = 1, .reusable = true}, REDUCE(sym_end_inline_math, 2),
  [1273] = {.count = 2, .reusable = true}, REDUCE(sym_end_inline_math, 2), SHIFT_EXTRA(),
  [1276] = {.count = 1, .reusable = true}, REDUCE(sym_latex_inline_math, 3),
  [1278] = {.count = 2, .reusable = true}, REDUCE(sym_latex_inline_math, 3), SHIFT_EXTRA(),
  [1281] = {.count = 1, .reusable = true}, SHIFT(698),
  [1283] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env, 3),
  [1285] = {.count = 2, .reusable = true}, REDUCE(sym_inline_math_env, 3), SHIFT_EXTRA(),
  [1288] = {.count = 1, .reusable = true}, SHIFT(699),
  [1290] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_end, 2),
  [1292] = {.count = 2, .reusable = true}, REDUCE(sym_inline_math_end, 2), SHIFT_EXTRA(),
  [1295] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env, 3),
  [1297] = {.count = 2, .reusable = true}, REDUCE(sym_verbatim_env, 3), SHIFT_EXTRA(),
  [1300] = {.count = 1, .reusable = true}, SHIFT(700),
  [1302] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_end, 2),
  [1304] = {.count = 2, .reusable = true}, REDUCE(sym_verbatim_end, 2), SHIFT_EXTRA(),
  [1307] = {.count = 1, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2),
  [1309] = {.count = 2, .reusable = true}, REDUCE(aux_sym_verbatim_text_repeat1, 2), SHIFT_REPEAT(481),
  [1312] = {.count = 1, .reusable = true}, REDUCE(sym_end, 2),
  [1314] = {.count = 2, .reusable = true}, REDUCE(sym_end, 2), SHIFT_EXTRA(),
  [1317] = {.count = 1, .reusable = true}, REDUCE(sym_text_env, 3),
  [1319] = {.count = 2, .reusable = true}, REDUCE(sym_text_env, 3), SHIFT_EXTRA(),
  [1322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(484),
  [1325] = {.count = 3, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(484), SHIFT_EXTRA(),
  [1329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_mode_repeat1, 2), SHIFT_REPEAT(154),
  [1332] = {.count = 1, .reusable = true}, SHIFT(701),
  [1334] = {.count = 1, .reusable = true}, SHIFT(702),
  [1336] = {.count = 1, .reusable = true}, SHIFT(703),
  [1338] = {.count = 1, .reusable = true}, SHIFT(704),
  [1340] = {.count = 1, .reusable = true}, SHIFT(705),
  [1342] = {.count = 1, .reusable = true}, SHIFT(707),
  [1344] = {.count = 2, .reusable = true}, SHIFT(707), SHIFT_EXTRA(),
  [1347] = {.count = 1, .reusable = true}, SHIFT(706),
  [1349] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 3),
  [1351] = {.count = 2, .reusable = true}, REDUCE(sym_display_math_begin, 3), SHIFT_EXTRA(),
  [1354] = {.count = 1, .reusable = true}, SHIFT(708),
  [1356] = {.count = 1, .reusable = true}, SHIFT(712),
  [1358] = {.count = 2, .reusable = true}, SHIFT(712), SHIFT_EXTRA(),
  [1361] = {.count = 1, .reusable = true}, SHIFT(710),
  [1363] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 3),
  [1365] = {.count = 1, .reusable = true}, SHIFT(713),
  [1367] = {.count = 1, .reusable = true}, REDUCE(sym_documentclass, 3),
  [1369] = {.count = 2, .reusable = true}, REDUCE(sym_documentclass, 3), SHIFT_EXTRA(),
  [1372] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 2),
  [1374] = {.count = 1, .reusable = true}, REDUCE(sym_usepackage, 3),
  [1376] = {.count = 2, .reusable = true}, REDUCE(sym_usepackage, 3), SHIFT_EXTRA(),
  [1379] = {.count = 1, .reusable = true}, SHIFT(716),
  [1381] = {.count = 1, .reusable = true}, REDUCE(sym_section, 3),
  [1383] = {.count = 2, .reusable = true}, REDUCE(sym_section, 3), SHIFT_EXTRA(),
  [1386] = {.count = 1, .reusable = true}, SHIFT(721),
  [1388] = {.count = 1, .reusable = true}, REDUCE(sym_footnote, 3),
  [1390] = {.count = 2, .reusable = true}, REDUCE(sym_footnote, 3), SHIFT_EXTRA(),
  [1393] = {.count = 1, .reusable = true}, SHIFT(722),
  [1395] = {.count = 1, .reusable = true}, SHIFT(723),
  [1397] = {.count = 1, .reusable = true}, SHIFT(724),
  [1399] = {.count = 1, .reusable = true}, REDUCE(sym_glue_assign, 3),
  [1401] = {.count = 2, .reusable = true}, REDUCE(sym_glue_assign, 3), SHIFT_EXTRA(),
  [1404] = {.count = 1, .reusable = true}, REDUCE(sym_dimension, 2),
  [1406] = {.count = 2, .reusable = true}, REDUCE(sym_dimension, 2), SHIFT_EXTRA(),
  [1409] = {.count = 1, .reusable = false}, REDUCE(sym_dimension, 2),
  [1411] = {.count = 1, .reusable = true}, REDUCE(sym_glue, 2),
  [1413] = {.count = 2, .reusable = true}, REDUCE(sym_glue, 2), SHIFT_EXTRA(),
  [1416] = {.count = 1, .reusable = true}, REDUCE(sym_box_dimension_ref, 2),
  [1418] = {.count = 2, .reusable = true}, REDUCE(sym_box_dimension_ref, 2), SHIFT_EXTRA(),
  [1421] = {.count = 1, .reusable = false}, REDUCE(sym_box_dimension_ref, 2),
  [1423] = {.count = 1, .reusable = true}, SHIFT(725),
  [1425] = {.count = 1, .reusable = true}, SHIFT(726),
  [1427] = {.count = 1, .reusable = true}, SHIFT(727),
  [1429] = {.count = 1, .reusable = true}, SHIFT(731),
  [1431] = {.count = 1, .reusable = true}, REDUCE(sym_dimension_assign, 3),
  [1433] = {.count = 2, .reusable = true}, REDUCE(sym_dimension_assign, 3), SHIFT_EXTRA(),
  [1436] = {.count = 1, .reusable = true}, SHIFT(732),
  [1438] = {.count = 1, .reusable = false}, SHIFT(733),
  [1440] = {.count = 1, .reusable = true}, SHIFT(734),
  [1442] = {.count = 1, .reusable = true}, SHIFT(735),
  [1444] = {.count = 1, .reusable = true}, SHIFT(737),
  [1446] = {.count = 1, .reusable = true}, SHIFT(83),
  [1448] = {.count = 1, .reusable = true}, REDUCE(sym_movebox, 3),
  [1450] = {.count = 2, .reusable = true}, REDUCE(sym_movebox, 3), SHIFT_EXTRA(),
  [1453] = {.count = 1, .reusable = true}, REDUCE(sym_setbox, 3),
  [1455] = {.count = 2, .reusable = true}, REDUCE(sym_setbox, 3), SHIFT_EXTRA(),
  [1458] = {.count = 1, .reusable = true}, REDUCE(sym_box_dimension_assign, 3),
  [1460] = {.count = 2, .reusable = true}, REDUCE(sym_box_dimension_assign, 3), SHIFT_EXTRA(),
  [1463] = {.count = 1, .reusable = true}, REDUCE(sym_href, 3),
  [1465] = {.count = 2, .reusable = true}, REDUCE(sym_href, 3), SHIFT_EXTRA(),
  [1468] = {.count = 1, .reusable = true}, REDUCE(sym_hyperimage, 3),
  [1470] = {.count = 2, .reusable = true}, REDUCE(sym_hyperimage, 3), SHIFT_EXTRA(),
  [1473] = {.count = 1, .reusable = true}, REDUCE(sym_hyperref, 3),
  [1475] = {.count = 2, .reusable = true}, REDUCE(sym_hyperref, 3), SHIFT_EXTRA(),
  [1478] = {.count = 1, .reusable = true}, SHIFT(742),
  [1480] = {.count = 1, .reusable = true}, SHIFT(743),
  [1482] = {.count = 1, .reusable = true}, SHIFT(744),
  [1484] = {.count = 1, .reusable = true}, SHIFT(745),
  [1486] = {.count = 1, .reusable = true}, SHIFT(746),
  [1488] = {.count = 1, .reusable = true}, SHIFT(748),
  [1490] = {.count = 1, .reusable = true}, SHIFT(749),
  [1492] = {.count = 1, .reusable = true}, SHIFT(750),
  [1494] = {.count = 1, .reusable = true}, SHIFT(755),
  [1496] = {.count = 1, .reusable = true}, SHIFT(756),
  [1498] = {.count = 1, .reusable = true}, SHIFT(757),
  [1500] = {.count = 1, .reusable = true}, SHIFT(758),
  [1502] = {.count = 1, .reusable = true}, SHIFT(759),
  [1504] = {.count = 1, .reusable = true}, SHIFT(760),
  [1506] = {.count = 1, .reusable = true}, SHIFT(761),
  [1508] = {.count = 1, .reusable = true}, SHIFT(765),
  [1510] = {.count = 1, .reusable = true}, REDUCE(sym_tag_token, 3),
  [1512] = {.count = 1, .reusable = true}, SHIFT(771),
  [1514] = {.count = 1, .reusable = true}, SHIFT(772),
  [1516] = {.count = 1, .reusable = true}, SHIFT(773),
  [1518] = {.count = 1, .reusable = true}, SHIFT(774),
  [1520] = {.count = 1, .reusable = true}, SHIFT(775),
  [1522] = {.count = 1, .reusable = true}, SHIFT(776),
  [1524] = {.count = 1, .reusable = true}, SHIFT(777),
  [1526] = {.count = 1, .reusable = true}, SHIFT(778),
  [1528] = {.count = 1, .reusable = true}, SHIFT(779),
  [1530] = {.count = 1, .reusable = true}, SHIFT(781),
  [1532] = {.count = 1, .reusable = true}, SHIFT(785),
  [1534] = {.count = 2, .reusable = true}, SHIFT(785), SHIFT_EXTRA(),
  [1537] = {.count = 1, .reusable = true}, SHIFT(784),
  [1539] = {.count = 1, .reusable = true}, SHIFT(786),
  [1541] = {.count = 1, .reusable = false}, SHIFT(787),
  [1543] = {.count = 1, .reusable = true}, SHIFT(788),
  [1545] = {.count = 1, .reusable = false}, SHIFT(789),
  [1547] = {.count = 1, .reusable = true}, SHIFT(791),
  [1549] = {.count = 1, .reusable = true}, SHIFT(793),
  [1551] = {.count = 1, .reusable = true}, SHIFT(794),
  [1553] = {.count = 1, .reusable = true}, SHIFT(795),
  [1555] = {.count = 1, .reusable = true}, SHIFT(796),
  [1557] = {.count = 1, .reusable = true}, SHIFT(798),
  [1559] = {.count = 1, .reusable = true}, SHIFT(799),
  [1561] = {.count = 1, .reusable = true}, SHIFT(801),
  [1563] = {.count = 1, .reusable = true}, SHIFT(803),
  [1565] = {.count = 1, .reusable = true}, SHIFT(805),
  [1567] = {.count = 1, .reusable = true}, REDUCE(sym_math_group, 3),
  [1569] = {.count = 2, .reusable = true}, REDUCE(sym_math_group, 3), SHIFT_EXTRA(),
  [1572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(382),
  [1575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(648),
  [1578] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(383),
  [1581] = {.count = 3, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(648), SHIFT_EXTRA(),
  [1585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(408),
  [1588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(385),
  [1591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(386),
  [1594] = {.count = 2, .reusable = true}, REDUCE(aux_sym_math_mode_repeat1, 2), SHIFT_REPEAT(409),
  [1597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(650),
  [1600] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 4),
  [1602] = {.count = 2, .reusable = true}, REDUCE(sym_tex_display_math, 4), SHIFT_EXTRA(),
  [1605] = {.count = 1, .reusable = true}, SHIFT(807),
  [1607] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 2),
  [1609] = {.count = 2, .reusable = true}, REDUCE(sym_math_text_group, 2), SHIFT_EXTRA(),
  [1612] = {.count = 1, .reusable = true}, SHIFT(808),
  [1614] = {.count = 1, .reusable = true}, REDUCE(sym_math_env, 3),
  [1616] = {.count = 2, .reusable = true}, REDUCE(sym_math_env, 3), SHIFT_EXTRA(),
  [1619] = {.count = 1, .reusable = true}, SHIFT(809),
  [1621] = {.count = 1, .reusable = true}, REDUCE(sym_inline_verbatim, 4),
  [1623] = {.count = 2, .reusable = true}, REDUCE(sym_inline_verbatim, 4), SHIFT_EXTRA(),
  [1626] = {.count = 1, .reusable = true}, REDUCE(sym_end_display_math, 2),
  [1628] = {.count = 2, .reusable = true}, REDUCE(sym_end_display_math, 2), SHIFT_EXTRA(),
  [1631] = {.count = 1, .reusable = true}, SHIFT(810),
  [1633] = {.count = 1, .reusable = true}, SHIFT(811),
  [1635] = {.count = 1, .reusable = true}, SHIFT(812),
  [1637] = {.count = 1, .reusable = true}, SHIFT(813),
  [1639] = {.count = 1, .reusable = true}, SHIFT(814),
  [1641] = {.count = 1, .reusable = true}, SHIFT(815),
  [1643] = {.count = 1, .reusable = true}, SHIFT(816),
  [1645] = {.count = 1, .reusable = true}, SHIFT(817),
  [1647] = {.count = 1, .reusable = true}, SHIFT(818),
  [1649] = {.count = 1, .reusable = true}, SHIFT(822),
  [1651] = {.count = 1, .reusable = true}, SHIFT(826),
  [1653] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_end, 2),
  [1655] = {.count = 2, .reusable = true}, REDUCE(sym_display_math_end, 2), SHIFT_EXTRA(),
  [1658] = {.count = 1, .reusable = true}, REDUCE(sym_end_token, 3),
  [1660] = {.count = 1, .reusable = true}, SHIFT(827),
  [1662] = {.count = 1, .reusable = true}, SHIFT(828),
  [1664] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_env_group, 3),
  [1666] = {.count = 1, .reusable = true}, REDUCE(sym_inline_math_env_group, 3),
  [1668] = {.count = 2, .reusable = true}, REDUCE(sym_inline_math_env_group, 3), SHIFT_EXTRA(),
  [1671] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_env_group, 3),
  [1673] = {.count = 1, .reusable = true}, REDUCE(sym_name_group, 3, .alias_sequence_id = 2),
  [1675] = {.count = 2, .reusable = true}, REDUCE(sym_name_group, 3, .alias_sequence_id = 2), SHIFT_EXTRA(),
  [1678] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(705),
  [1681] = {.count = 1, .reusable = true}, SHIFT(829),
  [1683] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 4),
  [1685] = {.count = 2, .reusable = true}, REDUCE(sym_display_math_begin, 4), SHIFT_EXTRA(),
  [1688] = {.count = 1, .reusable = true}, SHIFT(830),
  [1690] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 4),
  [1692] = {.count = 1, .reusable = true}, SHIFT(832),
  [1694] = {.count = 1, .reusable = true}, REDUCE(sym_opt_text_group, 3),
  [1696] = {.count = 1, .reusable = true}, REDUCE(sym_section, 4),
  [1698] = {.count = 2, .reusable = true}, REDUCE(sym_section, 4), SHIFT_EXTRA(),
  [1701] = {.count = 1, .reusable = true}, REDUCE(sym_catcode, 4),
  [1703] = {.count = 2, .reusable = true}, REDUCE(sym_catcode, 4), SHIFT_EXTRA(),
  [1706] = {.count = 2, .reusable = true}, REDUCE(sym_glue_token, 3), SHIFT_EXTRA(),
  [1709] = {.count = 2, .reusable = true}, REDUCE(sym_dimension_token, 3), SHIFT_EXTRA(),
  [1712] = {.count = 1, .reusable = false}, REDUCE(sym_dimension_token, 3),
  [1714] = {.count = 1, .reusable = false}, REDUCE(sym_token, 3),
  [1716] = {.count = 1, .reusable = true}, SHIFT(836),
  [1718] = {.count = 1, .reusable = false}, SHIFT(837),
  [1720] = {.count = 1, .reusable = true}, SHIFT(838),
  [1722] = {.count = 1, .reusable = true}, SHIFT(839),
  [1724] = {.count = 1, .reusable = true}, REDUCE(sym_glue, 3),
  [1726] = {.count = 2, .reusable = true}, REDUCE(sym_glue, 3), SHIFT_EXTRA(),
  [1729] = {.count = 1, .reusable = true}, SHIFT(840),
  [1731] = {.count = 1, .reusable = false}, REDUCE(sym_glue, 3),
  [1733] = {.count = 1, .reusable = true}, SHIFT(841),
  [1735] = {.count = 1, .reusable = true}, SHIFT(842),
  [1737] = {.count = 1, .reusable = true}, REDUCE(sym_makebox, 4),
  [1739] = {.count = 2, .reusable = true}, REDUCE(sym_makebox, 4), SHIFT_EXTRA(),
  [1742] = {.count = 1, .reusable = true}, REDUCE(sym_setbox, 4),
  [1744] = {.count = 2, .reusable = true}, REDUCE(sym_setbox, 4), SHIFT_EXTRA(),
  [1747] = {.count = 1, .reusable = true}, REDUCE(sym_box_dimension_assign, 4),
  [1749] = {.count = 2, .reusable = true}, REDUCE(sym_box_dimension_assign, 4), SHIFT_EXTRA(),
  [1752] = {.count = 1, .reusable = true}, REDUCE(sym_href, 4),
  [1754] = {.count = 2, .reusable = true}, REDUCE(sym_href, 4), SHIFT_EXTRA(),
  [1757] = {.count = 1, .reusable = true}, SHIFT(844),
  [1759] = {.count = 1, .reusable = true}, SHIFT(845),
  [1761] = {.count = 1, .reusable = true}, SHIFT(846),
  [1763] = {.count = 1, .reusable = true}, SHIFT(847),
  [1765] = {.count = 1, .reusable = true}, SHIFT(851),
  [1767] = {.count = 1, .reusable = false}, SHIFT(852),
  [1769] = {.count = 1, .reusable = true}, SHIFT(853),
  [1771] = {.count = 1, .reusable = true}, SHIFT(854),
  [1773] = {.count = 1, .reusable = true}, SHIFT(855),
  [1775] = {.count = 1, .reusable = true}, SHIFT(857),
  [1777] = {.count = 1, .reusable = true}, SHIFT(859),
  [1779] = {.count = 1, .reusable = true}, SHIFT(860),
  [1781] = {.count = 1, .reusable = true}, SHIFT(861),
  [1783] = {.count = 1, .reusable = true}, SHIFT(862),
  [1785] = {.count = 1, .reusable = true}, SHIFT(863),
  [1787] = {.count = 1, .reusable = true}, SHIFT(864),
  [1789] = {.count = 1, .reusable = true}, SHIFT(865),
  [1791] = {.count = 1, .reusable = true}, SHIFT(866),
  [1793] = {.count = 1, .reusable = true}, SHIFT(870),
  [1795] = {.count = 1, .reusable = true}, REDUCE(sym_tex_display_math, 5),
  [1797] = {.count = 2, .reusable = true}, REDUCE(sym_tex_display_math, 5), SHIFT_EXTRA(),
  [1800] = {.count = 1, .reusable = true}, REDUCE(sym_math_text_group, 3),
  [1802] = {.count = 2, .reusable = true}, REDUCE(sym_math_text_group, 3), SHIFT_EXTRA(),
  [1805] = {.count = 1, .reusable = true}, SHIFT(874),
  [1807] = {.count = 1, .reusable = false}, SHIFT(875),
  [1809] = {.count = 1, .reusable = true}, SHIFT(876),
  [1811] = {.count = 1, .reusable = true}, SHIFT(877),
  [1813] = {.count = 1, .reusable = true}, SHIFT(878),
  [1815] = {.count = 1, .reusable = true}, SHIFT(879),
  [1817] = {.count = 2, .reusable = true}, REDUCE(sym_verbatim_env_group, 3), SHIFT_EXTRA(),
  [1820] = {.count = 1, .reusable = true}, REDUCE(sym_display_math_begin, 5),
  [1822] = {.count = 2, .reusable = true}, REDUCE(sym_display_math_begin, 5), SHIFT_EXTRA(),
  [1825] = {.count = 1, .reusable = true}, REDUCE(sym_verbatim_begin, 5),
  [1827] = {.count = 1, .reusable = true}, REDUCE(sym_providesexplclass, 5),
  [1829] = {.count = 2, .reusable = true}, REDUCE(sym_providesexplclass, 5), SHIFT_EXTRA(),
  [1832] = {.count = 1, .reusable = true}, REDUCE(sym_providesexplfile, 5),
  [1834] = {.count = 2, .reusable = true}, REDUCE(sym_providesexplfile, 5), SHIFT_EXTRA(),
  [1837] = {.count = 1, .reusable = true}, REDUCE(sym_providesexplpackage, 5),
  [1839] = {.count = 2, .reusable = true}, REDUCE(sym_providesexplpackage, 5), SHIFT_EXTRA(),
  [1842] = {.count = 1, .reusable = true}, SHIFT(880),
  [1844] = {.count = 1, .reusable = true}, SHIFT(881),
  [1846] = {.count = 1, .reusable = true}, REDUCE(sym_hyperref, 5),
  [1848] = {.count = 2, .reusable = true}, REDUCE(sym_hyperref, 5), SHIFT_EXTRA(),
  [1851] = {.count = 1, .reusable = true}, SHIFT(883),
  [1853] = {.count = 1, .reusable = true}, SHIFT(884),
  [1855] = {.count = 1, .reusable = true}, SHIFT(885),
  [1857] = {.count = 1, .reusable = true}, SHIFT(887),
  [1859] = {.count = 1, .reusable = true}, SHIFT(888),
  [1861] = {.count = 1, .reusable = false}, SHIFT(889),
  [1863] = {.count = 1, .reusable = true}, SHIFT(890),
  [1865] = {.count = 1, .reusable = true}, SHIFT(891),
  [1867] = {.count = 1, .reusable = true}, SHIFT(892),
  [1869] = {.count = 1, .reusable = true}, SHIFT(893),
  [1871] = {.count = 1, .reusable = true}, SHIFT(894),
  [1873] = {.count = 2, .reusable = true}, REDUCE(sym_display_math_env_group, 3), SHIFT_EXTRA(),
  [1876] = {.count = 1, .reusable = true}, REDUCE(sym_glue, 5),
  [1878] = {.count = 2, .reusable = true}, REDUCE(sym_glue, 5), SHIFT_EXTRA(),
  [1881] = {.count = 1, .reusable = true}, SHIFT(896),
  [1883] = {.count = 1, .reusable = true}, SHIFT(897),
};

void *tree_sitter_latex_external_scanner_create();
void tree_sitter_latex_external_scanner_destroy(void *);
bool tree_sitter_latex_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_latex_external_scanner_serialize(void *, char *);
void tree_sitter_latex_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_latex_external_scanner_create,
      tree_sitter_latex_external_scanner_destroy,
      tree_sitter_latex_external_scanner_scan,
      tree_sitter_latex_external_scanner_serialize,
      tree_sitter_latex_external_scanner_deserialize,
    },
  };
  return &language;
}
