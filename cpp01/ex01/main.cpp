#include "Zombie.hpp"

int main()
{
    // randomChump("ouum");
    // Zombie new_zombie("oum");
    // new_zombie.announce();
    // Zombie* z = newZombie("heap zombie");
    // z->announce();
    // delete z;
    
    Zombie* z =  zombieHorde( 7, "mima");
    delete [] z;

}