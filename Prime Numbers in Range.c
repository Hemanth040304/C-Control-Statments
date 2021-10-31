#include<stdio.h>
void main()
{
	int firstNumber,secondNumber,n,nonPrime=0,prime=0;
	printf("Enter the range.\n");
	scanf("%d%d",&firstNumber,&secondNumber);
	while(firstNumber<=secondNumber)
	{
		for(n=2,nonPrime=0;n<100;n++)
		{
			if(firstNumber%n==0)
			{
				nonPrime++;
			}
		}
		if(nonPrime<2)
		{
			printf("%d\n",firstNumber);
		}
		firstNumber++;
	}
}
