// Using for loop printing 'n' Numbers in upto 1.
#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter n value.\n");
	scanf("%d",&n);
	for(i=1;n>=i;n--)
	{
		printf("%d ",n);
	}
}
