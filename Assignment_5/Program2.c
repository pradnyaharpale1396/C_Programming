//WAP to check the year 
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckLeapYear
//  Input           :   Integer
//  Output          :   Year is leap or not
//  Description     :   Check the year 
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(((iYear % 4) == 0 ) &&(!(iYear % 100)== 0))
    {
        printf("%d is Leap Year\n", iYear);
    }
    else
    {
        printf("%d is not Leap Year\n", iYear);
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iYear = 0;

    printf("Enter year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//        Input                 Output
//-------------------------------------------------------------------------
//        2024            2024 is Leap Year
//        1990            1990 is not Leap Year       
//        1996            1996 is Leap Year
//        2004            2004 is Leap Year
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////