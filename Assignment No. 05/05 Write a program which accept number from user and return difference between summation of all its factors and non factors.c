//Write a program which accept number from user and return difference between summation of all its factors and non factors
/* Input : 12
     Output : -34 (16 - 50)

     Input : 10
    Output : -29 (8 - 37) */

#include<stdio.h>
int FactDiff(int iNo)
{
        int iCnt = 0 , Sum1 = 0 , Sum2 = 0;

        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
                if(iNo % iCnt == 0)
                {
                    Sum1 = Sum1 + iCnt ;
                }
                 if(iNo % iCnt != 0)
                {
                    Sum2 = Sum2 + iCnt;
                }
        }

        return Sum1 - Sum2;
}
int main()
{
     int iValue = 0;
     int iRet = 0;

     printf("\nEnter number : ");
     scanf("%d",&iValue);

     iRet = FactDiff(iValue);
     printf("%d",iRet);

     return 0;
}
