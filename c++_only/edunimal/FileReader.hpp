#include <fstream>
#include <string>

class FileReader {
    private: 
        std::string file_path;
        std::ifstream input_file;
    public:

        FileReader(); 
        
        void SetFilePath(std::string path);

};
