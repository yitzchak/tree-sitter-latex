#include "scanner.hh"

namespace LaTeX {

using std::string;
using std::unordered_map;

unordered_map<string, CatCodeCommand> Scanner::names = {
    // latex base ltxdoc-cls
    {"ltxdoc", {name, MF_Text, true, MF_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
    // latex base ltxguide-cls
    {"ltxguide", {name, MF_Text, true, MF_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
    // latex dashundergaps l3doc-TUB-cls
    {
        "l3doc-TUB",
        {name,
         MF_Text,
         true,
         MF_None,
         {{'"', '"', VERB_DELIM_EXT_CATEGORY},
          {'|', '|', VERB_DELIM_EXT_CATEGORY}}},
    },
    // latex l3kernel l3doc-cls
    {
        "l3doc",
        {name,
         MF_Text,
         true,
         MF_None,
         {{'"', '"', VERB_DELIM_EXT_CATEGORY},
          {'|', '|', VERB_DELIM_EXT_CATEGORY}}},
    },
    // latex nltcdoc nltcdoc-cls
    {"nlctdoc", {name, MF_Text, true, MF_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
    // platex base plnews-cls
    {"plnews", {name, MF_Text, true, MF_None, {{'|', '|', VERB_DELIM_EXT_CATEGORY}}}},
};

}; // namespace LaTeX
