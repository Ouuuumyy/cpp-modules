#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>

const T max(const T &x, const T &y)
{
    if(x == y)
        return y;
    else
        return (x > y) ? x : y;
}
template <typename T>

const T min(const T &x, const T &y)
{
    if(x == y)
        return y;
    else
        return (x > y) ? y : x;
}

template <typename T>

void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
#endif
