 #include<stdio.h>

int Display(int);

 int main()
 {
        int iNo = 0;

        printf("\n Enter A Number : ");
        scanf("%d",&iNo);

       int Ret = Display(iNo);

        printf("\n Sum of All Digits : %d",Ret);

        return 0;
 }
 int Display(int iValue)
 {
    int i = 0 , Sum = 1;

    for(i = iValue ; i >= 1 ;i--)
    {
        Sum = Sum * i ;
    }

    return Sum ;
 }
