// Accept number from user and display below pattern.
//Input : 5
//Output : 5 # 4 # 3 # 2 # 1 #
#include<stdio.h>
void Pattern(int iNo)
{
    int i = 0;

    for(i = iNo ; iNo > 0 ; i--)
    {
        printf(" %d ",iNo);
        printf(" # ");
        iNo--;
    }
}
int main()
{
 int iValue = 0;
 printf("\n Enter number of elements : ");
 scanf("%d",&iValue);
 printf("\n");
 Pattern(iValue);
 _getch();
 return 0;
}
