#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"
class   HumanB
{
    private:
        std::string name;
        Weapon  *weapon;
    public:
        void    attack();
        void    setWeapon(Weapon &wo);
        HumanB(std::string n);
        HumanB();
        ~HumanB();

};
#endif