#ifndef Cat_HPP
#define Cat_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *myBrain;
public:
    Cat();
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    virtual ~Cat();
    virtual void makeSound() const;
};




#endif