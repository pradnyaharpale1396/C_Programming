//WAP to find the gretest of three numbers
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindGreatest
//  Input           :   Integer
//  Output          :   Greatest of three numbers
//  Description     :   Find the greatest of three numbers
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("%d is the greatest number\n", iFirst);
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("%d is the greatest number\n", iSecond);
    }
    else
    {
        printf("%d is the greatest number\n", iThird);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//          Input                           Output
//-------------------------------------------------------------------------
//        10    50  30                      50 is the greatest number
//        45    80  100                     100 is the greatest number
//        90    56   20                      90 is the greatest number
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////