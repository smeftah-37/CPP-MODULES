#include "HumanA.hpp"

HumanA::HumanA(std::string n, Weapon& w): name(n) ,weapon(w)
{
   
}

HumanA::~HumanA()
{

}
void    HumanA::attack()
{
    std::cout << name << " atacks with their " << weapon.getType() << std::endl; 
}