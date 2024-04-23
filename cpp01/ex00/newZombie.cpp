
#include "Zombie.hpp"

Zombie* newZombie(std::string n)
{
    Zombie *a;

    a = new(Zombie);
    a->set_value(n);
    return (a);
}