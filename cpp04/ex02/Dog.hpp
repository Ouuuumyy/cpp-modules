#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *myBrain;
public:
    Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    virtual ~Dog();
    virtual void makeSound() const;
};




#endif