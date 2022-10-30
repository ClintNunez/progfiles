#if !defined(TRIANGLE_H)
#define TRIANGLE_H

#include<stdexcept>
#include<string>

namespace triangle {
    std::string kind(double s1, double s2, double s3) {
        double sides[] = {s1, s2, s3};
        //edge cases: at least one side is zero, at least one side is negative
        if(s1 <= 0 || s2 <= 0 || s2 <= 0) { 
            throw std::domain_error("all sides should be greater than 0.");
        } else {
            // check for triangle inequality
            double sumOfSmall, largest = s1;
            if(largest > s2) {
                if(largest > s3){
                    sumOfSmall = s2 + s3;
                    if(sumOfSmall < largest) {
                        throw std::domain_error("given sides violate triangle inequality.");
                    }
                } else {
                    largest = s3;
                    sumOfSmall = s1 + s2;
                    if(sumOfSmall < largest) {
                        throw std::domain_error("given sides violate triangle inequality.");
                    }
                }
            } else {
                largest = s2;
                if(largest > s3) {
                    sumOfSmall = s1 + s3;
                    if(sumOfSmall < largest) {
                        throw std::domain_error("given sides violate triangle inequality.");
                    }
                } else {
                    largest = s3;
                    sumOfSmall = s1 + s2;
                    if(sumOfSmall < largest) {
                        throw std::domain_error("given sides violate triangle inequality.");
                    }
                }
            }

            if(s1 == s2 && s1 == s3) {
                return "equilateral";
            } else if(s1 == s2 || s2 == s3 || s1 == s3) {
                return "isosceles";
            } else {
                return "scalene";
            }
        }

    }






}

#endif 
