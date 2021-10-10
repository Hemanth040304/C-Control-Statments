//C Program to find sum of 'n' natural numbers using 'for' loop. 
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("Enter n value.\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum of %d natural numbers is %d . ",n,sum);
}
