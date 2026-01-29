#ifndef BERAUCRAT
#define BERAUCRAT

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;    
    public:
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat &other);
        ~Bureaucrat();
        const std::string getName() const;
        int getGrade() const;
        void checkGrade(int grade);
        void incrementGrade();
        void decrementGrade();
    
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


#endif