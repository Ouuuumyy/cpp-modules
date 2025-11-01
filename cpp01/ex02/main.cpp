#include <iostream>
#include <string.h>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string& stringREF = str;
    std::string* stringPTR = &str;

    std::cout << "adress held by string: " << &str << std::endl;
    std::cout << "adress held by reference: " << &stringREF << std::endl;
    std::cout << "adress held by pointer: " << &stringPTR << std::endl;

    std::cout << "vlaue held by string: " << str << std::endl;
    std::cout << "value held by reference: " << stringREF << std::endl;
    std::cout << "value held by pointer: " << *stringPTR << std::endl;
}