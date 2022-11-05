#if !defined(SIEVE_H)
#define SIEVE_H

#include<bits/stdc++.h>
#include<vector>

namespace sieve {
    inline std::vector<int> primes(int limit) {
        std::vector<int> pMarks(limit + 1);
        std::fill(pMarks.begin(), pMarks.end(), true);

        std::vector<int> listOfPrimes;
        
        for(int p = 2; p * p <= limit; p++) { // get start numbers
            if(pMarks.at(p)) {
                for(int i = p * p; i <= limit; i += p) {
                    pMarks.at(i) = false;
                }
            }
        }
        
        for(int i = 2; i <= limit; i++) {
            if(pMarks.at(i)) {
                listOfPrimes.push_back(i);
            }
        }

        return listOfPrimes;
    }
}

#endif
