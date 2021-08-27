#include<stdio.h>

void Pattern(int , int);

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter number of rows and columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1 ,iValue2);

    return 0;
}
void Pattern(int iRow , int iCol)
{
    int i = 0 , j = 0 ,No = 1;

    for(i = 0 ; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            up:
            if(No <= 9)
            {
                printf(" %d ",No);
                No++;
            }
            else
            {
                No = 1;
                goto up;
            }
        }
        printf("\n");
    }
}
