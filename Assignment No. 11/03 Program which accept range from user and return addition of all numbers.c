//Write a program which accept range from user and return addition of all numbers
//in between that range. (Range should contains positive numbers only)

//Input : 23 30
//Output : 212

//Input : 10 18
//Output : 126

//Input : -10 2
//Output : Invalid range

//Input : 90 18
//Output : Invalid range

#include<stdio.h>
#include<conio.h>

int RangeSum(int iStart , int iEnd)
{
    int i = 0  , Sum = 0;
    if(iStart > iEnd  || iStart < 0)
    {
        return -1;
    }
    else
    {
        for(i = iStart ; i <= iEnd ;i++)
        {
            Sum = Sum + i;
        }

        return Sum;
    }
}
int main()
{
     int iValue1 = 0, iValue2 = 0, iRet =0;

     printf("\n Enter starting point : ");
     scanf("%d",&iValue1);

     printf("\n Enter ending point : ");
     scanf("%d",&iValue2);

     iRet = RangeSum(iValue1, iValue2);

     if(iRet == -1)
     {
         printf("\n Invalid Number \n");
     }
     else
     {
         printf("\n Addition is %d ",iRet);
     }

     _getch();
     return 0;
}
