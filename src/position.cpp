#include <iostream>
#include "../Include/position.hpp"
void setposition(int x, int y)
{
    std::cout << "\033[" << y << ";" << x << "H";
}