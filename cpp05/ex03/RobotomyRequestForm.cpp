#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(72, "robotomy request", 45)
{
    _target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (getsSingn() == true && executor.getGrade() <= getExecut())
    {
        std::cout << "*************************************DRR" << std::endl;
        std::srand(static_cast<unsigned>(std::time(0)));
        if((rand() % 2) == 0)
            std::cout << " the " << _target << " has been robotomized suCXXessfully "<< std::endl;
        else
            std::cout << "The "<<  _target << "has been robotomy failed " << std::endl;
    }
    else if(getsSingn() == true)
    {
        throw AForm::GradeTooLowException();
    }
    else
        throw AForm::SignException();
}
RobotomyRequestForm::~RobotomyRequestForm()
{
}
RobotomyRequestForm::RobotomyRequestForm():AForm()
{
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &shf) : AForm(shf)
{
    *this = shf;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &shf)
{
    if (this != &shf)
    {
        AForm::operator=(shf);
        _target = shf._target;
    }
    return (*this);
}