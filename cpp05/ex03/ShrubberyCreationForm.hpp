#ifndef SHRUBBERYCREATION_HPP
#define SHRUBBERYCREATION_HPP

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;

public:
    ShrubberyCreationForm(std::string target);
    void execute(Bureaucrat const &executor) const;
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm &shf);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &shf);
};

#endif