// Write a program which accept number from user and print its numbers line
//Input : 4
//Output : -4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int i = 0;
    if(iNo > 0)
    {
        iNo = -iNo;
    }

    for(i = iNo ;  i <= iNo * -1; i++ )
    {
        printf(" %d ",i);
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
