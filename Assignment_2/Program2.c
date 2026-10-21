//WAP to accept one number from user and print that of * on screen

#include<stdio.h>

///////////////////////////////////////////////////
//
//  Function Name   :   Display 
//  Input           :   Integer 
//  Output          :   Print * for accepted number
//  Description     :   Print * for accepted number
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    while(iNo > iCnt)
    {
        printf("*");
        iNo--;
    }
}

///////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Printing %d times : ", iValue);

    Display(iValue);
    
    return 0;
}

///////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------
//      Input          Output
//-------------------------------------------------
//         2         Printing 2 times : **         
//         5         Printing 6 times : ******     
//         12        Printing 12 times : ************ 
//-------------------------------------------------
///////////////////////////////////////////////////