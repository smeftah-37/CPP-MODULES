#include "Fixed.hpp"

Fixed::Fixed()
{
    a = 0;
    //std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int i)
{
   // std::cout << "int constructor called" << std::endl;
    a = i << b;

}
Fixed::Fixed(const float f)
{
   // std::cout << "Float constructor called" << std::endl;

    a = roundf(f * (1 << b));
}
float Fixed::toFloat(void) const
{
    float l;
  //  std::cout << "before value to float" << a << std::endl;

    l = float(a) / (1 << b);
    //std::cout << "after value to float" << l << std::endl;
    return (l);
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
   // std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
    
}
Fixed& Fixed::operator=(const Fixed& fixed)
{
    //std::cout << "Copy assignment operator called " << std::endl;
    if (this != &fixed)
        a = fixed.getRawBits();
    
    return (*this);
}
bool   Fixed::operator>(const Fixed &fixed) const
{
    //std::cout << "operator > called " << std::endl;

    return(a > fixed.getRawBits());
}
bool   Fixed::operator<(const Fixed &fixed) const
{
    //std::cout << "operator  < called " << std::endl;
      return (a < fixed.getRawBits());
}
bool   Fixed::operator>=(const Fixed &fixed)
{
    //std::cout << "operator >= called " << std::endl;

      return (a >= fixed.getRawBits());
}
bool   Fixed::operator<=(const Fixed &fixed)
{
    //std::cout << "operator <= called " << std::endl;

  return (a <= fixed.getRawBits());
  
}
bool   Fixed::operator==(const Fixed &fixed)
{
    //std::cout << "operator == called " << std::endl;

      return (a == fixed.getRawBits());

}
bool   Fixed::operator!=(const Fixed &fixed)
{
    //std::cout << "operator != called " << std::endl;

    return(a != fixed.getRawBits());
}
Fixed Fixed::operator+(const Fixed &fixed)
{
   // std::cout << "operator + called " << std::endl;
    
    return Fixed(toFloat() + fixed.toFloat());
}
Fixed Fixed::operator-(const Fixed &fixed)
{
   // std::cout << "operator - called " << std::endl;
    return Fixed(toFloat() - fixed.toFloat());
}
Fixed Fixed::operator*(const Fixed &fixed)
{
    //Fixed c;
    //std::cout << "operator * called " << "a  && b    " << a << "  "<< fixed.getRawBits() << std::endl;
return Fixed(toFloat() * fixed.toFloat());
    //return (c);
}
Fixed Fixed::operator/(const Fixed &fixed)
{
    //std::cout << "operator / called " << std::endl;
    
    return Fixed(toFloat() / fixed.toFloat());

}
Fixed Fixed::operator++(int)
{
    Fixed c;
    //std::cout << "operator ++ called " << std::endl;

    c = *this; 
    a++;
    return (c);
}
Fixed Fixed::operator--(int)
{
     Fixed c;
    //std::cout << "operator -- called " << std::endl;

    c = *this; 
    a--;
    return (c);
}
Fixed& Fixed::operator++()
{
    ++a;
    //std::cout << " ++ operator  called " << std::endl;

    return (*this);
}
Fixed& Fixed::operator--()
{
    //std::cout << " -- operator  called " << std::endl;
    --a;
    return (*this);
}
Fixed& Fixed::min(Fixed& v1, Fixed& v2)
{
    //std::cout<<  "min member is called" << std::endl;
    if(v1 > v2)
        return v2;
    else
        return v1;
}
const Fixed& Fixed::min(const Fixed& v1,const Fixed& v2)
{
   // std::cout << "min member is called" << std::endl;

    if (v1 > v2)
        return v2;
    else
        return v1;
}
Fixed& Fixed::max(Fixed& v1, Fixed& v2)
{
    //std::cout << "max member is called" << std::endl;

    if(v1 < v2)
        return v2;
    else
        return v1;
}
const Fixed& Fixed::max(const Fixed& v1,const Fixed& v2)
{
    std::cout << "max member is called" << std::endl;

    if(v1 < v2)
        return v2;
    else
        return v1;
}

Fixed::~Fixed()
{
   // std::cout << "Destructor called" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{

    os << fixed.toFloat();
    return os;
}
