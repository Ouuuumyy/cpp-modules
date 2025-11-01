#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::~Zombie()
{
    std::cout << name << " destroyed\n";
}
Zombie::Zombie(std::string new_name) {name = new_name;}
void Zombie::setName(std::string new_name) {name = new_name;}