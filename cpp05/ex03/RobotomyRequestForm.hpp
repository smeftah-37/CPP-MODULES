#ifndef ROBOTOMYREQUEST_HPP
#define ROBOTOMYREQUEST_HPP

#include "AForm.hpp"
#include <fstream>
class RobotomyRequestForm : public AForm
{
private:
    std::string _target;

public:
    RobotomyRequestForm(std::string target);
    void execute(Bureaucrat const &executor) const;
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm &shf);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &shf);
};

#endif