#if !defined(GRAINS_H)
#define GRAINS_H


namespace grains {

    inline unsigned long long int square(int squarePos) {
        return 1ULL << (squarePos - 1);
    }

    inline unsigned long long int total() {
        unsigned long long int totalGrains = 0;
        totalGrains--; 
    }
}

#endif
