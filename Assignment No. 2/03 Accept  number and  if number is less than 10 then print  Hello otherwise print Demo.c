// Accept on number from user if number is less than 10 then print  "Hello" otherwise print "Demo".
#include<stdio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("\n Hello ");
    }
    else
    {
        printf("\n Demo");
    }

    return ;
}
int main()
{
    int iValue = 0;

    printf("\n Enter A Number : ");
    scanf("%d",&iValue);

    Display(iValue);

    printf("\n");

    return 0;
}
