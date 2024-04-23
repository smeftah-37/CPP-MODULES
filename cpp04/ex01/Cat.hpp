#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const Cat &ref);
        Cat &operator=(const Cat &ref);
        ~Cat();
        void makeSound() const;
};

#endif