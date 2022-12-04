#if !defined(ETL_H)
#define ETL_H

#include <vector>
#include <cctype> // tolower()
#include <map>

namespace etl {
    inline std::map<char, int> transform(std::map<int, std::vector<char>> old) {
        std::map<char, int> new_values;

        std::vector<char> letters;
        for(auto each_element = old.begin(); each_element != old.end(); each_element++) {
            letters = each_element->second;
            for(char each_letter : letters) {
                new_values.insert(std::pair(tolower(each_letter), each_element->first));
            }
        }

        return new_values;
    }
}

#endif   
