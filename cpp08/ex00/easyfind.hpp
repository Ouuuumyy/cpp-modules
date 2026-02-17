#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>

typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator found;
    found = std::find(container.begin(), container.end(), value);
    if(found == container.end())
        throw std::runtime_error("value not found in this container");
    else
        return found;
}

#endif