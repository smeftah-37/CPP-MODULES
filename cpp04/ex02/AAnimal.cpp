#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Default Constructor Animal Called" << std::endl;
    type = "Animal";
}
AAnimal::AAnimal(const AAnimal &ref)
{
    *this = ref;
}
AAnimal &AAnimal::operator=(const AAnimal &ref)
{
    if(this != &ref)
        type = ref.type;
    return (*this);
}
std::string AAnimal::getType() const
{
    return (type);
}

AAnimal::~AAnimal()
{
    std::cout << "Destructor Animal Called" << std::endl;

}
