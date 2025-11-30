#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("mim");
    a.guardGate();
    a.attack("piw");
    a.takeDamage(5);
    a.attack("piw");

    // a.attack("sssss");
    return 0;
}