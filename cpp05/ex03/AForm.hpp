#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <ctime>
#include <cstdlib>
class Bureaucrat;

class AForm
{
    const int _grade;
    const std::string _name;
    const int _execut;
    bool _sSign;

public:
    AForm(const int gra, const std::string name, int execut);
    AForm();
    AForm(const AForm &f);
    AForm &operator=(const AForm &f);
    bool getsSingn() const;
    int getGrade() const;
    int getExecut() const;
    const std::string getName() const;
    virtual void execute(Bureaucrat const &executor) const = 0;
    void beSigned(Bureaucrat &a);
    virtual ~AForm();

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
    class SignException : public std::exception
    {
    public:
        const char* what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const AForm &a);
#endif