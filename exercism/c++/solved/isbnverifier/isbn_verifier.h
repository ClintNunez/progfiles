#if !defined(ISBN_VERIFIER_H)
#define ISBN_VERIFIER_H

#include <string>

namespace isbn_verifier {
    inline bool is_valid(std::string isbn) {
        int n = isbn.size();
        

        // check if n with dash is greater than 13 or 
        // check if n without dash is not equal to 10
        //      n < 13 will tell me that the input string
        //      do not have dashes
        if(n > 13 || (n < 13 && n != 10)) 
            return false;

        int res = 0;

        for(int i = 0, multiplier = 10; i < n && multiplier > 0; i++, multiplier--) {
            if(i == n-1) {
                if(isdigit(isbn[i])) {
                    res += ((int)isbn[i] - '0') * multiplier;
                } else if(isbn[i] == 'X') {
                    res += 10;
                } else {
                    // means that the last character is not a digit or not X
                    // which is invalid
                    multiplier++;
                    return false; 
                }
            } else if(isbn[i] == '-') {
                multiplier++;
                continue;
            } else if(!isdigit(isbn[i])) {
                return false;
            } else {
                res += ((int)isbn[i] - '0') * multiplier;
            }

        }

        return (res % 11 == 0);
    }
}

#endif
