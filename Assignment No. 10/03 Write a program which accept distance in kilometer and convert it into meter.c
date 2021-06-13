//Write a program which accept distance in kilometer and convert it into meter. (1 kilometer = 1000 Meter)
//Input : 5
//Output : 5000
//Input : 12
//Output : 12000
#include<stdio.h>
int KMtoMeter(int iNo)
{
    return iNo * 1000;
}
int main()
{
 int iValue = 0, iRet = 0;
 printf("\n Enter distance : ");
 scanf("%d",&iValue);

 iRet = KMtoMeter(iValue);

 printf("\n The Meter Value Of  %d Kilometer Is : %d ",iValue,iRet);

 return 0;
}
