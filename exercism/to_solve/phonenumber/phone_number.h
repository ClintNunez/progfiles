#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>
#include <stdexcept>

/*
NANP numbers are ten-digit numbers consisting of a three-digit Numbering Plan Area code, 
commonly known as area code, followed by a seven-digit local number. The first three digits 
of the local number represent the exchange code, followed by the unique four-digit number 
which is the subscriber number.

The format is usually represented as

(NXX)-NXX-XXXX
where N is any digit from 2 through 9 and X is any digit from 0 through 9.

Your task is to clean up differently formatted telephone numbers by removing punctuation and 
the country code (1) if present.

For example, the inputs

+1 (613)-995-0253
613-995-0253
1 613 995 0253
613.995.0253
should all produce the output

6139950253
Sample test case that idk how to do
    REQUIRE("223" == phone_number::phone_number("+1 (223) 456-7890").area_code());

    const phone_number::phone_number phone("+1 (223) 456-7890");
    REQUIRE("(223) 456-7890" == std::string(phone));
*/

/* throws domain error when digits is <= 9 or >= 11
 *
 * */


namespace phone_number {
    class phone_number {

    };
}

#endif
