#include "iter.hpp"

void printFunc(const int & t)
{
    std::cout << t << " " << std::endl;
}

void increment(int &n)
{
    n++;
    std::cout << n << " " << std::endl;
}
int main()
{
    const int arr[4] = {1, 3, 4, 6};

    iter(arr, 4, printFunc);
    return 0;
}