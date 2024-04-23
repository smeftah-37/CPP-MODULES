#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constructer Dog called" << std::endl;
    type = "Dog";
    brain = new Brain();
}
Dog::Dog(const Dog &ref):AAnimal(ref)
{   
    this->brain  = new Brain(*ref.brain);

}
Dog &Dog::operator=(const Dog &ref)
{
    AAnimal::operator=(ref);
    delete this->brain;
    this->brain = new Brain(*ref.brain);
    return (*this);
}
Dog::~Dog()
{
    delete(brain);
    std::cout << "Destructor Dog called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Dogs Bark" << std::endl;   
}