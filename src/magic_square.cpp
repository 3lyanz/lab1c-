#include <iostream>
#include <cmath>
#include "../Include/position.hpp"
#include "../Include/delay_display.hpp"

void magic_square(int n){
    int num=1;
    int matrix_number = n*n;
    int row = 0;
    int col = n/2;
    int screenline = 0;
    int screencol = 0;
    std::cout<<" \n";
    while(num <= matrix_number){
        screencol = col*(n+1)+1;
        screenline = row+1;
        if(num%n!=0){
            row = (row-1+n)%n;
            col = (col+1)%n;                        
            setposition(screencol*3,screenline*3);
            delay_display(500);
            std::cout<<num<<std::endl;
            num++;
        }
        else{
            row =(row+1)%n;
            col = col;
            setposition(screencol*3,screenline*3);
            delay_display(500);
            std::cout<<num<<std::endl;
            num++; 
        }
    }
}