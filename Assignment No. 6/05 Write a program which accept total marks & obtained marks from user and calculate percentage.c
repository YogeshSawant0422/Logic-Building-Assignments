//Write a program which accept total marks & obtained marks from user and calculate percentage
#include<stdio.h>

 float Percentage(int iNo1,int iNo2)
 {
        if(iNo1 < iNo2 || iNo1 == 0)
        {
                printf("\n Invalid Numbers !!\n");
                exit(0);
        }
        return (iNo2/iNo1) * (100);
 }
 int main()
 {
     int iValue1 = 0,iValue2 = 0;
     float fRet ;

     printf("\n Please enter total marks : ");
     scanf("%d",&iValue1);
     printf("\n Please enter obtained marks : ");
     scanf("%d",&iValue2);

     fRet = Percentage(iValue1,iValue2);

     printf("\n The Percentage Is : %0.2f \n",fRet);

     return 0;
 }