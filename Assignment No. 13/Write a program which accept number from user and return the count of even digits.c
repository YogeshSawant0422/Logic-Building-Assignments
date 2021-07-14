//Write a program which accept number from user and return the count of even digits
#include<stdio.h>
int CountEven(int iNo)
{
      int iDig = 0 , iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
       while(iNo > 0)
        {
            iDig = iNo % 10;
            if(iNo > 0)
            {
                if(iDig % 2 == 0)
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

     iRet = CountEven(iValue);
     printf("\n Even Count is : %d",iRet);

      _getch();
     return 0;
}
