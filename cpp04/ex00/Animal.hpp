#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        std::string getType() const;
        Animal(const Animal &ref);
        Animal &operator=(const Animal &ref);
        virtual ~Animal();
        virtual void makeSound() const;
};

#endif