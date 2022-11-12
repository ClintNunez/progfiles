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
                auto is_grade_available = studentMap.find(student_grade);

                if(is_grade_available == studentMap.end()) {
                    studentNames.push_back(student_name);
                    studentMap.insert(std::pair(student_grade, studentNames));
                } else {
                    studentNames = is_grade_available->second;
                    for(int i = 0; i < studentNames.size(); i++) { // for getting each name
                        for(int j = 0; j < studentNames[i].length(); j++) { // for getting each character in the name
                            std::string current_name = studentNames[i];
                            if(current_name[j] == student_name[j]) {
                                continue;
                            } else if(current_name[j] >= student_name[j]) {
                                studentNames[i] = student_name;
                                studentNames.push_back(current_name);
                            } else {
                                studentNames.push_back(student_name);
                            }
                        }
                    }
                    studentMap.at(student_grade) = studentNames;
                }
            }

            std::map<int, std::vector<std::string>> roster() const {
                return studentMap;
            }

            std::vector<std::string> grade(int student_grade) const {
                std::vector<std::string> studentNames; 
                auto student_data = studentMap.find(student_grade);

                if(student_data != studentMap.end()) {
                    studentNames = studentMap.at(student_grade);
                } 

                return studentNames;
            }
    };
}

#endif
