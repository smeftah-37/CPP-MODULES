#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <string>
class Fixed
{
    private:
        int a;
        static const int b = 8;
    public:
        Fixed();
        Fixed(const int i);
        Fixed(const float f);
        float toFloat(void) const;
        int toInt(void)  const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed(const Fixed& fixed);
        Fixed& operator=(const Fixed& fixed);
        bool operator>(const Fixed &fixed) const ;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed);
        bool operator<=(const Fixed &fixed);
        bool operator==(const Fixed &fixed);
        bool operator!=(const Fixed &fixed);
        Fixed operator+(const Fixed &fixed);
        Fixed operator-(const Fixed &fixed);
        Fixed operator*(const Fixed &fixed);
        Fixed operator/(const Fixed &fixed);
        Fixed& operator++();
        Fixed& operator--();
        Fixed operator++(int);
        Fixed operator--(int);
        static Fixed& min(Fixed& v1, Fixed& v2);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed& max(Fixed& v1, Fixed& v2);
        static const Fixed& max(const Fixed& v1,const Fixed &v2);


        
        

        ~Fixed();

};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif