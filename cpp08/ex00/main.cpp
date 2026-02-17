#include "easyfind.hpp"

#include <vector>

int main()
{
    std::vector<int> vals;
    vals.push_back(10);
    vals.push_back(2);
    vals.push_back(15);
    vals.push_back(3);

    try 
    {
        easyfind(vals, 100);
        std::cout << "found value" << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
