#if !defined(ISOGRAM_H)
#define ISOGRAM_H

#include <string>
#include <cstring>

namespace isogram {
    inline bool arr[27];
    inline bool is_isogram(std::string word) {
        int len = word.size();
        
        if(len == 0) {
            return true;
        }

        for(int i = 0; i < len; i++) {
            if(!isalpha(word[i])) continue;

            word[i] = tolower(word[i]);
            if(!arr[word[i] - 'a']) {
                arr[word[i] - 'a'] = 1;
            }
            else {
                memset(arr, 0, 27);
                return false;
            }
        }

        memset(arr, 0, 27);
        return true;
    }
    
}

#endif
