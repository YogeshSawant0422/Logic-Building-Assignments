//Accept number from user and display below pattern
//Input : 5
//Output : 1 * 2 * 3 * 4 * 5 *
#include<stdio.h>
#include<conio.h>
void Pattern(int iNo)
{
   int i = 0 ;

   for(i = 1 ; i <= iNo ; i++)
   {
       printf(" %d ",i);
       printf(" * ");
   }
}
int main()
{
     int iValue = 0;
     printf("\n Enter number of elements : ");
     scanf("%d",&iValue);
     printf("\n");
     Pattern(iValue);
     _getch();
     return 0;
}
