#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <exception>
#include <stdexcept>

using std::cout; using std::endl;
using std::cin; using std::getline; 
using std::ifstream; using std::string;
using std::pair; using std::vector;
using std::setw; using std::setfill;

// CURRENT TODO
// TODO add functions for all methods of voting
// TODO test using files
// TODO add function in getting file input that allows "1 2 3 4" inputs instead of separated lines
// TODO implement try catch
// TODO format output for plurality result
 
// FINISHED TODO
// TODO add test in Get_Data_From_User and Get_Data_From_File to check if candidates are >= 2. less than 2 candidates are not allowed
// TODO format output for the input data (just like the table) and use iomanip

const string CLS = "\033[2J\033[1;1H";

vector<pair<string, vector<int>>> candidates;
vector<int> votes_per_group;
int candidates_num;
int voting_groups;

// process inputs
int rank, votes;
string name;
vector<int> rankings;

// for printing Data
int longest_name_len = -1, longest_num_len = -1;
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

    for(int i = 0; i < candidates_num; i++) {
        cout << "Candidate name: ";
        cin >> name;
        if(longest_name_len < (int)name.size())
            longest_name_len = name.size();

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

        if(longest_num_len < std::to_string(votes).size())
            longest_num_len = std::to_string(votes).size();

        votes_per_group.push_back(votes);
    }
}

void Get_File_Input() {
    string line;
    ifstream inputFile("inputFile.in");
    if(inputFile.is_open()){
        getline(inputFile, line);
        candidates_num = std::stoi(line);
        getline(inputFile, line);
        voting_groups = std::stoi(line);

        for(int i = 0; i < candidates_num; i++){
            getline(inputFile, line);
            name = line;

            for(int j = 0; j < voting_groups; j++){
                getline(inputFile, line);
                rank = std::stoi(line);
                rankings.push_back(rank);
            }

            candidates.push_back(pair(name,rankings));
            rankings.clear();
        }

        for(int i = 0; i < voting_groups; i++) {
            getline(inputFile, line);
            votes = std::stoi(line);
            votes_per_group.push_back(votes);
        }
    } else {
        cout << "File not available." << endl;
    }

}

// used by most of the methods inorder to iterate through the rankings of each candidate
vector<int> each_candidate_rank;

vector<pair<string,vector<int>>> plurality_result;
void Plurality_Method() {
    vector<int> votes_per_rank;

    for(int i = 0; i < candidates_num;i++) {
        votes_per_rank.assign(voting_groups, 0); // set vector to 0
        each_candidate_rank = candidates[i].second;

        for(int j=0;j<voting_groups;j++) {
            votes_per_rank[each_candidate_rank[j]-1]+=votes_per_group[j];
        }
            
        plurality_result.push_back(pair(candidates[i].first, votes_per_rank));
    }
}

void Print_Plurality_Result() {
    /* output format:
     * 1. name - votes(won in 1st rankings)
     * 2. name - votes(won in 2nd rankings)
     * 3. name - votes(won in 3rd rankings)
     * ...
     * */

    int high, curr_rank=1;
    string name;
    
    cout << "\nPlurality Method Result: " << endl;
    for(int i=0; i < candidates_num; i++) {
        high = plurality_result[0].second[i];
        name = plurality_result[0].first;

        for(int j = 1;j < candidates_num; j++) {
            if(high < plurality_result[j].second[i]){
                high = plurality_result[j].second[i];
                name = plurality_result[j].first;
            }
        }

        cout << curr_rank << ". " << name << " - total rank " << curr_rank << " votes: " << high << endl;
        curr_rank++;
    }
    cout << endl;
}

