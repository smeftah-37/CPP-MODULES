#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
class Fixed
{
    private:
        int a;
        static const int b = 8;
    public:
        Fixed();
        int getRawBits(void) const;
        void setRawBits(int const raw);
        Fixed(const Fixed& fixed);
        Fixed& operator=(const Fixed& fixed);
        ~Fixed();

};
#endif