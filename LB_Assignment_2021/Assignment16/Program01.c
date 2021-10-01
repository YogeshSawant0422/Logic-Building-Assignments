/* Input :
    N : 6
Elements :85 66 3 80 93 88
Output : 53 (234 - 181)
*/
#include<stdio.h>
int Difference(int Arr[], int iLength)
{
    int i  = 0 , ESum = 0 , OSum = 0 ;

    for( i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 2 == 0)
        {
            ESum += Arr[i];
        }
        else if(Arr[i] % 2 != 0)
        {
            OSum += Arr[i];
        }
    }
    return ESum - OSum;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;
    printf("\n Enter number of elements : ");
    scanf("%d",&iSize);
    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }
    printf("\n Enter %d elements ",iSize);
    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        printf("\n Enter element : %d ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    iRet = Difference(p, iSize);
    printf("\n Result is %d",iRet);
    free(p);
    return 0;
}
