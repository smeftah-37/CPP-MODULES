#ifndef DERIVED_H
#define DERIVED_H

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <exception>
#include <stdexcept>
class A : public Base
{
};
class B : public Base
{
};
class C : public Base
{
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);
#endif