#include "zombie.hpp"

int main()
{
    Zombie  *z;

    z = zombieHorde(4,"menani");
    delete []z;
}