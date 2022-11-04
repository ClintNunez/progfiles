#if !defined(NTH_PRIME_H)
#define NTH_PRIME_H

namespace nth_prime {
    int nth(int primePos) {
        bool pFlags[primePos + 1];
        memset(pFlags, true, sizeof(pFlags));

        // using sieve of eratosthenes is wrong
        for(int pos = 2; pos * pos <= primePos; pos++) {
            if(pFlags[pos]) {
                for(int i = pos * pos; i <= primePos; i += pos) {
                    pFlags[i] = false;
                }
            }
        }



        return 0;
    }
}

#endif
