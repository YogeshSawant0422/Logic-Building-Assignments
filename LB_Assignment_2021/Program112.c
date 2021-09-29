
#include<stdio.h>

char CapitalToSmall(char c)
{
   if((c >= 'A') && (c <= 'Z'))
   {
       return c + 32;
   }

}
int main()
{
    char ch = '\0' , CRet  = '\0';

  printf("Enter Character \n");
  scanf("%c",&ch);

  CRet = CapitalToSmall(ch);

  printf("Small letter is : %C\n",CRet);

    return 0;
}






