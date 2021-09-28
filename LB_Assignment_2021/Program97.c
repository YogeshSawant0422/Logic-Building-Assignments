
#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter Your Name \n");
    scanf("%[^'\n']s",Arr);

    printf("Your Entered number is : %s\n",Arr);


    return 0 ;
}

