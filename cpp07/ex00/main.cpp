#include "whatever.hpp"

int main()
{
    std::cout << max<int>(2, 1) << std::endl;
    std::cout << min<double>(2.5, 11.2) << std::endl;
    std::cout << max<float>(2.0f, 1.4f) << std::endl;
    std::cout << max<std::string>("oum", "mima") << std::endl;
    int x = 5;
    int y = 3;
    swap<int>(x, y);
    std::cout << x << std::endl;
    return 0;
}