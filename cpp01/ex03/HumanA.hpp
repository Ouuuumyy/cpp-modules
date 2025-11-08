#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon& my_weapon;
    std::string name;
public:
    HumanA(std::string name, Weapon& weap);
    ~HumanA();
    void attack();
};




#endif