#if !defined(GRAINS_H)
#define GRAINS_H

// TODO fix, do not use powerOfTwo array, use math.h
namespace grains {
    unsigned long long int powerOfTwo[] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024 };

    unsigned long long int square(int squarePos) {
        
        unsigned long long int result = 1;
        int remain = 0;
        if(squarePos > 10) {
            for(int i = 0; i < squarePos / 10; i++) {
                result *= powerOfTwo[10];
            }
            if(squarePos % 10 > 0) {
                remain = squarePos % 10;
                    result *= powerOfTwo[remain - 1];
            }
        } else {
            result *= powerOfTwo[squarePos - 1];
        }
        return result;
    }

    unsigned long long int total() {
        unsigned long long int totalGrains = 1;
        for(int i = 0; i < 6; i++) {
            totalGrains *= powerOfTwo[10];
        }
        totalGrains *= powerOfTwo[5];
        if(totalGrains == 0) {
            totalGrains --; 
        }
        return totalGrains;
    }
}

#endif
