#include<stdio.h>
int fun(int n)
{
	int count=0,even=0,odd=0,d;
	while(n)
	{
		d=n%10;
		n/=10;
		if(d%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		count++;
	}
	if(count==even)
	{
		printf("Even");
	}
	else if(count==odd)
	{
		printf("Odd");
	}
	else
	{
		printf("Mixed");
	}
}
main()
{
	int n;
	scanf("%d",&n);
	fun(n);
}
