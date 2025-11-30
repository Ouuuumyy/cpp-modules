#include "ClapTrap.hpp"

int main()
{
    ClapTrap oum("oumy");
    ClapTrap b(oum);
    oum.attack("other");
    oum.beRepaired(2);
    oum.takeDamage(2);
    return 0;
}