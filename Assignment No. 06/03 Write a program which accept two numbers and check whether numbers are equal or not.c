//Write a program which accept two numbers and check whether numbers are equal or not
#include<stdio.h>
 typedef int BOOL;
 #define TRUE 1
 #define FALSE 0
 BOOL ChkEqual(int iNo1 , int iNo2)
 {
    if(iNo1 == iNo2)
    {
        return TRUE;
    }
    else if(iNo1 != iNo2)
    {
        return FALSE;
    }
 }
 int main()
 {
     int iValue1 = 0,iValue2 = 0;
     BOOL bRet = FALSE;

     printf("\n Please enter two numbers : ");
    scanf("%d %d",&iValue1, &iValue2);

    bRet = ChkEqual(iValue1,iValue2);

     if(bRet == 1)
     {
     printf("\n Numbers Are Equal\n");
     }
     else
     {
     printf("\n Numbers Are Not Equal\n");
     }

    return 0;
 }
