//Write a program which accept number from user and if number is less than 50
//then print small , if it is greater than 50 and less than 100 then print medium, if it is
//greater than 100 then print large
#include<stdio.h>
#include<conio.h>

void Number(int iNo)
{
    (iNo < 50) ? printf("\n Small .") : (iNo >= 50 && iNo < 100) ? printf("\n Medium.") :  printf("\n Large .");
}
int main()
{
     int iValue = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     Number(iValue);
     getch();
     return 0;
}
