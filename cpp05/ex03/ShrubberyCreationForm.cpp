#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, "shrubbery creation", 137)
{
    _target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (getsSingn() == true && executor.getGrade() <= getExecut())
    {
        std::string name = _target + "_shrubbery";
        std::ofstream file(name.c_str());
        file << "    *\n   ***\n  *****\n *******\n*********\n    |" << std::endl;
        file.close();
    }
    else
        throw AForm::GradeTooLowException();
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm():AForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shf) : AForm(shf)
{
    *this = shf;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shf)
{
    if (this != &shf)
    {
        AForm::operator=(shf);
        _target = shf._target;
    }
    return (*this);
}