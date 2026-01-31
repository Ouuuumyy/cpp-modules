#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{  
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{  
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if(&other != this)
    {
        AForm::operator=(other);
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::execute(Bureaucrat const &executer) const
{
    std::string fileName;

    if(!this->getSign())
        throw AForm::FormNotSignedException();
    if (executer.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();
    fileName = _target + "_shrubbery";
    std::ofstream outfile(fileName.c_str());
    if(!outfile.is_open())
    {
        std::cerr << "can not open file for writing" << std::endl;
        return;
    }

    outfile << "      ~~       \n";
    outfile << "    ~~~~~~~    \n";
    outfile << "   ~~~~~~~~~   \n";
    outfile << "  ~~~~~~~~~~~  \n";
    outfile << "  ~~~~~~~~~~~  \n";
    outfile << "      ~~       \n";
    outfile << "      ~~       \n";
    outfile << "      ~~       \n";

    outfile.close();
}