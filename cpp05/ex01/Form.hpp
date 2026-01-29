#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string name;
        bool sign;
        const int signGrade;
        const int executeGrade;    
    public:
        Form(const std::string &name, const int signGrade, const int executeGrade);
        Form(const Form &other);
        Form& operator=(const Form &other);
        ~Form();
        const std::string getName() const;
        int getExecuteGrade() const;
        int getSignGrade() const;
        bool getSign() const;
        void beSigned(Bureaucrat &bureaucrat);
        
    
        class GradeTooHighException : public std::exception
        {
            public:
            GradeTooHighException();
            const char* what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
            public:
            GradeTooLowException();
            const char* what() const throw();
        };
    };
    
std::ostream& operator<<(std::ostream& os, const Form &form);

#endif