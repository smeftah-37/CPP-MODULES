#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoint;
       unsigned int energyPoint;
       unsigned int  Dmage;
    public:
        ClapTrap(std::string name);
        ClapTrap();
        ClapTrap &operator=(ClapTrap const &ref);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(const ClapTrap& c);
        ~ClapTrap();
};


#endif