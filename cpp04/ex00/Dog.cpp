#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog class constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog class destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "haw haw haw" << std::endl;
}