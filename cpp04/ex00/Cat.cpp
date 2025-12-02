#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat class constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat class destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}