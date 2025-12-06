#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    myBrain = new Brain();
    std::cout << "Cat class constructor" << std::endl;
}
Cat::Cat(const Cat &other) : Animal(other)
{
    this->type = other.type;
    this->myBrain = new Brain(*other.myBrain);
    std::cout << "Cat class copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat class copy assignment operator " << std::endl;
    if(this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;
        delete this->myBrain;
        this->myBrain = new Brain(*other.myBrain);
    }
    return (*this);
}

Cat::~Cat()
{
    delete myBrain;
    std::cout << "Cat class destructor" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "meow meow meow" << std::endl;
}