#if !defined(PRIME_FACTORS_H)
#define PRIME_FACTORS_H

#include <math.h>
#include <vector>

namespace prime_factors {
	inline std::vector<int> of(int num) {
		std::vector<int> prime_factors;

        if(num != 1) {
            int current_prime = 2;
            while(num != 1) {
                while(num % current_prime == 0) {
                    num /= current_prime;
                    prime_factors.push_back(current_prime);
                }
                
                current_prime++;
            }
        }
       
		return prime_factors;
	}
}

#endif
