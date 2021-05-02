//Write a program which accept one number from user and print that number of even numbers on screen .
#include<stdio.h>

void printEven(int iNo)
{
    int Cnt = 1;
    if(iNo <= 0)
    {
        printf("\n Invalid Number !!!!\n");return;
    }
    while(iNo >= Cnt)
    {
            printf("\t%d",2*Cnt);
            Cnt++;
    }
    return;
}
int main()
{
    int iValue = 0 ;
     printf("\n Enter A Value = ");
     scanf("%d",&iValue);

     printEven(iValue);

     return 0;
}
