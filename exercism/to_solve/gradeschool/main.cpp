#include "grade_school.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

int main() {

    std::cout << "Choose what test: " << std::endl;
    std::cout << "1) Empty" << std::endl;
    std::cout << "2) Insert students" << std::endl; 
    int choice; std::cin >> choice;
    
    if(choice == 1) {
            const grade_school::school school_{};
            if(school_.roster().empty()) {
                std::cout << "Empty" << std::endl;
            }
    } else {
            grade_school::school school_;
            
            std::cout << "Enter number of students to add: ";
            int N; std::cin >> N;
            std::string name; 
            int grade; 

            for(int i = 1; i <= N; i++) {
                std::cout << "Student #" << i << ") Enter name and grade: ";
                std::cin >> name; std::cin >> grade;
                school_.add(name, grade);
            }

            std::cout << "Get list of students in grade: ";
            std::cin >> grade;
            
            std::vector<std::string> student_names = school_.grade(grade);
            if(student_names.empty()){
                std::cout << "Empty" << std::endl;
            } else {
                for(std::vector<std::string>::iterator each_name = student_names.begin(); each_name != student_names.end(); each_name++) {
                    std::cout << *each_name << std::endl;
                }
            }

            std::cout << "Contents of map: " << std::endl;
            std::map<int, std::vector<std::string>> student_roster = school_.roster();
            for(std::map<int, std::vector<std::string>>::iterator each_student_data = student_roster.begin(); each_student_data != student_roster.end(); each_student_data++) {
                std::cout << "Grade: " << each_student_data->first << std::endl;
                for(std::vector<std::string>::iterator each_student_name = each_student_data->second.begin(); each_student_name != each_student_data->second.end(); each_student_name++) {
                    std::cout << "Student name: " << *each_student_name << std::endl;
                }
            }
    }

    return 0;
}
