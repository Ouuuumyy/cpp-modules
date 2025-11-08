#include "sed.hpp"

int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    if(ac != 4)
    {
        std::cerr << "usage: [program] [filename] [s1] [s2]\n";
        return 1;
    }
  
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    if(s1.empty())
    {
        std::cerr << "cannot replace an emty string\n";
        return 1;
    }
    std::ifstream input(filename.c_str());
    if(!input)
    {
        std::cerr << "coudnot open file\n";
        return 1;
    }
    std::ofstream output((filename + ".replace").c_str());
    if(!output)
    {
        std::cerr << "coud not create output file\n";
        return 1;
    }
    replaceString(input, output, s1, s2);
    input.close();
    output.close();

}