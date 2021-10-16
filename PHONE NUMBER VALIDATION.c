/* PHONE NUMBER VALIDATION */
#include<stdio.h>
void main()
{
	long long digits=0,number;
	scanf("%lld",&number);
	while(number)
	{
		number=number/10;
		digits++;
	}
	if(digits==10)
	{
		printf("valid");
	}
	else
	{
		printf("Invalid");
	}
}
