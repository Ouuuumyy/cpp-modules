#include "Fixed.hpp"

Fixed::Fixed()
{
    fixedPoint = 0;
}

Fixed::~Fixed()
{
}
  
Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::Fixed(const int num)
{
    fixedPoint = num << fractional_bits;
}

Fixed::Fixed(const float num)
{
    fixedPoint = roundf(num * (1 << fractional_bits));
}
Fixed& Fixed::operator=(const Fixed &other)
{
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

// comparision operators

bool Fixed::operator<(const Fixed &other) const
{
    return this->fixedPoint < other.fixedPoint;
}

bool Fixed::operator>(const Fixed &other) const
{
    return this->fixedPoint > other.fixedPoint;
}

bool Fixed::operator==(const Fixed &other) const
{
    return this->fixedPoint == other.fixedPoint;
}

bool Fixed::operator<=(const Fixed &other) const
{
    return this->fixedPoint <= other.fixedPoint;
}

bool Fixed::operator>=(const Fixed &other) const
{
    return this->fixedPoint >= other.fixedPoint;
}

bool Fixed::operator!=(const Fixed &other) const
{
    return this->fixedPoint != other.fixedPoint;
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed result;
    
    result.setRawBits(this->fixedPoint + other.fixedPoint);
    return(result);
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed result;
    
    result.setRawBits(this->fixedPoint - other.fixedPoint);
    return(result);
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed result;
    
    long temp;
    temp = ((long)this->fixedPoint * other.fixedPoint) >> fractional_bits;
    result.setRawBits(temp);
    return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
    if(other.fixedPoint == 0)
    {
        std::cout << "Division by 0 is forbbiden" << std::endl;
        return Fixed(0);
    }
    Fixed result;
    long temp;
    temp = (long)(this->fixedPoint << fractional_bits) / other.fixedPoint;
    result.setRawBits(temp);
    return result;
}

Fixed& Fixed::operator++()
{
    this->fixedPoint++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;

    this->fixedPoint++;
    return (temp);
}

Fixed& Fixed::operator--()
{
    this->fixedPoint--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;

    this->fixedPoint--;
    return (temp);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if(a > b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if(a > b)
        return a;
    else
        return b;
}
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if(a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if(a < b)
        return a;
    else
        return b;
}