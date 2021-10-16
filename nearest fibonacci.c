/* Nearest Fibonacci */
#include<stdio.h>
void main()
{
	int firstNumber=0,secondNumber=1,nextNumber,number,firstDifference=0,secondDifference=0;
	scanf("%d",&number);
	while(number>nextNumber)
	{
		nextNumber=firstNumber+secondNumber;
		firstNumber=secondNumber;
		secondNumber=nextNumber;
	}
	if(number-firstNumber<secondNumber-number)
	{
		printf("%d",firstNumber);
	}
	else if(number-firstNumber==secondNumber-number)
	{
		printf("%d %d",firstNumber,secondNumber);
	}
	else
	{
		printf("%d",secondNumber);
	}
}
