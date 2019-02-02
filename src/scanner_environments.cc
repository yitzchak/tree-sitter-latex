#include "scanner.hh"

namespace LaTeX {

using std::string;
using std::unordered_map;

unordered_map<string, SymbolDescription> Scanner::environments = {
    // latex amscls amsthm-sty
    {"proof", env_name_theorem},
    // latex amsmath amsmath-sty
    {"align", {env_name_display_math, M_Math}},
    {"align*", {env_name_display_math, M_Math}},
    {"alignat", {env_name_alignat, M_Math}},
    {"alignat*", {env_name_alignat, M_Math}},
    {"equation*", {env_name_display_math, M_Math}},
    {"flalign", {env_name_display_math, M_Math}},
    {"flalign*", {env_name_display_math, M_Math}},
    {"gather", {env_name_display_math, M_Math}},
    {"gather*", {env_name_display_math, M_Math}},
    {"multiline", {env_name_display_math, M_Math}},
    {"multiline*", {env_name_display_math, M_Math}},
    {"split", {env_name_display_math, M_Math}},
    {"split*", {env_name_display_math, M_Math}},
    // latex base alltt-sty
    {"alltt",
     {env_name,
      M_None,
      {{'\t', '\t', OTHER_CATEGORY},
       {' ', ' ', OTHER_CATEGORY},
       {'#', '#', OTHER_CATEGORY},
       {'$', '$', OTHER_CATEGORY},
       {'%', '%', OTHER_CATEGORY},
       {'&', '&', OTHER_CATEGORY},
       {'A', 'Z', LETTER_CATEGORY},
       {'\\', '\\', ESCAPE_CATEGORY},
       {'^', '^', OTHER_CATEGORY},
       {'_', '_', OTHER_CATEGORY},
       {'a', 'z', LETTER_CATEGORY},
       {'{', '{', BEGIN_CATEGORY},
       {'}', '}', END_CATEGORY},
       {'~', '~', OTHER_CATEGORY}}}},
    // laxex base latex-ltx
    {"array", env_name_array},
    {"description", env_name_itemize},
    {"displaymath", {env_name_display_math, M_Math}},
    {"document", env_name_document},
    {"enumerate", env_name_itemize},
    {"eqnarray", {env_name_display_math, M_Math}},
    {"eqnarray*", {env_name_display_math, M_Math}},
    {"equation", {env_name_display_math, M_Math}},
    {"figure", env_name_figure},
    {"figure*", env_name_figure},
    {"itemize", env_name_itemize},
    {"lrbox", env_name_lrbox},
    {"math", {env_name_inline_math, M_Math}},
    {"minipage", env_name_minipage},
    {"picture", env_name_picture},
    {"table", env_name_table},
    {"table*", env_name_table},
    {"tabular", {env_name_tabular, M_Text}},
    {"tabular*", {env_name_tabularstar, M_Text}},
    {"thebibliography", env_name_thebibliography},
    {"theorem", env_name_theorem},
    // latex breqn breqn-sty
    {"darray", {env_name_dmath, M_Math}},
    {"darray*", {env_name_dmath, M_Math}},
    {"dgroup", {env_name_dmath, M_Math}},
    {"dgroup*", {env_name_dmath, M_Math}},
    {"dmath", {env_name_dmath, M_Math}},
    {"dmath*", {env_name_dmath, M_Math}},
    {"dseries", env_name_dseries},
    {"dseries*", env_name_dseries},
    // latex enumitem enumitem-sty
    {"description*", env_name_itemize},
    {"enumerate*", env_name_itemize},
    {"itemize*", env_name_itemize},
    // latex fancyvrb fancyvrb-sty
    {"BVerbatim", env_name_Verbatim},
    {"BVerbatim*", env_name_Verbatim},
    {"LVerbatim", env_name_Verbatim},
    {"LVerbatim*", env_name_Verbatim},
    {"Verbatim", env_name_Verbatim},
    {"Verbatim*", env_name_Verbatim},
    // latex filecontents filecontents-sty
    {"filecontents", env_name_filecontents},
    {"filecontents*", env_name_filecontents},
    // latex gnuplotex gnumplotex-sty
    {"gnuplot", env_name_gnuplot},
    // latex listings listings-sty
    {"lstlisting", env_name_lstlisting},
    // latex minted minted-sty
    {"minted", env_name_minted},
    // latex ntheorem ntheorem-sty
    {"anmerkung", env_name_theorem},
    {"beispiel", env_name_theorem},
    {"bemerkung", env_name_theorem},
    {"beweis", env_name_theorem},
    {"corollary", env_name_theorem},
    {"definition", env_name_theorem},
    {"example", env_name_theorem},
    {"korollar", env_name_theorem},
    {"lemma", env_name_theorem},
    {"proposition", env_name_theorem},
    {"remark", env_name_theorem},
    {"satz", env_name_theorem},
    // latex pgf frontendlayer tikz-sty
    {"tikzpicture", {env_name_tikzpicture, M_Text}},
    // latex supertabular supertabular-sty
    {"supertabular", env_name_tabular},
    {"supertabular*", env_name_tabularstar},
    // latex tabu tabu-sty
    {"longtabu", env_name_tabu},
    {"tabu", env_name_tabu},
    // latex tabulary tabulary-sty
    {"tabulary", env_name_tabularstar},
    // latex tools longtable-sty
    {"longtable", env_name_tabular},
    // latex tools tabularx-sty
    {"tabularx", env_name_tabularstar},
    // latex tools verbatim-sty
    {"comment", env_name_comment},
    {"verbatim", env_name_verbatim},
    {"verbatim*", env_name_verbatim},
    // lualatex luacode luacode-sty
    {"luacode",
     {env_name_luacode,
      M_Text,
      {{1, '@', OTHER_CATEGORY},
       {'A', 'Z', LETTER_CATEGORY},
       {'[', '[', OTHER_CATEGORY},
       {'\\', '\\', ESCAPE_CATEGORY},
       {']', '`', OTHER_CATEGORY},
       {'a', 'z', LETTER_CATEGORY},
       {'{', '{', BEGIN_CATEGORY},
       {'|', '|', OTHER_CATEGORY},
       {'}', '}', END_CATEGORY},
       {'~', '~', OTHER_CATEGORY},
       {'\x7f', '\x7f', INVALID_CATEGORY}}}},
    {"luacode*", env_name_luacodestar},
};

}; // namespace LaTeX
