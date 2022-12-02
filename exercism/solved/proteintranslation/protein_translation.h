#if !defined(PROTEIN_TRANSLATION_H)
#define PROTEIN_TRANSLATION_H

#include <vector>
#include <string>
#include <stdexcept>

namespace protein_translation {
    inline std::vector<std::string> proteins(std::string RNA) {
        std::vector<std::string> translated;
        std::string codon; 
        int start = 0, end = 3; 

        if(RNA.length() % 3 == 0) {
            for(int i = 0; i < RNA.length() / 3; i++) {
                codon = RNA.substr(start,end);
                
                if(codon[0] == 'A') {
                    translated.push_back("Methionine");
                }else if(codon[1] == 'U') {
                    if(codon[2] == 'U' || codon[2] == 'C') {
                        translated.push_back("Phenylalanine");
                    } else if(codon[2] == 'A' || codon[2] == 'G') {
                        translated.push_back("Leucine");
                    } else {
                        throw std::invalid_argument("Given RNA is not valid.");
                    }
                } else if(codon[1] == 'C') {
                    if(codon[2] == 'U' || codon[2] == 'C' || codon[2] == 'A' || codon[2] == 'G') {
                        translated.push_back("Serine");
                    } else {
                        throw std::invalid_argument("Given RNA is not valid.");
                    }
                } else if(codon[1] == 'A') {
                    if(codon[2] == 'U' || codon[2] == 'C') {
                        translated.push_back("Tyrosine");
                    } else if(codon[2] == 'A' || codon[2] == 'G'){
                        break;
                    } else {
                        throw std::invalid_argument("Given RNA is not valid.");
                    }
                } else if(codon[1] == 'G') {
                    if(codon[2] == 'U' || codon[2] == 'C') {
                        translated.push_back("Cysteine");
                    } else if(codon[2] == 'G'){
                        translated.push_back("Tryptophan");
                    } else if(codon[2] == 'A'){
                        break;
                    } else {
                        throw std::invalid_argument("Given RNA is not valid.");
                    }
                }
                
                // after the translation;
                start += 3; end += 3;
            }
        } else {
            throw std::invalid_argument("Given RNA is not valid.");
        }

        return translated;
    }

}

#endif 

//Codon	                Protein
//AUG	                Methionine
//UUU, UUC	            Phenylalanine
//UUA, UUG	            Leucine
//UCU, UCC, UCA, UCG	Serine
//UAU, UAC	            Tyrosine
//UGU, UGC	            Cysteine
//UGG	                Tryptophan

//UAA, UAG, UGA	        STOP
