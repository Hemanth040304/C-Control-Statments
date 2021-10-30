#include<stdio.h>
void check(int number)
{
	if(number%2==0)
	{
		printf("Even.");
	}
	else
	{
		printf("Odd.");
	}
}
void main()
{
	int value;
	printf("Enter a number.\n");
	scanf("%d",&value);
	check(value);
}
