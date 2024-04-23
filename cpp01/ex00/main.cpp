#include "Zombie.hpp"

int main()
{
    Zombie *a;

    a = newZombie("heap");
    a->annouce();
    randomChump("stack");
    delete (a);
    
}