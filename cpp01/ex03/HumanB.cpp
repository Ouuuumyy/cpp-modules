#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
{
    name = new_name;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::cout << name <<  " attacks with their " << my_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& w)
{
    my_weapon = &w;
}
