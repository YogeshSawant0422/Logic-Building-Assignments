#include<stdio.h>

int SumEven(int);

int main()
{
	int iValue = 0 , iRet = 0 ;

	printf("\n Enter A NUmber ");
	scanf("%d",&iValue);

	iRet = SumEven(iValue);

	printf("\n Summation Of Even Digit Is %d",iRet);

	return 0;
}

int SumEven(int iNo)
{
	int iSum = 0 , iDigit = 0;
	if(iNo < 0)
	{
		iNo = -iNo ;
	}

	while(iNo > 0)
	{
		iDigit = iNo % 10;

		if(iDigit % 2 == 0)
		{
			iSum = iSum + iDigit ;
		}

		iNo = iNo / 10;
	}
		return iSum;
}
