//Write a program to find even factorial of given number
#include<stdio.h>
#include<conio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0 , iEvenFact = 1;

    if(iNo < 0)
    {
        iNo = -(iNo);
    }
    for(iCnt = iNo ; iCnt > 0 ; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }

    return iEvenFact ;
}
int main()
{
     int iValue = 0,iRet = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     iRet = EvenFactorial(iValue);

     printf("\n Even Factorial of number is %d ",iRet);

     getch();
     return 0;
}
