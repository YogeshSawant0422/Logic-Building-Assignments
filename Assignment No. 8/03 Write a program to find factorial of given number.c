//Write a program to find factorial of given number.
#include<stdio.h>
#include<conio.h>

int Factorial(int iNo)
{
    int i = 0 ,Fact = 1;
    if(iNo == 0)
    {
        return -1;
    }
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for( i = iNo ; i > 0 ; i--)
    {
        Fact = Fact * i;
    }
    return Fact ;
}
int main()
{
     int iValue = 0,iRet = 0;

     printf("\n Enter number : ");
     scanf("%d",&iValue);

     iRet = Factorial(iValue);
     if(iRet == -1)
     {
         printf("\n Number Is Neutral .");
     }
     else
     {
         printf("\n Factorial of number is %d .\n ",iRet);
     }

     getch();
     return 0;
}
