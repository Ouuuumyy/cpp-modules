#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string &name, const int signGrade, const int executeGrade):
    name(name),sign(false), signGrade(signGrade), executeGrade(executeGrade)
{
    if(signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
    else if(signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    std::cout << "constructer called" << std::endl;
}

Form::Form(const Form &other) : name(other.name), sign(other.sign),
    signGrade(other.signGrade), executeGrade(other.executeGrade)
{
    std::cout << "copy constructer called" << std::endl;
}

const std::string Form::getName() const
{
    return name;
}
Form& Form::operator=(const Form &other)
{
    if(this != &other)
    {
        this->sign = other.sign;
    }
    return *this;
}

int Form::getSignGrade() const
{
    return signGrade;
}

int Form::getExecuteGrade() const
{
    return executeGrade;
}

bool Form::getSign() const
{
    return sign;
}

std::ostream& operator<<(std::ostream &os, const Form &form)
{
    os  << "Form name: " << form.getName()
        << "signing grade: " << form.getSignGrade()
        << "execution grade: " << form.getExecuteGrade()
        << "signed: " << (form.getSign() ? "yes" : "no");
    return os;
}

Form::~Form(){}

Form::GradeTooHighException::GradeTooHighException()
{}
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}
Form::GradeTooLowException::GradeTooLowException()
{}
const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}
void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() > signGrade)
        throw GradeTooLowException();
    sign = true;
}

