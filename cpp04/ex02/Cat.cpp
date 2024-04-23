#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Constructer cat called" << std::endl;
    type = "cat";
    brain = new Brain;
}
Cat::Cat(const Cat &ref):AAnimal(ref)
{
    this->brain = new Brain(*ref.brain);
}
Cat &Cat::operator=(const Cat &ref)
{
    AAnimal::operator=(ref);
    delete this->brain;
    this->brain = new Brain(*ref.brain);
    return (*this);
}
Cat::~Cat()
{
    delete(brain);
    std::cout << "Destructor Cat called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Cats Meowing" << std::endl;   
}