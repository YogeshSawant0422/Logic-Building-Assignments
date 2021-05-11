//Difference Between Two Prime Numbers
#include<stdio.h>

int main()
{
    int iNo1 = 0 , iNo2 = 0 ,iCnt = 0 , count = 0;
    int i = 0 , Max = 0 , Min = 0 ;
    printf("\n Enter A First Number : ");
    scanf("%d",&iNo1);

    printf("\n Enter A Second Number : ");
    scanf("%d",&iNo2);

    while( iNo1 < iNo2)
    {
        iCnt = 2;
        while(iCnt<=iNo2)
        {
            if( iNo1 % iCnt ==0)
            {
                break;
            }
            iCnt++;
        }
        if(iNo1 == iCnt)
        {
            printf("\t%d",iCnt);
            count++;
            for(i = 0 ; i <= count ; i++)
                {
                    if(count == 1)
                    {
                        Min = iCnt ;
                        continue;
                    }
                    if(iCnt < Min )
                    {
                        Min = iCnt;
                    }
                    if(iCnt > Max)
                    {
                        Max = iCnt;
                    }
                }
        }
        iNo1++;
 }
    printf("\n count = %d",count);
    printf("\n Min = %d ", Min);
    printf("\n Max = %d ", Max);
    printf("\n Difference : %d",Max - Min);
    return 0;
}
