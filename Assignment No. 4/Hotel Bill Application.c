// Hotel Bill Application .
#include<stdio.h>
#include<conio.h>
float CalculateBill(int iAmount)
{
    if(iAmount < 500)
    {
        return iAmount;
    }
    else if(iAmount >= 500 && iAmount < 1500)
    {
        return iAmount - (iAmount * 10)/100;
    }
    else if(iAmount >= 1500)
    {
        return iAmount - (iAmount * 15)/100;
    }
}
int main()
{
    int iTotalBill = 0;
    float fDiscount = 0;

    printf("\n_____WELCOME IN SHIVAR RESTAURANT______");

    printf("\n\nTotal Bill Of Customer : ");
    scanf("%d",&iTotalBill);

    fDiscount = CalculateBill(iTotalBill);

    printf("\n Total Bill Amount = %d . \n Discounted Amount = %0.0f",iTotalBill,fDiscount);

    return 0;
}
