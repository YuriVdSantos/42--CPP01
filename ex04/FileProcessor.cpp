#include "FileProcessor.hpp"

FileProcessor::FileProcessor(std::string filepath, std::string s1, std::string s2) : _filePath(filepath), _s1(s1), _s2(s2) {}

FileProcessor::~FileProcessor(void) {}


void    FileProcessor::replace_name(std::ifstream& inputFile, std::ofstream& fileDest)
{
    _length = _s1.length();
    while (std::getline(inputFile, _lineSource))
    {
        _start = 0;
        _pos = _lineSource.find(_s1);
        if (_pos != std::string::npos)
        {
            while (_pos != std::string::npos)
            {
                _subString = _lineSource.substr(_start, _pos - _start);
                fileDest << _subString << _s2;
                _start = _pos + _length;
                _pos = _lineSource.find(_s1, _start);
                if (_pos == std::string::npos)
                    fileDest << _lineSource.substr(_start) << std::endl;
            }
        }
        else
            fileDest << _lineSource << std::endl;
    }
}
