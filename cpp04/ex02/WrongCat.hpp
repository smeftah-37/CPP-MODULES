#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &ref);
        WrongCat &operator=(const WrongCat &ref);
        ~WrongCat();
        void makeSound() const;
};

#endif