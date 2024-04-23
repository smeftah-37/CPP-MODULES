#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "Default Constructer called" << std:: endl;
    this->name = "Unknown";
    hitPoint = 10;
    energyPoint = 10;
    Dmage =0;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parametrized Constructer called" << std:: endl;
    this->name = name;
    hitPoint = 10;
    energyPoint = 10;
    Dmage =0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructer called" << std::endl;
}
ClapTrap &ClapTrap::operator=(ClapTrap const &ref)
{
    name = ref.name;
    hitPoint = ref.hitPoint;
    energyPoint = ref.energyPoint;
    Dmage =ref.Dmage;
    return (*this);
}
ClapTrap::ClapTrap( ClapTrap const& c)
{
    *this = c;
}
void ClapTrap::attack(const std::string& target)
{
    if(energyPoint > 0 && hitPoint > 0)
    {
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << Dmage << " points of damage!" << std::endl;
        energyPoint --;
    }
    else
        std::cout << "there is no energy point" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    if(hitPoint >= amount)
    {
        hitPoint -= amount;
    std::cout << name << " lose " << amount << " points "<< std::endl;
    }
    else
    {
        hitPoint = 0;
        std::cout << name << " is died" << std::endl;
    }

}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(energyPoint > 0 && hitPoint >0)
    {
        std::cout << name << " repaired " << amount << "points" << std::endl;
        hitPoint += amount;
        energyPoint --;
    }
    else
        std::cout << "you dont have enough energyPoint" << std::endl;

}