#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), damage(0)
{
    std::cout << "ClapTrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other):
    name(other.name), hitPoint(other.hitPoint),
    energyPoint(other.energyPoint), damage(other.damage)
{
    std::cout << "copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    if(this != &other)
    {
        this->name = other.name;
        this->energyPoint = other.energyPoint;
        this->hitPoint = other.hitPoint;
        this->damage = other.damage;
    }
    std::cout << "copy assignment operator called" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(energyPoint == 0 || hitPoint == 0)
    {
        std::cout << "no points left, no actions could be done" << std::endl;
        return;
    }
    std::cout << "ClapTrap "
    << name << " attacks "
    << target << ", causing "
    << damage << " points of damage!" << std::endl;
    energyPoint--;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoint == 0 || hitPoint == 0)
    {
        std::cout << "no points left, no actions could be done" << std::endl;
        return;
    }
    hitPoint+= amount;
    energyPoint--;
    std::cout << "ClapTrap " << name << " repaired " << amount << " points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoint >= amount)
        hitPoint -= amount;
    else
        hitPoint = 0;
    std::cout << "ClapTrap " << name << " took " << amount << " damage"<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}