#include <iostream>
#include "../Include/clear.hpp"

void clear_screen()
{
    std::cout << "\033[2J";   
    std::cout << "\033[H";    
    std::cout.flush();        
}