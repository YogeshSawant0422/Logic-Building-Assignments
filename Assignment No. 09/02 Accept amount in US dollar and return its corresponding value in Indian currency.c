//Accept amount in US dollar and return its corresponding value in Indian currency.
//Consider 1$ as 70 rupees
#include<stdio.h>
#include<conio.h>

int DollarToINR(int iNo)
{
    if(iNo < 0)
    {
        return -1;
    }
    return iNo * 70;
}
int main()
{
     int iValue = 0, iRet = 0;
     printf("\n Enter number of USD : ");
     scanf("%d",&iValue);

     iRet = DollarToINR(iValue);

     if(iRet == -1)
     {
         printf("\n Invalid Number !!!");
     }
     else
     {
          printf("\n Value in INR is %d",iRet);
     }
     getch();
     return 0;
}
