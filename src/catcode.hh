#ifndef CATCODE_HH_
#define CATCODE_HH_

#include <map>
#include <unordered_map>
#include <vector>

#include "serialization.hh"

namespace LaTeX {

enum Category: uint8_t {
  ESCAPE_CATEGORY,
  BEGIN_CATEGORY,
  END_CATEGORY,
  MATH_SHIFT_CATEGORY,
  ALIGNMENT_TAB_CATEGORY,
  EOL_CATEGORY,
  PARAMETER_CATEGORY,
  SUPERSCRIPT_CATEGORY,
  SUBSCRIPT_CATEGORY,
  IGNORED_CATEGORY,
  SPACE_CATEGORY,
  LETTER_CATEGORY,
  OTHER_CATEGORY,
  ACTIVE_CHAR_CATEGORY,
  COMMENT_CATEGORY,
  INVALID_CATEGORY
};

enum CategoryFlag: unsigned int {
  ESCAPE_FLAG = 1 << ESCAPE_CATEGORY,
  BEGIN_FLAG = 1 << BEGIN_CATEGORY,
  END_FLAG = 1 << END_CATEGORY,
  MATH_SHIFT_FLAG = 1 << MATH_SHIFT_CATEGORY,
  ALIGNMENT_TAB_FLAG = 1 << ALIGNMENT_TAB_CATEGORY,
  EOL_FLAG = 1 << EOL_CATEGORY,
  PARAMETER_FLAG = 1 << PARAMETER_CATEGORY,
  SUPERSCRIPT_FLAG = 1 << SUPERSCRIPT_CATEGORY,
  SUBSCRIPT_FLAG = 1 << SUBSCRIPT_CATEGORY,
  IGNORED_FLAG = 1 << IGNORED_CATEGORY,
  SPACE_FLAG = 1 << SPACE_CATEGORY,
  LETTER_FLAG = 1 << LETTER_CATEGORY,
  OTHER_FLAG = 1 << OTHER_CATEGORY,
  ACTIVE_CHAR_FLAG = 1 << ACTIVE_CHAR_CATEGORY,
  COMMENT_FLAG = 1 << COMMENT_CATEGORY,
  INVALID_FLAG = 1 << INVALID_CATEGORY
};

struct CatCodeInterval {
  int32_t begin, end;
  Category category;
};

class CatCodeTable {
protected:
  uint8_t level = 0;
  std::unordered_map<int32_t, std::map<uint8_t, Category>> codes;

  void set_catcode(const int32_t key, Category cat);

  Category get_catcode(const int32_t key) const;

public:
  CatCodeTable () {}

  CatCodeTable (std::initializer_list<CatCodeInterval> init) {
    set(init);
  }

  void reset();

  void set(const std::vector<CatCodeInterval>& intervals);

  inline Category operator[](const int32_t key) const {
    return get_catcode(key);
  }

  void push();

  void pop();

  friend SerializationBuffer& operator <<(SerializationBuffer& buffer, const CatCodeTable& table);

  friend DeserializationBuffer& operator >>(DeserializationBuffer& buffer, CatCodeTable& table);
};

}

#endif // CATCODE_HH_
