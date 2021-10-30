#include<stdio.h>
void check(int age)
{
	if(age > 18)
	{
		printf("You can vote");
	}
	else
	{
		printf("You cannot vote");
	}
}
void main()
{
	int value;
	scanf("%d", &value);
	check(value);
}
