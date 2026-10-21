//WAP to check divisibility by 5
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckDivisibility
//  Input           :   Integer
//  Output          :   Divisible by 5 or not
//  Description     :   Check if number is divisible by 5
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if ((iValue % 5) == 0)
    {
        printf("Number is divisibile by 5\n");
    }
    else
    {
        printf("Number is not divisibile by 5\n");
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

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------
//        30                        Number is divisibile by 5
//        45                        Number is divisibile by 5
//        75                        Number is divisibile by 5
//        26                        Number is not divisibile by 5
//        17                        Number is not divisibile by 5
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////