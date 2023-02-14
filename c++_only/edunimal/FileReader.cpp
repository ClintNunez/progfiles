#include "FileReader.hpp"
#include <fstream>
#include <string>

FileReader::FileReader() {}; 

void FileReader::SetFilePath(std::string path) {
    file_path = path;
}

