//WAP to check admission eligibilty
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckAdmission
//  Input           :   Float, Integer
//  Output          :   Eligible for Admission or Not Eligilble
//  Description     :   Check admission eligibilty if student 's marks are atleat 60 and age is at atleast 17 years
//  Date            :   21/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CheckAdmission(float fMarks, int iAge)
{
    if (( fMarks <= 60) && (iAge <= 17))
    {
        printf("Eligilble for admission \n");             
    }
    else
    {
        printf("Not Eligilble for admission \n"); 
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
    float fMarks = 0.0f;

    printf("Enter marks and age : ");
    scanf("%f %d", &fMarks, &iAge );

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                   Output
//-------------------------------------------------------------------------
//      59  16            Eligilble for admission
//      65  30           Not Eligilble for admission 
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////