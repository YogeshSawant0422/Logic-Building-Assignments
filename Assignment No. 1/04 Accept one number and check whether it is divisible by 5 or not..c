//Accept one number and check whether it is divisible by 5 or not.
#include<stdio.h>

int Check_Divisible(int Num)
{
    int Ret ;
    if(Num % 5 == 0)
    {
        Ret = 1 ;
    }
    return Ret ;
}
int main()
{
    int No = 0 , Ret;

    printf("\n Enter A Number = ");
    scanf("%d",&No);

    Ret = Check_Divisible(No);

    if(Ret == 1)
    {
        printf("\n Given Number Is Divisible By 5 .");
    }
    else
    {
        printf("\n Given Number Is Not Divisible By 5 .");
    }
    getch();
    return 0;
}

