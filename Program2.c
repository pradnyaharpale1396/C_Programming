//WAP to print 5 times "Marvellous" on screen

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   display
//  Input           :   NA
//  Output          :   Marvellous printed 5 times
//  Description     :   Displays the string "Marvellous" 5 times on screen
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////

void display()
{
   int i = 0;
   for(i = 1; i <= 5; i++)
   {
    printf("Marvellous \n ");
   }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    printf("Printing the display for 5 times. Here you go... \n ");

    display();          //Function Call

    return 0;
}

