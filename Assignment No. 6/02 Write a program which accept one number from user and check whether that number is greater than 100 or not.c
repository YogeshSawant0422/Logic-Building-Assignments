//Write a program which accept one number from user and check whether that number is greater than 100 or not.
#include<stdio.h>

typedef int BOOL;
 #define TRUE 1
 #define FALSE 0
 BOOL ChkGreater(int iNo)
 {
    if(iNo > 100)
    {
        return 1;
    }
    else if(iNo < 100)
    {
        return 0;
    }

 }
 int main()
 {
     int iValue = 0;
     BOOL bRet = FALSE;
     printf("\n Please enter number  :  ");
     scanf("%d",&iValue);
     bRet = ChkGreater(iValue);
     if(bRet == 1)
     {
     printf("\n Greater\n");
     }
     else
     {
     printf("\n Smaller\n");
     }
    return 0;
 }
