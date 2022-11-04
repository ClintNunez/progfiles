#include "atbash_cipher.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Enter plain text to cipher: ";
    std::string plain; std::cin >> plain;

    std::cout << "Cipher: " << atbash_cipher::encode(plain) << std::endl;

    std::cout << "Enter ciphered text to decipher: ";
    std::string cipher; std::cin >> cipher;

    std::cout << "Plain: " << atbash_cipher::decode(cipher) << std::endl;

    return 0;
}
