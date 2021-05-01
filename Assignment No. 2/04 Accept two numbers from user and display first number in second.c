//Accept two numbers from user and display first number in second number of times.
/*Input : 12 5
Output : 12 12 12 12 12
Input : -2 3
Output : -2 -2 -2
Input : 21 -3
Output : 21 21 21
Input : -2 0
Output :       */

#include<stdio.h>

void Display(int iNo1 , int iNo2)
{
    int iCnt = 0;
    printf("\n");

    if(iNo2 < 0 )
    {
        iNo2 = -(iNo2);
    }
    for(iCnt = 0 ; iCnt< iNo2; iCnt++)
    {
        printf("\t%d",iNo1);
    }
    return ;
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("\n Enter A Two Numbers : ");

    scanf("%d%d",&iValue1,&iValue2);

    Display(iValue1, iValue2);

    printf("\n");

    return 0 ;
}
