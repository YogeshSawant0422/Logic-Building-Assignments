// Accept number from user and check whether number is even or odd.
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

    return ;
}
int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;

     printf("\nEnter number = ");
     scanf( "%d",&iValue);

     bRet = ChkEven(iValue);

     if(bRet == TRUE)
        printf("\n Given Number Is Even \n ");
     else
        printf("\n Given Number Is Odd \n");

     return 0;
}
