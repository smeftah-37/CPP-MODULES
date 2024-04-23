#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class Ice:public AMateria
{
    public:
        Ice(std::string type);
        Ice();
        void set_type(std::string const type);
        Ice(const Ice &ref);
        Ice &operator=(const Ice &ref);
        void use(ICharacter& target);

        AMateria* clone() const;

        ~Ice();

};
#endif