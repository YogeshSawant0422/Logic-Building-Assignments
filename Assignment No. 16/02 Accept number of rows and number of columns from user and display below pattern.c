//Accept number of rows and number of columns from user and display below pattern.
//Input : iRow = 4 iCol = 4
//Output :
/*
    A B C D
     a b c d
     A B C D
     a b c d
*/

#include<stdio.h>
#include<conio.h>
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0;
    char ch1 = 'A' , ch2 = 'a';
    for(i = 1 ; i <= iRow ; i++)
    {
        ch1 = 'A';
        ch2 = 'a';
        for( j = 1 ; j <= iCol ; j++)
        {
            if(i % 2 == 0)
            {
                printf(" %c ",ch2);
               ch2++;
            }
            else
            {
                printf(" %c ",ch1);
                ch1++;
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("\n Enter A Row And Column : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    _getch();
    return 0;
}
