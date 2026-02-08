#include "Base.hpp"
#include <ctime>

int main()
{
    std::srand(time(0));
    Base *a = generate();

    identify(a);
    identify(*a);

    delete a;
    return 0;
}