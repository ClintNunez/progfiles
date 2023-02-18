#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <fstream>

/*
 * TODO
 * - Add functions for finding definitions from a binary file.
 *
 *
 * */

namespace helper {
    inline void CLS() {
        std::cout << "\033[2J\033[1;1H";
    }
}

#endif
