#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>
#include <stdexcept>
#include <sstream>

namespace phone_number {

    class phone_number {
        private:
            std::string extracted_digits;
            char country_code;
            bool check_validity();
        public:
            phone_number(std::string& input_number) {
                for(char c : input_number) {
                    if(std::isdigit[c]) 
                        extracted_digits.push_back(c);
                }

                if(extracted_digits.size() == 11) {
                    country_code = extracted_digits[0];
                    extracted_digits.erase(begin(extracted_digits));
                }

                if(!check_validity()) 
                    throw std::domain_error("");
            }

            bool check_validity() {
                return extracted_digits.size() == 10
                    && std::stoi(area_code()) >= 200
                    && std::stoi(exchange_code()) >= 200
                    && country_code == '1';
            }
            
            std::string number() {
                return extracted_digits;
            }

            std::string area_code() {
                return extracted_digits.substr(0, 3);
            }

            std::string exchange_code() {
                return extracted_digits.substr(3,3);
            }

            std::string subscriber_num() {
                return extracted_digits.substr(6,4);
            }

            phone_number::operator std::string() {
                std::stringstream output{""};
                output << '(' << area_code() << ') ' << exchange_code() << '-' << subscriber_num();
                return output.str();
            }
    };
}

#endif 
