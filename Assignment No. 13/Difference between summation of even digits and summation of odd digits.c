//Write a program which accept number from user and return difference between
//summation of even digits and summation of odd digits
#include<stdio.h>
#include<conio.h>

int CountDiff(int iNo)
{
    int iDig = 0 , iEcnt = 0 , iOcnt = 0;

    while(iNo > 0)
    {
        iDig = iNo % 10;

        if(iDig % 2 == 0)
        {
            iEcnt = iEcnt + iDig;
        }
        if(iDig % 2 != 0)
        {
            iOcnt = iOcnt + iDig;
        }
        iNo = iNo / 10;
    }
    return iEcnt - iOcnt;
}
int main()
{
 int iValue = 0;
 int iRet = 0;
 printf(" \n Enter number : ");
 scanf("%d",&iValue);
 iRet = CountDiff(iValue);
 printf("\n difference between summation of even digits and summation of odd digits : %d",iRet);
_getch();
 return 0;
}

