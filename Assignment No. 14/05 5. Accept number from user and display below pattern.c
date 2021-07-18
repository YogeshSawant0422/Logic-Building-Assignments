//Accept number from user and display below pattern
//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>
void Pattern(int iNo)
{
   int i = 0;

   for(i = 1 ; i <= iNo;i++)
   {
        printf(" %d ",i * 2);
   }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number of elements  : ");
     scanf("%d",&iValue);
     printf("\n");
     Pattern(iValue);
     _getch();
     return 0;
}
