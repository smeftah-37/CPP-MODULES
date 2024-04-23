#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int  Dmage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap &operator=(ClapTrap const &ref);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(const ClapTrap& c);
        ~ClapTrap();
};


#endif