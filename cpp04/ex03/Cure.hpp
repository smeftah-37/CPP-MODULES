#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class Cure:public AMateria
{
    public:
        Cure(std::string type);
        Cure();
        void set_type(std::string const type);
        Cure(const Cure &ref);
        Cure &operator=(const Cure &ref);
        void use(ICharacter& target);

        AMateria* clone() const;
        ~Cure();

};
#endif