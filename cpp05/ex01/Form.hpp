#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
class Bureaucrat;

class Form
{
    const int _grade;
    const std::string _name;
    const int _execut;
    bool _sSign;

public:
    Form(const int gra, const std::string name, int execut);
    Form();
    Form(const Form &f);
    Form &operator=(const Form &f);
    bool getsSingn() const;
    int getGrade() const;
    int getExecut() const;
    const std::string getName() const;
    void beSigned(Bureaucrat &a);
    ~Form();

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
};
std::ostream &operator<<(std::ostream &os, const Form &a);
#endif