  #include "FragTrap.hpp"
  
FragTrap::FragTrap()
{
    std::cout << "Default Constructer FragTrap called" << std::endl;
    name = "Unknown";
    hitPoint = 100;
    energyPoint = 100;
    Dmage = 30;
}
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    hitPoint = 100;
    energyPoint = 100;
    Dmage = 30;
    std::cout << "parametrise Constructer FragTrap called" << std::endl;

}
FragTrap::FragTrap(const FragTrap &sc):ClapTrap(sc)
{
    std::cout << "copyConstructer FragTrap called" << std::endl;
    
}
FragTrap &FragTrap::operator=(FragTrap const &sc)
{
    if (this != &sc)
        ClapTrap::operator=(sc);
    return (*this);
}
void FragTrap::highFivesGuys()
{
    std::cout << "High fives Guys" << std::endl;
}
FragTrap::~FragTrap()
{
    std::cout << "Destructer FragTrap called" << std::endl;
}