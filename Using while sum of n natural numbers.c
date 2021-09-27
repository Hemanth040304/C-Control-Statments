#include<stdio.h>
void main()
{
	int sum=0,n;
	printf("Enter a number.\n");
	scanf("%d",&n);
	while(n>=1)
	{
		sum += n;
		n--;
	}
	printf("%d",sum);
}
