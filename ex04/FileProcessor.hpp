#ifndef FILEPROCESSOR_HPP
# define FILEPROCESSOR_HPP

#include <iostream>
#include <string>
#include <fstream>

class FileProcessor
{
    public:
    FileProcessor(std::string filepath, std::string s1, std::string s2);
    ~FileProcessor(void);

    std::string _filePath;
    std::string _s1;
    std::string _s2;
    void    replace_name(std::ifstream& inputFile, std::ofstream& fileDest);
    
    private:
    std::string _lineSource;
    std::string _find;
    std::string _subString;
    size_t _length;
    size_t _pos;
    size_t _start;
};


#endif