
#include<stdio.h>

int Difference(char *str)
{
    int SCnt = 0 , CCnt = 0;
     if(str == NULL)
     {
         return 0;
     }

    while(*str != '\0')
    {
            if(*str >= 'a'  && *str <= 'z')
            {
                SCnt++;
            }
            else if(*str >= 'A' && *str <='Z')
            {
                CCnt++;
            }
            str++;
    }
    return  SCnt - CCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;
    printf("\n Enter string");
    scanf("%[^'\n']s",arr);
    iRet = Difference(arr);
    printf("  Difference is  %d",iRet);
    return 0;
}
