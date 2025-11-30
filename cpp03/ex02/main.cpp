#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap a("frag");
    a.highFivesGuys();
    a.attack("piw");
    a.takeDamage(5);
    a.attack("piw");

    // a.attack("sssss");
    return 0;
}