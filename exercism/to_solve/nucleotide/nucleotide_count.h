#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include<map>
#include<string>
#include<stdexcept>

namespace nucleotide_count {

    class counter {
        private:
            std::map<char, int> nucleotides{
                {'A', 0},
                {'T', 0},
                {'C', 0},
                {'G', 0},
            };    
        public: 
            counter(std::string dna) {
                int len = dna.length();
                for(int i = 0; i < len; i++) {
                    if(dna[i] == 'A' || dna[i] == 'T' || dna[i] == 'C' || dna[i] == 'G') {
                        for(auto& eachPair : nucleotides) {
                            if(eachPair.first == dna[i]) {
                                eachPair.second++;
                            }
                        }
                    } else {
                        throw std::invalid_argument("Given DNA is not valid.");
                    }
                }
            }

            std::map<char, int> nucleotide_counts() {
                return nucleotides;
            }

            int count(char nucleotide) {
                if(nucleotide == 'A' || nucleotide == 'T' || nucleotide == 'C' || nucleotide == 'G') {
                    return nucleotides.at(nucleotide);
                } else {
                    throw std::invalid_argument("Given nucleotide is not valid.");
                }
            }

    };
}

#endif
