//WAP to accept one number from user and print even factors of that number

# include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayFactor
//  Input           :   Integer
//  Output          :   Even factors of the given number
//  Description     :   Prints all even factors of the given number on the screen
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((iNo % i) == 0)              // Divisible Logic
        {
            if((i % 2) == 0)            // Check Even logic
            {
                printf("%d\t", i);
            }
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
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayFactor(iValue);
    
    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                   Output
//-------------------------------------------------------------------------
//         12           2       4       6       12
//         18           2       6       18     
//         5            No even factor
//         10           2       10
//         9            No even factor
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////