#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : 
    ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    this->name = name;
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    damage = FragTrap::damage;

    std::cout << "DiamondTrap " << name << " has been created" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "my DiamondTrap name is " << name 
        << ", my ClapTrap name is " << ClapTrap::name << std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << name << " destroyed" << std::endl;

}