vector<pair<string,int>> borda_result;
void Borda_Method() {
    int total_votes;
     
    for(int i = 0; i < candidates_num; i++) {
        total_votes = 0;
        each_candidate_rank = candidates[i].second;

        for(int j = 0; j < voting_groups; j++) {
            total_votes += votes_per_group[j] * ((candidates_num - each_candidate_rank[j]) + 1);
        }

        if(borda_result.empty()) {
            borda_result.push_back(pair(candidates[i].first, total_votes));
        } else {
            for(int j = 0; j < (int)borda_result.size(); j++) {
                if(j + 1 == (int) borda_result.size()) {
                    borda_result.push_back(pair(candidates[i].first, total_votes));
                    break;
                } else if(total_votes > borda_result[j].second) {
                    borda_result.insert(borda_result.begin() + j, pair(candidates[i].first, total_votes));
                    break;
                }
            }


        }
    }
}

void Print_Borda_Result() {
    /* output format:
     * 1. name - total_votes(1st rankings)
     * 2. name - total_votes(2nd rankings)
     * 3. name - total_votes(3rd rankings)
     * ...
     * */

    cout << "\nBorda Method Result: " << endl;
    int curr_rank=1;

    for(int i = 0; i < candidates_num; i++) {
        cout << curr_rank << ". " << borda_result[i].first << " - total_votes: " << borda_result[i].second << endl;
        curr_rank++;
    }
    cout << endl;
}

void Print_Data_Table() {
    cout << endl;
    cout << setw(20) << "Data" << endl;
    cout << setw(40) << setfill('-') << "-" << endl;
    vector<int> each_rank;

    if(longest_name_len < 17)
        longest_name_len = 17;

    cout << setfill(' ');
    for(int i=0;i<candidates_num;i++) {
        cout << setw(longest_name_len+2) << candidates[i].first;
        each_rank = candidates[i].second;
        for(int j=0;j<voting_groups;j++) {
            cout << setw(longest_num_len+4) << each_rank[j];
        }
        cout << endl;
    }

    cout << setw(longest_name_len+2) << "number of votes:";
    for(int i=0;i<voting_groups;i++)
        cout << setw(longest_num_len+4) << votes_per_group[i];
    cout << "\n\n";

}

void Opening_Prompt(){
    cout << "Code for Voting and Apportionment\n" << endl;
    cout << "Choose input format:" << endl;
    cout << "1) User Input" << endl;
    cout << "2) File Input(Make sure to name the file \"inputFile.in\" and have it placed in the same folder as this cpp file)" << endl;
    cout << "0) Exit" << endl;
    cout << "> ";
}

void Methods_Prompt(){
    cout << "Choose method to use:" << endl;
    cout << "1) Plurality Method" << endl;
    cout << "2) Borda Count Method" << endl;
    cout << "0) Exit" << endl;
    cout << "> ";
}

int main() {
    int choice;
    char continue_choice;

    cout << CLS;

    Opening_Prompt(); 
    while(true) { 
        cin >> choice;

        if(choice == 0) {
            cout << "Exiting" << endl;
            return 0;
        } else if(choice == 1) {
            Get_User_Input();
            break;
        } else if(choice == 2) {
            Get_File_Input();
            break; 
        } else {
            std::cout << "input number that is within the choices.\n> "; 
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }
    cout << CLS;

    do {
        Print_Data_Table();
        Methods_Prompt();

        while(true) {
            cin >> choice;

            if(choice == 0) {
                cout << "Exiting" << endl;
                return 0;
            } else if(choice == 1) {
                if(plurality_result.empty()) {
                    Plurality_Method();
                }
                Print_Plurality_Result();
                break;
            } else if(choice == 2) {
                if(borda_result.empty()) {
                    Borda_Method();
                }
                Print_Borda_Result();
                break; 
            } else {
                std::cout << "input number that is within the choices.\n> "; 
                std::cin.clear();
                std::cin.ignore(10000, '\n');
            }
        }

        cout << "Continue[y/n]?\n> ";
        cin >> continue_choice;

        tolower(continue_choice);
        while(continue_choice != 'y' && continue_choice != 'n') {
            cout << "Please enter y/Y or n/N only.\n> ";
            cin >> continue_choice;
        }

        if(continue_choice == 'y') {
            cout << CLS;
        }

    } while(continue_choice != 'n');

    return 0;
}
