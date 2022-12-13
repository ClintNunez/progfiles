#if !defined(SERIES_H) 
#define SERIES_H

#include <deque>
#include <vector>
#include <string>
#include <stdexcept>

namespace series {
    inline std::vector<int> digits(std::string numbers) {
        std::vector<int> eachDigit;
        int numbers_length = numbers.length();

        for(int i = 0; i < numbers_length; i++) {
            int digit = (int)numbers[i] - 48;
            eachDigit.push_back(digit);
        }

        return eachDigit;
    }
    
    inline std::vector<std::vector<int>> slice(std::string numbers, int series_length) {
        std::vector<std::vector<int>> slicedDigits;
        std::deque<int> allDigits;

        int numbers_length = numbers.length();
        if(series_length > numbers_length) {
            throw std::domain_error("Not enough digits to slice.");
        }
        
        // get all digits
        for(int i = 0; i < numbers_length; i++) {
            int digit = (int)numbers[i] - 48;
            allDigits.push_back(digit);
        }

        while((int)allDigits.size() >= series_length) {
            std::vector<int> eachSeries;
            for(int i = 0; i < series_length; i++) {
                eachSeries.push_back(allDigits[i]);
            }
            allDigits.pop_front();
            slicedDigits.push_back(eachSeries);
        }

        return slicedDigits;
    }
}

#endif
