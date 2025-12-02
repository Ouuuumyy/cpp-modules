#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
public:
    Cat();
    virtual ~Cat();
    virtual void makeSound() const;
};




#endif