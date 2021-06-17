//Write a program which accept temperature in Fahrenheit and convert it into Celsius. (1 Celsius = (Fahrenheit -32) * (5/9))
//Input : 10
//Output : -12.2222 (10 - 32) * (5/9)
//Input : 34
//Output : 1.11111 (34 - 32) * (5/9)
#include<stdio.h>
#include<conio.h>

double FhtoCs(float fTemp)
{
    return (fTemp - 32) * (5/9);
}
int main()
{
     float fValue = 0.0;
     double dRet = 0.0;

     printf("\n Enter temperature in Fahrenheit  : ");
     scanf("%d",&fValue);

     dRet = FhtoCs(fValue);

     printf("Temperature In Celsius Is : %lf \n",dRet);
   _getch();

     return 0;
}
