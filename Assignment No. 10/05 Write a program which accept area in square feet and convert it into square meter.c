//Write a program which accept area in square feet and convert it into square meter. (1 square feet = 0.0929 Square meter)
//Input : 5
//Output : 0.464515
//Input : 7
//Output : 0.650321
#include<stdio.h>
#include<conio.h>

double SquareMeter(int iValue)
{
    if(iValue <= 0)
    {
        return -1;
    }
    else
    {
        return iValue * 0.0929;
    }
}
int main()
{
     int iValue = 0;
     double dRet = 0.0;

     printf("\n Enter area in square feet : ");
     scanf("%d",&iValue);

     dRet = SquareMeter(iValue);
     if(dRet == -1)
     {
         printf("\n Given Value Is Invalid ??? \n");
     }
     else
     {
          printf("\n Square Meter Value Is = %0.6lf \n",dRet);
     }
     return 0;
}
