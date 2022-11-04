#if !defined(SIEVE_H)
#define SIEVE_H

#include<bits/stdc++.h>
#include<vector>

namespace sieve {
    std::vector<int> primes(int limit) {
        bool pMarks[limit + 1];
        memset(pMarks, true, sizeof(pMarks));

        std::vector<int> listOfPrimes;
        
        for(int p = 2; p * p <= limit; p++) { // get start numbers
            if(pMarks[p]) {
                for(int i = p * p; i <= limit; i += p) {
                    pMarks[i] = false;
                }
            }
        }
        
        for(int i = 2; i <= limit; i++) {
            if(pMarks[i]) {
                listOfPrimes.push_back(i);
            }
        }

        return listOfPrimes;
    }
}

#endif
