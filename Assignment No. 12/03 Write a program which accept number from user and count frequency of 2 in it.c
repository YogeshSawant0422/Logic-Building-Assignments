//Write a program which accept number from user and count frequency of 2 in it.
#include<stdio.h>
int CountTwo(int iNo)
{
    int iDig = 0 , iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
     while(iNo > 0)
     {
         iDig = iNo % 10;
         if(iDig == 2)
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

     printf("\nEnter number : ");
     scanf("%d",&iValue);
     iRet = CountTwo(iValue);

     printf("\nCount frequency of 2 is : %d ",iRet);

    _getch();
     return 0;
}
