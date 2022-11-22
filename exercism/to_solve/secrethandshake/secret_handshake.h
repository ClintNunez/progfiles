#if !defined(SECRET_HANDSHAKE_H)
#define SECRET_HANDSHAKE_H

#include <string>
#include <vector>

namespace secret_handshake {
    inline std::vector<std::string> commands(int decimal) {
        std::vector<std::string> translated;

        if(decimal != 16) {
            std::string handshake[] = {"wink", "double blink", "close your eyes", "jump"};
                
            std::string binary = "";
            int quotient = decimal, remainder;
            while(quotient != 0) {
                remainder = quotient % 2;
                quotient /= 2;

                binary.insert(0, std::to_string(remainder));
            }

            int binary_length = binary.length() - 1;
            
            if(binary_length > 4) {
                binary.substr(0, binary_length - 4);
                binary_length = binary.length() - 1;
            }
            
            for(int i = binary_length; i >= 0; i--) {
                if(binary[i] == '1') {
                    if(decimal > 16) {
                        if(!translated.empty()) {
                            translated.insert(translated.begin(), handshake[binary_length - i]);
                        } else {
                            translated.push_back(handshake[binary_length - i]);
                        }
                    } else {
                        translated.push_back(handshake[binary_length - i]);
                    }
                } 
            }
        }
        return translated;
    }
}

#endif
