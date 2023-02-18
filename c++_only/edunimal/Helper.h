#if !defined(HELPER_H)
#define HELPER_H

#include <iostream>

namespace helper {
    inline void CLS() {
        std::cout << "\033[2J\033[1;1H";
    }
}

#endif
