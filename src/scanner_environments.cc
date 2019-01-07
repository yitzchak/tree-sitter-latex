#include "scanner.hh"

namespace LaTeX {

using std::string;
using std::unordered_map;

unordered_map<string, Environment> Scanner::environments = {
    // latex amsmath amsmath-sty
    {"align", {env_name_display_math}},
    {"align*", {env_name_display_math}},
    {"alignat", {env_name_alignat}},
    {"alignat*", {env_name_alignat}},
    {"equation*", {env_name_display_math}},
    {"flalign", {env_name_display_math}},
    {"flalign*", {env_name_display_math}},
    {"gather", {env_name_display_math}},
    {"gather*", {env_name_display_math}},
    {"multiline", {env_name_display_math}},
    {"multiline*", {env_name_display_math}},
    {"split", {env_name_display_math}},
    {"split*", {env_name_display_math}},
    // latex base alltt-sty
    {"alltt",
     {env_name,
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
    {"array", {env_name_array}},
    {"displaymath", {env_name_display_math}},
    {"document", {env_name_document}},
    {"eqnarray", {env_name_display_math}},
    {"eqnarray*", {env_name_display_math}},
    {"equation", {env_name_display_math}},
    {"figure", {env_name_figure}},
    {"figure*", {env_name_figure}},
    {"math", {env_name_inline_math}},
    {"tabular", {env_name_tabular}},
    {"tabular*", {env_name_tabularstar}},
    {"thebibliography", {env_name_thebibliography}},
    // latex breqn breqn-sty
    {"darray", {env_name_dmath}},
    {"darray*", {env_name_dmath}},
    {"dgroup", {env_name_dmath}},
    {"dgroup*", {env_name_dmath}},
    {"dmath", {env_name_dmath}},
    {"dmath*", {env_name_dmath}},
    {"dseries", {env_name_dseries}},
    {"dseries*", {env_name_dseries}},
    // latex fancyvrb fancyvrb-sty
    {"BVerbatim", {env_name_Verbatim}},
    {"BVerbatim*", {env_name_Verbatim}},
    {"LVerbatim", {env_name_Verbatim}},
    {"LVerbatim*", {env_name_Verbatim}},
    {"Verbatim", {env_name_Verbatim}},
    {"Verbatim*", {env_name_Verbatim}},
    // latex filecontents filecontents
    {"filecontents", {env_name_filecontents}},
    {"filecontents*", {env_name_filecontents}},
    // latex listings listings-sty
    {"lstlisting", {env_name_lstlisting}},
    // latex minted minted-sty
    {"minted", {env_name_minted}},
    // latex supertabular supertabular-sty
    {"supertabular", {env_name_tabular}},
    {"supertabular*", {env_name_tabularstar}},
    // latex tabu tabu-sty
    {"longtabu", {env_name_tabu}},
    {"tabu", {env_name_tabu}},
    // latex tabulary tabulary-sty
    {"tabulary", {env_name_tabularstar}},
    // latex tools longtable-sty
    {"longtable", {env_name_tabular}},
    // latex tools tabularx-sty
    {"tabularx", {env_name_tabularstar}},
    // latex tools verbatim-sty
    {"comment", {env_name_comment}},
    {"verbatim", {env_name_verbatim}},
    {"verbatim*", {env_name_verbatim}},
    // lualatex luacode luacode-sty
    {"luacode",
     {env_name_luacode,
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
    {"luacode*", {env_name_luacodestar}},
};

}; // namespace LaTeX
