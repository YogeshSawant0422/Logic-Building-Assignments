//Write a program which accept number from user and print even factors of that number.
//Input : 36
//Output: 2 6 12 18
#include<stdio.h>

 void EvenFactor(int);

int main()
{
    int iValue = 0 ;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    EvenFactor(iValue);

    return 0 ;
}
void EvenFactor(int iNo)
{
    int i = 0 ;

    if( iNo <= 0)
    {
        iNo = -iNo;
    }

    for( i = 1 ; i <iNo ; i++)
    {
        if( iNo % i == 0 && i % 2 == 0)
        {
            printf("\t %d",i);
        }
    }
    return ;
}



