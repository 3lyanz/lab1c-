
#include "../Include/color.hpp"
#include "../Include/position.hpp"

#if defined(_WIN32)
    #define TERMINAL_WINDOWS
#else
    #define TERMINAL_LINUX
#endif

void init();