#include "ScalarConverter.hpp"

void printChar(double d)
{
    std::cout << "Char: ";
    if(std::isinf(d) || std::isnan(d) || d > 127 || d < 0)
    {
        std::cout << "impossible" << std::endl;
        return;
    }
    if(d < 32 || d == 127)
    {
        std::cout << "non printable" << std::endl;
        return;
    }
    std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
}

void printInt(double d)
{
    std::cout << "Int: ";
    if( std::isinf(d) || std::isnan(d)
        || d > std::numeric_limits<int>::max()
        || d < std::numeric_limits<int>::min())
    {
        std::cout << "impossible" << std::endl;
    }else
        std::cout <<  static_cast<int>(d) << std::endl;
}

void printFloat(double d)
{
    std::cout << "Float: ";
    float f = static_cast<float>(d);
    if(std::isnan(f))
        std::cout << "nanf" << std::endl;
    else if(std::isinf(f))
        std::cout << (f > 0 ? "+inff" : "-inff") << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
}

void printDouble(double d)
{
    std::cout << "Double: ";
    if(std::isnan(d))
        std::cout << "nan" << std::endl;
    else if(std::isinf(d))
        std::cout << (d > 0 ? "+inf" : "-inf") << std::endl;
    else
        std::cout << std::fixed << std::setprecision(1) << d << std::endl;
}