#if !defined(DARTS_H)
#define DARTS_H

#include<math.h>

namespace darts {
    inline int score(double x, double y) {
        double distance_from_origin = sqrt((x * x) + (y * y));

        if(distance_from_origin <= 1)
            return 10;
        else if(distance_from_origin <= 5)
            return 5;
        else if(distance_from_origin <= 10)
            return 1;
        else 
            return 0;
    }
}

#endif
