/*WAP which accepts range from user and display all even numbers in between that range

Input : 23  35
Output : 24  26  28  30  32  34  35
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeDisplayEven
//  Input           :   Integer, Integer
//  Output          :   Integer of even numbers
//  Description     :   Display all even numbers between the given range
//  Date            :   7/11/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{ 
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range..");
    }

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt %2) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-----------------------------------------------------------------------------------------------------------------------------------------------
//      Input                           Output
//----------------------------------------------------------------------------------------------------------------------------------------------
//      Start       End                
//----------------------------------------------------------------------------------------------------------------------------------------------
//      23          35                 24      26      28      30      32      34
//      2           20                 8       10      12      14      16      18      20
//      10          5                 Invalid range..
//     -44         -56                Invalid range..
//     -25         -15                -24     -22     -20     -18     -16
//----------------------------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////