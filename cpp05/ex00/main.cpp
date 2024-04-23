#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("safae", 0);
        b.incrementGrade();
        std::cout << b<< std::endl;
        b.decrementGrade();
        std::cout << b<< std::endl;
        Bureaucrat a("sa",150);
        a.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }


}