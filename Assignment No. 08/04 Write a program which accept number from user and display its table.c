//Write a program which accept number from user and display its table.
#include<stdio.h>
#include<conio.h>

void Table(int iNo)
{
    int Temp = 0 , Fact = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for( Temp = 1 ; Temp <= 10 ;Temp++)
    {
        Fact  = iNo * Temp;
        printf("\t%d",Fact);
    }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     Table(iValue);

     getch();
     return 0;
}
