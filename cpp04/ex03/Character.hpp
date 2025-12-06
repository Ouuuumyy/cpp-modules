#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"

class Character
{
    AMateria *materias[4];
public:
    virtual ~Character() {}
    virtual std::string const & getName();
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, Character& target);
};

#endif