//Write a program which accept accept range from user and display all numbers in between that range in reverse order.
#include<stdio.h>
void RangeDisplayRev(int iStart , int iEnd)
{
     int i = 0 ;

     if(iStart > iEnd)
     {
         printf("\n Invalid Number !!!");
     }
     else
     {
         for(i = iEnd ; i >= iStart ;i--)
         {
             printf("\t%d",i);
         }
     }
 }
int main()
{
     int iValue1 = 0, iValue2 = 0;

     printf("\n Enter starting point : ");
     scanf("%d",&iValue1);

     printf("\n Enter ending point : ");
     scanf("%d",&iValue2);

     RangeDisplayRev(iValue1, iValue2);

     _getch();
     return 0;
}
