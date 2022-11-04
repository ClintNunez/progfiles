#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include <string>
#include <unordered_set>
#include <map>

#include <iostream>

// use lower_bound
namespace allergies {
    class allergy_test {
        private:
            std::unordered_set<std::string> allergies;

            std::map<std::string, int> allergyList = {
                {"eggs", 1},
                {"peanuts", 2},
                {"shellfish", 4},
                {"strawberries", 8},
                {"tomatoes", 16},
                {"chocolate", 32},
                {"pollen", 64},
                {"cats", 128}
            };
        public:
            allergy_test(int allergyScore) {
                if(allergyScore > 255) {
                    allergyScore -= 256;
                }
                while(allergyScore != 0) {  
                    for(std::map<std::string, int>::reverse_iterator eachElement = allergyList.rbegin(); eachElement != allergyList.rend(); eachElement++) {
                        if(allergyScore >= eachElement->second) {
                           allergyScore -= eachElement->second;
                           allergies.insert(eachElement->first);
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
//The list of items (and their value) that were tested are:

//eggs (1) 0
//peanuts (2) 1
//shellfish (4) 2
//strawberries (8) 3 
//tomatoes (16) 4
//chocolate (32) 5
//pollen (64) 6
//cats (128) 7
