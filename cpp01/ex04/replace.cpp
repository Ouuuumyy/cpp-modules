#include "sed.hpp"

void replaceString(std::ifstream &input, std::ofstream &output, std::string &s1, std::string &s2)
{
    std::string line;
    while(std::getline(input, line))
    {
        std::string result;
        size_t pos = 0;
        size_t found;
        while((found = line.find(s1, pos)) != std::string::npos)
        {
            result += line.substr(pos, found - pos);
            result += s2;
            pos = found + s1.length();
        }
        result += line.substr(pos);
        output << result << std::endl;
    }
}
