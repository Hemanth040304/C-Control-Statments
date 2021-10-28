/* Prime Numbers */
#include<stdio.h>
void main()
{
	int number,count=0,n=1;
	printf("Enter a number.\n");
	scanf("%d",&number);
	while(n<=number)
	{
		if(number%n==0)
		{
			count++;
		}
		n++;
	}
	if(count==2)
	{
		printf("Prime Number.");
	}
	else
	{
		printf("Not a Prime Number.");
	}
}
