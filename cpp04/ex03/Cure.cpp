
#include "Cure.hpp"

Cure::Cure(std::string type):AMateria(type)
{

}
Cure::Cure()
{
    this->type = "cure";
    
}
void Cure::set_type(std::string const type)
{
    this->type = type;

}
Cure::Cure(const Cure &ref):AMateria(ref)
{

}
void Cure::use(ICharacter& target)
{
    std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=(const Cure &ref)
{
    AMateria::operator=(ref);
    return (*this);

}
AMateria* Cure::clone() const
{
    Cure* clonedCure = new Cure(*this);
    return clonedCure;
}

Cure::~Cure()
{

}