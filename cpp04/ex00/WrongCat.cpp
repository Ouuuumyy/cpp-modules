#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongCat class constructor" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat class destructor" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}