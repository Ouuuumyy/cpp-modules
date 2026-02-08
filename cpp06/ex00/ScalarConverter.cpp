#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
}

static int isChar(std::string input)
{
    if(input.length() == 1 && !(input[0] >= '0' && input[0] <= '9'))
        return 1;
    return 0;
}

static int isInt(std::string input)
{
    int i = 0;
    if(input[0] == '-' || input[0] == '+')
        i++;
    while(input[i])
    {
        if(!(input[i] >= '0' && input[i] <= '9'))
            return 0;
        i++;
    }

    double value = std::strtod(input.c_str(), NULL);
    if(value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        return 0; 
    return 1;
}

static int isFloat(std::string input)
{
    if(input == "nanf" || input == "-inff" || input == "+inff")
        return 1;

    if(input[input.length() - 1] != 'f')
        return 0;

    int i = 0;
    int dotCount = 0;
    if(input[0] == '-' || input[0] == '+')
        i++;
    while(i < ((int)input.length() - 1))
    {
        if(input[i] == '.')
            dotCount++;
        else if(!(input[i] >= '0' && input[i] <= '9'))
            return 0;
        i++;
    }
    if(dotCount != 1)
        return 0;
    return 1;
}

static int isDouble(std::string input)
{
    if(input == "nan" || input == "-inf" || input == "+inf")
        return 1;

    int i = 0;
    int dotCount = 0;
    if(input[0] == '-' || input[0] == '+')
        i++;
    while(i < ((int)input.length() - 1))
    {
        if(input[i] == '.')
            dotCount++;
        else if(!(input[i] >= '0' && input[i] <= '9'))
            return 0;
        i++;
    }
    if(dotCount != 1)
        return 0;
    return 1;
}


void ScalarConverter::convert(std::string input)
{
    double d = 0.0;

    if(isChar(input))
        d = static_cast<double>(input[0]);
    else if(isInt(input) || isFloat(input) || isDouble(input))
        d = std::strtod(input.c_str(), NULL);
    else
    {
        std::cout << "impossible cast" << std::endl;
        return;
    }
    printChar(d);
    printInt(d);
    printFloat(d);
    printDouble(d);
}

