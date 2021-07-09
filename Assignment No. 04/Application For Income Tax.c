//Application For Income Tax
#include<stdio.h>

float IncomeTax(int iAmount)
{
    if(iAmount < 500000)
    {
        return 0;
    }
    else if(iAmount >= 500000 && iAmount < 100000)
    {
        return ((iAmount-499999)*10)/100;
    }
    else if(iAmount >=100000 && iAmount < 200000)
    {
        return (((iAmount-999999)*20)/100)+50000;
    }
    else
    {
        return (((iAmount-1999999)*30/100))+50000+200000;
    }
}

int main()
{
    int iIncome = 0 ;

    printf("\n Enter A Income Amount : ");
    scanf("%d",&iIncome);

    float Ret = IncomeTax(iIncome);

    printf("\n Income Amount Is : %d \n Tax On That Amount Is : %0.0f ",iIncome,Ret);

    return 0;
}
