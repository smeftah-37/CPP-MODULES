#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Constructor Animal Called" << std::endl;
    type = "Animal";
}
Animal::Animal(const Animal &ref)
{
    *this = ref;
}
Animal &Animal::operator=(const Animal &ref)
{
    if(this != &ref)
        type = ref.type;
    return (*this);
}
std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "Destructor Animal Called" << std::endl;

}
void Animal::makeSound() const
{
    std::cout << " sound of Animal" << std::endl;
}