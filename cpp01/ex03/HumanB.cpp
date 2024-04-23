#include "HumanB.hpp"

HumanB::HumanB()
{

}
HumanB::HumanB(std::string n)
{
    name = n;
}
void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl; 
}

void    HumanB::setWeapon(Weapon &wo)
{
    weapon = &wo;
}
HumanB::~HumanB()
{
}