#include "FileProcessor.hpp"

FileProcessor::FileProcessor(std::string filepath, std::string s1, std::string s2) : _filePath(filepath), _s1(s1), _s2(s2) {}

FileProcessor::~FileProcessor(void) {}

void    FileProcessor::replace_name(std::ifstream& inputFile, std::ofstream& fileDest)
{
    std::string lineSource;
    size_t      length = _s1.length();

    while (std::getline(inputFile, lineSource))
    {
        size_t start = 0;
        size_t pos = lineSource.find(_s1);

        if (pos != std::string::npos)
        {
            while (pos != std::string::npos)
            {
                std::string subString = lineSource.substr(start, pos - start);
                fileDest << subString << _s2;
                
                start = pos + length;
                pos = lineSource.find(_s1, start);
                
                if (pos == std::string::npos)
                    fileDest << lineSource.substr(start) << std::endl;
            }
        }
        else
        {
            fileDest << lineSource << std::endl;
        }
    }
}