
#include "Point.hpp"

Point::Point():x(0),y(0)
{

}
Point::Point(float const x1, float const y1): x(x1),y(y1)
{
}

int  Point::areaTriagle(Point const a, Point const b, Point const c) const
{
    int ar;

    ar = ((a.x.getRawBits() * (b.y.getRawBits() - c.y.getRawBits())) + 
        (b.x.getRawBits() * (c.y.getRawBits() - a.y.getRawBits())) + 
        (c.x.getRawBits() * (a.y.getRawBits() - b.y.getRawBits()))) / 2;
    if(ar > 0)
        return ar;
    return (-ar);
}
Point::Point(const Point& point)
{
    *this= point;
}
Point& Point::operator=(const Point& point)
{
    //std::cout << "Copy assignment operator called " << std::endl;
    const_cast<Fixed &>(this->x) = point.x;
    const_cast<Fixed &>(this->y) = point.y;

    
    return (*this);
}
const Fixed&  Point::getValueX() const
{
    return x;
}
const Fixed&  Point::getValueY() const
{
    return y;
}
 
Point::~Point()
{

}