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
        std::vector<int> vec;
    public:
        Span(unsigned int n);
        void addNumber(int num);
        long longestSpan();
        long shortestSpan();
        ~Span();
        template <typename T>
        void addNumbers(T begin, T end)
        {
            if(std::distance(begin, end) + vec.size() > n)
                throw TooManyElementsException();
            vec.insert(vec.end(), begin, end);
        };
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