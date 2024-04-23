#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class   Weapon
{
    private:
        std::string type;
    public:
        std::string const& getType() const ;
        void        setType(std::string s);
        Weapon(std::string str);
        Weapon();
        ~Weapon();
};

#endif