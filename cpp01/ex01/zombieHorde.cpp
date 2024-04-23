#include "zombie.hpp"


Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *A;
    int i;

    i = -1;
    A = new Zombie[N];

    while (++i < N)
    {
        A[i].set_value(name);
        A[i].annouce();
    }
    return (A);
}


