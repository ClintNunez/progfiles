#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <map>

// CURRENT TODO
// TODO add functions for all methods of voting
// TODO add test in Get_Data_From_User and Get_Data_From_File to check if candidates are >= 2. less than 2 candidates are not allowed
// TODO test using files

// FINISHED TODO
//

std::vector<std::pair<std::string, std::vector<int>>> candidates;
std::vector<int> votes_per_group; // number of votes per groups
std::vector<std::string> result;
int num_of_candidates;                                  
int num_of_voting_groups; 

// process inputs
void Get_Data_From_User() {
    std::cout << "Enter number of candidates: ";
    std::cin >> num_of_candidates;

    while (num_of_candidates < 2) {
        std::cout << "Number of candidates should be at least 2." << std::endl;
        std::cout << "Enter number of candidates: ";
        std::cin >> num_of_candidates;
    }

    std::cout << "Enter number of voting groups: ";
    std::cin >> num_of_voting_groups;

    while (num_of_voting_groups <= 0) {
        std::cout << "Total number of voters should be at least 1." << std::endl;
        std::cout << "Enter total number of voters: ";
        std::cin >> num_of_voting_groups;
    }

    int rank_per_vote;
    std::string candidate_name;
    std::vector<int> rankings;
    bool repeat_flag = false;

    std::cout << "Enter candidate name and rankings:" << std::endl;
    for(int i = 0; i < num_of_candidates; i++) {
        if (!repeat_flag) {
            std::cin >> candidate_name;
        } else {
            std::cout << candidate_name;
        }

        for (int j = 0; j < num_of_voting_groups; j++) {
            std::cin >> rank_per_vote;

            if (rank_per_vote >= 1 && rank_per_vote <= num_of_candidates) {
                rankings.push_back(rank_per_vote);
                repeat_flag = false;
            } else {
                std::cout << "Rank should be at least 1 and up to the number of candidates." << std::endl;
                // reset variables and input stream
                rankings.clear();
                i--;
                repeat_flag = true;
                break;
            }
        }
        
        if (!repeat_flag)  {
            candidates.push_back(std::pair(candidate_name, rankings));
        }
        rankings.clear();
    }

    std::cout << "\tNumber of votes: ";
    int num_of_voters;
    for (int i = 0; i < num_of_voting_groups; i++) {
        std::cin >> num_of_voters;
        votes_per_group.push_back(num_of_voters);
    }
}

void Get_Data_From_File() {

}

//loop through each rank and find 1
//if rank is 1, get num of voters and add to votes
//after looping through all the candidates
//loop through the plurality vector and find the largest, 1st
//remove that to plurality and loop again, 2nd, 3rd, 4th...
vector<std::pair<std::string,int>> plurality;
void plurality() {
    /*Insert code*/

    



}

void pairwise() {

}

// for testing
void print() {
    // print candidates and their ranks
    for (int i = 0; i < num_of_candidates; i++) {
        std::cout << candidates[i].first << " ";
        std::vector<int> ranks = candidates[i].second;
        for(int j = 0; j < num_of_voting_groups; j++) {
            std::cout << ranks[j] << " ";
        }
        std::cout << std::endl;
    }

    // print number of voters
    std::cout << "Number of voters: ";
    for(int i = 0; i < num_of_voting_groups; i++) {
        std::cout << votes_per_group[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    Get_Data_From_User();
    print();

    return 0;
}
