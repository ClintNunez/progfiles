#if !defined(NTH_PRIME_H)
#define NTH_PRIME_H

#include <math.h>
#include <stdexcept>

namespace nth_prime {
    inline bool is_prime(double pos) {
        for (int i = 2; i <= sqrt(pos); i++) {
            if ((int) pos % i == 0) {
                return false;
            }
        }
        return true;
    }


    inline int nth(int prime_pos) {
        if (prime_pos == 0) {
            throw std::domain_error("0 not a valid pos");
        }

        int prime_counter = 0, num = 2, prime = 0;

        while (prime_counter < prime_pos) {
            if (nth_prime::is_prime(num)) {
                prime_counter++;
                prime = num;
            } 

            num++;
        }

        return prime;
    }
}

#endif
