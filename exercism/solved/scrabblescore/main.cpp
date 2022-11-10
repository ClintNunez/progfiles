#include "scrabble_score.h"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::cout << "Enter word: " << std::endl;
    std::string word; std::cin >> word;
    
    std::cout << "Score: " << scrabble_score::score(word) << std::endl;

    return 0;
}
