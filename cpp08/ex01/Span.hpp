#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
    private:
        unsigned int n;
    public:
        Span(unsigned int n);
        ~Span();
        
        class FewNumbersException : public std::exception{
            public:
                FewNumbersException();
                const char* what() const throw();
        };

        class TooManyElementsException : public std::exception{
            public:
                TooManyElementsException();
                const char* what() const throw();
        };
};



#endif