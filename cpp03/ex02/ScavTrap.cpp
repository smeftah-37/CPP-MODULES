#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout << "Default Constructer ScavTrap called" << std::endl;
    name = "Unknown";
    hitPoint = 100;
    energyPoint= 50;
    Dmage = 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout << "parametrise Constructer ScavTrap called" << std::endl;
    hitPoint = 100;
    energyPoint= 50;
    Dmage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &sc):ClapTrap(sc){
    std::cout << "copy Constructer ScavTrap+ called" << std::endl;

}

ScavTrap &ScavTrap::operator=(ScavTrap const &sc){
    if(this != &sc)
        ClapTrap::operator=(sc);
    return (*this);
}

void ScavTrap::attack(std::string target){
    if(energyPoint > 0 && hitPoint > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target << " causing " << Dmage << " points of damage!" << std::endl;
        energyPoint --;
    }
    else
        std::cout << "there is no energy point" << std::endl;
}
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
ScavTrap::~ScavTrap(){
    std::cout << "Destructer ScavTrap called" << std::endl;
}
