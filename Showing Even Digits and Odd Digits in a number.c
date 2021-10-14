#include<stdio.h>
void main()
{
	int number,r,evenDigits,oddDigits;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number)
	{
		r=0;
		r=number%10;
		if(r%2==0)
		{
			printf("Even Digit:%d\n",r);
		}
		else
		{
			printf("Odd Digit:%d\n",r);
		}
		number/=10;
	}
}
