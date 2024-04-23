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
        ~Fixed();

};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif