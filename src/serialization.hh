#ifndef SERIALIZATION_HH_
#define SERIALIZATION_HH_

#include <cstring>

namespace LaTeX {

  struct SerializationBuffer {
    char* buffer;
    unsigned length = 0;

    SerializationBuffer(char* b) {
      buffer = b;
    }

    template<class T> SerializationBuffer& operator <<(const T& value) {
      std::memcpy(buffer, &value, sizeof(T));

      buffer += sizeof(T);
      length += sizeof(T);

      return *this;
    }
  };

  struct DeserializationBuffer {
    const char* buffer;
    unsigned length;

    DeserializationBuffer(const char* b, unsigned l) {
      buffer = b;
      length = l;
    }

    template<class T> DeserializationBuffer& operator >>(T& value) {
      std::memcpy(&value, buffer, sizeof(T));

      buffer += sizeof(T);
      length -= sizeof(T);

      return *this;
    }
  };

}

#endif  // SERIALIZATION_HH_
