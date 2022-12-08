#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <exception>
#include <stdexcept>

using std::cout; using std::endl;
using std::cin; using std::getline; 
using std::ifstream; using std::string;
using std::pair; using std::vector;
using std::map;
using std::setw; using std::setfill;

// CURRENT TODO
//
 
// FINISHED TODO
// TODO add test in Get_Data_From_User and Get_Data_From_File to check if candidates are >= 2. less than 2 candidates are not allowed
// TODO format output for the input data (just like the table) and use iomanip
// TODO format output for the input data (just like the table) and use iomanip
// TODO test using files
// TODO add ISBN
// TODO add UPC
// TODO add user input
// TODO clear vectors for input each time you get inputs maybe use a function that clears all data

const string CLS = "\033[2J\033[1;1H";
const string VOTING_FILE = "voting.txt";
const string ISBN_FILE = "isbn.txt";
const string UPC_FILE = "upc.txt";

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

//----------------Inputs------------------
void Get_Voting_User_Input() {
    cout << setw(20) << "TOPIC: VOTING\n" << endl;

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

void Get_Voting_File_Input() {
    string line;
    ifstream inputFile(VOTING_FILE);
    if(candidates.empty()) {
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
}

vector<string> isbn_check;
vector<string> isbn_find;
vector<string> upc_check;
vector<string> upc_find;
string isbn_string;
string upc_string;
int input_ctr; 

void Get_ISBN_UPC_User_Input(string file_name) {
    if(file_name == VOTING_FILE)
        cout << setw(20) << "TOPIC: VOTING\n" << endl;
    else if(file_name == ISBN_FILE)
        cout << setw(20) << "TOPIC: ISBN\n" << endl;
    else if(file_name == UPC_FILE)
        cout << setw(20) << "TOPIC: UPC\n" << endl;

    if(file_name == ISBN_FILE) {
        cout << "Enter how many ISBN to check validity:" << endl;
        cin >> input_ctr;
        for(int i = 0; i < input_ctr; i++) {
            cout << "Enter ISBN: ";
            cin >> isbn_string;
            while((int)isbn_string.size() != 13) {
                cout << "ISBN should be 13 digits." << endl;
                cout << "Enter ISBN: ";
                cin >> isbn_string;
            }

            isbn_check.push_back(isbn_string);
        }
        
        cout << "Enter how many ISBN to find check digit:" << endl;
        cin >> input_ctr;
        for(int i = 0; i < input_ctr; i++) {
            cout << "Enter ISBN: ";
            cin >> isbn_string;
            while((int)isbn_string.size() != 12) {
                cout << "ISBN should be 12 digits." << endl;
                cout << "Enter ISBN: ";
                cin >> isbn_string;
            }

            isbn_find.push_back(isbn_string);
        }
    } else if(file_name == UPC_FILE) {
        cout << "Enter how many UPC to check validity:" << endl;
        cin >> input_ctr;
        for(int i = 0; i < input_ctr; i++) {
            cout << "Enter UPC: ";
            cin >> upc_string;
            while((int)upc_string.size() != 12) {
                cout << "UPC should be 12 digits." << endl;
                cout << "Enter UPC: ";
                cin >> upc_string;
            }

            upc_check.push_back(upc_string);
        }
        
        cout << "Enter how many UPC to find check digit:" << endl;
        cin >> input_ctr;
        for(int i = 0; i < input_ctr; i++) {
            cout << "Enter UPC: ";
            cin >> upc_string;
            while((int)upc_string.size() != 11) {
                cout << "UPC should be 11 digits." << endl;
                cout << "Enter UPC: ";
                cin >> upc_string;
            }

            upc_find.push_back(upc_string);
        }
    }
}

void Get_IBSN_UPC_File_Input(string file_name) {
    string line;
    if(file_name == "isbn.txt") {

        if(isbn_check.empty() && isbn_find.empty()) {
            ifstream isbn_input(file_name);
            while(getline(isbn_input, line)) {
                if(line == "c") {
                    getline(isbn_input, line);
                    input_ctr = std::stoi(line);
                    for(int i = 0; i < input_ctr; i++) {
                        getline(isbn_input, line);
                        isbn_check.push_back(line);
                    }
                }else if(line == "f") {
                    getline(isbn_input, line);
                    input_ctr = std::stoi(line);
                    for(int i = 0; i < input_ctr; i++) {
                        getline(isbn_input, line);
                        isbn_find.push_back(line);
                    }
                }
            }
        }
    } else if(file_name == "upc.txt") {
        if(upc_check.empty() && upc_find.empty()) {
            ifstream upc_input(file_name);
            while(getline(upc_input, line)) {
                if(line == "c") {
                    getline(upc_input, line);
                    input_ctr = std::stoi(line);
                    for(int i = 0; i < input_ctr; i++) {
                        getline(upc_input, line);
                        upc_check.push_back(line);
                    }
                }else if(line == "f") {
                    getline(upc_input, line);
                    input_ctr = std::stoi(line);
                    for(int i = 0; i < input_ctr; i++) {
                        getline(upc_input, line);
                        upc_find.push_back(line);
                    }
                }
            }
        }
    }
}

//---------------------------------------------


//----------------Voting Methods------------------

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

map<string, int> pairwise_result; 
void Pairwise_Method() {
    int candidate1_votes, candidate2_votes;
    vector<int> each_candidate2_rank;

    // initialize pairwise map to (name, 0) for each candidate
    for(int i = 0; i < candidates_num; i++) {
        pairwise_result.insert(pair(candidates[i].first, 0));
    }

    for(int i = 0; i < candidates_num - 1; i++) { // loops from 0 to candidates_num - 2 | a b c d
        each_candidate_rank = candidates[i].second;

        for(int j = i + 1; j < candidates_num; j++) { // loops from 1 to candidates_num | b c d e
            candidate1_votes = 0;
            candidate2_votes = 0;
            each_candidate2_rank = candidates[j].second;

            for(int k = 0; k < voting_groups; k++) {
                if(each_candidate_rank[k] < each_candidate2_rank[k]) {
                    candidate1_votes += votes_per_group[k];
                } else {
                    candidate2_votes += votes_per_group[k];
                }
            }

            if(candidate1_votes > candidate2_votes)
                pairwise_result[candidates[i].first]++;
            else
                pairwise_result[candidates[j].first]++;
        }
    } 
}

void Print_Pairwise_Result() {
    /* output format:
     * name - total_wins
     * name - total_wins
     * name - total_wins
     * ...
     * */

    cout << "\nPairwise Method Result(Not in order): " << endl;

    for(auto each_candidate = pairwise_result.begin(); each_candidate != pairwise_result.end(); each_candidate++) {
        cout << each_candidate->first << " - total wins: " << each_candidate->second << endl;
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
//---------------------------------------------


//----------------ISBN Methods------------------
int isbn_length;
int sum_of_12_digits;
int digit_13;
int computed_d13;

void Isbn_Check_Validity() {
    for(auto each_isbn = isbn_check.begin(); each_isbn != isbn_check.end(); each_isbn++) {
        isbn_string = *each_isbn;
        isbn_length = isbn_string.size();
        sum_of_12_digits = 0;
        digit_13 = (int)isbn_string[12] - '0';

        cout << "\nCheck if " << isbn_string << " is valid:" << endl;

        for(int i = 1; i <= isbn_length - 1; i++) {
            if(i % 2 == 0)
                sum_of_12_digits += 3 * ((int)isbn_string[i - 1] - '0');
            else 
                sum_of_12_digits += ((int)isbn_string[i - 1] - '0');
        }
        computed_d13 = 10 - (sum_of_12_digits % 10);

        if(computed_d13 == digit_13) {
            cout << "Computed check digit -> " << computed_d13 << " == " << digit_13 << " <- Given check digit"<< endl;
            cout << "Therefore, ISBN: " << isbn_string << " is VALID." << endl;
        } else {
            cout << "Computed check digit -> " << computed_d13 << " != " << digit_13 << " <- Given check digit"<< endl;
            cout << "Therefore, ISBN: " << isbn_string << " is INVALID." << endl;
        }
    }
}

void Isbn_Find_Last_Digit() {
    for(auto each_isbn = isbn_find.begin(); each_isbn != isbn_find.end(); each_isbn++) {
        isbn_string = *each_isbn;
        isbn_length = isbn_string.size();
        sum_of_12_digits = 0;

        cout << "\nFind check digit of " << isbn_string << endl;

        for(int i = 1; i <= isbn_length; i++) {
            if(i % 2 == 0)
                sum_of_12_digits += 3 * ((int)isbn_string[i - 1] - '0');
            else 
                sum_of_12_digits += ((int)isbn_string[i - 1] - '0');
        }
        computed_d13 = 10 - (sum_of_12_digits % 10);

        cout << "Check Digit is " << computed_d13 << endl;
    }
}
//---------------------------------------------

//----------------UPC Methods------------------
int upc_length;
int sum_of_11_digits;
int digit_12;
int computed_d12;

void Upc_Check_Validity() {
    for(auto each_upc = upc_check.begin(); each_upc != upc_check.end(); each_upc++) {
        upc_string = *each_upc;
        upc_length = upc_string.size();
        sum_of_11_digits = 0;
        digit_12 = (int)upc_string[11] - '0';

        cout << "\nCheck if " << upc_string << " is valid:" << endl;

        for(int i = 1; i <= upc_length - 1; i++) {
            if(i % 2 != 0)
                sum_of_11_digits += 3 * ((int)upc_string[i - 1] - '0');
            else 
                sum_of_11_digits += ((int)upc_string[i - 1] - '0');
        }
        computed_d12 = 10 - (sum_of_11_digits % 10);

        if(computed_d12 == digit_12) {
            cout << "Computed check digit -> " << computed_d12 << " == " << digit_12 << " <- Given check digit"<< endl;
            cout << "Therefore, UPC: " << upc_string << " is VALID." << endl;
        } else {
            cout << "Computed check digit -> " << computed_d12 << " != " << digit_12 << " <- Given check digit"<< endl;
            cout << "Therefore, UPC: " << upc_string << " is INVALID." << endl;
        }
    }
}

void Upc_Find_Last_Digit() {
    for(auto each_upc = upc_find.begin(); each_upc != upc_find.end(); each_upc++) {
        upc_string = *each_upc;
        upc_length = upc_string.size();
        sum_of_11_digits = 0;

        cout << "\nFind check digit of " << upc_string << endl;

        for(int i = 1; i <= upc_length; i++) {
            if(i % 2 != 0)
                sum_of_11_digits += 3 * ((int)upc_string[i - 1] - '0');
            else 
                sum_of_11_digits += ((int)upc_string[i - 1] - '0');
        }
        computed_d12 = 10 - (sum_of_11_digits % 10);

        cout << "Check Digit is " << computed_d12 << endl;
    }
}
//---------------------------------------------

//-------------------Prompts-------------------
void Main_Menu() {
    cout << "Choose Topic:" << endl;
    cout << "1) Voting" << endl;
    cout << "2) ISBN" << endl;
    cout << "3) UPC" << endl;
    cout << "0) Exit" << endl;
    cout << "> ";
}

void Input_Method(string file_name) {
    if(file_name == VOTING_FILE)
        cout << setw(20) << "TOPIC: VOTING\n" << endl;
    else if(file_name == ISBN_FILE)
        cout << setw(20) << "TOPIC: ISBN\n" << endl;
    else if(file_name == UPC_FILE)
        cout << setw(20) << "TOPIC: UPC\n" << endl;
    
    cout << "Choose input format:" << endl;
    cout << "1) User Input" << endl;
    cout << "2) File Input(Make sure to name the file \"" << file_name << "\" and have it placed in the same folder as this cpp file)" << endl;
    cout << "0) Back" << endl;
    cout << "-1) Exit" << endl;
    cout << "> ";
}

void Voting_Methods_Prompt(string file_name) {
    if(file_name == VOTING_FILE)
        cout << setw(20) << "TOPIC: VOTING\n" << endl;
    else if(file_name == ISBN_FILE)
        cout << setw(20) << "TOPIC: ISBN\n" << endl;
    else if(file_name == UPC_FILE)
        cout << setw(20) << "TOPIC: UPC\n" << endl;
    
    cout << "Choose method to use:" << endl;
    cout << "1) Plurality Method" << endl;
    cout << "2) Borda Count Method" << endl;
    cout << "3) Pairwise Method" << endl;
    cout << "0) Back to Topics" << endl;
    cout << "-1) Exit" << endl;
    cout << "> ";
}

void ISBN_UPC_Method_Prompt(string file_name) {
    if(file_name == VOTING_FILE)
        cout << setw(20) << "TOPIC: VOTING\n" << endl;
    else if(file_name == ISBN_FILE)
        cout << setw(20) << "TOPIC: ISBN\n" << endl;
    else if(file_name == UPC_FILE)
        cout << setw(20) << "TOPIC: UPC\n" << endl;

    cout << "Choose method to use:" << endl;
    cout << "1) Check Validity" << endl;
    cout << "2) Find Check Digit" << endl;
    cout << "0) Back to Topics" << endl;
    cout << "-1) Exit" << endl;
    cout << "> ";
}
//---------------------------------------------

//--------------Some function idk--------------

void Delete_Inputs() {
    candidates.clear();
    votes_per_group.clear(); 

    isbn_check.clear();
    isbn_find.clear();

    upc_check.clear();
    upc_find.clear();
}
//---------------------------------------------

//-------------------Main----------------------
int main() {
    int choice;
    char continue_choice;
    bool back, valid_input;


    while(true) { 
        cout << CLS;
        Delete_Inputs();
        Main_Menu(); 
        back = false;
        valid_input = false;
        cin >> choice;

        if(choice == 0) {
            cout << "Exiting" << endl;
            return 0;
        } else if(choice == 1) {
            // Voting topic

            // Get input
            cout << CLS;
            do {
                Input_Method(VOTING_FILE);
                
                while(true) {
                    cin >> choice; 

                    if(choice == -1) {
                        cout << "Exiting" << endl;
                        return 0;
                    } else if(choice == 0) {
                        back = true;
                        valid_input = true;
                        break;
                    } else if(choice == 1) {
                        cout << CLS;
                        Get_Voting_User_Input();
                        valid_input = true;
                        break;
                    } else if(choice == 2) {
                        Get_Voting_File_Input();
                        valid_input = true;
                        break;
                    } else {
                        std::cout << "input number that is within the choices.\n> "; 
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                        break;
                    }
                }
            } while(!valid_input);

            cout << CLS;
            valid_input = false;

            // Choose Methods
            while(!back) { // !back so that when the user wants to go back, the code will not run this.
                Print_Data_Table();
                Voting_Methods_Prompt(VOTING_FILE);

                while(true) {
                    cin >> choice;

                    if(choice == -1) {
                        cout << "Exiting" << endl;
                        return 0;
                    } else if(choice == 0) {
                        back = true;
                        break;
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
                    } else if(choice == 3) {
                        if(pairwise_result.empty()) {
                            Pairwise_Method();
                        }
                        Print_Pairwise_Result();
                        break; 
                    } else {
                        std::cout << "input number that is within the choices.\n> "; 
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                    }
                }
                
                if(!back) {
                    cout << "\nContinue[y/n]?\n> ";
                    cin >> continue_choice;

                    tolower(continue_choice);
                    while(continue_choice != 'y' && continue_choice != 'n') {
                        cout << "Please enter y/Y or n/N only.\n> ";
                        cin >> continue_choice;
                    }

                    if(continue_choice == 'y') {
                        cout << CLS;
                    } else {
                        break; // will go back to the main menu
                    } 
                } else {
                    cout << CLS;
                }
            }

        } else if(choice == 2) {
            // ISBN

            // Get input
            cout << CLS;
            do {
                Input_Method(ISBN_FILE);

                while(true) {
                    cin >> choice;

                    if(choice == -1) {
                        cout << "Exiting" << endl;
                        return 0;
                    } else if(choice == 0) {
                        back = true;
                        valid_input = true;
                        break;
                    } else if(choice == 1) {
                        cout << CLS;
                        Get_ISBN_UPC_User_Input(ISBN_FILE);
                        valid_input = true;
                        break;
                    } else if(choice == 2) {
                        Get_IBSN_UPC_File_Input(ISBN_FILE);
                        valid_input = true;
                        break;
                    } else {
                        std::cout << "input number that is within the choices.\n> "; 
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                        break;
                    }
                }
            } while(!valid_input);

            cout << CLS;
            valid_input = false;
            
            // Execute methods
            while(!back) {
                ISBN_UPC_Method_Prompt(ISBN_FILE);

                while(true) {
                    cin >> choice;

                    if(choice == -1) {
                        cout << "Exiting" << endl;
                        return 0;
                    } else if(choice == 0) {
                        back = true;
                        break;
                    } else if(choice == 1) {
                        Isbn_Check_Validity();
                        break;
                    } else if(choice == 2) {
                        Isbn_Find_Last_Digit();
                        break;
                    } else {
                        std::cout << "input number that is within the choices.\n> "; 
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                    }
                }
                
                if(!back) {
                    cout << "\nContinue[y/n]?\n> ";
                    cin >> continue_choice;

                    tolower(continue_choice);
                    while(continue_choice != 'y' && continue_choice != 'n') {
                        cout << "Please enter y/Y or n/N only.\n> ";
                        cin >> continue_choice;
                    }

                    if(continue_choice == 'y') {
                        cout << CLS;
                    } else {
                        break; // will go back to the main menu
                    } 
                } else {
                    cout << CLS;
                }

            }

        } else if(choice == 3) {
            // UPC

            // Get input
            cout << CLS;
            do {
                Input_Method(UPC_FILE);

                while(true) {
                    cin >> choice;

                    if(choice == -1) {
                        cout << "Exiting" << endl;
                        return 0;
                    } else if(choice == 0) {
                        back = true;
                        valid_input = true;
                        break;
                    } else if(choice == 1) {
                        cout << CLS;
                        Get_ISBN_UPC_User_Input(UPC_FILE);
                        valid_input = true;
                        break;
                    } else if(choice == 2) {
                        Get_IBSN_UPC_File_Input(UPC_FILE);
                        valid_input = true;
                        break;
                    } else {
                        std::cout << "input number that is within the choices.\n> "; 
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                        break;
                    }
                }
            } while(!valid_input);

            cout << CLS;
            valid_input = false;
            
            // Execute methods
            while(!back) {
                ISBN_UPC_Method_Prompt(UPC_FILE);

                while(true) {
                    cin >> choice;

                    if(choice == -1) {
                        cout << "Exiting" << endl;
                        return 0;
                    } else if(choice == 0) {
                        back = true;
                        break;
                    } else if(choice == 1) {
                        Upc_Check_Validity();
                        break;
                    } else if(choice == 2) {
                        Upc_Find_Last_Digit();
                        break; 
                    } else {
                        std::cout << "input number that is within the choices.\n> "; 
                        std::cin.clear();
                        std::cin.ignore(10000, '\n');
                    }
                }
                
                if(!back) {
                    cout << "\nContinue[y/n]?\n> ";
                    cin >> continue_choice;

                    tolower(continue_choice);
                    while(continue_choice != 'y' && continue_choice != 'n') {
                        cout << "Please enter y/Y or n/N only.\n> ";
                        cin >> continue_choice;
                    }

                    if(continue_choice == 'y') {
                        cout << CLS;
                    } else {
                        break; // will go back to the main menu
                    } 
                } else {
                    cout << CLS;
                }
            }
        } else {
            std::cout << "input number that is within the choices.\n> "; 
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    } 

    return 0;
}
