// Write a program which accept number from user and print that number of $ & * on screen.
// Input : 5
// Output : $ * $ * $ * $ * $ *
// Input : -3
// Output : $ * $ * $ *
#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(i = 1 ; i <= iNo ; i++)
    {
        printf(" $ * ",iNo);
    }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     Pattern(iValue);
     getch();
     return 0;
}
