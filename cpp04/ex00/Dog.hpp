#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog &ref);
        Dog &operator=(const Dog &ref);
        ~Dog();
        void makeSound() const;
};

#endif