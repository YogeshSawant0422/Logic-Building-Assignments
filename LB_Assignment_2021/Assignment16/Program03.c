#include<stdio.h>

int Display(int Arr[], int iLength)
{
    int i  = 0;

    for( i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 5 == 0 && Arr[i] % 2 == 0)
        {
            printf("%d\t",Arr[i]);
        }
    }
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
        printf("\n Enter %d element :  ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Display(p, iSize);

    free(p);
    return 0;
}


