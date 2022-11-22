#include <iostream>
#include <string>
#include <vector>
#include <map>

// CURRENT TODO
// TODO add functions for all methods of voting
// TODO use call by reference in these functions to preserve memory
// TODO add test in Get_Data_From_User and Get_Data_From_File to check if candidates are >= 2. less than 2 candidates are not allowed
// TODO test using files

// FINISHED TODO
//

std::map<std::string, std::vector<int>> candidate_rank;
std::vector<int> num_of_votes; // number of votes per rank
                                  
// process inputs
void Get_Data_From_User() {
    std::cout << "\tEnter number of candidates: ";
    int num_of_candidates; std::cin >> num_of_candidates

    while (num_of_candidates < 2) {
        std::cout << "\tNumber of candidates should be at least 2." << std::endl;
        std::cout << "\tEnter number of candidates: ";
        std::cin >> num_of_candidates;
    }

    std::cout << "\tEnter total number of voters: ";
    int total_voters; std::cin >> total_voters;

    while (total_voters <= 0) {
        std::cout << "\tTotal number of voters should be at least 1." << std::endl;
        std::cout << "\tEnter total number of voters: ";
        std::cin >> total_voters;
    }

    int rank_per_vote;
    while (num_of_candidates != 0) {
        std::cout << "\tEnter candidate name and rankings: ";
        std::string candidate_name;
        std::cin >> candidate_name;

        // for wrong inputs
        std::vector<int> wrong_inputs;
        std::vector<int> valid_inputs;
        
        while (true) {
            for (int i = 0; i < total_voters; i++) {
                std::cin >> rank_per_vote;
                if(rank_per_vote >= 1 && rank_per_vote <= num_of_candidates) {
                    valid_inputs.push_back(rank_per_vote);
                } else {
                    wrong_inputs.push_back(rank_per_vote);
                }
            }

            if(!wrong_inputs.empty()) {
                // TODO loop through the wrong inputs; 

            } else {
                break;
            }
        }
    }
}

void Get_Data_From_File() {

}

int main() {


    return 0;
}
