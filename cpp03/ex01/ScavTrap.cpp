#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    damage = 20;
    energyPoint = 50;
    hitPoint = 100;
    std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(energyPoint == 0 || hitPoint == 0)
    {
        std::cout << "no points left, no actions could be done" << std::endl;
        return;
    }
    std::cout << "ScavTrap "
    << name << " attacks "
    << target << ", causing "
    << damage << " points of damage!" << std::endl;
    energyPoint--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}