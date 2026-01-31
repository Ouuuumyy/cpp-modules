#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string &name, const int signGrade, const int executeGrade):
    name(name),sign(false), signGrade(signGrade), executeGrade(executeGrade)
{
    if(signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    else if(signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other) : name(other.name), sign(other.sign),
    signGrade(other.signGrade), executeGrade(other.executeGrade)
{
    std::cout << "copy constructer called" << std::endl;
}

const std::string AForm::getName() const
{
    return name;
}
AForm& AForm::operator=(const AForm &other)
{
    if(this != &other)
    {
        this->sign = other.sign;
    }
    return *this;
}

int AForm::getSignGrade() const
{
    return signGrade;
}

int AForm::getExecuteGrade() const
{
    return executeGrade;
}

bool AForm::getSign() const
{
    return sign;
}

std::ostream& operator<<(std::ostream &os, const AForm &AForm)
{
    os  << "AForm name: " << AForm.getName()
        << "signing grade: " << AForm.getSignGrade()
        << "execution grade: " << AForm.getExecuteGrade()
        << "signed: " << (AForm.getSign() ? "yes" : "no");
    return os;
}

AForm::~AForm(){}

AForm::GradeTooHighException::GradeTooHighException()
{}
const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}
AForm::GradeTooLowException::GradeTooLowException()
{}
const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

AForm::FormNotSignedException::FormNotSignedException()
{}
const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}
void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > signGrade)
        throw GradeTooLowException();
    sign = true;
}

