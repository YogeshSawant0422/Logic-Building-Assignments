

#include<stdio.h>

int main()
{
    int Arr[5];  // Array of 5 integers

    int iSum = 0 , i = 0;

    printf("Enter a number\n");

    for(i = 1 ; i <= 5 ; i++)
    {
        scanf("%d",&Arr[i]);
    }
     for(i = 1 ; i <= 5 ; i++)
     {
           iSum += Arr[i];
     }

    printf("Addition is : %d\n",iSum);

    return 0;
}
