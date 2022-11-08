#if !defined(SCRABBLE_SCORE_H)
#define SCRABBLE_SCORE_H

#include <string>
#include <vector>
#include <map>

/*
 * Solution: 
 *  Use std::map<std::vector<char>, int> for the letters and the corresponding scores
 *  loop through the letters and if it is the same,
 *  add the corresponding score to the total score.
 *
 */



namespace scrabble_score {

    inline int score(std::string word) {
        std::map<std::vector<char>, int> letterScores; 
        std::map<std::vector<char>, int> iterator;

        int word_length = word.length(), score = 0;
            
        for(int i = 0; i < word_length; i++) {
            /*Loop through the word*/
            for(auto eachScores = letterScores.begin(); eachScores != letterScores.end(); eachScores++) {
                std::vector<char> letters = eachScores->first;
                for(auto eachLetter = letters.begin(); eachLetter != letters.end(); eachLetter++) {
                    if(word[i] == *eachLetter) {
                        score += eachScores->second;
                    }
                }
            }
        }

        return score;
    }

}

#endif
