#include "Harl.hpp"

int main()
{
    Harl h;
    h.complain("Error");
    h.complain("Warning");
    h.complain("Debug");
    h.complain("Info");
    return 0;
}