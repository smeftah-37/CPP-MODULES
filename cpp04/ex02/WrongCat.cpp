#include "Cat.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default Constructer Wrongcat called" << std::endl;
    type = "Wrongcat";
}
WrongCat::WrongCat(const WrongCat &ref):WrongAnimal(ref)
{
    std::cout << "copy Constructer Wrongcat called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &ref)
{
    WrongAnimal::operator=(ref);
    return (*this);
}
WrongCat::~WrongCat()
{
    std::cout << "Destructor WrongCat called" << std::endl;
}
void WrongCat::makeSound() const
{
    std::cout << "WrongCats sound's" << std::endl;   
}