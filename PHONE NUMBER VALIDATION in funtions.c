#include<stdio.h>
int number(long long n)
{
	int count=0;
	while(n)
	{
		count++;
		n/=10;
	}
	if(count==10)
	printf("valid");
	else
	printf("Invalid");
}
int main()
{
	long long n;
	scanf("%lld",&n);
	number(n);
}
