#include "Point.hpp"

int main()
{

    Point a(0.0,0.0);
    Point b(10.0,30.0);
    Point c(20.0,0.0);
    Point d(10,15);
    std::cout << std::boolalpha << bsp( a, b, c, d) << std::endl;
    return (0);
}