#include "scanner.hh"

namespace LaTeX {

using std::string;
using std::unordered_map;

unordered_map<string, SymbolDescription> Scanner::names = {
    // latex base ltxdoc-cls
    {"ltxdoc", {name, M_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
    // latex base ltxguide-cls
    {"ltxguide", {name, M_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
    // latex dashundergaps l3doc-TUB-cls
    {
        "l3doc-TUB",
        {name,
         M_None,
         {{'"', '"', VERB_DELIM_EXT_CATEGORY},
          {'|', '|', VERB_DELIM_EXT_CATEGORY}}},
    },
    // latex l3kernel l3doc-cls
    {
        "l3doc",
        {name,
         M_None,
         {{'"', '"', VERB_DELIM_EXT_CATEGORY},
          {'|', '|', VERB_DELIM_EXT_CATEGORY}}},
    },
    // latex nltcdoc nltcdoc-cls
    {"nlctdoc", {name, M_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
    // platex base plnews-cls
    {"plnews", {name, M_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
};

}; // namespace LaTeX
