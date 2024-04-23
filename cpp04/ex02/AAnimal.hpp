#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        std::string getType() const;
        AAnimal(const AAnimal &ref);
        AAnimal &operator=(const AAnimal &ref);
       virtual  ~AAnimal();
        virtual void makeSound()  const = 0;
};

#endif