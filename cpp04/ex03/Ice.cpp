#include "Ice.hpp"

Ice::Ice(std::string type):AMateria(type)
{

}
Ice::Ice()
{
    this->type = "ice";
}
void Ice::set_type(std::string const type)
{
    this->type = type;

}
Ice::Ice(const Ice &ref):AMateria(ref)
{

}
Ice &Ice::operator=(const Ice &ref)
{
    AMateria::operator=(ref);
    return (*this);

}
void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *i = new Ice();
    *i = *this;
    return i;
}

Ice::~Ice()
{

}