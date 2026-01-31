#include "FileProcessor.hpp"

int printError(std::string const &str)
{
  std::cerr << "Error: " << str << std::endl;
  return (1);
}

std::string replaceExtension(std::string sourFile, std::string extension)
{
    size_t pos = sourFile.find_last_of(".");
    if (pos == std::string::npos)
        return (sourFile + extension);
    return (sourFile.substr(0, pos) + extension);
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return (printError("Wrong number of arguments"));
    std::string s1;
    std::string s2;
    std::string filepath;
    std::string fileDestName;

    filepath = argv[1];
    s1 = argv[2];
    s2 = argv[3];

    if (s1.empty() || s2.empty())
        return (printError("empty strings"));
    if (filepath.empty())
        return (printError("empty path"));
    std::ifstream inputFile(filepath.c_str());
    if (!inputFile.is_open())
        return (printError("file cannot be opened"));

    fileDestName = replaceExtension(filepath, ".replace");

    std::ofstream fileDest(fileDestName.c_str());
    if (!fileDest.is_open())
        return (printError("Output file cannot be opened"));

    FileProcessor fileProcessor(filepath, s1, s2);
    fileProcessor.replace_name(inputFile, fileDest);

    inputFile.close();
    fileDest.close();
}