#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal class constructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal class destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "default sound yeeeeeeeeeeeeey" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
    return type;
}