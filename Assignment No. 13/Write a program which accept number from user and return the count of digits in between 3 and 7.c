// Write a program which accept number from user and return the count of digits in between 3 and 7
#include<stdio.h>
int CountRange(int iNo)
{
    int iDig = 0 , iCnt = 0;

    while(iNo > 0)
    {
        iDig = iNo % 10;
        if(iDig > 3 && iDig < 7)
        {
            iCnt++;
        }
        iNo = iNo / 10 ;
    }
    return iCnt;
}
int main()
{
     int iValue = 0;
     int iRet = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);
     iRet = CountRange(iValue);
     printf("\n count of digits in between 3 and 7 is : %d \n ",iRet);

     _getch();
     return 0;
}
