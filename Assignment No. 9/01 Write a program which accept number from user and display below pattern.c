//Write a program which accept number from user and display below pattern
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1 ; iCnt <= iNo * 2; iCnt++)
    {
        if(iCnt <= iNo)
        {
            printf(" * ",iCnt);
        }
        if(iCnt > iNo && iCnt <= iNo * 2)
        {
            printf(" # ",iCnt);
        }

    }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     Display(iValue);

     getch();
     return 0;
}
