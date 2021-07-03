//Write a program which accept number from user and check whether it contains 0 in it or not.
#include<conio.h>
#include<stdio.h>

int main()
{
    int iNo = 0 , iDig = 0;

    printf("\n Enter  a number : ");
    scanf("%d",&iNo);

    while(iNo > 0)
    {
        iDig = iNo % 10;

        if(iDig == 0)
        {
            break;
        }

        iNo = iNo / 10;
    }

    if(iDig != 0)
    {
        printf("\n Given Number Is Not Contains 0 ");
    }
    else
    {
        printf("\n Given Number Contains 0");
    }

 _getch();
 return 0;
}
