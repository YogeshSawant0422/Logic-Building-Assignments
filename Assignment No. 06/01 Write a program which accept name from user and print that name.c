//Write a program which accept name from user and print that name

#include<stdio.h>
 int main()
 {
     char Name[30];

     printf("\n Please enter full name : ");
     gets(Name);

     printf("\nYour name is : %s",Name);

     return 0;
 }
