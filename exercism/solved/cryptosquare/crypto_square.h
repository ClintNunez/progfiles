#if !defined(CRYPTO_SQUARE_H)
#define CRYPTO_SQUARE_H

#include <math.h>
#include <string>
#include <vector>

namespace crypto_square {
    class cipher {
        private:
            std::string result = "";
            std::string word;
            std::vector<std::string> segments_result;

        public:
            cipher(std::string &input_word) {
                word = input_word;
            }

            // will remove space, special characters and 
            // all letters are lowercased
            std::string normalize_plain_text() {
                result = "";
                for(int i = 0; i < int(word.length()); i++) {
                    if(isalnum(word[i]))
                        result.push_back(tolower(word[i]));
                }

                return result;
            }

            // will segment the word into sub strings
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

                if(int(normalized.length()) == 0) {
                    return normalized;
                }
                
                int len = normalized.length();
                int columns = ceil(sqrt(len));
                int rows = ceil(double(len) / double(columns));
                int index;
                result = "";

                for(int i = 0; i < ((columns * rows) - len); i++)
                    normalized.push_back(' ');

                len = normalized.length();

                for(int i = 0; i < columns; i++) {
                    for(int j = 0; j < columns; j++) {
                        index = columns * j + i;
                        if(index < len)
                            result.push_back(normalized[index]);
                        else if(j > rows)
                            result.push_back(' ');
                    }
                    if(i != columns - 1) 
                        result.push_back(' ');
                }

                return result;
            }
    };

}

#endif
