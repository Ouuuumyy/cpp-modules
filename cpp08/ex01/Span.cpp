#include "Span.hpp"

Span::Span(unsigned int n) : n(n)
{}

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

void Span::addNumber(int num)
{
    if(vec.size() >= n)
        throw TooManyElementsException();
    vec.push_back(num);
}

long Span::longestSpan()
{
    if(vec.size() < 2)
        throw FewNumbersException();
    int min = *std::min_element(vec.begin(), vec.end());
    int max = *std::max_element(vec.begin(), vec.end());
    return (static_cast<long>(max) - min);
}

long Span::shortestSpan()
{
    if(vec.size() < 2)
        throw FewNumbersException();
    std::vector<int> tmp = vec;
    std::sort(tmp.begin(), tmp.end());
    long diff = 0;
    long shortest = static_cast<long>(tmp[1]) - tmp[0];
    for (size_t i = 0; i < tmp.size() - 1; i++)
    {
        diff = static_cast<long>(tmp[i + 1]) - tmp[i];
        if(diff < shortest)
            shortest = diff;
    }
    return shortest; 
}