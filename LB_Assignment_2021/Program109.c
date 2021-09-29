
#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)
{
   if((c >= 'a') && (c <= 'z'))
   {
       return true;
   }
   else
   {
       return false;
   }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

  printf("Enter Character \n");
  scanf("%c",&ch);

  bRet = CheckCapital(ch);

  if(bRet == true)
  {
      printf("It is small\n");
  }
  else
  {
      printf("it is not small\n");
  }

    return 0;
}




