//Write a program which accept radius of circle from user and calculate its area.
//Consider value of PI as 3.14. (Area = PI * Radius * Radius)
/* Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224 */
#include<stdio.h>
#include<conio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14;
    if(fRadius  <= 0)
    {
        return -1;
    }
    else
    {
        return PI * fRadius * fRadius;
    }
}
int main()
{
     float fValue = 0.0;
     double dRet = 0.0;

     printf(" \n Enter radius : ");
     scanf("%f",&fValue);

     dRet = CircleArea(fValue);

     if(dRet == -1)
     {
         printf("\n Not Valid Radius !!!");
     }
     else
     {
          printf("\n The Area Of Circle : %0.4lf",dRet);
     }

     _getch();
     return 0;
}
