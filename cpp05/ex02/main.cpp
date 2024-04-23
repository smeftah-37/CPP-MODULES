#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    Bureaucrat b("safae", 1);
    AForm *f = new RobotomyRequestForm("target1");
    AForm *i = new ShrubberyCreationForm("target1");
    AForm *p = new PresidentialPardonForm("target1");


    try
    {
        f->beSigned(b);
        b.decrementGrade();
        f->execute(b);
        i->beSigned(b);
        i->execute(b);
         p->beSigned(b);
        p->execute(b);


        
    }
     catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}