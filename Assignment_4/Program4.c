//WAP to check voting eligibility
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckVoting
//  Input           :   Integer
//  Output          :   Eligible for voting or not or invalid
//  Description     :   Check if user is eligible for voting or not or invalid
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckVotingEligibility(int iNo)
{
    if (iNo >= 18)
    {
        printf("User is eligible for voting now...\n");
    }
    else if(iNo < 0)
    {
        printf("Invalid Age...\n");
    }
    else if (iNo < 18)
    {
        printf("User is not eligible for voting...\n");
    }
    
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------
//        29                        User is eligible for voting now...
//        15                        User is not eligible for voting...
//        10                        User is not eligible for voting...
//       -10                        User is not eligible for voting...
//
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////