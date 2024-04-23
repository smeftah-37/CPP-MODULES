#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "Default Constructor DiamondTrap called"<< std::endl;
    _name = "Unknown";

   hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    Dmage = FragTrap::Dmage;
}
DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name")
{
    std::cout << "parametrise Constructer DiamondTrap called" << std::endl;
    _name = name;
    hitPoint = FragTrap::hitPoint;
    energyPoint = ScavTrap::energyPoint;
    Dmage = FragTrap::Dmage;
}
DiamondTrap::DiamondTrap(const DiamondTrap &sc):ClapTrap(sc),ScavTrap(sc), FragTrap(sc), _name(sc._name)
{

}
DiamondTrap &DiamondTrap::operator=(DiamondTrap const &sc)
{
        ClapTrap::operator=(sc);
        return *this;
}
void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
    std::cout << "the name is " << _name << " and the ClapTrape name is " << ClapTrap::name<<std::endl;
}
DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructer DiamondTrap called" << std::endl;

}