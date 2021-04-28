//Accept one number from user and print that number of  * on screen .
#include<stdio.h>

void Display(int iNo)
{
     int iCnt = 0;
     printf("\n");
    while( iCnt < iNo)
     {
        //printf("\n");
        printf(" * ");
        iCnt++;
     }
}

int main()
{
     int iValue = 0 ;
     printf("\n Enter A Number : ");

     scanf("%d" ,&iValue);

     Display(iValue);

      printf("\n");

     return 0;
}
