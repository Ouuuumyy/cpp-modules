#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon& weap):
    my_weapon(weap), name(new_name)
{

}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name <<  " attacks with their " << my_weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon w)
{
    my_weapon = w;
}
