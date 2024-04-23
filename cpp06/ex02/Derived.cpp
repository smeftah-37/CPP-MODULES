#include "Derived.hpp"
#include <ctime>
Base *generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(0)));
    int RandomNumber = std::rand() % 3;

    switch (RandomNumber)
    {
    case 0:
    {
        Base *a = new A();
        return a;
    }
    case 1:
    {
        Base *a = new B();
        return a;
    }
    case 2:
    {
        Base *a = new C();
        return a;
    }
    }
    return NULL;
}
void identify(Base *p)
{
    if (dynamic_cast<A *>(p) != NULL)
        std::cout << "The type of the class is A" << std::endl;
    else if (dynamic_cast<B *>(p) != NULL)
        std::cout << "The type of the class is B" << std::endl;
    else if (dynamic_cast<C *>(p) != NULL)
        std::cout << "The type of the class is C" << std::endl;
    else
        std::cout << "Undefined Type" << std::endl;
}
void identify(Base &p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "The type of the class is A" << std::endl;
        return;
    }
    catch (const std::exception& e)
    {

    }
    try
    {
        B b = dynamic_cast<B &>(p);
        std::cout << "The type of the class is B" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {

    }
    try
    {
        C c = dynamic_cast<C &>(p);
        std::cout << "The type of the class is C" << std::endl;
        return;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() <<std::endl;

    }
}
