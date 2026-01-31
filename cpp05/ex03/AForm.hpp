#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool sign;
        const int signGrade;
        const int executeGrade; 
        const std::string target;   
    public:
        AForm(const std::string &name, const int signGrade, const int executeGrade);
        AForm(const AForm &other);
        AForm& operator=(const AForm &other);
        ~AForm();
        const std::string getName() const;
        int getExecuteGrade() const;
        int getSignGrade() const;
        bool getSign() const;
        void beSigned(Bureaucrat &bureaucrat);
        virtual void execute(Bureaucrat const &executer) const = 0;
    
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

        class FormNotSignedException : public std::exception
        {
            public:
            FormNotSignedException();
            const char* what() const throw();
        };
    };
    
std::ostream& operator<<(std::ostream& os, const AForm &AForm);

#endif