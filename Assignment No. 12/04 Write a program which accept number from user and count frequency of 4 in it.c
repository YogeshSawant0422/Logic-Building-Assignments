//Write a program which accept number from user and count frequency of 4 in it
#include<stdio.h>
#include<conio.h>

int CountFour(int iNo)
{
    int iDig = 0 , iCnt = 0;
    while(iNo > 0)
    {
        iDig = iNo % 10;
        if(iDig == 4)
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
     iRet = CountFour(iValue);
     printf("\t%d",iRet);

     return 0;
}
