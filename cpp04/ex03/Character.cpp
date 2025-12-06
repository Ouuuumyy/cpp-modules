#include "Character.hpp"

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