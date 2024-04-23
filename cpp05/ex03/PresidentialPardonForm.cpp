#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(25, "presidential Pardon", 5)
{
    _target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (getsSingn() == true && executor.getGrade() <= getExecut())
    {
        std::cout << " The " << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        throw AForm::GradeTooLowException();
}
PresidentialPardonForm::~PresidentialPardonForm()
{
}
PresidentialPardonForm::PresidentialPardonForm():AForm()
{
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &shf) : AForm(shf)
{
    *this = shf;
}
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &shf)
{
    if (this != &shf)
    {
        AForm::operator=(shf);
        _target = shf._target;
    }
    return (*this);
}