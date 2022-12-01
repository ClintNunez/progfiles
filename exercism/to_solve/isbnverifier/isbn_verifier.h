#if !defined(ISBN_VERIFIER_H)
#define ISBN_VERIFIER_H

#include <string>

/*
 The ISBN-10 format is 9 digits (0 to 9) plus one check character (either a digit or an X 
 only). In the case the check character is an X, this represents the value '10'. These may 
 be communicated with or without hyphens, and can be checked for their validity by the 
 following formula:

 (d₁ * 10 + d₂ * 9 + d₃ * 8 + d₄ * 7 + d₅ * 6 + d₆ * 5 + d₇ * 4 + d₈ * 3 + d₉ * 2 + d₁₀ * 1) mod 11 == 0

 Caveats
Converting from strings to numbers can be tricky in certain languages. Now, it's even 
trickier since the check digit of an ISBN-10 may be 'X' (representing '10'). For instance 
3-598-21507-X is a valid ISBN-10.
*/

namespace isbn_verifier {
    inline bool is_valid(std::string isbn) {

        return true;
    }
}

#endif
