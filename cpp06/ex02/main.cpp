#include "Derived.hpp"
#include <unistd.h>

int main()
{
    Base *cl = new B();
    identify(cl);
    Base *l = generate();
    sleep(1);
    Base *a = generate();
    sleep(1);
    Base *c = generate();
    sleep(1);

    identify(*l);
    identify(*a);
    identify(*c);    
}