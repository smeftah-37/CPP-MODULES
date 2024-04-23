#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed  const y;
    public:
        Point();
        Point(float const f1, float const f2);
        int  areaTriagle(Point const a, Point const b, Point const c) const;
        Point(const Point& point);

        const Fixed&  getValueX()const;
        const Fixed&  getValueY()const;
        Point& operator=(const Point &point);
        ~Point();

};
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif

