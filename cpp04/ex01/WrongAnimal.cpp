#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default's Constructor called" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (type);
}
WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
    std::cout << "WrongAnimal copy Constructor called" << std::endl;
    *this = ref;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
    if(this != &ref)
        this->type = ref.type;
    return (*this);
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor Called" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound's" << std::endl;
}