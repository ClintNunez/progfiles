#if !defined(CRYPTO_SQUARE_H)
#define CRYPTO_SQUARE_H

#include <math.h>
#include <string>
#include <vector>

// TODO try using references

namespace crypto_square {
    class cipher {
        private:
            std::string result = "";
            std::string word;
            std::vector<std::string> segments_result;

        public:
            cipher(std::string input_word) {
                word = input_word;
            }

            // methods

            // will remove space, special characters and 
            // all letters are lowercased
            std::string normalize_plain_text() {
                result = "";
                for(int i = 0; i < int(word.length()); i++) {
                    if(isalpha(word[i])) {
                        if(isupper(word[i]))
                            result.push_back(char(word[i] + 32));
                        else 
                            result.push_back(word[i]);
                    } else if(isdigit(word[i])) {
                        result.push_back(word[i]);
                    }

                }

                return result;
            }

            // will segment the word into sub strings
            // same logic for the number of column and row
            // for the cipher
            std::vector<std::string> plain_text_segments() {
                std::string normalized = crypto_square::cipher::normalize_plain_text();
                
                int len = normalized.length();
                int sub_len = ceil(sqrt(len));
                std::string sub = "";

                for(int i = 0; i < len; i += sub_len) {
                    sub = normalized.substr(i, sub_len);
                    segments_result.push_back(sub);
                }

                return segments_result;
            } 

            // will cipher the text
            std::string cipher_text() {
                std::string normalized = crypto_square::cipher::normalize_plain_text();
                int len = normalized.length();
                int columns = ceil(sqrt(len));
                int index;
                result = "";
                
                for(int i = 0; i < columns; i++) {
                    for(int j = 0; j < columns; j++) {
                        index = columns * j + i;
                        if(index < len) 
                            result.push_back(normalized[index]);
                    }
                }

                return result;
            }


            // will cipher the text but with spaces 
            // depending on the column and row
            std::string normalized_cipher_text() {
                std::string normalized = crypto_square::cipher::normalize_plain_text();
                int len = normalized.length();
                int columns = ceil(sqrt(len));
                int index;
                result = "";



                for(int i = 0; i < columns; i++) {
                    for(int j = 0; j < columns; j++) {
                        index = columns * j + i;

                        if(index < len)
                            result.push_back(normalized[index]);
                        else 
                            result.push_back(' ');
                    }
                    result.push_back(' ');
                }
                

                return result;
            }
    };

}

#endif
