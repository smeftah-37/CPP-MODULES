#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructer Dog called" << std::endl;
    type = "Dog";
}
Dog::Dog(const Dog &ref):Animal(ref)
{
    std::cout << "copy Constructer Dog called" << std::endl;
}
Dog &Dog::operator=(const Dog &ref)
{
    Animal::operator=(ref);
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Dogs Bark" << std::endl;   
}