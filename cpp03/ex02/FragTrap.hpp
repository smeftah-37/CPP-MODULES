#ifndef _FRAGTRAP_HPP_
#define _FRAGTRAP_HPP_

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &sc);
        FragTrap &operator=(FragTrap const &sc);
        void highFivesGuys();
        ~FragTrap();
};



#endif