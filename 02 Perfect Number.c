//Perfect Number
#include<stdio.h>
int Perfect_Number(int iNum)
{
    int i = 1, Sum = 0;

    if(iNum <= 0)
    {
        return -1;
    }
    for(i = 1 ; i < iNum ; i++)
    {
        if(iNum % i == 0)
        {
             Sum = Sum + i;
        }
    }
    if(iNum == Sum)
    {
        return 1;
    }
    else if(iNum != Sum)
    {
        return 0;
    }
}
int main()
{
    int iValue = 0 , Sum = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    int Ret = Perfect_Number(iValue);

    if( Ret == 1)
    {
        printf("\n Given Number Is Perfect Number \n");
    }
    else if(Ret == 0)
    {
        printf("\n Given Number Is Not Perfect Number \n");
    }
    else
    {
        printf("\n Invalid Number ...");
    }
    return 0;
}
