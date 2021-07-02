//Write a program which accept number from user and display its digits in reverse order.
#include<stdio.h>
#include<conio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
     {
        iNo = -iNo;
     }
    while(iNo > 0)
    {
          iDigit =  iNo % 10;
          printf("\n\t%d",iDigit);
            iNo =  iNo /10;
    }
}
int main()
{
     int iValue = 0;

     printf("\n Enter number : ");
     scanf("%d",&iValue);

     DisplayDigit(iValue);
     return 0;
}
