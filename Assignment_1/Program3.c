//WAP to print 5 to 1 numbers on screen
// # define EXIT_SUCCESS 0

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display
//  Input           :   NA
//  Output          :   Print 5 to 1
//  Description     :   Print numbers from 5 to 1
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////

int Display()
{
    int i = 5;
    while(i >= 1)
    {
        printf("%d\n", i);
        i--;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    printf("Printing number from 5 to 1 :\n");

    Display();

    return 0;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------
//      Input1      Input2      Output
//-------------------------------------------------
//          15         5          3
//          64         8          8     
//-------------------------------------------------
///////////////////////////////////////////////////