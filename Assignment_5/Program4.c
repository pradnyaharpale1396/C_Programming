//WAP to check divisibility by 3 and 5, only 3, only 5, both or neither
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckMultipleDivisibility
//  Input           :   Integer
//  Output          :   Divisible by both 3 and 5 or 3 only or 5 only or neither
//  Description     :   Check if number is divisible by 3 and 5, only 3, only 5, both or neither
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if (((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisibile by both\n");
    }
    else if (((iValue % 3) == 0) && (!(iValue % 5) == 0))
    {
        printf("Divisibile by 3\n");
    }
    else if ((!(iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("Divisibile by 5\n");
    }
    else if ((!(iValue % 3) == 0) && (!(iValue % 5) == 0))
    {
        printf("Not Divisibile by Either\n");
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

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------
//        15                        Divisibile by both
//        9                         Divisibile by 3
//        25                        Divisibile by 5
//        56                        Not Divisibile by Either
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////