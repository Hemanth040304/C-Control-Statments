#include<stdio.h>
void main()
{
	int sum,n;
	printf("Enter a number.\n");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	while(n>0)
	{
		printf("%d",sum);
		break;
	}
}
