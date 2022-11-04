#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <string>
#include <vector>
#include <map>

namespace grade_school {
    class school {
        private:
            std::map<int, std::vector<std::string>> studentMap;
        public:
            school() {} // empty constructor
            
            void add (std::string student_name, int student_grade) {
                std::vector<std::string> studentNames; 
                std::map<int, std::vector<std::string>>::iterator student_data = studentMap.find(student_grade);

                if(student_data == studentMap.end()) {
                    studentNames.push_back(student_name);
                    studentMap.insert(std::make_pair(student_grade, studentNames));
                } else {
                    student_data->second.push_back(student_name);
                }
            }

            std::map<int, std::vector<std::string>> roster() {
                return studentMap;
            }

            std::vector<std::string> grade(int student_grade) {
                std::vector<std::string> studentNames; 
                std::map<int, std::vector<std::string>>::iterator student_data = studentMap.find(student_grade);

                if(student_data != studentMap.end()) {
                    studentNames = studentMap.at(student_grade);
                } 

                return studentNames;
            }
    };
}

#endif
