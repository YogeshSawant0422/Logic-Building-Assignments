
#include<stdio.h>

char CharToggle(char c)
{
   if((c >= 'A') && (c <= 'Z'))
   {
       return c + 32;
   }
   else if((c >= 'a') && (c <= 'z'))
   {
       return c - 32;
   }

}
int main()
{
    char ch = '\0' , CRet  = '\0';

  printf("Enter Character \n");
  scanf("%c",&ch);

  CRet = CharToggle(ch);

  printf(" letter is : %C\n",CRet);

    return 0;
}






