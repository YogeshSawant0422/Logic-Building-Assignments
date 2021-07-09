//Write a program which accept number from user and count frequency of such a digits which are less than 6.
#include<stdio.h>
#include<conio.h>
int Count(int iNo)
{
    int iDig = 0 , iCnt = 0;

    while(iNo > 0)
    {
        iDig = iNo % 10;
        if(iDig < 6)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}
int main()
{
     int iValue = 0;
     int iRet = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);
     iRet = Count(iValue);

     printf("%d",iRet);

     return 0;
}
