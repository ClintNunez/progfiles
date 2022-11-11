#if !defined(ARMSTRONG_NUMBERS_H)
#define ARMSTRONG_NUMBERS_H

#include <math.h>

namespace armstrong_numbers {
    inline bool is_armstrong_number(int num) {
        int length = 0, tempnum = num, result = 0;
        
        while(tempnum != 0) {
            tempnum /= 10;
            length++;
        }
        
        for(int i = length - 1; i >= 0; i--) {
            result += pow((num / (int) pow(10, i)), length);   
            num %= (int) pow(10, i);
        }
        
    }
}

#endif 
