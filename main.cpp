#include "NumCpp.hpp"
 
#include <cstdlib>
#include <iostream>
 
int main()
{
    // auto a = nc::random::randInt<int>({10, 10}, 0, 100);
    auto a = nc::arange<int>(1, 102);
    std::cout << a;
 
    return EXIT_SUCCESS;
}
