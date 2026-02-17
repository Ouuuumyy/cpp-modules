#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        T *elements;
        unsigned int _n;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array& operator=(const Array &other);
        unsigned int size() const;
        T & operator[](unsigned int i);
        const T & operator[](unsigned int i) const;
        ~Array();
};

#include "Array.tpp"

#endif
