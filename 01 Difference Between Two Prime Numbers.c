//Difference Between Two Prime Numbers
#include<stdio.h>

int main()
{
    int iNo1 = 0 , iNo2 = 0 ,iCnt = 0 ,count = 0;
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
        }
       iNo1++;
    }

    return 0;
}
