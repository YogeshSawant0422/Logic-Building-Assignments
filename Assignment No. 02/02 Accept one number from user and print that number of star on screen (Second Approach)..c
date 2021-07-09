// Accept one number from user and print that number of * on screen (Second Approach).
#include<stdio.h>

void Display(int iNo)
{
    printf("\n");
    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}
int main()
{
    int iValue = 0 ;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");
    return 0;
}
