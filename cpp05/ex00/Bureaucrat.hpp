
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    class GradeTooHighException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        const char* what() const throw();
    };
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat &operator=(const Bureaucrat &b);
    Bureaucrat();
    ~Bureaucrat();
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat &b);

#endif