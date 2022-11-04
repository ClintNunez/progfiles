#if !defined(TRINARY_H)
#define TRINARY_H

#include <string>
#include <math.h>

#include <iostream>

namespace trinary {
    int to_decimal(std::string input_trinary) {
        int decimal = 0, digit, input_trinary_length = input_trinary.length() - 1;

        for(int i = input_trinary_length; i >= 0; i--) {
            switch(input_trinary[i]) {
                case '0':
                    decimal += 0;
                    break;
                case '1':
                    decimal += 1 * pow(3, input_trinary_length - i);
                    break;
                case '2':
                    decimal += 2 * pow(3, input_trinary_length - i);
                    break;
                default:
                    return 0;
                    break;
            }
        }
        return decimal;
    }
}

#endif
