//Write a program which accept number from user and return summation of all its non factors.
/* Input : 12
    Output : 50

     Input : 10
    Output : 37 */
#include<stdio.h>
int SumNonFact(int iNo)
{
    int iCnt = 0 , Sum = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            Sum = Sum + iCnt ;
        }
    }
    return Sum;
}
int main()
{
 int iValue = 0;
 int iRet = 0;

 printf("\n Enter number : ");
 scanf("%d",&iValue);

 iRet = SumNonFact(iValue);

 printf("\t%d",iRet);

 return 0;
}
