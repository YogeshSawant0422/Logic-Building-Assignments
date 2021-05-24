//Write a program to find odd factorial of given number.
#include<stdio.h>
int OddFactorial(int iNo)
{
    int iCnt = 0 , iOddFact = 1 ;
    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    for(iCnt = iNo ; iCnt > 0 ; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iOddFact = iOddFact * iCnt ;
        }
    }
    return iOddFact;
}
int main()
{
     int iValue = 0,iRet = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     iRet = OddFactorial(iValue);
     printf("\n Odd Factorial of number is %d",iRet);

    getch();
     return 0;
}

