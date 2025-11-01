#include "Zombie.hpp"

int main()
{
    // randomChump("ouum");
    // Zombie new_zombie("oum");
    // new_zombie.announce();
    Zombie* z = newZombie("heap zombie");
    z->announce();
    delete z;


}