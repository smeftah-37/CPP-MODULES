#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        Bureaucrat a("safae",1);
        rrf->beSigned(a);
        rrf->execute(a);
        delete(rrf);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}