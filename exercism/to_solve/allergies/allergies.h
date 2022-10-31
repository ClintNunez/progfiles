#if !defined(ALLERGIES_H)
#define ALLERGIES_H

#include<string>
#include<set>

// retun a map of string and boolean
namespace allergies {
    const int ALLERGYLIST[] = {1,2,4,8,16,32,64,128};
    
    class allergy_test {
        private:
            std::unordered_set<std::string> allergies;
        public:
            allergy_test(int allergyScore) {
                // logic 
            }

            std::unordered_set<std::string> get_allergies() {
                return allergies;
            }

    };
}

#endif
