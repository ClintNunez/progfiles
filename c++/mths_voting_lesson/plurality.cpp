#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <string>
using std::cout; using std::cin;
using std::endl; using std::vector;
using std::string; using std::pair;

// variables globaly used
vector<pair<string, vector<int>>> candidates;
vector<int> votes_per_group;
int candidates_num;
int voting_groups_num;

void get_inputs_user() {
    cout << "candidates num: ";
    cin >> candidates_num;
    cout << "num of voting groups: ";
    cin >> voting_groups_num;

    int rank, votes;
    string name;
    vector<int> rankings;

    for(int i=0;i<candidates_num;i++){
        cout << "candidate name: ";
        cin >> name;

        for(int j=0;j<voting_groups_num;j++){
            cin >> rank;
            rankings.push_back(rank);
        }

        candidates.push_back(pair(name,rankings));
    }

    cout << "Number of votes: ";
    for(int i=0;i<voting_groups_num;i++) {
        cin >> votes;
        votes_per_group.push_back(votes);
    }
}

void get_inputs_file(){

}


vector<pair<string,int*>> plurality_result;
vector<int> each_candidate_rank;
void plurality_method() {
    int votes_per_rank[voting_groups_num];
    for(int i=0;i<candidates_num;i++){
        memset(votes_per_rank,0,voting_groups_num);
        each_candidate_rank = candidates[i].second;
        for(int j=0;j<voting_groups_num;i++)
            votes_per_rank[each_candidate_rank[j]-1]+=votes_per_group[j];
            
        plurality_result.push_back(pair(candidates[i].first, votes_per_rank));
    }
}

int main() {


    return 0;
}
