#include "Weapon.hpp"

Weapon::Weapon()
{

}
Weapon::Weapon(std::string s)
{
    type = s;
}
std::string const& Weapon::getType() const
{
    return (type);
}
void    Weapon::setType(std::string s)
{
    type = s;
}
Weapon::~Weapon()
{

}