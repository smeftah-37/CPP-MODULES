#ifndef PRESIDENTIALPARDON_HPP
#define PRESIDENTIALPARDON_HPP

#include "AForm.hpp"
#include <fstream>
class PresidentialPardonForm : public AForm
{
private:
    std::string _target;

public:
    PresidentialPardonForm(std::string target);
    void execute(Bureaucrat const &executor) const;
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm &shf);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &shf);
};

#endif