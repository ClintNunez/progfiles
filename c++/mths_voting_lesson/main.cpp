#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::cout; using std::endl;
using std::cin; using std::getline; 
using std::ifstream; using std::string;
using std::pair; using std::vector;

// CURRENT TODO
// TODO add functions for all methods of voting
// TODO test using files

// FINISHED TODO
// TODO add test in Get_Data_From_User and Get_Data_From_File to check if candidates are >= 2. less than 2 candidates are not allowed

vector<pair<string, vector<int>>> candidates;
vector<int> votes_per_group;
int candidates_num;
int voting_groups;

// process inputs
void Get_User_Input() {
    cout << "Number of candidates: ";
    cin >> candidates_num;

    while (candidates_num < 2) {
        cout << "Number of candidates should be at least 2." << endl;
        cout << "Number of candidates: ";
        cin >> candidates_num;
    }

    cout << "Number of voting groups: ";
    cin >> voting_groups;

    while (voting_groups <= 0) {
        cout << "Voting groups should be at least 1." << endl;
        cout << "Number of voting groups: ";
        cin >> voting_groups;
    }

    int rank, votes;
    string name;
    vector<int> rankings;
    bool repeat_flag = false;

    for(int i = 0; i < candidates_num; i++) {
        cout << "Candidate name: ";
        cin >> name;

        cout << "Ranks: ";
        for (int j = 0; j < voting_groups; j++) {
            cin >> rank;

            // this should print out all the valid ranks before the invalid
            while(rank < 1 || rank > candidates_num) {
                cout << "Rank should be at least 1 and up to the number of candidates." << endl;
                cout << "Ranks: ";

                for(int i = 0; i < (int) rankings.size(); i++)
                    cout << rankings[i] << " ";

                cin >> rank;
            }

            rankings.push_back(rank);
        }
        
        candidates.push_back(pair(name, rankings));
        rankings.clear();
    }

    cout << "Number of votes: ";
    for (int i = 0; i < voting_groups; i++) {
        cin >> votes;
        votes_per_group.push_back(votes);
    }
}

void Get_File_Input() {

}

vector<pair<string,vector<int>>> plurality_result;
vector<int> each_candidate_rank;
void plurality_method() {
    vector<int> votes_per_rank;
    for(int i=0;i<candidates_num;i++){
        votes_per_rank.assign(voting_groups, 0); // set vector to 0
        each_candidate_rank = candidates[i].second;
        for(int j=0;j<voting_groups;j++){
            votes_per_rank[each_candidate_rank[j]-1]+=votes_per_group[j];
        }
            
        plurality_result.push_back(pair(candidates[i].first, votes_per_rank));
    }
}

void getplurality_ranking() {
    /* output format:
     * 1. name - votes(won in 1st rankings)
     * 2. name - votes(won in 2nd rankings)
     * 3. name - votes(won in 3rd rankings)
     * */
    int high, curr_rank=1;
    string name;
    for(int i=0;i<candidates_num;i++) {
        high = plurality_result[0].second[i];
        name = plurality_result[0].first;
        for(int j=1;j<candidates_num;j++) {
            if(high < plurality_result[j].second[i]){
                high = plurality_result[j].second[i];
                name = plurality_result[j].first;
            }
        }

        cout << curr_rank << ". " << name << " - " << high << endl;
        curr_rank++;
    }
}

void pairwise() {

}

void testprint() {
    vector<int> each_rank;
    for(int i=0;i<candidates_num;i++) {
        cout << candidates[i].first << " ";
        each_rank = candidates[i].second;
        for(int j=0;j<voting_groups;j++) {
            cout << each_rank[j] << " ";
        }
        cout << endl;
    }

    cout << "number of votes: ";
    for(int i=0;i<voting_groups;i++)
        cout << votes_per_group[i] << " ";
    cout << endl;
}

int main() {
    Get_User_Input();
    plurality_method();
    getplurality_ranking();

    return 0;
}
