// Write a program which accept three numbers and print its multiplication .
#include<stdio.h>

 int Multiply(int iNo1,int iNo2, int iNo3)
 {
        int Mult = 0;
        if(iNo1 == 0 || iNo2 == 0 || iNo3 == 0)
        {
            return 1;
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
     if(iRet == 1)
     {
         printf("\n Any Number Multiply By Zero Then Its Multiplication Always Gets Zero\n");
     }
     else
     {
         printf("\n Multiplication Of Given Three Numbers Is : %d \n",iRet);
     }

     return 0;
 }
