
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{

    if(str == NULL)
    {
        return 0;
    }
    while(*str != '\0')
    {
       if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
       {
           break;
       }
       str++;
    }
    if(*str != '\0')
    {
        return  TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;

    printf("\n Enter a String : ");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("\n Contains  is  Vowel");
    }
    else
    {
        printf("\n There is no vowel");
    }

    return 0;
}
