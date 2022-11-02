#if !defined(CUSTOM_BINARY_CONVERTER_H)
#define CUSTOM_BINARY_CONVERTER_H

#include <string>
#include <iostream>
#include <vector>

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

            int binary_to_decimalv2(std::string input_binary) {
                if(input_binary.length() > 10) {
                    while(!input_binary.empty()) {
                        if(input_binary.length() > 10) {
                            input_binary_vector.push_back(input_binary.substr(input_binary.length() - 9, input_binary.length()));
                            input_binary.erase(input_binary.length() - 9, input_binary.length());
                        } else {
                            input_binary_vector.push_back(input_binary.substr(0, input_binary.length + 1));
                            input_binary.erase(input_binary.begin(), input_binary.begin() + (input_binary.length() - 1));
                        }
                    }
                }

                for(int i = 0; i < input_binary_vector.size(); i++) {
                    std::string current_binary = input_binary_vector.at(i);
                    for(int j = 0; j < current_binary.length(); j++) {
                        if(current_binary[i] == '1') {
                            decimal += binaryValues[j];
                        }
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
