#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:    
    int fixedPoint;
    static const int fractional_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed(const int val);
    Fixed(const float val);
    Fixed &operator=(const Fixed &other);
    bool operator<(const Fixed &other) const;
    bool operator>(const Fixed &other) const;
    bool operator==(const Fixed &other) const;
    bool operator<=(const Fixed &other) const;
    bool operator>=(const Fixed &other) const;
    bool operator!=(const Fixed &other) const;
    Fixed operator+(const Fixed &other);
    Fixed operator-(const Fixed &other);
    Fixed operator*(const Fixed &other);
    Fixed operator/(const Fixed &other);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixedPoint);

#endif