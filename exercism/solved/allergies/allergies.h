#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <vector>
#include <unordered_set>

namespace allergies {
    class allergy_test {
        private:
            std::unordered_set<std::string> allergies;

            std::vector<std::pair<std::string, int>> allergyList = {
                {"cats", 128},
                {"pollen", 64},
                {"chocolate", 32}, 
                {"tomatoes", 16}, 
                {"strawberries", 8}, 
                {"shellfish", 4}, 
                {"peanuts", 2}, 
                {"eggs", 1}, 
            };

        public:
            allergy_test(int allergyScore) {
                if(allergyScore > 255) {
                    allergyScore -= 256;
                }
                while(allergyScore != 0) {  
                    for(int i = 0; i < 8; i++) {
                        if(allergyScore >= allergyList[i].second) {
                           allergyScore -= allergyList[i].second;
                           allergies.insert(allergyList[i].first);
                        }
                    }
                }
            }             

            std::unordered_set<std::string> get_allergies() {
                return allergies;
            }

            bool is_allergic_to(std::string allergy) {
                std::unordered_set<std::string>::const_iterator element = allergies.find(allergy);
                if(element != allergies.end()) {
                    return true;
                } else {
                    return false;
                }
            }
    };
}

#endif
