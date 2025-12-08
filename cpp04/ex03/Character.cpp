#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(std::string name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        materias[i] = NULL;
    }
}

Character::Character(const Character &other)
{
    *this = other;
}

Character& Character::operator=(const Character &other)
{   
    if(this != &other)
    {
        name = other.name;
        for (int i = 0; i < 4; i++)
        {
            if(materias[i])
                delete(materias[i]);
            this->materias[i] = other.materias[i]->clone();
        }
    }
    return (*this);
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if(!materias[i])
        {
            materias[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if(idx < 0 || idx >= 4)
        return;

    materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if(idx < 0 || idx >= 4 || !materias[idx])
        return;
    materias[idx]->use(target);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete(materias[i]);
    } 
}

std::string const & Character::getName() const
{
    return name;
}