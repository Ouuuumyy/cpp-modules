#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon* my_weapon;
    std::string name;
public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon& w);
    ~HumanB();
};




#endif