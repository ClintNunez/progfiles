#include "crypto_square.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::string; using std::vector;
using std::ifstream; using std::getline;

int main() {
    ifstream input("input.in");
    string line;

    getline(input, line);

    crypto_square::cipher Cipher(line);

    string normalize_plain_text_res = Cipher.normalize_plain_text();
    vector<string> plain_text_segments_res = Cipher.plain_text_segments();
    string cipher_text_res = Cipher.cipher_text();
    string normalized_cipher_text_res = Cipher.normalized_cipher_text();

    cout << "normalize plain text: " << normalize_plain_text_res << endl;

    cout << "plain text segments: ";
    for(auto it = plain_text_segments_res.begin(); it != plain_text_segments_res.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "cipher text: " << cipher_text_res << endl;

    cout << "normalized cipher text: " << normalized_cipher_text_res << endl;


    return 0;
}
