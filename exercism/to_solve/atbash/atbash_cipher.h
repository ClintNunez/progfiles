#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>
#include <cctype>
#include <iostream>

/*
 * Solution: get decimal value of char, charVal;
 * decimal value of the ciphered char will be:
 *  decimal value of z - ((difference of a - z) - decimal value of z - charVal)
 */

namespace atbash_cipher {
    std::string encode(std::string plain) {
        std::string cipher = "";
        int plain_length = plain.length();  
        int char_ascii_val;
        char newChar;
        
        for(int i = 0; i < plain_length; i++) {
            if(plain[i] != ' ') {
                char_ascii_val = (int)tolower(plain[i]);
                newChar = (char) char_ascii_val; 
            }
        }
        return "";
    }

    std::string decode(std::string cipher) {
        return "";
    }
}

#endif
