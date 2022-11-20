#if !defined(ARMSTRONG_NUMBERS_H)
#define ARMSTRONG_NUMBERS_H

#include <math.h>
#include <string>

namespace armstrong_numbers {
    inline bool is_armstrong_number(int num) {
        
        int length = std::to_string(num).length(), tempnum = num, result = 0;

        for(int i = length - 1; i >= 0; i--) {
            result += pow((tempnum / (int) pow(10, i)), length);   
            tempnum %= (int) pow(10, i);
        }

        return (result == num) ? true : false;
    }
}

#endif 
