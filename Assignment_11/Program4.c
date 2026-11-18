/*WAP which accepts range from user and return addition of all even numbers in between that range 
(Range should contains positive numbers only)

Input : 23  30
Output : 108
*/
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   RangeSumEven
//  Input           :   Integer, Integer
//  Output          :   Sum even Integer of all numbers
//  Description     :   Display sum of all even numbers between the given range
//  Date            :   7/11/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{ 
    int iCnt = 0, iSum = 0;

    if((iStart > iEnd) || (iStart <= 0) || (iEnd <=0))
    {
        return 1;
    }

    for(int iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if( iRet == 1)
    {
        printf("Invalid range...");
    }
    else
    {
        printf("Addition of even numbers is : %d\n", iRet);
    }

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
//      23          30                    108
//      49          55                    156
//     -10         -5                     Invalid range...
//     -5           5                     Invalid range...
//      6           6                     6
//----------------------------------------------------------------------------------------------------------------------------------------------
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////