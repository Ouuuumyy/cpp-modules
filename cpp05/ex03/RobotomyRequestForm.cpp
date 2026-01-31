#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{  
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), _target(other._target)
{  
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if(&other != this)
    {
        AForm::operator=(other);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const &executer) const
{
    if(!this->getSign())
        throw AForm::FormNotSignedException();
    if (executer.getGrade() > this->getExecuteGrade())
        throw AForm::GradeTooLowException();

    std::cout << "*************noises***************" << std::endl;
    if(std::rand() % 2 == 0)
    {
        std::cout << _target << " has been robotomized successfully"
        << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed" << std::endl;
    }    
}