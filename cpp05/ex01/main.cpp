#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
        Bureaucrat b("safae", 100);
        Form f = Form(2,"jo",13);
    try
    {
        b.decrementGrade();
        f.beSigned(b);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}