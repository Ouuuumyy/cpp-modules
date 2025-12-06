#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    myBrain = new Brain();
    std::cout << "Dog class constructor" << std::endl;
}

Dog::Dog(const Dog &other) :Animal(other)
{
    this->type = other.type;
    this->myBrain = new Brain(*other.myBrain);
    std::cout << "Dog class copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog class copy assignment operator " << std::endl;

    if(this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;
        delete this->myBrain;
        this->myBrain = new Brain(*other.myBrain);
    }
    return (*this);
}

Dog::~Dog()
{
    delete myBrain;
    std::cout << "Dog class destructor" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "haw haw haw" << std::endl;
}

