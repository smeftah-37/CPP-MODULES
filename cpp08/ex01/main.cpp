#include "Span.hpp"

int main()
{
Span sp = Span(10);
try
{
sp.addNumber(1);
sp.addNumber(1);
sp.addNumber(4);
sp.addNumber(18);
sp.addNumber(20);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
std::list<int> a ;

a.push_back(1);
a.push_back(11);
a.push_back(12);

sp.addNumber();
}
catch(const std::exception& e)
{
    std::cerr << e.what() <<std::endl;
}




return 0;
}