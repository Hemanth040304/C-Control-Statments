/* LCM */
#include<stdio.h>
void main()
{
	int firstNumber,secondNumber,n=1;
	printf("Enter two numbers.\n");
	scanf("%d%d",&firstNumber,&secondNumber);
	for(;n>0;n++)
	{
		if((secondNumber*n)%firstNumber==0)
		{
			printf("%d is the LCM.",secondNumber*n);
			break;
		}
	}
}
