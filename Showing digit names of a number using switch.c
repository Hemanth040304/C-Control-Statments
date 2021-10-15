#include<stdio.h>
void main ()
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
		u=reverse%10;
		switch(u)
		{
			case 1:
				printf("one\n");
				break;
			case 2:
				printf("two\n");
				break;
			case 3:
				printf("three\n");
				break;
			case 4:
				printf("four\n");
				break;
			case 5:
				printf("five\n");
				break;
			case 6:
				printf("six\n");
				break;
			case 7:
				printf("seven\n");
				break;
			case 8:
				printf("eight\n");
				break;
			case 9:	
				printf("nine\n");
				break;
		}
		reverse/=10;
	}
}
