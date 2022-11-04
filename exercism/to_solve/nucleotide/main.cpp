#include "nucleotide_count.h"
#include<iostream>
#include<string>

int main() {
    std::cout << "Enter DNA: ";
    std::string dna; std::cin >> dna;
    
    nucleotide_count::counter DNA(dna);

    auto result = DNA.nucleotide_counts();
    
    for(auto& eachPair : result) {
        std::cout << eachPair.first << " " << eachPair.second << std::endl; 
    }

    std::cout << "Enter nucleotide to count: ";
    char nucleotide; std::cin >> nucleotide;

    std::cout << "Count: " << DNA.count(nucleotide) << std::endl;
        
    return 0;
}
