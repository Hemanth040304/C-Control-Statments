#include<stdio.h>
void main()
{
	int number,temp,reverse=0,r;
	printf("Enter a number.\n");
	scanf("%d",&number);
	temp=number;
	while(temp)
	{
		r=temp%10;
		reverse=reverse*10+r;
		temp=temp/10;
	}
	if(number==reverse)
	{
		printf("%d is a Palindrome.",number);
	}
	else
	{
		printf("%d is not a palindrome.",number);
	}
}
