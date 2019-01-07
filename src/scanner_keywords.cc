#include "scanner.hh"

namespace LaTeX {

using std::string;
using std::unordered_map;

unordered_map<string, SymbolType> Scanner::keywords = {
    {"to", to},    {"bp", unit},   {"cc", unit},    {"cm", unit},
    {"dd", unit},  {"em", unit},   {"ex", unit},    {"fi", unit},
    {"fil", unit}, {"fill", unit}, {"filll", unit}, {"in", unit},
    {"mm", unit},  {"mu", unit},   {"nc", unit},    {"nd", unit},
    {"pc", unit},  {"pt", unit},   {"sp", unit},    {"spread", spread},
};

}; // namespace LaTeX
