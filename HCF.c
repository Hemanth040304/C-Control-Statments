/* HCF */
#include<stdio.h>
void main()
{
	int  firstNumber,secondNumber;
	printf("Enter two numbers.\n");
	scanf("%d%d",&firstNumber,&secondNumber);
	while(firstNumber!=secondNumber)
	{
		if(firstNumber>secondNumber)
		{
			firstNumber-=secondNumber;
		}
		else if(secondNumber>firstNumber)
		{
			secondNumber-=firstNumber;
		}
	}
	printf("%d",secondNumber);
}
