#include <algorithm>

#include "catcode.hh"

namespace LaTeX {

using std::pair;
using std::map;
using std::vector;

void CatCodeTable::set_catcode(const int32_t key, Category cat) {
  if (cat == OTHER_CATEGORY && level == 0) {
    codes.erase(key);
    return;
  }

  codes[key][level] = cat;

  // if (all_of(codes[key].begin(), codes[key].end(), [](pair<uint8_t, Category> p){ return p.second == OTHER_CATEGORY; })) {
  //   codes.erase(key);
  // }
}

Category CatCodeTable::get_catcode(const int32_t key) const {
  auto it = codes.find(key);

  // OTHER is the default category.
  return (it == codes.cend() || it->second.empty()) ?
    OTHER_CATEGORY :
    it->second.crbegin()->second;
}

void CatCodeTable::reset(uint8_t init_protect_level) {
  level = init_protect_level;
  protect_level = init_protect_level;

  for (auto it = codes.begin(), it_end = codes.end(); it != it_end;) {
    for (auto lit = it->second.begin(), lit_end = it->second.end(); lit != lit_end;) {
      if (lit->first > protect_level) {
        lit = it->second.erase(lit);
      } else {
        lit++;
      }
    }

    if (it->second.empty()) {
      it = codes.erase(it);
    } else {
      it++;
    }
  }
}

void CatCodeTable::set(const vector<CatCodeInterval>& intervals) {
  for (const CatCodeInterval& interval: intervals) {
    for (int32_t ch = interval.begin; ch <= interval.end; ch++) {
      set_catcode(ch, interval.category);
    }
  }
}

void CatCodeTable::push(bool protect) {
  level++;
  if (protect) {
    protect_level = level;
  }
}

void CatCodeTable::pop() {
  if (level > protect_level) {
    for (auto it = codes.begin(); it != codes.end();) {
      it->second.erase(level);
      if (it->second.empty()) {
        it = codes.erase(it);
      } else {
        it++;
      }
    }

    level--;
  }
}

SerializationBuffer& operator <<(SerializationBuffer& buffer, const CatCodeTable& table) {
  // Count the characters that have non-zero level.
  unsigned ch_count = count_if(table.codes.cbegin(), table.codes.cend(),
    [](pair<int32_t, map<uint8_t, Category>> p) {
      return any_of(p.second.cbegin(), p.second.cend(), [](pair<uint8_t, Category> p2) { return p2.first != 0; });
    });

  buffer << table.level << table.protect_level << ch_count;

  for (auto it = table.codes.cbegin(); it != table.codes.cend(); it++) {
    uint8_t level_count = count_if(it->second.cbegin(), it->second.cend(), [](const pair<uint8_t, Category>& p){ return p.first != 0; });

    if (level_count > 0) {
      buffer << it->first << level_count;

      for (auto lit = it->second.cbegin(); lit != it->second.cend(); lit++) {
        if (lit->first != 0) {
          buffer << lit->first << lit->second;
        }
      }
    }
  }

  return buffer;
}

DeserializationBuffer& operator >>(DeserializationBuffer& buffer, CatCodeTable& table)  {
  table.reset();

  if (buffer.length != 0) {
    int32_t ch;
    unsigned ch_count;
    uint8_t level, level_count;
    Category cat;

    buffer >> table.level >> table.protect_level >> ch_count;

    for (; ch_count > 0; ch_count--) {
      buffer >> ch >> level_count;
      for (; level_count > 0; level_count--) {
        buffer >> level >> cat;
        table.codes[ch][level] = cat;
      }
    }
  }

  return buffer;
}

}
