#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
    AForm *createShrubbery(std::string target);
    AForm *createRobot(std::string target);
    AForm *createPresidential(std::string target);

public:
    Intern();
    ~Intern();
    Intern(const Intern &i);
    Intern &operator=(const Intern &i);
    AForm *makeForm(std::string name, std::string target);
};

#endif