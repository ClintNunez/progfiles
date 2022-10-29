#include "sieve.h"
#include<iostream>
#include<bits/stdc++.h>

int main() {
    std::cout << "Enter limit: ";
    int limit; std::cin >> limit;

    std::vector<int> result = sieve::primes(limit);

    for(std::vector<int>::iterator itr = result.begin(); itr != result.end(); itr++) {
        std::cout << std::setw(4) << std::setfill('_') << std::right << *itr;
    }

    return 0;
}
