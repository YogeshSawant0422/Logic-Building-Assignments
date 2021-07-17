// Accept number from user and display below pattern.
// Input : 5
//Output : A B C D E
#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
    char Ch = 'A';

    while( iNo > 0)
    {
        printf("\t%c",Ch);
        iNo--;
        Ch++;
    }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number of elements : ");
     scanf("%d",&iValue);

     Pattern(iValue);
     _getch();
     return 0;
}
