//Application for tourist company
#include<stdio.h>

int TouristBill(int iKilometer)
{
    if(iKilometer < 100)
    {
        return iKilometer * 25;
    }
    else if(iKilometer > 100)
    {
        return ((iKilometer - 100) * 15 + (100 * 25));
    }
    return ;
}
int main()
{
    int iKilometers = 0 ;

    printf("\n Enter A Kilometers : ");
    scanf("%d",&iKilometers);

    int Ret = TouristBill(iKilometers);

    printf("\n Running of car In Km Is : %d .\n\n Total Charges Of Rent Car : %d Rs .\n", iKilometers ,Ret);

    return 0 ;
}
