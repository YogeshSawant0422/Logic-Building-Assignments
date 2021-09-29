
#include<stdio.h>

void Display()
{
    while(*Brr != '\0')
    {
        printf("%c\n",*Brr);
    }
}

int main()
{
    char Arr[10];

    printf("Enter Your Name\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}
