#include <string>
#include <iostream>
#include "../Include/color.hpp"

void setcolor(std::string color)
{
    

        if (color == "red") {

            std::cout << "\033[31m";
        } else if (color == "green") {
            std::cout << "\033[32m";
        } else if (color == "blue") {
            std::cout << "\033[34m";
        } else if (color == "yellow") {
            std::cout << "\033[33m";
        } else if (color == "cyan") {
            std::cout << "\033[36m";
        } else if (color == "magenta") {
            std::cout << "\033[35m";
        } else if (color == "white") {
            std::cout << "\033[37m";
        } else if (color == "reset") {
            std::cout << "\033[0m";
        } else {
        std::cout << "Invalid color please try again: " << color << std::endl;
        }
}