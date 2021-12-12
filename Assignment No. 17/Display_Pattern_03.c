/*
Input : iRow = 5 iCol = 5
Output :
 a b c d e
 1 2 3 4 5
 a b c d e
 1 2 3 4 5
 a b c d e
Program Layout :
*/
#include<stdio.h>
void Pattern(int iRow, int iCol)
{
  int i = 0 , j = 0;
  char ch = '\0';

  for(i=1; i<=iRow ;i++)
  {
      ch = 'a';

      for(j=1;j<=iCol;j++)
      {
          if(i % 2 == 0)
          {
              printf("%d",i);
          }
          else
          {
            printf("%c",ch);
          }
      }
      printf("\n");
  }
}
int main()
{
  int iValue1 = 0, iValue2 = 0;
  printf("\n Enter number of rows and columns = ");
  scanf("%d %d",&iValue1, &iValue2);
  Pattern(iValue1, iValue2);
  return 0;
}
