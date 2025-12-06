#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

const Animal* j = new Dog();
const Animal* b = new Cat();

// Cat original;
// Cat another;
// Cat k (original);
// another = k;

// Dog one;
// Dog two;
// Dog three (one);
// two = three;

Animal* arr[20];

for (int i = 0; i < 10; i++)
{
    arr[i] = new Dog();
}

for (int i = 10; i < 20; i++)
{
    arr[i] = new Cat();
}

for (int i = 0; i < 20; i++)
{
    arr[i]->makeSound();
}

for (int i = 0; i < 20; i++)
{
    delete arr[i];
}
// j->makeSound();
// b->makeSound();
// k.makeSound();
// another.makeSound();
// two.makeSound();
// three.makeSound();
delete b;
delete j;

return 0;
}