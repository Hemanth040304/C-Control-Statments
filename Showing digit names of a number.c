#include<stdio.h>
void main()
{
	int number,r,reverse=0,u;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(number)
	{
		r=number%10;
		reverse=reverse*10+r;
		number/=10;
	}
	while(reverse)
	{
		u=0;
		u=reverse%10;
		if(u==1)
		{
			printf("one\n");
		}
		else if(u==2)
		{
			printf("two\n");
		}
		else if(u==3)
		{
			printf("three\n");
		}
		else if(u==4)
		{
			printf("four\n");
		}
		else if(u==5)
		{
			printf("five\n");
		}
		else if(u==6)
		{
			printf("six\n");
		}
		else if(u==7)
		{
			printf("seven\n");
		}
		else if(u==8)
		{
			printf("eight\n");
		}
		else if(u==9)
		{
			printf("nine\n");
		}
		reverse/=10;
	}
}
