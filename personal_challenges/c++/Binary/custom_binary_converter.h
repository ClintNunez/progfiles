#if !defined(CUSTOM_BINARY_CONVERTER_H)
#define CUSTOM_BINARY_CONVERTER_H

#include <string>
#include <iostream>
#include <vector>
#include <math.h>

namespace custom_binary_converter {
    const int binaryValues[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    class converter {
        private:
            // variables for converting binary to decimal
            int binaryLength, decimal = 0;
            std::vector<std::string> input_binary_vector;

            // variables for converting decimal to binary
            std::string binary = "";
            std::string::iterator stringIt;
            int bit, quotient = 0;

        public:
            converter() {}
        
            // not needed to be a return type of string
            int binary_to_decimal(std::string input_binary) {
                // insert code for using pow.
                decimal = 0;
                int index_length = input_binary.length() - 1;
                for(int i = index_length; i >= 0; i--) {
                    if(input_binary[i] == '1') {
                        decimal += pow(2, index_length - i);
                    }
                }

                return decimal;
            }

            std::string decimal_to_binary(int decimal) {
                binary = "";
                quotient = decimal;
                while(quotient != 0) {
                    bit = quotient % 2;
                    quotient = quotient / 2;

                    binary.insert(0, std::to_string(bit));
                }
                return binary;
            }

    };

}

#endif
