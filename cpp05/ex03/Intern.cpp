#include "Intern.hpp"
#include "AForm.hpp"
Intern::Intern()
{
}
Intern::~Intern()
{
}
Intern::Intern(const Intern &i)
{
    *this = i;
}
Intern &Intern::operator=(const Intern &i)
{
    (void)i;
    return *this;
}
AForm *Intern::createShrubbery(std::string target)
{
    return new ShrubberyCreationForm(target);
}
AForm *Intern::createRobot(std::string target)
{
    return new RobotomyRequestForm(target);
}
AForm *Intern::createPresidential(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string names[] = {"shrubbery creation", "robotomy request", "president pardon"};
    AForm *(Intern::*make[3])(std::string target) = {&Intern::createShrubbery, &Intern::createRobot, &Intern::createPresidential};

    for (int i = 0; i < 3; ++i)
    {
        if (names[i] == name)
        {
            std::cout << "Intern creates " << name << std::endl;
            return (this->*(make[i]))(target);
        }
    }

    std::cout << "Error, we didn't find this name form" << std::endl;
    return NULL;
}
