//Write a program which accept N and print first 5 multiples of N
//Input : 4
//Output : 4 8 12 16 20
#include<stdio.h>
#include<conio.h>

void MultipleDisplay(int iNo)
{
    int i = 0 , Mult = 0;

    for( i = 0 ; i <= iNo ; i++)
    {
        Mult = Mult + iNo;
        printf(" %d ", Mult);
    }

}
int main()
{
     int iValue = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     MultipleDisplay(iValue);
     getch();
     return 0;
}
