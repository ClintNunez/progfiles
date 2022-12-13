#if !defined(SUM_OF_MULTIPLES_H)
#define SUM_OF_MULTIPLES_H

#include<vector>

namespace sum_of_multiples {
    inline int to(std::vector<int> multiples, int limit) {
        int sum = 0;
        for(int i = 1; i < limit; i++) {
            for(int &eachMultiple : multiples) {
                if(i % eachMultiple == 0) {
                    sum += i;
                    break;
                } 
            }     
        }
        return sum;
    }
}

#endif
