#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <string>
using std::cout; using std::cin;
using std::getline; using std::ifstream;
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

        cout << "ranks: ";
        for(int j=0;j<voting_groups_num;j++){
            cin >> rank;
            rankings.push_back(rank);
        }

        candidates.push_back(pair(name,rankings));
        rankings.clear();
    }

    cout << "Number of votes: ";
    for(int i=0;i<voting_groups_num;i++) {
        cin >> votes;
        votes_per_group.push_back(votes);
    }
}

void get_inputs_file(){
    string line;
    ifstream inputFile("plurality.input");
    if(inputFile.is_open()){
        while(getline(cin, line)){
            /*Inser code*/
        }
    } else {
        cout << "File not available." << endl;
    }
}

vector<pair<string,vector<int>>> plurality_result;
vector<int> each_candidate_rank;
void plurality_method() {
    vector<int> votes_per_rank;
    for(int i=0;i<candidates_num;i++){
        votes_per_rank.assign(voting_groups_num, 0);
        each_candidate_rank = candidates[i].second;
        for(int j=0;j<voting_groups_num;j++){
            votes_per_rank[each_candidate_rank[j]-1]+=votes_per_group[j];
        }
            
        plurality_result.push_back(pair(candidates[i].first, votes_per_rank));
    }
}

void ptestprint() {
    vector<int> each_res;
    for(int i=0;i<candidates_num;i++) {
        cout << plurality_result[i].first << " ";
        each_res = plurality_result[i].second;
        for(int j=0;j<voting_groups_num;j++) {
            cout << each_res[j] << " ";
        }
        cout << endl;
    }
}

void testprint() {
    vector<int> each_rank;
    for(int i=0;i<candidates_num;i++) {
        cout << candidates[i].first << " ";
        each_rank = candidates[i].second;
        for(int j=0;j<voting_groups_num;j++) {
            cout << each_rank[j] << " ";
        }
        cout << endl;
    }

    cout << "number of votes: ";
    for(int i=0;i<voting_groups_num;i++)
        cout << votes_per_group[i] << " ";
    cout << endl;
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
        //printf("%i. %s - %i\n", curr_rank, name, high);
        cout << curr_rank << ". " << name << " - " << high << endl;
        curr_rank++;
    }
}

int main() {
    get_inputs_user();
    plurality_method();
    //ptestprint();
    //testprint();
    getplurality_ranking();

    return 0;
}
