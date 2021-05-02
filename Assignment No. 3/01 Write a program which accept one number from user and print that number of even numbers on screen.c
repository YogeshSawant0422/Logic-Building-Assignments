//Write a program which accept one number from user and print that number of even numbers on screen .
#include<stdio.h>

void printEven(int iNo)
{
    int Cnt = 1 , CiNo = 0;
    if(iNo <= 0)
    {
        return;
    }
    while(iNo > 0)
    {
        CiNo++;
        iNo--;
    }
    printf("\n Count Of iNo Is = ", CiNo);

    getch();
    while(iNo >= 0)
    {
        if(Cnt % 2 == 0)
        {
            printf("\t%d",Cnt);
        }
        Cnt++;
        if(Cnt > CiNo)
        {
            break;
        }
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
