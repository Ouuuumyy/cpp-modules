#include "Intern.hpp"

Intern::Intern()
{
}
Intern::Intern(const Intern &other)
{
    (void)other;
}

Intern& Intern::operator=(const Intern &other)
{
    (void)other;
    return(*this);
}

Intern::~Intern()
{
}

static AForm* makeStrubbery(const std::string &target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* makeRobot(const std::string &target)
{
    return new RobotomyRequestForm(target);
}

static AForm* makePresidential(const std::string &target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
    std::string forms[] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
    AForm* (*formFuncts[])(const std::string &) = {
        &makeStrubbery, &makeRobot, &makePresidential
    };

    for (size_t i = 0; i < 3; i++)
    {
        if(name == forms[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            return (formFuncts[i](target));
        }
    }

    std::cerr << name << ": this type of form is not valid" << std::endl;
    return NULL;     
}