#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl h;
    int levelIndex = -1;
    if(ac != 2)
    {
        std::cout << "usage: [program] [level]\n";
        return 1;
    }
    std::string levels[4] = {"Debug", "Info", "Warning", "Error"};
    for(int i = 0; i < 4; i++)
    {
        if(av[1] == levels[i])
        {
            levelIndex = i;
            break;
        }
    }
    switch (levelIndex)
    {
        case 0:
            h.complain("Debug");
            // fall through
        case 1:
            h.complain("Info");
            // fall through
        case 2:
            h.complain("Warning");
            // fall through
        case 3:
            h.complain("Error");
            break;
    
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
    }
    return 0;
}