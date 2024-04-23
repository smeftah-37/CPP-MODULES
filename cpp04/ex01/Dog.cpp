#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructer Dog called" << std::endl;
    type = "Dog";
    brain = new Brain();
}
Dog::Dog(const Dog &ref):Animal(ref)
{   
    this->brain = new Brain(*ref.brain);
}
Dog &Dog::operator=(const Dog &ref)
{
    Animal::operator=(ref);

    delete this->brain;
    this->brain = new Brain(*ref.brain);
    return (*this);
}
Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    delete(brain);
}
void Dog::makeSound() const
{
    std::cout << "Dogs Bark" << std::endl;   
}