//WAP to calculate electricity bill
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CalculateElectricityBill
//  Input           :   Integer
//  Output          :   Display total bill
//  Description     :   Calculate electricity bill for defined units consumed
//  Date            :   21/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill is : %.2f\n", fBill);              //%.2f to show decimal point upto 2 digit
    }
    else if ((iUnits <= 200))
    {
        fBill = iUnits * 7;
        printf("Bill is : %.1f\n", fBill);              //%.1f to show decimal point upto 1 digit
    }
    else 
    {
        fBill = iUnits * 10;
        printf("Bill is : %f\n", fBill);
    }
    
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iUnits = 0;

    printf("Enter consumed units : ");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input                       Output
//-------------------------------------------------------------------------
//        80                        Bill is : 400.00
//        120                       Bill is : 840.0
//        250                       Bill is : 2500.000000
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////