#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    if ((a.areaTriagle(a,b,c) == (point.areaTriagle(a,b,point) + point.areaTriagle(b,c,point) + point.areaTriagle(a,c,point))) && a.areaTriagle(a,b,c) != 0)
        return (true);
    return (false);
}
