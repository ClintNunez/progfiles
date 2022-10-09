#include <iostream>
#include <sstream>
using namespace std;

class Student{
	private:
		int age, standard; string fname, lname;
	public:
		void set_age(int _age){
			age = _age;
		}
		int get_age(){
			return age;
		}

		void set_standard(int _standard){
			standard = _standard;
		}
		int get_standard(){
			return standard;
		}

		void set_first_name(string _fname){
			fname = _fname;
		}
		string get_first_name(){
			return fname;
		}

		void set_last_name(string _lname){
			lname = _lname;
		}
		string get_last_name(){
			return lname;
		}
		string to_string(){
			string newString = std::to_string(age) + "," + fname + "," + lname + "," + std::to_string(standard);
			return newString;
		}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
