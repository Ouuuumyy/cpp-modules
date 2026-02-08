#include "Serializer.hpp"

int main()
{
    Data test;
    std::cout << &test << std::endl;
    uintptr_t p =  Serializer::serialize(&test);
    Data* restore = Serializer::deserialize(p);
    std::cout << restore << std::endl;

    if(&test == restore)
        std::cout << "success" << std::endl;
    else
        std::cout << "failure" << std::endl;

    return 0;
}