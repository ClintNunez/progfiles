#if !defined(PASCALS_TRIANGLE_H)
#define PASCALS_TRIANGLE_H

#include <vector>

namespace pascals_triangle {
    inline std::vector<std::vector<int>> generate_rows(int rows) {
        std::vector<std::vector<int>> triangle;
        std::vector<int> triangle_row;
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<i+1;j++){
                if(j==0||j==i){
                    triangle_row.push_back(1);
                } else {
                    triangle_row.push_back(triangle[i-1][j-1]+triangle[i-1][j]);
                }
            }
            triangle.push_back(triangle_row);
            triangle_row.clear();
        }
        return triangle;
    }
}

#endif
