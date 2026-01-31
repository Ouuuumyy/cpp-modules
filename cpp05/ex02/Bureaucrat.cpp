#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade):
    name(name)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
    std::cout << "copy constructer called" << std::endl;
}

const std::string Bureaucrat::getName() const
{
    return name;
}
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other)
{
    if(this != &other)
    {
        this->grade = other.grade;
    }
    return *this;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::checkGrade(int grade)
{
    if(grade < 1)
        throw GradeTooHighException();
    else if(grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too High";
}
Bureaucrat::GradeTooLowException::GradeTooLowException()
{}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too Low";
}

void Bureaucrat::incrementGrade()
{
    int temp = grade;
    temp--;
    checkGrade(temp);
    grade = temp;
    std::cout << "grade incremented to " << grade << std::endl;
}

void Bureaucrat::decrementGrade()
{
    int temp = grade;
    temp++;
    checkGrade(temp);
    grade = temp;
    std::cout << "grade decremented to " << grade << std::endl;

}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << "bureaucrat " << this->name << " signed " << form.getName() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << "bureaucrat " << this->name
        << " couldn’t sign " << form.getName()
        << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(AForm const & form) const
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << name << " cannot execute " << form.getName() << " because of " << e.what() << '\n';
    }
    
}
