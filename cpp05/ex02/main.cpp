#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include <ctime>

int main()
{
    std::srand(std::time(0));
    //ShrubberyCreationForm
    try
    { 
        Bureaucrat first("oum", 120);
        ShrubberyCreationForm garden("home");
        first.signForm(garden);
        first.executeForm(garden);
        std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //RobotomyRequestForm
    try
    { 
        Bureaucrat second("oum", 11);
        RobotomyRequestForm test("mima");
        second.signForm(test);
        second.executeForm(test);
        std::cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    //PresidentialPardonForm
    try
    { 
        Bureaucrat third("oum", 1);
        PresidentialPardonForm test1("mima");
        third.signForm(test1);
        third.executeForm(test1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
