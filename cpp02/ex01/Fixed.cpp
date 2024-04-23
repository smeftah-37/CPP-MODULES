#include "Fixed.hpp"

Fixed::Fixed()
{
    a = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int i)
{
    std::cout << "int constructor called" << std::endl;
    a = i << b;

}
Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;

    a = roundf(f * (1 << b));
}
float Fixed::toFloat(void) const
{
    float l;

    l = (float(a) / (1 << b));
    return l;
}
int Fixed::toInt(void)  const
{
    return (a >> b);
}
int Fixed::getRawBits() const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return a;
}
void Fixed::setRawBits(int const raw)
{
   // std::cout << "setRawBits member function called" << std::endl;
    a = raw;
}
Fixed::Fixed(const Fixed& fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    
}
Fixed& Fixed::operator=(const Fixed& fixed)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &fixed)
        a = fixed.getRawBits();
    
    return (*this);
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
