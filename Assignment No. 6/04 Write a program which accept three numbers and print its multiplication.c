// Write a program which accept three numbers and print its multiplication .
#include<stdio.h>

 int Multiply(int iNo1,int iNo2, int iNo3)
 {
        int Mult = 0 , ZeroMult = 0 , Number = 1;
        if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
        {
            iNo1 =Number || iNo2 =Number  || iNo3 =Number;
            ZeroMult  = iNo1 * iNo2 *iNo3;
            return ZeroMult;
        }
        else
        {
            Mult = iNo1 * iNo2 * iNo3;
            return Mult;
        }
 }
 int main()
 {
     int iValue1 = 0,iValue2 = 0, iValue3 = 0, iRet = 0;

     printf("\n Please enter three numbers : ");
     scanf("%d %d %d",&iValue1, &iValue2, &iValue3);

     iRet = Multiply(iValue1, iValue2 , iValue3);

    printf("\n Multiplication Of Given Three Numbers Is : %d \n",iRet);

     return 0;
 }
