#include "zombie.hpp"

Zombie::Zombie()
{

}
Zombie::~Zombie()
{

}
void Zombie::annouce()
{
    std::cout << name <<std::endl;
}

void    Zombie::set_value(std::string n)
{
    name = n;
}
std::string Zombie::get_value() const
{
    return (name);
}
