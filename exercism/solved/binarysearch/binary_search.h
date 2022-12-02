#if !defined(BINARY_SEARCH_H)
#define BINARY_SEARCH_H

#include <vector>
#include <stdexcept>

namespace binary_search {
    inline auto find(std::vector<int> data, int element) {
       
        if(data.empty() || element < data.front() || element > data.back()) 
            throw std::domain_error("Element not found");


        int start = 0, end = data.size() - 1, middle;

        while(start <= end) {
            middle = (start + end) / 2;
            if(element < data[middle]) 
                end = middle - 1;
            else if(element > data[middle]) 
                start = middle + 1;
            else 
                return middle;
        }

        throw std::domain_error("Element not found"); // if not found while looping
        return -1;
    }
}

#endif
