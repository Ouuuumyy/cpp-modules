#include "Span.hpp"
#include <ctime>

int main()
{   
    try
    { 
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        // sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Span big(10000);
        std::vector<int> randomvec;
        std::srand(std::time(0));
        for (size_t i = 0; i < 10000; i++)
        {
            randomvec.push_back(std::rand());
        }
        big.addNumbers(randomvec.begin(), randomvec.end());
        std::cout << big.shortestSpan() << std::endl;
        std::cout << big.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}