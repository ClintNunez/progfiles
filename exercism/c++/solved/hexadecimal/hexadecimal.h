#if !defined(HEXADECIMAL_H)
#define HEXADECIMAL_H

#include <string>

namespace hexadecimal {
    inline uint32_t convert(std::string decimal) {
        uint32_t result = 0; 
        
        for(char c : decimal) {
            c = tolower(c);
            result <<= 4;

            if(isdigit(c)) {
                result |= int(c - '0');
            } else if(c >= 'a' && c <= 'f') {
                result |= int(c - 'a' + 10);
            } else {
                return 0;
            }
        }

        return result;
    }

}

#endif
