#include "Weapon.hpp"

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}

Weapon::Weapon(std::string val)
{
    type = val;
}

Weapon::Weapon()
{

}
