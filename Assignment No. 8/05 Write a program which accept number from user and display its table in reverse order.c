//Write a program which accept number from user and display its table in reverse order.
#include<stdio.h>
#include<conio.h>

void TableRev(int iNo)
{
    int Temp = 0 , Fact = 0 ;

    for(Temp = 10 ; Temp > 0 ; Temp-- )
    {
        Fact = iNo * Temp ;
        printf("\t %d",Fact);
    }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     TableRev(iValue);
     getch();
     return 0;
}
