#include "Zombie.hpp"

Zombie::Zombie()
{

}
Zombie::~Zombie()
{
    std::cout << name << " destroyed" << std::endl;
}
void Zombie::annouce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." <<std::endl;
}

void    Zombie::set_value(std::string n)
{
    name = n;
}
std::string Zombie::get_value() const
{
    return (name);
}

