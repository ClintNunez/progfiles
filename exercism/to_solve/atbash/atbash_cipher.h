#if !defined(ATBASH_CIPHER_H)
#define ATBASH_CIPHER_H

#include <string>

// TODO fix error in encode. error in separating letters
namespace atbash_cipher {

    inline std::string encode(std::string plain) {
        std::string cipher = "";
        int plain_length = plain.length();  
        int char_ascii_val;
        char newChar;
        
        for(int i = 0; i < plain_length; i++) {
            if((int) cipher.length() % 5 == 0 && (int) cipher.length() != 0) {
                cipher.push_back(' ');
            }

            if(plain[i] != ' ') {
                char_ascii_val = (int) tolower(plain[i]);
                newChar = (char) (122 - (25 - (122 - char_ascii_val))); 
                cipher.push_back(newChar);
            }
        }
        return cipher;
    }

    inline std::string decode(std::string cipher) {
        std::string plain = "";
        int cipher_length = cipher.length();  
        int char_ascii_val;
        char newChar;
        
        for(int i = 0; i < cipher_length; i++) {
            if(cipher[i] != ' ') {
                if(isalpha(cipher[i])) {
                    char_ascii_val = (int) tolower(cipher[i]);
                    newChar = (char) (97 + (122 - char_ascii_val)); 
                    plain.push_back(newChar);
                } else {
                    plain.push_back(cipher[i]);
                }
            } 
        }
        return plain;
    }
}

#endif
