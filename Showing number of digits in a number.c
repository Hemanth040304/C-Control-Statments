#include<stdio.h>
void main()
{
	int number,digits=0;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number)
	{
		digits++;
		number=number/10;
	}
	printf("%d",digits);
}
