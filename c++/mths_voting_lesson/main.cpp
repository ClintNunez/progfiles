#include <iostream>
#include <iomanip>
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
// TODO add function in getting file input that allows "1 2 3 4" inputs instead of separated lines
// TODO format output for the input data (just like the table) and use iomanip

// FINISHED TODO
// TODO add test in Get_Data_From_User and Get_Data_From_File to check if candidates are >= 2. less than 2 candidates are not allowed
//

const string CLS = "\033[2J\033[1;1H";

vector<pair<string, vector<int>>> candidates;
vector<int> votes_per_group;
int candidates_num;
int voting_groups;

// process inputs
int rank, votes;
string name;
vector<int> rankings;
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

        for(int i=0;i<voting_groups;i++) {
            getline(inputFile, line);
            votes = std::stoi(line);
            votes_per_group.push_back(votes);
        }
    } else {
        cout << "File not available." << endl;
    }

}

vector<pair<string,vector<int>>> plurality_result;
vector<int> each_candidate_rank;
void Plurality_Method() {
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

void Print_Plurality_Result() {
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

void Borda_Method() {

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
    bool input_loop = true;

    cout << CLS;

    Opening_Prompt(); 
    while(input_loop) { 
        cin >> choice;

        switch(choice){
            case 0:
                cout << "Exiting" << endl;
                return 0;
            case 1:
                Get_User_Input();
                input_loop = false;
                break;
            case 2:
                Get_File_Input();
                input_loop = false;
                break; 
            default:
                std::cout << "Input number that is within the choices.\n\t> "; 
                std::cin.clear();
                std::cin.ignore(10000, '\n');
        }
    }
    cout << CLS;

    testprint();

    input_loop = true; // reset input_loop

    do {
        Methods_Prompt();

        while(input_loop) {
            cin >> choice;

            switch(choice){
                case 0:
                    cout << "Exiting" << endl;
                    return 0;
                case 1:
                    if(plurality_result.empty()) {
                        cout << "plurality method reached" << endl;
                        Plurality_Method();
                    }
                    Print_Plurality_Result();
                    input_loop = false;
                    break;
                case 2:
                    cout << "To implement" << endl;
                    input_loop = false;
                    break; 
                default:
                    std::cout << "Input number that is within the choices.\n\t> "; 
                    std::cin.clear();
                    std::cin.ignore(10000, '\n');
            }
        }

        input_loop = true; // reset input_loop

        cout << "Continue[y/n]?\n> ";
        cin >> continue_choice;

        //if(isalpha(continue_choice)) 
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
