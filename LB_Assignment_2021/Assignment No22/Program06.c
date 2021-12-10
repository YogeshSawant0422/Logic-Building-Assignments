#include<stdio.h>

void Reverse(char *str)
{
    char *ptr = *str;

    while(*ptr != '\0')
    {
        ptr++;
    }
    while(ptr != str)
    {
        printf("%c",*ptr);
        ptr--;
    }
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("\n Enter string : ");
    scanf("%[^'\n']s",arr);
    Reverse(arr);
    return 0;
}
