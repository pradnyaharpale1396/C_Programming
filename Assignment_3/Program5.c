//WAP to accept one character from user and check whether that character is vowel or not
#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0


///////////////////////////////////////////////////////////////////////////
//
//  Function Name   :   ChkVowel
//  Input           :   Character
//  Output          :   Check if character is a vowel
//  Description     :   Check if character is a vowel
//  Date            :   20/10/2026
//  Author          :   Pradnya Anil Harpale
//
///////////////////////////////////////////////////////////////////////////

BOOL ChkVowel(char CValue)
{
    if(
        (CValue == 'a') || (CValue == 'e')|| (CValue == 'i') || (CValue == 'o')|| (CValue == 'u') 
        || 
        (CValue == 'A') || (CValue == 'E')|| (CValue == 'I') || (CValue == 'O')|| (CValue == 'U')
    )                                     
    {                                    
        return TRUE;
    }
    else           
    {
       return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : ");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);
    
    if(bRet == TRUE)
    {                                    
        printf("Its a vowel : %c", cValue);
    }
    else           
    {
       printf("Its not a vowel : %c", cValue);
    }  

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//      Test the program
//      Tested test cases
//-------------------------------------------------------------------------
//      Input           Output
//-------------------------------------------------------------------------
//         a            Its a vowel : a
//         e            Its a vowel : e
//         I            Its a vowel : I
//         P            Its not a vowel : P
//         g            Its not a vowel : g
//-------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////