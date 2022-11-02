#if !defined(CUSTOM_BINARY_CONVERTER_H)
#define CUSTOM_BINARY_CONVERTER_H

#include <string>
#include <iostream>

namespace custom_binary_converter {
    const int binaryValues[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    class converter {
        private:
            int binaryLength, decimal = 0;
            std::string binary = "";
            std::string::iterator stringIt;
            int bit, quotient = 0;

        public:
            converter() {}
        
            // not needed to be a return type of string
            std::string binary_to_decimal(std::string input_binary) {
                binaryLength = input_binary.length() - 1;
                
                // will only work when 9 < binaryLength < 19
                if(binaryLength > 9) {
                    decimal += 512 * binaryValues[binaryLength - 9];   
                    binaryLength = binaryLength - (binaryLength - 9);
                
                    // idk if this is a good solution
                    input_binary = input_binary.substr(1,input_binary.length() + 1);
                }

                for(int i = 0; i < 10; i++) {
                    if(binary[i] == '1') {
                        std::cout << "reached" << std::endl;
                        decimal += binaryValues[binaryLength - i];
                    }
                }

                return std::to_string(decimal);
            }
            

            std::string decimal_to_binary(int decimal) {
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
