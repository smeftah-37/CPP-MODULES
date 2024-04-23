#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
}
const std::string Bureaucrat::getName() const
{
    return _name;
}
int Bureaucrat::getGrade() const
{
    return _grade;
}
void Bureaucrat::incrementGrade()
{

    if (_grade > 1 && _grade <= 150)
        _grade--;
    else
        throw GradeTooHighException();
}
void Bureaucrat::decrementGrade()
{

    if (_grade < 150 && _grade >= 1)
        _grade++;
    else
        throw GradeTooLowException();
}
Bureaucrat::Bureaucrat():_name("default")
{
    _grade = 150;
}
Bureaucrat::~Bureaucrat()
{
}
std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{

    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

Bureaucrat::Bureaucrat(const Bureaucrat &b) : _name(b.getName())
{
    *this = b;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b)
{
    if (this != &b)
        _grade = b._grade;
    return (*this);
}
