#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedPoint = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}
  
Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    fixedPoint = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    fixedPoint = roundf(num * (1 << fractional_bits));
}

Fixed& Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if(this != &other)
    {
        this->fixedPoint = other.fixedPoint;
    }
    return(*this);
}

void Fixed::setRawBits(int const raw)
{
    fixedPoint = raw;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called"  << std::endl;
    return fixedPoint;
}

int Fixed::toInt()const
{
    int res;

    res = fixedPoint >> fractional_bits;
    return res;
}

float Fixed::toFloat()const
{
    float res;

    res = fixedPoint / 256.0f;
    return res;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixedPoint)
{
    os << fixedPoint.toFloat();
    return os;
}
