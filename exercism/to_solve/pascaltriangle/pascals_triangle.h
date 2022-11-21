#if !defined(PASCALS_TRIANGLE_H)
#define PASCALS_TRIANGLE_H

#include <vector>

namespace pascals_triangle {
    inline std::vector<std::vector<int>> generate_rows(int rows) {
        std::vector<std::vector<int>> triangle;
        std::vector<int> triangle_row;

        if(rows == 1) {
            triangle_row.push_back(1);
            triangle.push_back(triangle_row);
        } else if(rows == 2) {
            triangle_row.push_back(1);
            triangle.push_back(triangle_row);
            triangle_row.push_back(1);
            triangle.push_back(triangle_row);
        } else {
            // actual code

        }

        return triangle;
    }
}

#endif
