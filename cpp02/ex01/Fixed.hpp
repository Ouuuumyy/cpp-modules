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
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixedPoint);

#endif