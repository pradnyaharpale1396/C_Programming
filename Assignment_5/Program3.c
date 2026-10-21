//WAP to calculate the grade of student
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   DisplayGrade
//  Input           :   Float
//  Output          :   Grade is A, B, C or Fail
//  Description     :   To calculate the grade of student
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if((fMarks >= 90) && (fMarks <=100))
    {
        printf("Grade is A\n");
    }
    else if((fMarks >= 75) && (fMarks <=89))
    {
        printf("Grade is B\n");
    }
    else if((fMarks >= 60) && (fMarks <=74))
    {
        printf("Grade is C\n");
    }
    else if((fMarks >= 40) && (fMarks <=59))
    {
        printf("Grade is D\n");
    }
    else if(fMarks < 40)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Invalid Marks!!!");
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int fMarks = 0.0f;

    printf("Enter marks : ");
    scanf("%d", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//        Input             Output
//-------------------------------------------------------------------------
//         92            Grade is A
//         88            Grade is B      
//         65            Grade is C
//         41            Grade is D
//        102            Invalid Marks!!!
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////