#include<stdio.h>

void Pattern(int iRow ,int iCol)
{
    int i = 0 , j = 0 ,No = 1;

    for( i = 0 ; i < iRow ;i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf(" %d ",No * 2);
                No++;
            }
            else
            {
                printf(" %d ",No % 2);
                No++;
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0 , iValue2 = 0;

    printf("\n Enter A Row And Columns : ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}