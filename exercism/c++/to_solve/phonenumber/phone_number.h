#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>
#include <stdexcept>

namespace phone_number {

    class phone_number {
        private:
            std::string extracted_digits = "";
        public:
            phone_number() {}

            phone_number(std::string input_number) {
                // gets all digits
                for(auto& c : input_number) {
                    if(std::isdigit(c)) 
                        extracted_digits.push_back(c);
                }

                // if digits are 11 and the first digit(country code) is not 1 then invalid
                // if digits are not 10 or 11 then invalid 
                //  meaning that digits are lessthan 10 or greater than 11
                if((extracted_digits.size() == 11 && extracted_digits[0] != '1') || (extracted_digits.size() != 10 && extracted_digits.size() != 11)) {
                    throw std::domain_error("");
                } 

                // remove country code if 11 digits | 11 - 10 = index 1
                //                     if 10 digits | 10 - 10 = index 0 
                extracted_digits = extracted_digits.substr(extracted_digits.size() - 10);

                // if first digit of area code and exchange code should be 2 - 9
                if(extracted_digits[0] < '2'  || extracted_digits[3] < '2') {
                    throw std::domain_error("");
                }

            }
                
            std::string number() {
                return extracted_digits;
            }

            std::string area_code() {
                return extracted_digits.substr(0, 3);
            }

            // returns a formatted phone number with country code removed
            operator std::string() const {
                return "(" + extracted_digits.substr(0, 3) + ") " + extracted_digits.substr(3,3) + '-' + extracted_digits.substr(6,4);
            }
    };
}

#endif 
