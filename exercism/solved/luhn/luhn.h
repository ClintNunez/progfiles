#if !defined(LUHN_H)
#define LUHN_H

#include <string>

#include <iostream>

namespace luhn {
    inline bool valid(std::string id_num) {
        int length = id_num.length(), digits_ctr = 0, sum = 0, current_digit;
        
        if(length != 0) {
            for(int i = length; i > 0; i--) {
                if(isdigit(id_num[i - 1])) {
                    current_digit = (int) id_num[i - 1] - 48;
                    if(i % 2 != 0) {
                        current_digit = (current_digit * 2 > 9) ? current_digit * 2 - 9 : current_digit;
                    }

                    sum += current_digit;
                } else if(id_num[i] == ' ') {
                    continue;
                } else {
                    return false;
                }

                digits_ctr++;
            }

            if(digits_ctr > 1) {
                if(sum % 10 == 0) {
                    return true;
                }                
            }         
        } 

        return false;
    }
}

#endif
