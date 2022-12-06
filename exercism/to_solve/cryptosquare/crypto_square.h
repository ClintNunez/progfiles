#if !defined(CRYPTO_SQUARE_H)
#define CRYPTO_SQUARE_H

#include <math.h>
#include <string>
#include <vector>

namespace crypto_square {
    class cipher {
        private:
            std::string result;
            std::vector<std::string> segments_result;

        public:
            cipher(std::string word) {

            }

            // methods

            // will remove space, special characters and 
            // all letters are lowercased
            std::string normalize_plain_text() {

                return result;
            }

            // will segment the word into sub strings
            // same logic for the number of column and row
            // for the cipher
            std::vector<std::string> plain_text_segments() {

                return segments_result;
            } 

            // will cipher the text
            std::string cipher_text() {

                return result;
            }


            // will cipher the text but with spaces 
            // depending on the column and row
            std::string normalized_cipher_text() {

                return result;
            }
    };


}

#endif
