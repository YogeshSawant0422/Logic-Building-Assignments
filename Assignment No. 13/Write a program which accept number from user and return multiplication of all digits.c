//Write a program which accept number from user and return multiplication of all digits
#include<stdio.h>
#include<conio.h>
int MultDigits(int iNo)
{
    int iDig = 0 , iDigMult = 1;

    while(iNo > 0)
    {
        iDig = iNo % 10;
        if( iDig == 0)
        {
            iDig = 1;
        }
        iDigMult = iDigMult * iDig;
        iNo = iNo / 10;
    }

    return  iDigMult;
 }
int main()
{
     int iValue = 0;
     int iRet = 0;
     printf("\n Enter number : ");
     scanf("%d",&iValue);

     iRet = MultDigits(iValue);
     printf("\n multiplication of all digits : %d \n",iRet);

    _getch();
     return 0;
}
