/* Fibonacci or not */
#include<stdio.h>
void main()
{
	int firstNumber=0,secondNumber=1,nextNumber,number;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(nextNumber<number)
	{
		nextNumber=firstNumber+secondNumber;
		if(nextNumber<number)
		{
			firstNumber=secondNumber;
			secondNumber=nextNumber;
		}
	}
		if(nextNumber==number)
		{
			printf("%d is a Fibonacci Number.\n",number);
		}
		else
		{
			printf("%d is not a Fibonacci Number.\n",number);
		}
}
