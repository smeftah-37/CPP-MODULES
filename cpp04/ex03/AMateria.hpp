#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include "ICharacter.hpp"
#include <iostream>

class ICharacter;
class AMateria
{
protected:
    std::string type;
public:
    AMateria();
    AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    AMateria(const AMateria &ref);
    AMateria &operator=(const AMateria &ref);
    virtual ~AMateria();
    virtual void use(ICharacter& target);
};

#endif