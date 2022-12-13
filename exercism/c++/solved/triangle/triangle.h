#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include<stdexcept>

namespace triangle {
    enum flavor {equilateral, isosceles, scalene};

    inline int kind(double s1, double s2, double s3) {
        if(s1 <= 0 || s2 <= 0 || s2 <= 0) { 
            throw std::domain_error("all sides should be greater than 0.");
        } else {
            double sumOfSmall, largest = s1;
            if(largest > s2) {
                if(largest > s3){
                    sumOfSmall = s2 + s3;
                } else {
                    largest = s3;
                    sumOfSmall = s1 + s2;
                }
            } else {
                largest = s2;
                if(largest > s3) {
                    sumOfSmall = s1 + s3;
                } else {
                    largest = s3;
                    sumOfSmall = s1 + s2;
                }
            }

            if(sumOfSmall < largest) {
                throw std::domain_error("given sides violate triangle inequality.");
            }

            if(s1 == s2 && s1 == s3) {
                return triangle::flavor::equilateral;
            } else if(s1 == s2 || s2 == s3 || s1 == s3) {
                return triangle::flavor::isosceles;
            } else {
                return triangle::flavor::scalene;
            }
        }
    }
}

#endif 
