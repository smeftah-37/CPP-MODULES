
#ifndef ZOMBIE_HPP
#define  ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void annouce();
        void set_value(std::string n);
        std::string get_value()const;
        Zombie();
        ~Zombie();
};
Zombie  *zombieHorde(int N, std::string name);
#endif