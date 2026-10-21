//WAP to check whether number is even or odd

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckEvenOdd
//  Input           :   Integer
//  Output          :   Number is even or odd
//  Description     :   Prints if number is even or odd
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if ((iNo % 2) == 0)
    {
        printf("%d is a even number\n", iNo);
    }
    else
    {
        printf("%d is a odd number\n", iNo);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input           Output
//-------------------------------------------------------------------------
//        24             24 is a even number   
//        17             17 is a odd number          
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////