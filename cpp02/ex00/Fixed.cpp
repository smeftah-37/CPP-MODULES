#include "Fixed.hpp"

Fixed::Fixed()
{
    a = 0;
    std::cout << "Default constructor called" << std::endl;
}
int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return a;
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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

