#include "Form.hpp"
#include "Bureaucrat.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}
Form::Form(const int gra, const std::string name, const int execut) : _grade(gra), _name(name), _execut(execut), _sSign(false)
{

    if (_grade < 1 || _execut < 1)
        throw GradeTooHighException();
    else if (_grade > 150 || _execut > 150)
        throw GradeTooLowException();
}

bool Form::getsSingn() const
{
    return _sSign;
}
int Form::getGrade() const
{
    return _grade;
}

const std::string Form::getName() const
{
    return _name;
}
void Form::beSigned(Bureaucrat &a)
{
    if (a.getGrade() <= _grade)
    {
        _sSign = true;
        a.signForm(_sSign,*this);
    }
    else
    {
        a.signForm(_sSign,*this);
        throw GradeTooLowException();
    }
}

Form::~Form()
{
}
int Form::getExecut() const
{
    return (_execut);
}

std::ostream &operator<<(std::ostream &os, const Form &a)
{
    os << a.getName() << ", signed: " << a.getsSingn()
       << ", sign grade: " << a.getGrade() << ", execute grade: " << a.getExecut() << std::endl;

    return os;
}

Form::Form() : _grade(150), _name("none"), _execut(150),_sSign(false)
{
}

Form::Form(const Form &f) : _grade(f.getGrade()), _name(f.getName()), _execut(f.getExecut())
{
    *this = f;
}
Form &Form::operator=(const Form &f)
{
    if (this != &f)
    {
        _sSign = f._sSign;
    }
    return (*this);
}
