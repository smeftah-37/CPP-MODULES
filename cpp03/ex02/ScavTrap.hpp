#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &sc);
        ScavTrap &operator=(ScavTrap const &sc);
        void attack(std::string target);
        void guardGate();
        ~ScavTrap();
};



#endif