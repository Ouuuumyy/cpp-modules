#include "Span.hpp"

Span::Span(unsigned int n)
{
    if(n < 1)
        throw FewNumbersException();
    this->n = n;
}

Span::~Span()
{}
Span::FewNumbersException::FewNumbersException(){}

const char* Span::FewNumbersException::what() const throw()
{
    return "you must have at least 2 integers";
}

Span::TooManyElementsException::TooManyElementsException(){}

const char* Span::TooManyElementsException::what() const throw()
{
    return "reached maximum elements";   
}

