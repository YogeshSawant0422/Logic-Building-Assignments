// Accept number of rows and number of columns from user and display below pattern.
//Input : iRow = 3 iCol = 5
/* Output :
     A A A A A
     B B B B B
     C C C C C
 */

 #include<stdio.h>
 #include<conio.h>
 void Pattern(int iRow,int iCol)
 {
     int i = 0 , j = 0;
     char ch = 'A';
     for( i = 1 ; i <=iRow ;i++)
     {
         for(j = 1 ; j <= iCol ; j++)
         {
             printf(" %c ",ch);
         }
         printf("\n");
         ch++;
     }
 }
 int main()
 {
     int iValue1 = 0 ,iValue2 = 0;

     printf("\n Enter A Row And Column : ");
     scanf("%d%d",&iValue1,&iValue2);

     Pattern(iValue1 , iValue2);

     _getch();
     return 0;
 }
