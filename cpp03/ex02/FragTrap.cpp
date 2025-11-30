#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    damage = 30;
    energyPoint = 100;
    hitPoint = 100;
    std::cout << "FragTrap " << name << " has been created" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "high five" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << name << " destroyed" << std::endl;
}