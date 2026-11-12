#include <iostream>
#include "../Include/color.hpp"
#include "../Include/position.hpp"
#include "../Include/magic_square.hpp"
#include "../Include/clear.hpp"

int main() {
    int x=0;
    int y=0;
    int n;
    int choice;
    std::cout << "Welcome, choose the desired task" << std::endl;
    std::cout << "1. Set color and position" << std::endl;
    std::cout << "2. Generate magic square" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";

    std::cin >> choice;

    if (choice ==1){
        
            std::cout << "Enter the x position: ";
            std::cin >> x;
            std::cout << "Enter the y position: ";
            std::cin >> y;
            clear_screen();
            setcolor("cyan");
            setposition(x, y);
            std::cout << "Main Menu" << std::endl;
            setcolor("red");
            setposition(x, y);
            std::cout << "1. new" << std::endl;
            setcolor("green");
            setposition(x, y);
            std::cout << "2. displaycurrent" << std::endl;
            setcolor("blue");
            setposition(x, y);
            std::cout << "3. exit" << std::endl;
    }
    else if(choice ==2){
         std::cout<<"Enter the size of the magic square (odd number): ";
        std::cin>>n;
        if(n%2==0){
            std::cout<<"Please enter an odd number."<<std::endl;
            return 1;
        }
        clear_screen();
        magic_square(n);

    }
    return 0;     
}
