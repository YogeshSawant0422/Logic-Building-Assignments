#include<stdio.h>

void Count(char *str)
{
    int CCount = 0 , SCount = 0;

   while(*str != '\0')
   {
        if((*str >= 'A') && (*str <= 'Z'))
       {
            CCount++;
       }
       else if((*str >= 'a') && (*str <= 'z'))
       {
           SCount++;
       }
       str++;
   }

   printf("Small Letters Are : %d\n",SCount);
   printf("Capital Letters Are : %d\n",CCount);

}
int main()
{
    char Arr[20];

  printf("Enter String : \n");
  scanf("%[^'\n']s",Arr);

   Count(Arr);

    return 0;
}
