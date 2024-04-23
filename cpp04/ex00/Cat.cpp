#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructer cat called" << std::endl;
    type = "cat";
}
Cat::Cat(const Cat &ref):Animal(ref)
{
    std::cout << "copy Constructer cat called" << std::endl;
}
Cat &Cat::operator=(const Cat &ref)
{
    Animal::operator=(ref);
    return (*this);
}
Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Cats Meowing" << std::endl;   
}