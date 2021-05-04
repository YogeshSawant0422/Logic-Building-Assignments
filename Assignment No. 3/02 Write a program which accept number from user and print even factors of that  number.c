//Write a program which accept number from user and print even factors of that  number.
// Accepted Number = 24
// 1 2 4 6 8 10 12
#include<stdio.h>

void DisplayFactor(iNo)
{
    int i = 1;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for( i = 1 ; i <=iNo ; i++)
    {
        if( iNo % i == 0)
        {
            //if( i % 2 == 0 )
            //{
                printf("\t%d", i);
            //}
        }
    }
    return ;
}
int main()
{
    int iValue = 0;

    printf("\n Enter A  Number = ");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}
