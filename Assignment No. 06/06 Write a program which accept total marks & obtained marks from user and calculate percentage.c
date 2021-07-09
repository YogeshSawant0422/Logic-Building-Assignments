//Write a program which accept total marks & obtained marks from user and calculate percentage
#include<stdio.h>
#include<stdio.h>

 float Percentage(int *iPtr1,int *iPtr2)
 {
        if(*iPtr1 < *iPtr2 || *iPtr1 < 0)
        {
                return -1;
        }
        return( (float )  (*iPtr2) / (*iPtr1)  ) *  (100);
 }
 int main()
 {
     int iValue1 = 0,iValue2 = 0;
     float fRet ;

     printf("\n Please enter total marks : ");
     scanf("%d",&iValue1);
     printf("\n Please enter obtained marks : ");
     scanf("%d",&iValue2);

     fRet = Percentage(&iValue1,&iValue2);

     if(-1 == fRet)
     {
         printf("\n Invalid Number !!!! \n ");
     }
     else
     {
          printf("\n The Percentage Is : %0.2f \n",fRet);
     }

     getch();
     return 0;
 }
