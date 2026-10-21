//WAP to check whether number is greater of two numbers
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreater
//  Input           :   Integer
//  Output          :   Number is greater or not
//  Description     :   Prints if number is greater or not
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if (iFirst > iSecond)
    {
        printf("%d is a greater than %d number\n", iFirst, iSecond );
    }
    else if(iFirst < iSecond)
    {
        printf("%d is a smaller than %d number\n", iFirst, iSecond );
    }
    else
    {
        printf("%d %d Both numbers are equal\n", iFirst, iSecond );
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter first number : ");
    scanf("%d", &iValue1);

    printf("Enter second number : ");
    scanf("%d", &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------
//        10 20             10 is a smaller than 20 number   
//        50 30             50 is a greater than 30 number        
//        34 34             34 34 Both numbers are equal
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////