// Write a program which returns difference between Even factorial and odd factorial of given number
#include<stdio.h>
#include<stdio.h>
int FactorialDiff(int iNo)
{
   int iCnt = 0 , iEvenFact = 1, iOddFact = 1;
   if(iNo < 0)
   {
       iNo = -(iNo);
   }
   for(iCnt = iNo ; iCnt > 0 ; iCnt--)
   {
       if(iCnt % 2 == 0)
       {
           iEvenFact = iEvenFact * iCnt ;
       }
       if(iCnt % 2 != 0)
       {
           iOddFact = iOddFact * iCnt ;
       }
   }
    printf("\n %d - %d \n",iEvenFact ,iOddFact);

   return iEvenFact - iOddFact;
}
int main()
{
 int iValue = 0,iRet = 0;
 printf("\n Enter number : ");
 scanf("%d",&iValue);

 iRet = FactorialDiff(iValue);
 printf("\n Factorial difference is %d",iRet);

 getch();
 return 0;
}
