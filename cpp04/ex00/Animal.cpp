#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal class constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
    this->type = other.type;
}

Animal& Animal::operator=(const Animal &other)
{
    if(this != &other)
        this->type = other.type;
    return (*this);
}
Animal::~Animal()
{
    std::cout << "Animal class destructor" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "default sound yeeeeeeeeeeeeey" << std::endl;
}

const std::string& Animal::getType() const
{
    return type;
}