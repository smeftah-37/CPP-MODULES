#include "AForm.hpp"
#include "Bureaucrat.hpp"

// nested class
const char * AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char * AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
const char *AForm::SignException::what() const throw()
{
    return "the form is not signed";
}

//
AForm::AForm(const int gra, const std::string name, const int execut) : _grade(gra), _name(name), _execut(execut), _sSign(false)
{

    if (_grade < 1 || _execut < 1)
        throw GradeTooHighException();
    else if (_grade > 150 || _execut >150)
        throw GradeTooLowException();
}
void AForm::beSigned(Bureaucrat &a)
{
    if (a.getGrade() <= _grade)
    {
        _sSign = true;
        a.signForm(_sSign,*this);
    }
    else
    {
        a.signForm(_sSign, *this);
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &os, const AForm &a)
{
    os << a.getName() << ", signed: " << a.getsSingn()
       << ", sign grade: " << a.getGrade() << ", execute grade: " << a.getExecut() << std::endl;

    return os;
}

AForm::AForm() : _grade(150), _name("none"), _execut(150)
{
}

AForm::AForm(const AForm &f) : _grade(f.getGrade()), _name(f.getName()), _execut(f.getExecut())
{
    *this = f;
}
AForm &AForm::operator=(const AForm &f)
{
    if (this != &f)
    {
        _sSign = f._sSign;
    }
    return (*this);
}
// getters
bool AForm::getsSingn() const
{
    return _sSign;
}
int AForm::getGrade() const
{
    return _grade;
}

const std::string AForm::getName() const
{
    return _name;
}
int AForm::getExecut() const
{
    return (_execut);
}
//

// destructor
AForm::~AForm()
{
}
//