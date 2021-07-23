//Accept number of rows and number of columns from user and display below pattern.
//Input : iRow = 4 iCol = 4
//Output :
 /*    A B C D
         A B C D
         A B C D
         A B C D
*/
#include<stdio.h>
#include<conio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch = 'A';
    for( i = 1 ; i <= iRow ; i++)
    {
        ch = 'A';
        for( j = 1 ; j <= iCol ; j++)
        {
            printf(" %c ",ch++);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("\n Enter Row And Column : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    _getch();
    return 0;
}
