#include "AMateria.hpp"

AMateria::AMateria()
{

}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
}
std::string const & AMateria::getType() const
{
    return (this->type);
}
AMateria::AMateria(const AMateria &ref)
{
    if(this != &ref)
        *this = ref;
}
AMateria &AMateria::operator=(const AMateria &ref)
{
    this->type = ref.type;
    return (*this);
}
void AMateria::use(ICharacter& target)
{
    std::cout << "Material use " <<  getType() << " to " << target.getName() << std::endl; 
}

AMateria::~AMateria()
{

}