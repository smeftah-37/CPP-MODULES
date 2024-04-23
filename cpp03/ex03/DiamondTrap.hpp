#ifndef _DIAMONDTRAP_HPP_
#define _DIAMONDTRAP_HPP_

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public ScavTrap,public FragTrap
{
    private:
        std::string _name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &sc);
        DiamondTrap &operator=(DiamondTrap const &sc);
        void attack(std::string target);
        void whoAmI();
        ~DiamondTrap();
};



#endif