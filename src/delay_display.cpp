#include <thread>
#include <chrono>
#include "../Include/delay_display.hpp"
void delay_display(int milliseconds)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
}

