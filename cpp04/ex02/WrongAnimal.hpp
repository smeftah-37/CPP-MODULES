#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        std::string getType() const;
        WrongAnimal(const WrongAnimal &ref);
        WrongAnimal &operator=(const WrongAnimal &ref);
        virtual ~WrongAnimal();
        void makeSound() const;
};

#endif