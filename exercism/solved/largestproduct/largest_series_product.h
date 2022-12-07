#if !defined(LARGEST_SERIES_PRODUCT_H)
#define LARGEST_SERIES_PRODUCT_H

#include <string>
#include <deque>
#include <stdexcept>

namespace largest_series_product {
    inline int largest_product(std::string &number, int &substr_len) {
        int num_len = number.length();

        if(number.empty()) {
            throw std::domain_error("Number should not be empty.");
        }
        else if(substr_len < 0) {
            throw std::domain_error("Substring length should be positive.");
        }
        else if(num_len < substr_len) {
            throw std::domain_error("Substring length should be less than number length.");
        }

        int final_res = 1, current_res = 1;
        std::deque<int> digits;

        // convert number to int
        for(int i = 0; i < num_len; i++) {
            if(isdigit(number[i]))
                digits.push_back(number[i] - 48);
            else 
                throw std::domain_error("Invalid number containing non-digit characters.");
        }

        // initialize final_res
        for(int i = 0; i < substr_len; i++) 
            final_res *= digits[i];

        digits.pop_front();

        // get current_res to find the largest prod
        while((int)digits.size() >= substr_len) {
            for(int i = 0; i < substr_len; i++) 
                current_res *= digits[i];

            if(current_res > final_res)
                final_res = current_res;

            current_res = 1;
            digits.pop_front();
        }

        return final_res;
    }

} 
#endif 
